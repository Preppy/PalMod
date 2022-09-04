#pragma once

// 
//I've included the collections under the palettes of the respective character for organization sake 
// 

const std::vector<uint16_t> BLEACH_DS_IMGIDS_USED =
{
    indexBleachDSSprites_Bonnie,            // 0x00
    indexBleachDSSprites_ByakuyaKuchiki,    // 0x01
    indexBleachDSSprites_DonKanonji,        // 0x02
    indexBleachDSSprites_GanjuShiba,        // 0x03
    indexBleachDSSprites_GenryusaiYamamoto, // 0x04
    indexBleachDSSprites_GinIchimaru,       // 0x05
    indexBleachDSSprites_Goteitaishi,       // 0x06
    indexBleachDSSprites_GrandFisher,       // 0x07
    indexBleachDSSprites_HanataroYamada,    // 0x08
    indexBleachDSSprites_IchigoKurosaki,    // 0x09
    indexBleachDSSprites_IkkakuMadarame,    // 0x0A
    indexBleachDSSprites_IzuruKira,         // 0x0B
    indexBleachDSSprites_JushiroUkitake,    // 0x0C
    indexBleachDSSprites_Kai,               // 0x0D
    indexBleachDSSprites_KanameTosen,       // 0x0E
    indexBleachDSSprites_KenpachiZaraki,    // 0x0F
    indexBleachDSSprites_KisukeUrahara,     // 0x10
    indexBleachDSSprites_Kon,               // 0x11
    indexBleachDSSprites_Kyugohanin,        // 0x12
    indexBleachDSSprites_KukakuShiba,       // 0x13
    indexBleachDSSprites_MayuriKurotsuchi,  // 0x14
    indexBleachDSSprites_MenosGrande,       // 0x15
    indexBleachDSSprites_MomoHinamori,      // 0x16
    indexBleachDSSprites_NemuKurotsuchi,    // 0x17
    indexBleachDSSprites_OrihimeInoue,      // 0x18
    indexBleachDSSprites_RangikuMatsumoto,  // 0x19
    indexBleachDSSprites_RenjiAbarai,       // 0x1A
    indexBleachDSSprites_Ririn,             // 0x1B
    indexBleachDSSprites_RukiaKuchiki,      // 0x1C
    indexBleachDSSprites_SajinKomamura,     // 0x1D
    indexBleachDSSprites_Shrieker,          // 0x1E
    indexBleachDSSprites_ShunsuiKyoraku,    // 0x1F
    indexBleachDSSprites_ShuheiHisagi,      // 0x20
    indexBleachDSSprites_SuiFeng,           // 0x21
    indexBleachDSSprites_SosukeAizen,       // 0x22
    indexBleachDSSprites_TatsukiArisawa,    // 0x23
    indexBleachDSSprites_Tsukaima,          // 0x24
    indexBleachDSSprites_ToshirOHitsugaya,  // 0x25
    indexBleachDSSprites_UruruTsumugiya,    // 0x26
    indexBleachDSSprites_UryuIshida,        // 0x27
    indexBleachDSSprites_YachiruKusajishi,  // 0x28
    indexBleachDSSprites_YasutoraSado,      // 0x29
    indexBleachDSSprites_YoruichiShihoin,   // 0x2A
    indexBleachDSSprites_YuichiShibata,     // 0x2B
    indexBleachDSSprites_Bonus,             // 0x2C
    indexBleachDSSprites_Familiar,          // 0x64
    indexBleachDSSprites_Familiar,          // 0x64
    indexBleachDSSprites_HollowIchigo,      // 0x65
    indexBleachDSSprites_Nurse,             // 0x66
    indexBleachDSSprites_SoulReaper,        // 0x67
};

//Yuichi Shibata Palettes
const sGame_PaletteDataset BLEACH_DS_YUICHI_PALETTES_P1[] =
{
    { L"Yuichi P1", 0x272f034, 0x272f054, indexBleachDSSprites_YuichiShibata },
};

const sGame_PaletteDataset BLEACH_DS_YUICHI_PALETTES_P2[] =
{
    { L"Yuichi P2", 0x272f054, 0x272f074, indexBleachDSSprites_YuichiShibata },
};

const sGame_PaletteDataset BLEACH_DS_YUICHI_PALETTES_P3[] =
{
    { L"Yuichi P3", 0x272f074, 0x272f094, indexBleachDSSprites_YuichiShibata },
};

const sGame_PaletteDataset BLEACH_DS_YUICHI_PALETTES_P4[] =
{
    { L"Yuichi P4", 0x272f094, 0x272f0b4, indexBleachDSSprites_YuichiShibata },
};

const sGame_PaletteDataset BLEACH_DS_YUICHI_PALETTES_P5[] =
{
    { L"Yuichi P5", 0x272f0b4, 0x272f0d4, indexBleachDSSprites_YuichiShibata },
};

const sGame_PaletteDataset BLEACH_DS_YUICHI_PALETTES_P6[] =
{
    { L"Yuichi P6", 0x272f0d4, 0x272f0f4, indexBleachDSSprites_YuichiShibata },
};

const sGame_PaletteDataset BLEACH_DS_YUICHI_PALETTES_P7[] =
{
    { L"Yuichi P7", 0x272f0f4, 0x272f114, indexBleachDSSprites_YuichiShibata },
};

const sGame_PaletteDataset BLEACH_DS_YUICHI_PALETTES_P8[] =
{
    { L"Yuichi P8", 0x272f114, 0x272f134, indexBleachDSSprites_YuichiShibata },
};

const sDescTreeNode BLEACH_DS_YUICHI_COLLECTION[] =
{
    { L"Palette 1", DESC_NODETYPE_TREE, (void*)BLEACH_DS_YUICHI_PALETTES_P1, ARRAYSIZE(BLEACH_DS_YUICHI_PALETTES_P1) },
    { L"Palette 2", DESC_NODETYPE_TREE, (void*)BLEACH_DS_YUICHI_PALETTES_P2, ARRAYSIZE(BLEACH_DS_YUICHI_PALETTES_P2) },
    { L"Palette 3", DESC_NODETYPE_TREE, (void*)BLEACH_DS_YUICHI_PALETTES_P3, ARRAYSIZE(BLEACH_DS_YUICHI_PALETTES_P3) },
    { L"Palette 4", DESC_NODETYPE_TREE, (void*)BLEACH_DS_YUICHI_PALETTES_P4, ARRAYSIZE(BLEACH_DS_YUICHI_PALETTES_P4) },
    { L"Palette 5", DESC_NODETYPE_TREE, (void*)BLEACH_DS_YUICHI_PALETTES_P5, ARRAYSIZE(BLEACH_DS_YUICHI_PALETTES_P5) },
    { L"Palette 6", DESC_NODETYPE_TREE, (void*)BLEACH_DS_YUICHI_PALETTES_P6, ARRAYSIZE(BLEACH_DS_YUICHI_PALETTES_P6) },
    { L"Palette 7", DESC_NODETYPE_TREE, (void*)BLEACH_DS_YUICHI_PALETTES_P7, ARRAYSIZE(BLEACH_DS_YUICHI_PALETTES_P7) },
    { L"Palette 8", DESC_NODETYPE_TREE, (void*)BLEACH_DS_YUICHI_PALETTES_P8, ARRAYSIZE(BLEACH_DS_YUICHI_PALETTES_P8) },
};

//Soul Reaper Palettes
const sGame_PaletteDataset BLEACH_DS_REAPER_PALETTES_P1[] =
{
    { L"Soul Reaper P1", 0x276c674, 0x276c694, indexBleachDSSprites_SoulReaper, 0x00 },
    { L"Soul Reaper P1 - Slash Effects", 0x276c694, 0x276c6b4 },
};

const sGame_PaletteDataset BLEACH_DS_REAPER_PALETTES_P2[] =
{
    { L"Soul Reaper P2", 0x276c6b4, 0x276c6d4, indexBleachDSSprites_SoulReaper, 0x00 },
    { L"Soul Reaper P2 - Slash Effects", 0x276c6d4, 0x276c6f4 },
};

const sGame_PaletteDataset BLEACH_DS_REAPER_PALETTES_P3[] =
{
    { L"Soul Reaper P3", 0x276c6f4, 0x276c714, indexBleachDSSprites_SoulReaper, 0x00 },
    { L"Soul Reaper P3 - Slash Effects", 0x276c714, 0x276c734 },
};

const sGame_PaletteDataset BLEACH_DS_REAPER_PALETTES_P4[] =
{
    { L"Soul Reaper P4", 0x276c734, 0x276c754, indexBleachDSSprites_SoulReaper, 0x00 },
    { L"Soul Reaper P4 - Slash Effects", 0x276c754, 0x276c774 },
};

const sGame_PaletteDataset BLEACH_DS_REAPER_PALETTES_P5[] =
{
    { L"Soul Reaper P5", 0x276c774, 0x276c794, indexBleachDSSprites_SoulReaper, 0x00 },
    { L"Soul Reaper P5 - Slash Effects", 0x276c794, 0x276c7b4 },
};

const sGame_PaletteDataset BLEACH_DS_REAPER_PALETTES_P6[] =
{
    { L"Soul Reaper P6", 0x276c7b4, 0x276c7d4, indexBleachDSSprites_SoulReaper, 0x00 },
    { L"Soul Reaper P6 - Slash Effects", 0x276c7d4, 0x276c7f4 },
};

const sGame_PaletteDataset BLEACH_DS_REAPER_PALETTES_P7[] =
{
    { L"Soul Reaper P7", 0x276c7f4, 0x276c814, indexBleachDSSprites_SoulReaper, 0x00 },
    { L"Soul Reaper P7 - Slash Effects", 0x276c814, 0x276c834 },
};

const sGame_PaletteDataset BLEACH_DS_REAPER_PALETTES_P8[] =
{
    { L"Soul Reaper P8", 0x276c834, 0x276c854, indexBleachDSSprites_SoulReaper, 0x00 },
    { L"Soul Reaper P8 - Slash Effects", 0x276c854, 0x276c874 },
};

const sDescTreeNode BLEACH_DS_REAPER_COLLECTION[] =
{
   { L"Palette 1", DESC_NODETYPE_TREE, (void*)BLEACH_DS_REAPER_PALETTES_P1, ARRAYSIZE(BLEACH_DS_REAPER_PALETTES_P1) },
   { L"Palette 2", DESC_NODETYPE_TREE, (void*)BLEACH_DS_REAPER_PALETTES_P2, ARRAYSIZE(BLEACH_DS_REAPER_PALETTES_P2) },
   { L"Palette 3", DESC_NODETYPE_TREE, (void*)BLEACH_DS_REAPER_PALETTES_P3, ARRAYSIZE(BLEACH_DS_REAPER_PALETTES_P3) },
   { L"Palette 4", DESC_NODETYPE_TREE, (void*)BLEACH_DS_REAPER_PALETTES_P4, ARRAYSIZE(BLEACH_DS_REAPER_PALETTES_P4) },
   { L"Palette 5", DESC_NODETYPE_TREE, (void*)BLEACH_DS_REAPER_PALETTES_P5, ARRAYSIZE(BLEACH_DS_REAPER_PALETTES_P5) },
   { L"Palette 6", DESC_NODETYPE_TREE, (void*)BLEACH_DS_REAPER_PALETTES_P6, ARRAYSIZE(BLEACH_DS_REAPER_PALETTES_P6) },
   { L"Palette 7", DESC_NODETYPE_TREE, (void*)BLEACH_DS_REAPER_PALETTES_P7, ARRAYSIZE(BLEACH_DS_REAPER_PALETTES_P7) },
   { L"Palette 8", DESC_NODETYPE_TREE, (void*)BLEACH_DS_REAPER_PALETTES_P8, ARRAYSIZE(BLEACH_DS_REAPER_PALETTES_P8) },
};

//Shrieker Palettes
const sGame_PaletteDataset BLEACH_DS_SHRIEKER_PALETTES_P1[] =
{
    { L"Shrieker P1", 0x2745a84, 0x2745aa4, indexBleachDSSprites_Shrieker },
};

const sGame_PaletteDataset BLEACH_DS_SHRIEKER_PALETTES_P2[] =
{
    { L"Shrieker P2", 0x2745aa4, 0x2745ac4, indexBleachDSSprites_Shrieker },
};

const sGame_PaletteDataset BLEACH_DS_SHRIEKER_PALETTES_P3[] =
{
    { L"Shrieker P3", 0x2745ac4, 0x2745ae4, indexBleachDSSprites_Shrieker },
};

const sGame_PaletteDataset BLEACH_DS_SHRIEKER_PALETTES_P4[] =
{
    { L"Shrieker P4", 0x2745ae4, 0x2745b04, indexBleachDSSprites_Shrieker },
};

const sGame_PaletteDataset BLEACH_DS_SHRIEKER_PALETTES_P5[] =
{
    { L"Shrieker P5", 0x2745b04, 0x2745b24, indexBleachDSSprites_Shrieker },
};

const sGame_PaletteDataset BLEACH_DS_SHRIEKER_PALETTES_P6[] =
{
    { L"Shrieker P6", 0x2745b24, 0x2745b44, indexBleachDSSprites_Shrieker },
};

const sGame_PaletteDataset BLEACH_DS_SHRIEKER_PALETTES_P7[] =
{
    { L"Shrieker P7", 0x2745b44, 0x2745b64, indexBleachDSSprites_Shrieker },
};

const sGame_PaletteDataset BLEACH_DS_SHRIEKER_PALETTES_P8[] =
{
    { L"Shrieker P8", 0x2745b64, 0x2745b84, indexBleachDSSprites_Shrieker },
};

const sDescTreeNode BLEACH_DS_SHRIEKER_COLLECTION[] =
{
   { L"Palette 1", DESC_NODETYPE_TREE, (void*)BLEACH_DS_SHRIEKER_PALETTES_P1, ARRAYSIZE(BLEACH_DS_SHRIEKER_PALETTES_P1) },
   { L"Palette 2", DESC_NODETYPE_TREE, (void*)BLEACH_DS_SHRIEKER_PALETTES_P2, ARRAYSIZE(BLEACH_DS_SHRIEKER_PALETTES_P2) },
   { L"Palette 3", DESC_NODETYPE_TREE, (void*)BLEACH_DS_SHRIEKER_PALETTES_P3, ARRAYSIZE(BLEACH_DS_SHRIEKER_PALETTES_P3) },
   { L"Palette 4", DESC_NODETYPE_TREE, (void*)BLEACH_DS_SHRIEKER_PALETTES_P4, ARRAYSIZE(BLEACH_DS_SHRIEKER_PALETTES_P4) },
   { L"Palette 5", DESC_NODETYPE_TREE, (void*)BLEACH_DS_SHRIEKER_PALETTES_P5, ARRAYSIZE(BLEACH_DS_SHRIEKER_PALETTES_P5) },
   { L"Palette 6", DESC_NODETYPE_TREE, (void*)BLEACH_DS_SHRIEKER_PALETTES_P6, ARRAYSIZE(BLEACH_DS_SHRIEKER_PALETTES_P6) },
   { L"Palette 7", DESC_NODETYPE_TREE, (void*)BLEACH_DS_SHRIEKER_PALETTES_P7, ARRAYSIZE(BLEACH_DS_SHRIEKER_PALETTES_P7) },
   { L"Palette 8", DESC_NODETYPE_TREE, (void*)BLEACH_DS_SHRIEKER_PALETTES_P8, ARRAYSIZE(BLEACH_DS_SHRIEKER_PALETTES_P8) },
};

//Menos Grande palettes
const sGame_PaletteDataset BLEACH_DS_MENOS_PALETTES_P1[] =
{
    { L"Menos Grande P1", 0x271907C, 0x271909C, indexBleachDSSprites_MenosGrande },
};

const sGame_PaletteDataset BLEACH_DS_MENOS_PALETTES_P2[] =
{
    { L"Menos Grande P2", 0x271909C, 0x27190bC, indexBleachDSSprites_MenosGrande },
};

const sGame_PaletteDataset BLEACH_DS_MENOS_PALETTES_P3[] =
{
    { L"Menos Grande P3", 0x27190bC, 0x27190dC, indexBleachDSSprites_MenosGrande },
};

const sGame_PaletteDataset BLEACH_DS_MENOS_PALETTES_P4[] =
{
    { L"Menos Grande P4", 0x27190dC, 0x27190fC, indexBleachDSSprites_MenosGrande },
};

const sGame_PaletteDataset BLEACH_DS_MENOS_PALETTES_P5[] =
{
    { L"Menos Grande P5", 0x27190fC, 0x271911C, indexBleachDSSprites_MenosGrande },
};

const sGame_PaletteDataset BLEACH_DS_MENOS_PALETTES_P6[] =
{
    { L"Menos Grande P6", 0x271911C, 0x271913C, indexBleachDSSprites_MenosGrande },
};

const sGame_PaletteDataset BLEACH_DS_MENOS_PALETTES_P7[] =
{
    { L"Menos Grande P7", 0x271913C, 0x271915C, indexBleachDSSprites_MenosGrande },
};

const sGame_PaletteDataset BLEACH_DS_MENOS_PALETTES_P8[] =
{
    { L"Menos Grande P8", 0x271915C, 0x271917C, indexBleachDSSprites_MenosGrande },
};

const sGame_PaletteDataset BLEACH_DS_MENOS_PALETTES_EXTRAS[] =
{
    { L"Menos Grande - Cero Dust", 0x271a5a8, 0x271a5c8 },
    { L"Menos Grande - Cero Laser", 0x271a5c8, 0x271a5e8 },
};

const sDescTreeNode BLEACH_DS_MENOS_COLLECTION[] =
{
   { L"Palette 1", DESC_NODETYPE_TREE, (void*)BLEACH_DS_MENOS_PALETTES_P1, ARRAYSIZE(BLEACH_DS_MENOS_PALETTES_P1) },
   { L"Palette 2", DESC_NODETYPE_TREE, (void*)BLEACH_DS_MENOS_PALETTES_P2, ARRAYSIZE(BLEACH_DS_MENOS_PALETTES_P2) },
   { L"Palette 3", DESC_NODETYPE_TREE, (void*)BLEACH_DS_MENOS_PALETTES_P3, ARRAYSIZE(BLEACH_DS_MENOS_PALETTES_P3) },
   { L"Palette 4", DESC_NODETYPE_TREE, (void*)BLEACH_DS_MENOS_PALETTES_P4, ARRAYSIZE(BLEACH_DS_MENOS_PALETTES_P4) },
   { L"Palette 5", DESC_NODETYPE_TREE, (void*)BLEACH_DS_MENOS_PALETTES_P5, ARRAYSIZE(BLEACH_DS_MENOS_PALETTES_P5) },
   { L"Palette 6", DESC_NODETYPE_TREE, (void*)BLEACH_DS_MENOS_PALETTES_P6, ARRAYSIZE(BLEACH_DS_MENOS_PALETTES_P6) },
   { L"Palette 7", DESC_NODETYPE_TREE, (void*)BLEACH_DS_MENOS_PALETTES_P7, ARRAYSIZE(BLEACH_DS_MENOS_PALETTES_P7) },
   { L"Palette 8", DESC_NODETYPE_TREE, (void*)BLEACH_DS_MENOS_PALETTES_P8, ARRAYSIZE(BLEACH_DS_MENOS_PALETTES_P8) },
   { L"Extras", DESC_NODETYPE_TREE, (void*)BLEACH_DS_MENOS_PALETTES_EXTRAS, ARRAYSIZE(BLEACH_DS_MENOS_PALETTES_EXTRAS) },
};

//Grand Fisher Palettes
const sGame_PaletteDataset BLEACH_DS_GRAND_PALETTES_P1[] =
{
    { L"Grand Fisher P1", 0x26ddf18, 0x26ddf38, indexBleachDSSprites_GrandFisher },
};

const sGame_PaletteDataset BLEACH_DS_GRAND_PALETTES_P2[] =
{
    { L"Grand Fisher P2", 0x26ddf38, 0x26ddf58, indexBleachDSSprites_GrandFisher },
};

const sGame_PaletteDataset BLEACH_DS_GRAND_PALETTES_P3[] =
{
    { L"Grand Fisher P3", 0x26ddf58, 0x26ddf78, indexBleachDSSprites_GrandFisher },
};

const sGame_PaletteDataset BLEACH_DS_GRAND_PALETTES_P4[] =
{
    { L"Grand Fisher P4", 0x26ddf78, 0x26ddf98, indexBleachDSSprites_GrandFisher },
};

const sGame_PaletteDataset BLEACH_DS_GRAND_PALETTES_P5[] =
{
    { L"Grand Fisher P5", 0x26ddf98, 0x26ddfb8, indexBleachDSSprites_GrandFisher },
};

const sGame_PaletteDataset BLEACH_DS_GRAND_PALETTES_P6[] =
{
    { L"Grand Fisher P6", 0x26ddfb8, 0x26ddfd8, indexBleachDSSprites_GrandFisher },
};

const sGame_PaletteDataset BLEACH_DS_GRAND_PALETTES_P7[] =
{
    { L"Grand Fisher P7", 0x26ddfd8, 0x26ddff8, indexBleachDSSprites_GrandFisher },
};

const sGame_PaletteDataset BLEACH_DS_GRAND_PALETTES_P8[] =
{
    { L"Grand Fisher P8", 0x26ddff8, 0x26de018, indexBleachDSSprites_GrandFisher },
};

const sGame_PaletteDataset BLEACH_DS_GRAND_PALETTES_EXTRAS[] =
{
    { L"Grand Fisher - Cry/Spit Effects", 0x26debd4, 0x26debf4 },
};

const sDescTreeNode BLEACH_DS_GRAND_COLLECTION[] =
{
   { L"Palette 1", DESC_NODETYPE_TREE, (void*)BLEACH_DS_GRAND_PALETTES_P1, ARRAYSIZE(BLEACH_DS_GRAND_PALETTES_P1) },
   { L"Palette 2", DESC_NODETYPE_TREE, (void*)BLEACH_DS_GRAND_PALETTES_P2, ARRAYSIZE(BLEACH_DS_GRAND_PALETTES_P2) },
   { L"Palette 3", DESC_NODETYPE_TREE, (void*)BLEACH_DS_GRAND_PALETTES_P3, ARRAYSIZE(BLEACH_DS_GRAND_PALETTES_P3) },
   { L"Palette 4", DESC_NODETYPE_TREE, (void*)BLEACH_DS_GRAND_PALETTES_P4, ARRAYSIZE(BLEACH_DS_GRAND_PALETTES_P4) },
   { L"Palette 5", DESC_NODETYPE_TREE, (void*)BLEACH_DS_GRAND_PALETTES_P5, ARRAYSIZE(BLEACH_DS_GRAND_PALETTES_P5) },
   { L"Palette 6", DESC_NODETYPE_TREE, (void*)BLEACH_DS_GRAND_PALETTES_P6, ARRAYSIZE(BLEACH_DS_GRAND_PALETTES_P6) },
   { L"Palette 7", DESC_NODETYPE_TREE, (void*)BLEACH_DS_GRAND_PALETTES_P7, ARRAYSIZE(BLEACH_DS_GRAND_PALETTES_P7) },
   { L"Palette 8", DESC_NODETYPE_TREE, (void*)BLEACH_DS_GRAND_PALETTES_P8, ARRAYSIZE(BLEACH_DS_GRAND_PALETTES_P8) },
   { L"Extras", DESC_NODETYPE_TREE, (void*)BLEACH_DS_GRAND_PALETTES_EXTRAS, ARRAYSIZE(BLEACH_DS_GRAND_PALETTES_EXTRAS) },
};

//Familiar Palettes
const sGame_PaletteDataset BLEACH_DS_FAMILIAR_PALETTES_P1[] =
{
    { L"Familiar P1", 0x26a8c10, 0x26a8c30, indexBleachDSSprites_Familiar },
};

const sGame_PaletteDataset BLEACH_DS_FAMILIAR_PALETTES_P2[] =
{
    { L"Familiar P2", 0x26a8c30, 0x26a8c50, indexBleachDSSprites_Familiar },
};

const sGame_PaletteDataset BLEACH_DS_FAMILIAR_PALETTES_P3[] =
{
    { L"Familiar P3", 0x26a8c50, 0x26a8c70, indexBleachDSSprites_Familiar },
};

const sGame_PaletteDataset BLEACH_DS_FAMILIAR_PALETTES_P4[] =
{
    { L"Familiar P4", 0x26a8c70, 0x26a8c90, indexBleachDSSprites_Familiar },
};

const sGame_PaletteDataset BLEACH_DS_FAMILIAR_PALETTES_P5[] =
{
    { L"Familiar P5", 0x26a8c90, 0x26a8cb0, indexBleachDSSprites_Familiar },
};

const sGame_PaletteDataset BLEACH_DS_FAMILIAR_PALETTES_P6[] =
{
    { L"Familiar P6", 0x26a8cb0, 0x26a8cd0, indexBleachDSSprites_Familiar },
};

const sGame_PaletteDataset BLEACH_DS_FAMILIAR_PALETTES_P7[] =
{
    { L"Familiar P7", 0x26a8cd0, 0x26a8cf0, indexBleachDSSprites_Familiar },
};

const sGame_PaletteDataset BLEACH_DS_FAMILIAR_PALETTES_P8[] =
{
    { L"Familiar P8", 0x26a8cf0, 0x26a8d10, indexBleachDSSprites_Familiar },
};

const sGame_PaletteDataset BLEACH_DS_FAMILIAR_PALETTES_EXTRAS[] =
{
    { L"Familiar - Leech Bomb", 0x26a97b8, 0x26a97d8, indexBleachDSSprites_Familiar, 0x01 },
};

const sDescTreeNode BLEACH_DS_FAMILIAR_COLLECTION[] =
{
   { L"Palette 1", DESC_NODETYPE_TREE, (void*)BLEACH_DS_FAMILIAR_PALETTES_P1, ARRAYSIZE(BLEACH_DS_FAMILIAR_PALETTES_P1) },
   { L"Palette 2", DESC_NODETYPE_TREE, (void*)BLEACH_DS_FAMILIAR_PALETTES_P2, ARRAYSIZE(BLEACH_DS_FAMILIAR_PALETTES_P2) },
   { L"Palette 3", DESC_NODETYPE_TREE, (void*)BLEACH_DS_FAMILIAR_PALETTES_P3, ARRAYSIZE(BLEACH_DS_FAMILIAR_PALETTES_P3) },
   { L"Palette 4", DESC_NODETYPE_TREE, (void*)BLEACH_DS_FAMILIAR_PALETTES_P4, ARRAYSIZE(BLEACH_DS_FAMILIAR_PALETTES_P4) },
   { L"Palette 5", DESC_NODETYPE_TREE, (void*)BLEACH_DS_FAMILIAR_PALETTES_P5, ARRAYSIZE(BLEACH_DS_FAMILIAR_PALETTES_P5) },
   { L"Palette 6", DESC_NODETYPE_TREE, (void*)BLEACH_DS_FAMILIAR_PALETTES_P6, ARRAYSIZE(BLEACH_DS_FAMILIAR_PALETTES_P6) },
   { L"Palette 7", DESC_NODETYPE_TREE, (void*)BLEACH_DS_FAMILIAR_PALETTES_P7, ARRAYSIZE(BLEACH_DS_FAMILIAR_PALETTES_P7) },
   { L"Palette 8", DESC_NODETYPE_TREE, (void*)BLEACH_DS_FAMILIAR_PALETTES_P8, ARRAYSIZE(BLEACH_DS_FAMILIAR_PALETTES_P8) },
   { L"Extras", DESC_NODETYPE_TREE, (void*)BLEACH_DS_FAMILIAR_PALETTES_EXTRAS, ARRAYSIZE(BLEACH_DS_FAMILIAR_PALETTES_EXTRAS) },
};

//Nurse / Kyugohanin Palettes
const sGame_PaletteDataset BLEACH_DS_NURSE_PALETTES_P1[] =
{
    { L"Nurse P1", 0x2729510, 0x2729530, indexBleachDSSprites_Nurse },
};

const sGame_PaletteDataset BLEACH_DS_NURSE_PALETTES_P2[] =
{
    { L"Nurse P2", 0x2729530, 0x2729550, indexBleachDSSprites_Nurse },
};

const sGame_PaletteDataset BLEACH_DS_NURSE_PALETTES_P3[] =
{
    { L"Nurse P3", 0x2729550, 0x2729570, indexBleachDSSprites_Nurse },
};

const sGame_PaletteDataset BLEACH_DS_NURSE_PALETTES_P4[] =
{
    { L"Nurse P4", 0x2729570, 0x2729590, indexBleachDSSprites_Nurse },
};

const sGame_PaletteDataset BLEACH_DS_NURSE_PALETTES_P5[] =
{
    { L"Nurse P5", 0x2729590, 0x27295b0, indexBleachDSSprites_Nurse },
};

const sGame_PaletteDataset BLEACH_DS_NURSE_PALETTES_P6[] =
{
    { L"Nurse P6", 0x27295b0, 0x27295d0, indexBleachDSSprites_Nurse },
};

const sGame_PaletteDataset BLEACH_DS_NURSE_PALETTES_P7[] =
{
    { L"Nurse P7", 0x27295d0, 0x27295f0, indexBleachDSSprites_Nurse },
};

const sGame_PaletteDataset BLEACH_DS_NURSE_PALETTES_P8[] =
{
    { L"Nurse P8", 0x27295f0, 0x2729610, indexBleachDSSprites_Nurse },
};

const sGame_PaletteDataset BLEACH_DS_NURSE_PALETTES_EXTRAS[] =
{
    { L"Nurse - Knifes", 0x2729e6c, 0x2729e8c },
};

const sDescTreeNode BLEACH_DS_NURSE_COLLECTION[] =
{
   { L"Palette 1", DESC_NODETYPE_TREE, (void*)BLEACH_DS_NURSE_PALETTES_P1, ARRAYSIZE(BLEACH_DS_NURSE_PALETTES_P1) },
   { L"Palette 2", DESC_NODETYPE_TREE, (void*)BLEACH_DS_NURSE_PALETTES_P2, ARRAYSIZE(BLEACH_DS_NURSE_PALETTES_P2) },
   { L"Palette 3", DESC_NODETYPE_TREE, (void*)BLEACH_DS_NURSE_PALETTES_P3, ARRAYSIZE(BLEACH_DS_NURSE_PALETTES_P3) },
   { L"Palette 4", DESC_NODETYPE_TREE, (void*)BLEACH_DS_NURSE_PALETTES_P4, ARRAYSIZE(BLEACH_DS_NURSE_PALETTES_P4) },
   { L"Palette 5", DESC_NODETYPE_TREE, (void*)BLEACH_DS_NURSE_PALETTES_P5, ARRAYSIZE(BLEACH_DS_NURSE_PALETTES_P5) },
   { L"Palette 6", DESC_NODETYPE_TREE, (void*)BLEACH_DS_NURSE_PALETTES_P6, ARRAYSIZE(BLEACH_DS_NURSE_PALETTES_P6) },
   { L"Palette 7", DESC_NODETYPE_TREE, (void*)BLEACH_DS_NURSE_PALETTES_P7, ARRAYSIZE(BLEACH_DS_NURSE_PALETTES_P7) },
   { L"Palette 8", DESC_NODETYPE_TREE, (void*)BLEACH_DS_NURSE_PALETTES_P8, ARRAYSIZE(BLEACH_DS_NURSE_PALETTES_P8) },
   { L"Extras", DESC_NODETYPE_TREE, (void*)BLEACH_DS_NURSE_PALETTES_EXTRAS, ARRAYSIZE(BLEACH_DS_NURSE_PALETTES_EXTRAS) },
};

//Byakuya Palettes
const sGame_PaletteDataset BLEACH_DS_BYAKUYA_PALETTES_P1[] =
{
    { L"Byakuya P1", 0x201a440, 0x201a460, indexBleachDSSprites_ByakuyaKuchiki },
    { L"Byakuya P1 - Slash Effects", 0x201a460, 0x201a480, indexBleachDSSprites_ByakuyaKuchiki, 0x05 },
    { L"Byakuya P1 - Shukei Hakuteiken", 0x201a480, 0x201a4a0, indexBleachDSSprites_ByakuyaKuchiki, 0x03 },
};

const sGame_PaletteDataset BLEACH_DS_BYAKUYA_PALETTES_P2[] =
{
    { L"Byakuya P2", 0x201a4a0, 0x201a4c0, indexBleachDSSprites_ByakuyaKuchiki },
    { L"Byakuya P2 - Slash Effects", 0x201a4c0, 0x201a4e0, indexBleachDSSprites_ByakuyaKuchiki, 0x05 },
    { L"Byakuya P2 - Shukei Hakuteiken", 0x201a4e0, 0x201a500, indexBleachDSSprites_ByakuyaKuchiki, 0x03 },
};

const sGame_PaletteDataset BLEACH_DS_BYAKUYA_PALETTES_P3[] =
{
    { L"Byakuya P3", 0x201a500, 0x201a520, indexBleachDSSprites_ByakuyaKuchiki },
    { L"Byakuya P3 - Slash Effects", 0x201a520, 0x201a540, indexBleachDSSprites_ByakuyaKuchiki, 0x05 },
    { L"Byakuya P3 - Shukei Hakuteiken", 0x201a540, 0x201a560, indexBleachDSSprites_ByakuyaKuchiki, 0x03 },
};

const sGame_PaletteDataset BLEACH_DS_BYAKUYA_PALETTES_P4[] =
{
    { L"Byakuya P4", 0x201a560, 0x201a580, indexBleachDSSprites_ByakuyaKuchiki },
    { L"Byakuya P4 - Slash Effects", 0x201a580, 0x201a5a0, indexBleachDSSprites_ByakuyaKuchiki, 0x05 },
    { L"Byakuya P4 - Shukei Hakuteiken", 0x201a5a0, 0x201a5c0, indexBleachDSSprites_ByakuyaKuchiki, 0x03 },
};

const sGame_PaletteDataset BLEACH_DS_BYAKUYA_PALETTES_P5[] =
{
    { L"Byakuya P5", 0x201a5c0, 0x201a5e0, indexBleachDSSprites_ByakuyaKuchiki },
    { L"Byakuya P5 - Slash Effects", 0x201a5e0, 0x201a600, indexBleachDSSprites_ByakuyaKuchiki, 0x05 },
    { L"Byakuya P5 - Shukei Hakuteiken", 0x201a600, 0x201a620, indexBleachDSSprites_ByakuyaKuchiki, 0x03 },
};

const sGame_PaletteDataset BLEACH_DS_BYAKUYA_PALETTES_P6[] =
{
    { L"Byakuya P6", 0x201a620, 0x201a640, indexBleachDSSprites_ByakuyaKuchiki },
    { L"Byakuya P6 - Slash Effects", 0x201a640, 0x201a660, indexBleachDSSprites_ByakuyaKuchiki, 0x05 },
    { L"Byakuya P6 - Shukei Hakuteiken", 0x201a660, 0x201a680, indexBleachDSSprites_ByakuyaKuchiki, 0x03 },
};

const sGame_PaletteDataset BLEACH_DS_BYAKUYA_PALETTES_P7[] =
{
    { L"Byakuya P7", 0x201a680, 0x201a6a0, indexBleachDSSprites_ByakuyaKuchiki },
    { L"Byakuya P7 - Slash Effects", 0x201a6a0, 0x201a6c0, indexBleachDSSprites_ByakuyaKuchiki, 0x05 },
    { L"Byakuya P7 - Shukei Hakuteiken", 0x201a6c0, 0x201a6e0, indexBleachDSSprites_ByakuyaKuchiki, 0x03 },
};

const sGame_PaletteDataset BLEACH_DS_BYAKUYA_PALETTES_P8[] =
{
    { L"Byakuya P8", 0x201a6e0, 0x201a700, indexBleachDSSprites_ByakuyaKuchiki },
    { L"Byakuya P8 - Slash Effects", 0x201a700, 0x201a720, indexBleachDSSprites_ByakuyaKuchiki, 0x05 },
    { L"Byakuya P8 - Shukei Hakuteiken", 0x201a720, 0x201a740, indexBleachDSSprites_ByakuyaKuchiki, 0x03 },
};

const sGame_PaletteDataset BLEACH_DS_BYAKUYA_PALETTES_EXTRAS[] =
{
    { L"Byakuya - Senkei Senbonzakura Kageyoshi", 0x201c768, 0x201c788, indexBleachDSSprites_ByakuyaKuchiki, 0x02 },
    { L"Byakuya - Senbonzakura", 0x201c788, 0x201c7a8, indexBleachDSSprites_ByakuyaKuchiki, 0x01 },
    { L"Byakuya - Six Bars of Light", 0x201c7a8, 0x201c7c8, indexBleachDSSprites_ByakuyaKuchiki, 0x04 },
    { L"Byakuya - Shukei Hakuteiken 2", 0x201c7c8, 0x201c7e8, indexBleachDSSprites_ByakuyaKuchiki, 0x03 },
};

const sDescTreeNode BLEACH_DS_BYAKUYA_COLLECTION[] =
{
   { L"Palette 1", DESC_NODETYPE_TREE, (void*)BLEACH_DS_BYAKUYA_PALETTES_P1, ARRAYSIZE(BLEACH_DS_BYAKUYA_PALETTES_P1) },
   { L"Palette 2", DESC_NODETYPE_TREE, (void*)BLEACH_DS_BYAKUYA_PALETTES_P2, ARRAYSIZE(BLEACH_DS_BYAKUYA_PALETTES_P2) },
   { L"Palette 3", DESC_NODETYPE_TREE, (void*)BLEACH_DS_BYAKUYA_PALETTES_P3, ARRAYSIZE(BLEACH_DS_BYAKUYA_PALETTES_P3) },
   { L"Palette 4", DESC_NODETYPE_TREE, (void*)BLEACH_DS_BYAKUYA_PALETTES_P4, ARRAYSIZE(BLEACH_DS_BYAKUYA_PALETTES_P4) },
   { L"Palette 5", DESC_NODETYPE_TREE, (void*)BLEACH_DS_BYAKUYA_PALETTES_P5, ARRAYSIZE(BLEACH_DS_BYAKUYA_PALETTES_P5) },
   { L"Palette 6", DESC_NODETYPE_TREE, (void*)BLEACH_DS_BYAKUYA_PALETTES_P6, ARRAYSIZE(BLEACH_DS_BYAKUYA_PALETTES_P6) },
   { L"Palette 7", DESC_NODETYPE_TREE, (void*)BLEACH_DS_BYAKUYA_PALETTES_P7, ARRAYSIZE(BLEACH_DS_BYAKUYA_PALETTES_P7) },
   { L"Palette 8", DESC_NODETYPE_TREE, (void*)BLEACH_DS_BYAKUYA_PALETTES_P8, ARRAYSIZE(BLEACH_DS_BYAKUYA_PALETTES_P8) },
   { L"Extras", DESC_NODETYPE_TREE, (void*)BLEACH_DS_BYAKUYA_PALETTES_EXTRAS, ARRAYSIZE(BLEACH_DS_BYAKUYA_PALETTES_EXTRAS) },
};

//Yamamoto Palettes
const sGame_PaletteDataset BLEACH_DS_YAMAMOTO_PALETTES_P1[] =
{
    { L"Yamamoto P1", 0x2091720, 0x2091740, indexBleachDSSprites_GenryusaiYamamoto },
    { L"Yamamoto P1 - Flame Sword 1", 0x2091740, 0x2091760 },
    { L"Yamamoto P1 - Flame Sword 2", 0x2091760, 0x2091780 },
    { L"Yamamoto P1 - Flame Sword 3", 0x2091780, 0x20917a0 },
    { L"Yamamoto P1 - Flame Sword 4", 0x20917a0, 0x20917c0 },
    { L"Yamamoto P1 - Flame Sword 5", 0x20917c0, 0x20917e0 },
    { L"Yamamoto P1 - Flame Sword 6", 0x20917e0, 0x2091800 },
    { L"Yamamoto P1 - Slash Effects", 0x2091800, 0x2091820 },
};

const sGame_PaletteDataset BLEACH_DS_YAMAMOTO_PALETTES_P2[] =
{
    { L"Yamamoto P2", 0x2091820, 0x2091840, indexBleachDSSprites_GenryusaiYamamoto },
    { L"Yamamoto P2 - Flame Sword 1", 0x2091840, 0x2091860 },
    { L"Yamamoto P2 - Flame Sword 2", 0x2091860, 0x2091880 },
    { L"Yamamoto P2 - Flame Sword 3", 0x2091880, 0x20918a0 },
    { L"Yamamoto P2 - Flame Sword 4", 0x20918a0, 0x20918c0 },
    { L"Yamamoto P2 - Flame Sword 5", 0x20918c0, 0x20918e0 },
    { L"Yamamoto P2 - Flame Sword 6", 0x20918e0, 0x2091900 },
    { L"Yamamoto P2 - Slash Effects", 0x2091900, 0x2091920 },
};

const sGame_PaletteDataset BLEACH_DS_YAMAMOTO_PALETTES_P3[] =
{
    { L"Yamamoto P3", 0x2091920, 0x2091940, indexBleachDSSprites_GenryusaiYamamoto },
    { L"Yamamoto P3 - Flame Sword 1", 0x2091940, 0x2091960 },
    { L"Yamamoto P3 - Flame Sword 2", 0x2091960, 0x2091980 },
    { L"Yamamoto P3 - Flame Sword 3", 0x2091980, 0x20919a0 },
    { L"Yamamoto P3 - Flame Sword 4", 0x20919a0, 0x20919c0 },
    { L"Yamamoto P3 - Flame Sword 5", 0x20919c0, 0x20919e0 },
    { L"Yamamoto P3 - Flame Sword 6", 0x20919e0, 0x2091a00 },
    { L"Yamamoto P3 - Slash Effects", 0x2091a00, 0x2091a20 },
};

const sGame_PaletteDataset BLEACH_DS_YAMAMOTO_PALETTES_P4[] =
{
    { L"Yamamoto P4", 0x2091a20, 0x2091a40, indexBleachDSSprites_GenryusaiYamamoto },
    { L"Yamamoto P4 - Flame Sword 1", 0x2091a40, 0x2091a60 },
    { L"Yamamoto P4 - Flame Sword 2", 0x2091a60, 0x2091a80 },
    { L"Yamamoto P4 - Flame Sword 3", 0x2091a80, 0x2091aa0 },
    { L"Yamamoto P4 - Flame Sword 4", 0x2091aa0, 0x2091ac0 },
    { L"Yamamoto P4 - Flame Sword 5", 0x2091ac0, 0x2091ae0 },
    { L"Yamamoto P4 - Flame Sword 6", 0x2091ae0, 0x2091b00 },
    { L"Yamamoto P4 - Slash Effects", 0x2091b00, 0x2091b20 },
};

const sGame_PaletteDataset BLEACH_DS_YAMAMOTO_PALETTES_P5[] =
{
    { L"Yamamoto P5", 0x2091b20, 0x2091b40, indexBleachDSSprites_GenryusaiYamamoto },
    { L"Yamamoto P5 - Flame Sword 1", 0x2091b40, 0x2091b60 },
    { L"Yamamoto P5 - Flame Sword 2", 0x2091b60, 0x2091b80 },
    { L"Yamamoto P5 - Flame Sword 3", 0x2091b80, 0x2091ba0 },
    { L"Yamamoto P5 - Flame Sword 4", 0x2091ba0, 0x2091bc0 },
    { L"Yamamoto P5 - Flame Sword 5", 0x2091bc0, 0x2091be0 },
    { L"Yamamoto P5 - Flame Sword 6", 0x2091be0, 0x2091c00 },
    { L"Yamamoto P5 - Slash Effects", 0x2091c00, 0x2091c20 },
};

const sGame_PaletteDataset BLEACH_DS_YAMAMOTO_PALETTES_P6[] =
{
    { L"Yamamoto P6", 0x2091c20, 0x2091c40, indexBleachDSSprites_GenryusaiYamamoto },
    { L"Yamamoto P6 - Flame Sword 1", 0x2091c40, 0x2091c60 },
    { L"Yamamoto P6 - Flame Sword 2", 0x2091c60, 0x2091c80 },
    { L"Yamamoto P6 - Flame Sword 3", 0x2091c80, 0x2091ca0 },
    { L"Yamamoto P6 - Flame Sword 4", 0x2091ca0, 0x2091cc0 },
    { L"Yamamoto P6 - Flame Sword 5", 0x2091cc0, 0x2091ce0 },
    { L"Yamamoto P6 - Flame Sword 6", 0x2091ce0, 0x2091d00 },
    { L"Yamamoto P6 - Slash Effects", 0x2091d00, 0x2091d20 },
};

const sGame_PaletteDataset BLEACH_DS_YAMAMOTO_PALETTES_P7[] =
{
    { L"Yamamoto P7", 0x2091d20, 0x2091d40, indexBleachDSSprites_GenryusaiYamamoto },
    { L"Yamamoto P7 - Flame Sword 1", 0x2091d40, 0x2091d60 },
    { L"Yamamoto P7 - Flame Sword 2", 0x2091d60, 0x2091d80 },
    { L"Yamamoto P7 - Flame Sword 3", 0x2091d80, 0x2091da0 },
    { L"Yamamoto P7 - Flame Sword 4", 0x2091da0, 0x2091dc0 },
    { L"Yamamoto P7 - Flame Sword 5", 0x2091dc0, 0x2091de0 },
    { L"Yamamoto P7 - Flame Sword 6", 0x2091de0, 0x2091e00 },
    { L"Yamamoto P7 - Slash Effects", 0x2091e00, 0x2091e20 },
};

const sGame_PaletteDataset BLEACH_DS_YAMAMOTO_PALETTES_P8[] =
{
    { L"Yamamoto P8", 0x2091e20, 0x2091e40, indexBleachDSSprites_GenryusaiYamamoto },
    { L"Yamamoto P8 - Flame Sword 1", 0x2091e40, 0x2091e60 },
    { L"Yamamoto P8 - Flame Sword 2", 0x2091e60, 0x2091e80 },
    { L"Yamamoto P8 - Flame Sword 3", 0x2091e80, 0x2091ea0 },
    { L"Yamamoto P8 - Flame Sword 4", 0x2091ea0, 0x2091ec0 },
    { L"Yamamoto P8 - Flame Sword 5", 0x2091ec0, 0x2091ee0 },
    { L"Yamamoto P8 - Flame Sword 6", 0x2091ee0, 0x2091f00 },
    { L"Yamamoto P8 - Slash Effects", 0x2091f00, 0x2091f20 },
};

const sDescTreeNode BLEACH_DS_YAMAMOTO_COLLECTION[] =
{
   { L"Palette 1", DESC_NODETYPE_TREE, (void*)BLEACH_DS_YAMAMOTO_PALETTES_P1, ARRAYSIZE(BLEACH_DS_YAMAMOTO_PALETTES_P1) },
   { L"Palette 2", DESC_NODETYPE_TREE, (void*)BLEACH_DS_YAMAMOTO_PALETTES_P2, ARRAYSIZE(BLEACH_DS_YAMAMOTO_PALETTES_P2) },
   { L"Palette 3", DESC_NODETYPE_TREE, (void*)BLEACH_DS_YAMAMOTO_PALETTES_P3, ARRAYSIZE(BLEACH_DS_YAMAMOTO_PALETTES_P3) },
   { L"Palette 4", DESC_NODETYPE_TREE, (void*)BLEACH_DS_YAMAMOTO_PALETTES_P4, ARRAYSIZE(BLEACH_DS_YAMAMOTO_PALETTES_P4) },
   { L"Palette 5", DESC_NODETYPE_TREE, (void*)BLEACH_DS_YAMAMOTO_PALETTES_P5, ARRAYSIZE(BLEACH_DS_YAMAMOTO_PALETTES_P5) },
   { L"Palette 6", DESC_NODETYPE_TREE, (void*)BLEACH_DS_YAMAMOTO_PALETTES_P6, ARRAYSIZE(BLEACH_DS_YAMAMOTO_PALETTES_P6) },
   { L"Palette 7", DESC_NODETYPE_TREE, (void*)BLEACH_DS_YAMAMOTO_PALETTES_P7, ARRAYSIZE(BLEACH_DS_YAMAMOTO_PALETTES_P7) },
   { L"Palette 8", DESC_NODETYPE_TREE, (void*)BLEACH_DS_YAMAMOTO_PALETTES_P8, ARRAYSIZE(BLEACH_DS_YAMAMOTO_PALETTES_P8) },
};

//Komamura Palettes
const sGame_PaletteDataset BLEACH_DS_KOMAMURA_PALETTES_P1[] =
{
    { L"Komamura P1", 0x236783C, 0x236787C, indexBleachDSSprites_SajinKomamura },
    { L"Komamura P1 - Slash Effects", 0x236787C, 0x236789C, indexBleachDSSprites_SajinKomamura, 0x02 },
};

const sGame_PaletteDataset BLEACH_DS_KOMAMURA_PALETTES_P2[] =
{
    { L"Komamura P2", 0x236789C, 0x23678dC, indexBleachDSSprites_SajinKomamura },
    { L"Komamura P2 - Slash Effects", 0x23678dC, 0x23678fC, indexBleachDSSprites_SajinKomamura, 0x02 },
};

const sGame_PaletteDataset BLEACH_DS_KOMAMURA_PALETTES_P3[] =
{
    { L"Komamura P3", 0x23678fC, 0x236793C, indexBleachDSSprites_SajinKomamura },
    { L"Komamura P3 - Slash Effects", 0x236793C, 0x236795C, indexBleachDSSprites_SajinKomamura, 0x02 },
};

const sGame_PaletteDataset BLEACH_DS_KOMAMURA_PALETTES_P4[] =
{
    { L"Komamura P4", 0x236795C, 0x236799C, indexBleachDSSprites_SajinKomamura },
    { L"Komamura P4 - Slash Effects", 0x236799C, 0x23679bC, indexBleachDSSprites_SajinKomamura, 0x02 },
};

const sGame_PaletteDataset BLEACH_DS_KOMAMURA_PALETTES_P5[] =
{
    { L"Komamura P5", 0x23679bC, 0x23679fC, indexBleachDSSprites_SajinKomamura },
    { L"Komamura P5 - Slash Effects", 0x23679fC, 0x2367a1C, indexBleachDSSprites_SajinKomamura, 0x02 },
};

const sGame_PaletteDataset BLEACH_DS_KOMAMURA_PALETTES_P6[] =
{
    { L"Komamura P6", 0x2367a1C, 0x2367a5C, indexBleachDSSprites_SajinKomamura },
    { L"Komamura P6 - Slash Effects", 0x2367a5C, 0x2367a7C, indexBleachDSSprites_SajinKomamura, 0x02 },
};

const sGame_PaletteDataset BLEACH_DS_KOMAMURA_PALETTES_P7[] =
{
    { L"Komamura P7", 0x2367a7C, 0x2367abC, indexBleachDSSprites_SajinKomamura },
    { L"Komamura P7 - Slash Effects", 0x2367abC, 0x2367adC, indexBleachDSSprites_SajinKomamura, 0x02 },
};

const sGame_PaletteDataset BLEACH_DS_KOMAMURA_PALETTES_P8[] =
{
    { L"Komamura P8", 0x2367adC, 0x2367b1C, indexBleachDSSprites_SajinKomamura },
    { L"Komamura P8 - Slash Effects", 0x2367b1C, 0x2367b3C, indexBleachDSSprites_SajinKomamura, 0x02 },
};

const sGame_PaletteDataset BLEACH_DS_KOMAMURA_PALETTES_EXTRAS[] =
{
    { L"Komamura - Rocks", 0x2368f68, 0x2368f88, indexBleachDSSprites_IchigoKurosaki, 0x01 },
    { L"Komamura - Tenken", 0x2368f88, 0x2368fa8, indexBleachDSSprites_SajinKomamura, 0x03 },
    { L"Komamura - Kokujo Tengen Myo-oh", 0x236a058, 0x236a078, indexBleachDSSprites_SajinKomamura, 0x01 },
};

const sDescTreeNode BLEACH_DS_KOMAMURA_COLLECTION[] =
{
   { L"Palette 1", DESC_NODETYPE_TREE, (void*)BLEACH_DS_KOMAMURA_PALETTES_P1, ARRAYSIZE(BLEACH_DS_KOMAMURA_PALETTES_P1) },
   { L"Palette 2", DESC_NODETYPE_TREE, (void*)BLEACH_DS_KOMAMURA_PALETTES_P2, ARRAYSIZE(BLEACH_DS_KOMAMURA_PALETTES_P2) },
   { L"Palette 3", DESC_NODETYPE_TREE, (void*)BLEACH_DS_KOMAMURA_PALETTES_P3, ARRAYSIZE(BLEACH_DS_KOMAMURA_PALETTES_P3) },
   { L"Palette 4", DESC_NODETYPE_TREE, (void*)BLEACH_DS_KOMAMURA_PALETTES_P4, ARRAYSIZE(BLEACH_DS_KOMAMURA_PALETTES_P4) },
   { L"Palette 5", DESC_NODETYPE_TREE, (void*)BLEACH_DS_KOMAMURA_PALETTES_P5, ARRAYSIZE(BLEACH_DS_KOMAMURA_PALETTES_P5) },
   { L"Palette 6", DESC_NODETYPE_TREE, (void*)BLEACH_DS_KOMAMURA_PALETTES_P6, ARRAYSIZE(BLEACH_DS_KOMAMURA_PALETTES_P6) },
   { L"Palette 7", DESC_NODETYPE_TREE, (void*)BLEACH_DS_KOMAMURA_PALETTES_P7, ARRAYSIZE(BLEACH_DS_KOMAMURA_PALETTES_P7) },
   { L"Palette 8", DESC_NODETYPE_TREE, (void*)BLEACH_DS_KOMAMURA_PALETTES_P8, ARRAYSIZE(BLEACH_DS_KOMAMURA_PALETTES_P8) },
   { L"Extras", DESC_NODETYPE_TREE, (void*)BLEACH_DS_KOMAMURA_PALETTES_EXTRAS, ARRAYSIZE(BLEACH_DS_KOMAMURA_PALETTES_EXTRAS) },
};

//Yoruichi Palettes
const sGame_PaletteDataset BLEACH_DS_YORUICHI_PALETTES_P1[] =
{
    { L"Yoruichi P1", 0x265c8b8, 0x265c8d8, indexBleachDSSprites_YoruichiShihoin },
    { L"Yoruichi P1 - Attack Effects", 0x265c8d8, 0x265c8f8 },
};

const sGame_PaletteDataset BLEACH_DS_YORUICHI_PALETTES_P2[] =
{
    { L"Yoruichi P2", 0x265c8f8, 0x265c918, indexBleachDSSprites_YoruichiShihoin },
    { L"Yoruichi P2 - Attack Effects", 0x265c918, 0x265c938 },
};

const sGame_PaletteDataset BLEACH_DS_YORUICHI_PALETTES_P3[] =
{
    { L"Yoruichi P3", 0x265c938, 0x265c958, indexBleachDSSprites_YoruichiShihoin },
    { L"Yoruichi P3 - Attack Effects", 0x265c958, 0x265c978 },
};

const sGame_PaletteDataset BLEACH_DS_YORUICHI_PALETTES_P4[] =
{
    { L"Yoruichi P4", 0x265c978, 0x265c998, indexBleachDSSprites_YoruichiShihoin },
    { L"Yoruichi P4 - Attack Effects", 0x265c998, 0x265c9b8 },
};

const sGame_PaletteDataset BLEACH_DS_YORUICHI_PALETTES_P5[] =
{
    { L"Yoruichi P5", 0x265c9b8, 0x265c9d8, indexBleachDSSprites_YoruichiShihoin },
    { L"Yoruichi P5 - Attack Effects", 0x265c9d8, 0x265c9f8 },
};

const sGame_PaletteDataset BLEACH_DS_YORUICHI_PALETTES_P6[] =
{
    { L"Yoruichi P6", 0x265c9f8, 0x265ca18, indexBleachDSSprites_YoruichiShihoin },
    { L"Yoruichi P6 - Attack Effects", 0x265ca18, 0x265ca38 },
};

const sGame_PaletteDataset BLEACH_DS_YORUICHI_PALETTES_P7[] =
{
    { L"Yoruichi P7", 0x265ca38, 0x265ca58, indexBleachDSSprites_YoruichiShihoin },
    { L"Yoruichi P7 - Attack Effects", 0x265ca58, 0x265ca78 },
};

const sGame_PaletteDataset BLEACH_DS_YORUICHI_PALETTES_P8[] =
{
    { L"Yoruichi P8", 0x265ca78, 0x265ca98, indexBleachDSSprites_YoruichiShihoin },
    { L"Yoruichi P8 - Attack Effects", 0x265ca98, 0x265cab8 },
};

const sGame_PaletteDataset BLEACH_DS_YORUICHI_PALETTES_EXTRAS[] =
{
    { L"Yoruichi - Anken", 0x265db74, 0x265db94 },
    { L"Yoruichi - Anken Trail", 0x265db94, 0x265dbb4 },
    { L"Yoruichi - Shunko", 0x265dbb4, 0x265dbd4 },
};

const sDescTreeNode BLEACH_DS_YORUICHI_COLLECTION[] =
{
   { L"Palette 1", DESC_NODETYPE_TREE, (void*)BLEACH_DS_YORUICHI_PALETTES_P1, ARRAYSIZE(BLEACH_DS_YORUICHI_PALETTES_P1) },
   { L"Palette 2", DESC_NODETYPE_TREE, (void*)BLEACH_DS_YORUICHI_PALETTES_P2, ARRAYSIZE(BLEACH_DS_YORUICHI_PALETTES_P2) },
   { L"Palette 3", DESC_NODETYPE_TREE, (void*)BLEACH_DS_YORUICHI_PALETTES_P3, ARRAYSIZE(BLEACH_DS_YORUICHI_PALETTES_P3) },
   { L"Palette 4", DESC_NODETYPE_TREE, (void*)BLEACH_DS_YORUICHI_PALETTES_P4, ARRAYSIZE(BLEACH_DS_YORUICHI_PALETTES_P4) },
   { L"Palette 5", DESC_NODETYPE_TREE, (void*)BLEACH_DS_YORUICHI_PALETTES_P5, ARRAYSIZE(BLEACH_DS_YORUICHI_PALETTES_P5) },
   { L"Palette 6", DESC_NODETYPE_TREE, (void*)BLEACH_DS_YORUICHI_PALETTES_P6, ARRAYSIZE(BLEACH_DS_YORUICHI_PALETTES_P6) },
   { L"Palette 7", DESC_NODETYPE_TREE, (void*)BLEACH_DS_YORUICHI_PALETTES_P7, ARRAYSIZE(BLEACH_DS_YORUICHI_PALETTES_P7) },
   { L"Palette 8", DESC_NODETYPE_TREE, (void*)BLEACH_DS_YORUICHI_PALETTES_P8, ARRAYSIZE(BLEACH_DS_YORUICHI_PALETTES_P8) },
   { L"Extras", DESC_NODETYPE_TREE, (void*)BLEACH_DS_YORUICHI_PALETTES_EXTRAS, ARRAYSIZE(BLEACH_DS_YORUICHI_PALETTES_EXTRAS) },
};

//Ganju Palettes
const sGame_PaletteDataset BLEACH_DS_GANJU_PALETTES_P1[] =
{
    { L"Ganju P1", 0x205c164, 0x205c184, indexBleachDSSprites_GanjuShiba },
    { L"Ganju P1 - Senpen Banka 1", 0x205c184, 0x205c1a4 },
    { L"Ganju P1 - Extra-Large First Star", 0x205c1a4, 0x205c1c4 },
    { L"Ganju P1 - Slash Effects", 0x205c1e4, 0x205c204 },
    { L"Ganju P1 - Bonnie", 0x205c204, 0x205c224, indexBleachDSSprites_Bonnie, 0x00 },
};

const sGame_PaletteDataset BLEACH_DS_GANJU_PALETTES_P2[] =
{
    { L"Ganju P2", 0x205c224, 0x205c244, indexBleachDSSprites_GanjuShiba },
    { L"Ganju P2 - Senpen Banka 1", 0x205c244, 0x205c264 },
    { L"Ganju P2 - Extra-Large First Star", 0x205c264, 0x205c284 },
    { L"Ganju P2 - Slash Effects", 0x205c2a4, 0x205c2c4 },
    { L"Ganju P2 - Bonnie", 0x205c2c4, 0x205c2e4, indexBleachDSSprites_Bonnie, 0x00 },
};

const sGame_PaletteDataset BLEACH_DS_GANJU_PALETTES_P3[] =
{
    { L"Ganju P3", 0x205c2e4, 0x205c304, indexBleachDSSprites_GanjuShiba },
    { L"Ganju P3 - Senpen Banka 1", 0x205c304, 0x205c324 },
    { L"Ganju P3 - Extra-Large First Star", 0x205c324, 0x205c344 },
    { L"Ganju P3 - Slash Effects", 0x205c364, 0x205c384 },
    { L"Ganju P3 - Bonnie", 0x205c384, 0x205c3a4, indexBleachDSSprites_Bonnie, 0x00 },
};

const sGame_PaletteDataset BLEACH_DS_GANJU_PALETTES_P4[] =
{
    { L"Ganju P4", 0x205c3a4, 0x205c3c4, indexBleachDSSprites_GanjuShiba },
    { L"Ganju P4 - Senpen Banka 1", 0x205c3c4, 0x205c3e4 },
    { L"Ganju P4 - Extra-Large First Star", 0x205c3e4, 0x205c404 },
    { L"Ganju P4 - Slash Effects", 0x205c424, 0x205c444 },
    { L"Ganju P4 - Bonnie", 0x205c444, 0x205c464, indexBleachDSSprites_Bonnie, 0x00 },
};

const sGame_PaletteDataset BLEACH_DS_GANJU_PALETTES_P5[] =
{
    { L"Ganju P5", 0x205c464, 0x205c484, indexBleachDSSprites_GanjuShiba },
    { L"Ganju P5 - Senpen Banka 1", 0x205c484, 0x205c4a4 },
    { L"Ganju P5 - Extra-Large First Star", 0x205c4a4, 0x205c4c4 },
    { L"Ganju P5 - Slash Effects", 0x205c4e4, 0x205c504 },
    { L"Ganju P5 - Bonnie", 0x205c504, 0x205c524, indexBleachDSSprites_Bonnie, 0x00 },
};

const sGame_PaletteDataset BLEACH_DS_GANJU_PALETTES_P6[] =
{
    { L"Ganju P6", 0x205c524, 0x205c544, indexBleachDSSprites_GanjuShiba },
    { L"Ganju P6 - Senpen Banka 1", 0x205c544, 0x205c564 },
    { L"Ganju P6 - Extra-Large First Star", 0x205c564, 0x205c584 },
    { L"Ganju P6 - Slash Effects", 0x205c5a4, 0x205c5c4 },
    { L"Ganju P6 - Bonnie", 0x205c5c4, 0x205c5e4, indexBleachDSSprites_Bonnie, 0x00 },
};

const sGame_PaletteDataset BLEACH_DS_GANJU_PALETTES_P7[] =
{
    { L"Ganju P7", 0x205c5e4, 0x205c604, indexBleachDSSprites_GanjuShiba },
    { L"Ganju P7 - Senpen Banka 1", 0x205c604, 0x205c624 },
    { L"Ganju P7 - Extra-Large First Star", 0x205c624, 0x205c644 },
    { L"Ganju P7 - Slash Effects", 0x205c664, 0x205c684 },
    { L"Ganju P7 - Bonnie", 0x205c684, 0x205c6a4, indexBleachDSSprites_Bonnie, 0x00 },
};

const sGame_PaletteDataset BLEACH_DS_GANJU_PALETTES_P8[] =
{
    { L"Ganju P8", 0x205c6a4, 0x205c6c4, indexBleachDSSprites_GanjuShiba },
    { L"Ganju P8 - Senpen Banka 1", 0x205c6c4, 0x205c6e4 },
    { L"Ganju P8 - Extra-Large First Star", 0x205c6e4, 0x205c704 },
    { L"Ganju P8 - Slash Effects", 0x205c724, 0x205c744 },
    { L"Ganju P8 - Bonnie", 0x205c744, 0x205c764, indexBleachDSSprites_Bonnie, 0x00 },
};

const sGame_PaletteDataset BLEACH_DS_GANJU_PALETTES_EXTRAS[] =
{
    { L"Ganju - Firecracker", 0x205d69c, 0x205d6bc },
    { L"Ganju - Senpen Banka 2", 0x205d6bc, 0x205d6dc },
    { L"Ganju - Seppa 2", 0x205d6dc, 0x205d6fc },
    { L"Ganju - Seppa 1", 0x205d6fc, 0x205d71c },
};

const sDescTreeNode BLEACH_DS_GANJU_COLLECTION[] =
{
   { L"Palette 1", DESC_NODETYPE_TREE, (void*)BLEACH_DS_GANJU_PALETTES_P1, ARRAYSIZE(BLEACH_DS_GANJU_PALETTES_P1) },
   { L"Palette 2", DESC_NODETYPE_TREE, (void*)BLEACH_DS_GANJU_PALETTES_P2, ARRAYSIZE(BLEACH_DS_GANJU_PALETTES_P2) },
   { L"Palette 3", DESC_NODETYPE_TREE, (void*)BLEACH_DS_GANJU_PALETTES_P3, ARRAYSIZE(BLEACH_DS_GANJU_PALETTES_P3) },
   { L"Palette 4", DESC_NODETYPE_TREE, (void*)BLEACH_DS_GANJU_PALETTES_P4, ARRAYSIZE(BLEACH_DS_GANJU_PALETTES_P4) },
   { L"Palette 5", DESC_NODETYPE_TREE, (void*)BLEACH_DS_GANJU_PALETTES_P5, ARRAYSIZE(BLEACH_DS_GANJU_PALETTES_P5) },
   { L"Palette 6", DESC_NODETYPE_TREE, (void*)BLEACH_DS_GANJU_PALETTES_P6, ARRAYSIZE(BLEACH_DS_GANJU_PALETTES_P6) },
   { L"Palette 7", DESC_NODETYPE_TREE, (void*)BLEACH_DS_GANJU_PALETTES_P7, ARRAYSIZE(BLEACH_DS_GANJU_PALETTES_P7) },
   { L"Palette 8", DESC_NODETYPE_TREE, (void*)BLEACH_DS_GANJU_PALETTES_P8, ARRAYSIZE(BLEACH_DS_GANJU_PALETTES_P8) },
   { L"Extras", DESC_NODETYPE_TREE, (void*)BLEACH_DS_GANJU_PALETTES_EXTRAS, ARRAYSIZE(BLEACH_DS_GANJU_PALETTES_EXTRAS) },
};

//Mayuri Palettes
//Nemu shows up in Mayuris moveset and as her own character 
const sGame_PaletteDataset BLEACH_DS_MAYURI_PALETTES_P1[] =
{
    { L"Mayuri P1", 0x2427440, 0x2427460, indexBleachDSSprites_MayuriKurotsuchi },
    { L"Mayuri P1 - Slash Effects", 0x2427460, 0x2427480 },
    { L"Mayuri P1 - Nemu", 0x2431ca0, 0x2431cc0, indexBleachDSSprites_NemuKurotsuchi },
};

const sGame_PaletteDataset BLEACH_DS_MAYURI_PALETTES_P2[] =
{
    { L"Mayuri P2", 0x24274a0, 0x24274c0, indexBleachDSSprites_MayuriKurotsuchi },
    { L"Mayuri P2 - Slash Effects", 0x24274c0, 0x24274e0 },
    { L"Mayuri P2 - Nemu", 0x2431cc0, 0x2431ce0, indexBleachDSSprites_NemuKurotsuchi },
};

const sGame_PaletteDataset BLEACH_DS_MAYURI_PALETTES_P3[] =
{
    { L"Mayuri P3", 0x2427500, 0x2427520, indexBleachDSSprites_MayuriKurotsuchi },
    { L"Mayuri P3 - Slash Effects", 0x2427520, 0x2427540 },
    { L"Mayuri P3 - Nemu", 0x2431ce0, 0x2431d00, indexBleachDSSprites_NemuKurotsuchi },
};

const sGame_PaletteDataset BLEACH_DS_MAYURI_PALETTES_P4[] =
{
    { L"Mayuri P4", 0x2427560, 0x2427580, indexBleachDSSprites_MayuriKurotsuchi },
    { L"Mayuri P4 - Slash Effects", 0x2427580, 0x24275a0 },
    { L"Mayuri P4 - Nemu", 0x2431d00, 0x2431d20, indexBleachDSSprites_NemuKurotsuchi },
};

const sGame_PaletteDataset BLEACH_DS_MAYURI_PALETTES_P5[] =
{
    { L"Mayuri P5", 0x24275c0, 0x24275e0, indexBleachDSSprites_MayuriKurotsuchi },
    { L"Mayuri P5 - Slash Effects", 0x24275e0, 0x2427600 },
    { L"Mayuri P5 - Nemu", 0x2431d20, 0x2431d40, indexBleachDSSprites_NemuKurotsuchi },
};

const sGame_PaletteDataset BLEACH_DS_MAYURI_PALETTES_P6[] =
{
    { L"Mayuri P6", 0x2427620, 0x2427640, indexBleachDSSprites_MayuriKurotsuchi },
    { L"Mayuri P6 - Slash Effects", 0x2427640, 0x2427660 },
    { L"Mayuri P6 - Nemu", 0x2431d40, 0x2431d60, indexBleachDSSprites_NemuKurotsuchi },
};

const sGame_PaletteDataset BLEACH_DS_MAYURI_PALETTES_P7[] =
{
    { L"Mayuri P7", 0x2427680, 0x24276a0, indexBleachDSSprites_MayuriKurotsuchi },
    { L"Mayuri P7 - Slash Effects", 0x24276a0, 0x24276c0 },
    { L"Mayuri P7 - Nemu", 0x2431d60, 0x2431d80, indexBleachDSSprites_NemuKurotsuchi },
};

const sGame_PaletteDataset BLEACH_DS_MAYURI_PALETTES_P8[] =
{
    { L"Mayuri P8", 0x24276e0, 0x2427700, indexBleachDSSprites_MayuriKurotsuchi },
    { L"Mayuri P8 - Slash Effects", 0x2427700, 0x2427720 },
    { L"Mayuri P8 - Nemu", 0x2431d80, 0x2431da0, indexBleachDSSprites_NemuKurotsuchi },
};

const sGame_PaletteDataset BLEACH_DS_MAYURI_PALETTES_EXTRAS[] =
{
    { L"Mayuri - Long Arm", 0x2428148, 0x2428168 },
    { L"Mayuri - Konjiki Ashisogijizo", 0x242a658, 0x242a678 },
};

const sDescTreeNode BLEACH_DS_MAYURI_COLLECTION[] =
{
   { L"Palette 1", DESC_NODETYPE_TREE, (void*)BLEACH_DS_MAYURI_PALETTES_P1, ARRAYSIZE(BLEACH_DS_MAYURI_PALETTES_P1) },
   { L"Palette 2", DESC_NODETYPE_TREE, (void*)BLEACH_DS_MAYURI_PALETTES_P2, ARRAYSIZE(BLEACH_DS_MAYURI_PALETTES_P2) },
   { L"Palette 3", DESC_NODETYPE_TREE, (void*)BLEACH_DS_MAYURI_PALETTES_P3, ARRAYSIZE(BLEACH_DS_MAYURI_PALETTES_P3) },
   { L"Palette 4", DESC_NODETYPE_TREE, (void*)BLEACH_DS_MAYURI_PALETTES_P4, ARRAYSIZE(BLEACH_DS_MAYURI_PALETTES_P4) },
   { L"Palette 5", DESC_NODETYPE_TREE, (void*)BLEACH_DS_MAYURI_PALETTES_P5, ARRAYSIZE(BLEACH_DS_MAYURI_PALETTES_P5) },
   { L"Palette 6", DESC_NODETYPE_TREE, (void*)BLEACH_DS_MAYURI_PALETTES_P6, ARRAYSIZE(BLEACH_DS_MAYURI_PALETTES_P6) },
   { L"Palette 7", DESC_NODETYPE_TREE, (void*)BLEACH_DS_MAYURI_PALETTES_P7, ARRAYSIZE(BLEACH_DS_MAYURI_PALETTES_P7) },
   { L"Palette 8", DESC_NODETYPE_TREE, (void*)BLEACH_DS_MAYURI_PALETTES_P8, ARRAYSIZE(BLEACH_DS_MAYURI_PALETTES_P8) },
   { L"Extras", DESC_NODETYPE_TREE, (void*)BLEACH_DS_MAYURI_PALETTES_EXTRAS, ARRAYSIZE(BLEACH_DS_MAYURI_PALETTES_EXTRAS) },
};

//Nemu palettes 
//Nemu shows up in Mayuris moveset and as her own character 
const sGame_PaletteDataset BLEACH_DS_NEMU_PALETTES_P1[] =
{
    { L"Nemu P1", 0x24487b8, 0x24487d8, indexBleachDSSprites_NemuKurotsuchi },
    { L"Nemu P1 - Mayuri", 0x245a3a8, 0x245a3c8, indexBleachDSSprites_MayuriKurotsuchi },
    { L"Nemu P1 - Slash Effects", 0x245a3c8, 0x245a3e8 },
};

const sGame_PaletteDataset BLEACH_DS_NEMU_PALETTES_P2[] =
{
    { L"Nemu P2", 0x24487d8, 0x24487f8, indexBleachDSSprites_NemuKurotsuchi },
    { L"Nemu P2 - Mayuri", 0x245a408, 0x245a428, indexBleachDSSprites_MayuriKurotsuchi },
    { L"Nemu P2 - Slash Effects", 0x245a428, 0x245a448 },
};

const sGame_PaletteDataset BLEACH_DS_NEMU_PALETTES_P3[] =
{
    { L"Nemu P3", 0x24487f8, 0x2448818, indexBleachDSSprites_NemuKurotsuchi },
    { L"Nemu P3 - Mayuri", 0x245a468, 0x245a488, indexBleachDSSprites_MayuriKurotsuchi },
    { L"Nemu P3 - Slash Effects", 0x245a488, 0x245a4a8 },
};

const sGame_PaletteDataset BLEACH_DS_NEMU_PALETTES_P4[] =
{
    { L"Nemu P4", 0x2448818, 0x2448838, indexBleachDSSprites_NemuKurotsuchi },
    { L"Nemu P4 - Mayuri", 0x245a4c8, 0x245a4e8, indexBleachDSSprites_MayuriKurotsuchi },
    { L"Nemu P4 - Slash Effects", 0x245a4e8, 0x245a508 },
};

const sGame_PaletteDataset BLEACH_DS_NEMU_PALETTES_P5[] =
{
    { L"Nemu P5", 0x2448838, 0x2448858, indexBleachDSSprites_NemuKurotsuchi },
    { L"Nemu P5 - Mayuri", 0x245a528, 0x245a548, indexBleachDSSprites_MayuriKurotsuchi },
    { L"Nemu P5 - Slash Effects", 0x245a548, 0x245a568 },
};

const sGame_PaletteDataset BLEACH_DS_NEMU_PALETTES_P6[] =
{
    { L"Nemu P6", 0x2448858, 0x2448878, indexBleachDSSprites_NemuKurotsuchi },
    { L"Nemu P6 - Mayuri", 0x245a588, 0x245a5a8, indexBleachDSSprites_MayuriKurotsuchi },
    { L"Nemu P6 - Slash Effects", 0x245a5a8, 0x245a5c8 },
};

const sGame_PaletteDataset BLEACH_DS_NEMU_PALETTES_P7[] =
{
    { L"Nemu P7", 0x2448878, 0x2448898, indexBleachDSSprites_NemuKurotsuchi },
    { L"Nemu P7 - Mayuri", 0x245a5e8, 0x245a608, indexBleachDSSprites_MayuriKurotsuchi },
    { L"Nemu P7 - Slash Effects", 0x245a608, 0x245a628 },
};

const sGame_PaletteDataset BLEACH_DS_NEMU_PALETTES_P8[] =
{
    { L"Nemu P8", 0x2448898, 0x24488b8, indexBleachDSSprites_NemuKurotsuchi },
    { L"Nemu P8 - Mayuri", 0x245a648, 0x245a668, indexBleachDSSprites_MayuriKurotsuchi },
    { L"Nemu P8 - Slash Effects", 0x245a668, 0x245a688 },
};

const sDescTreeNode BLEACH_DS_NEMU_COLLECTION[] =
{
   { L"Palette 1", DESC_NODETYPE_TREE, (void*)BLEACH_DS_NEMU_PALETTES_P1, ARRAYSIZE(BLEACH_DS_NEMU_PALETTES_P1) },
   { L"Palette 2", DESC_NODETYPE_TREE, (void*)BLEACH_DS_NEMU_PALETTES_P2, ARRAYSIZE(BLEACH_DS_NEMU_PALETTES_P2) },
   { L"Palette 3", DESC_NODETYPE_TREE, (void*)BLEACH_DS_NEMU_PALETTES_P3, ARRAYSIZE(BLEACH_DS_NEMU_PALETTES_P3) },
   { L"Palette 4", DESC_NODETYPE_TREE, (void*)BLEACH_DS_NEMU_PALETTES_P4, ARRAYSIZE(BLEACH_DS_NEMU_PALETTES_P4) },
   { L"Palette 5", DESC_NODETYPE_TREE, (void*)BLEACH_DS_NEMU_PALETTES_P5, ARRAYSIZE(BLEACH_DS_NEMU_PALETTES_P5) },
   { L"Palette 6", DESC_NODETYPE_TREE, (void*)BLEACH_DS_NEMU_PALETTES_P6, ARRAYSIZE(BLEACH_DS_NEMU_PALETTES_P6) },
   { L"Palette 7", DESC_NODETYPE_TREE, (void*)BLEACH_DS_NEMU_PALETTES_P7, ARRAYSIZE(BLEACH_DS_NEMU_PALETTES_P7) },
   { L"Palette 8", DESC_NODETYPE_TREE, (void*)BLEACH_DS_NEMU_PALETTES_P8, ARRAYSIZE(BLEACH_DS_NEMU_PALETTES_P8) },
};

//Izuru palettes
const sGame_PaletteDataset BLEACH_DS_IZURU_PALETTES_P1[] =
{
    { L"Izuru P1", 0x224ad88, 0x224ada8, indexBleachDSSprites_IzuruKira },
    { L"Izuru P1 - Slash Effects", 0x224ada8, 0x224adc8 },
    { L"Izuru P1 - Wabisuke Effects", 0x224adc8, 0x224ade8 },
    { L"Izuru P1 - Senpaku", 0x224ade8, 0x224ae08, indexBleachDSSprites_IzuruKira },
};

const sGame_PaletteDataset BLEACH_DS_IZURU_PALETTES_P2[] =
{
    { L"Izuru P2", 0x224ae08, 0x224ae28, indexBleachDSSprites_IzuruKira },
    { L"Izuru P2 - Slash Effects", 0x224ae28, 0x224ae48 },
    { L"Izuru P2 - Wabisuke Effects", 0x224ae48, 0x224ae68 },
    { L"Izuru P2 - Senpaku", 0x224ae68, 0x224ae88, indexBleachDSSprites_IzuruKira },
};

const sGame_PaletteDataset BLEACH_DS_IZURU_PALETTES_P3[] =
{
    { L"Izuru P3", 0x224ae88, 0x224aea8, indexBleachDSSprites_IzuruKira },
    { L"Izuru P3 - Slash Effects", 0x224aea8, 0x224aec8 },
    { L"Izuru P3 - Wabisuke Effects", 0x224aec8, 0x224aee8 },
    { L"Izuru P3 - Senpaku", 0x224aee8, 0x224af08, indexBleachDSSprites_IzuruKira },
};

const sGame_PaletteDataset BLEACH_DS_IZURU_PALETTES_P4[] =
{
    { L"Izuru P4", 0x224af08, 0x224af28, indexBleachDSSprites_IzuruKira },
    { L"Izuru P4 - Slash Effects", 0x224af28, 0x224af48 },
    { L"Izuru P4 - Wabisuke Effects", 0x224af48, 0x224af68 },
    { L"Izuru P4 - Senpaku", 0x224af68, 0x224af88, indexBleachDSSprites_IzuruKira },
};

const sGame_PaletteDataset BLEACH_DS_IZURU_PALETTES_P5[] =
{
    { L"Izuru P5", 0x224af88, 0x224afa8, indexBleachDSSprites_IzuruKira },
    { L"Izuru P5 - Slash Effects", 0x224afa8, 0x224afc8 },
    { L"Izuru P5 - Wabisuke Effects", 0x224afc8, 0x224afe8 },
    { L"Izuru P5 - Senpaku", 0x224afe8, 0x224b008, indexBleachDSSprites_IzuruKira },
};

const sGame_PaletteDataset BLEACH_DS_IZURU_PALETTES_P6[] =
{
    { L"Izuru P6", 0x224b008, 0x224b028, indexBleachDSSprites_IzuruKira },
    { L"Izuru P6 - Slash Effects", 0x224b028, 0x224b048 },
    { L"Izuru P6 - Wabisuke Effects", 0x224b048, 0x224b068 },
    { L"Izuru P6 - Senpaku", 0x224b068, 0x224b088, indexBleachDSSprites_IzuruKira },
};


const sGame_PaletteDataset BLEACH_DS_IZURU_PALETTES_P7[] =
{
    { L"Izuru P7", 0x224b08a, 0x224b0aa, indexBleachDSSprites_IzuruKira },
    { L"Izuru P7 - Slash Effects", 0x224b0aa, 0x224b0ca },
    { L"Izuru P7 - Wabisuke Effects", 0x224b0ca, 0x224b0ea },
    { L"Izuru P7 - Senpaku", 0x224b0ea, 0x224b10a, indexBleachDSSprites_IzuruKira },
};


const sGame_PaletteDataset BLEACH_DS_IZURU_PALETTES_P8[] =
{
    { L"Izuru P8", 0x224b10a, 0x224b12a, indexBleachDSSprites_IzuruKira },
    { L"Izuru P8 - Slash Effects", 0x224b12a, 0x224b14a },
    { L"Izuru P8 - Wabisuke Effects", 0x224b14a, 0x224b16a },
    { L"Izuru P8 - Senpaku", 0x224b16a, 0x224b18a, indexBleachDSSprites_IzuruKira },
};

const sDescTreeNode BLEACH_DS_IZURU_COLLECTION[] =
{
   { L"Palette 1", DESC_NODETYPE_TREE, (void*)BLEACH_DS_IZURU_PALETTES_P1, ARRAYSIZE(BLEACH_DS_IZURU_PALETTES_P1) },
   { L"Palette 2", DESC_NODETYPE_TREE, (void*)BLEACH_DS_IZURU_PALETTES_P2, ARRAYSIZE(BLEACH_DS_IZURU_PALETTES_P2) },
   { L"Palette 3", DESC_NODETYPE_TREE, (void*)BLEACH_DS_IZURU_PALETTES_P3, ARRAYSIZE(BLEACH_DS_IZURU_PALETTES_P3) },
   { L"Palette 4", DESC_NODETYPE_TREE, (void*)BLEACH_DS_IZURU_PALETTES_P4, ARRAYSIZE(BLEACH_DS_IZURU_PALETTES_P4) },
   { L"Palette 5", DESC_NODETYPE_TREE, (void*)BLEACH_DS_IZURU_PALETTES_P5, ARRAYSIZE(BLEACH_DS_IZURU_PALETTES_P5) },
   { L"Palette 6", DESC_NODETYPE_TREE, (void*)BLEACH_DS_IZURU_PALETTES_P6, ARRAYSIZE(BLEACH_DS_IZURU_PALETTES_P6) },
   { L"Palette 7", DESC_NODETYPE_TREE, (void*)BLEACH_DS_IZURU_PALETTES_P7, ARRAYSIZE(BLEACH_DS_IZURU_PALETTES_P7) },
   { L"Palette 8", DESC_NODETYPE_TREE, (void*)BLEACH_DS_IZURU_PALETTES_P8, ARRAYSIZE(BLEACH_DS_IZURU_PALETTES_P8) },
};

//Ukitake Palettes
const sGame_PaletteDataset BLEACH_DS_UKITAKE_PALETTES_P1[] =
{
    { L"Ukitake P1", 0x25b07fC, 0x25b081C, indexBleachDSSprites_JushiroUkitake },
    { L"Ukitake P1 - Slash Effects", 0x25b081C, 0x25b083C },
};

const sGame_PaletteDataset BLEACH_DS_UKITAKE_PALETTES_P2[] =
{
    { L"Ukitake P2", 0x25b083C, 0x25b085C, indexBleachDSSprites_JushiroUkitake },
    { L"Ukitake P2 - Slash Effects", 0x25b085C, 0x25b087C },
};

const sGame_PaletteDataset BLEACH_DS_UKITAKE_PALETTES_P3[] =
{
    { L"Ukitake P3", 0x25b087C, 0x25b089C, indexBleachDSSprites_JushiroUkitake },
    { L"Ukitake P3 - Slash Effects", 0x25b089C, 0x25b08bC },
};

const sGame_PaletteDataset BLEACH_DS_UKITAKE_PALETTES_P4[] =
{
    { L"Ukitake P4", 0x25b08bC, 0x25b08dC, indexBleachDSSprites_JushiroUkitake },
    { L"Ukitake P4 - Slash Effects", 0x25b08dC, 0x25b08fC },
};

const sGame_PaletteDataset BLEACH_DS_UKITAKE_PALETTES_P5[] =
{
    { L"Ukitake P5", 0x25b08fC, 0x25b091C, indexBleachDSSprites_JushiroUkitake },
    { L"Ukitake P5 - Slash Effects", 0x25b091C, 0x25b093C },
};

const sGame_PaletteDataset BLEACH_DS_UKITAKE_PALETTES_P6[] =
{
    { L"Ukitake P6", 0x25b093C, 0x25b095C, indexBleachDSSprites_JushiroUkitake },
    { L"Ukitake P6 - Slash Effects", 0x25b095C, 0x25b097C },
};

const sGame_PaletteDataset BLEACH_DS_UKITAKE_PALETTES_P7[] =
{
    { L"Ukitake P7", 0x25b097C, 0x25b099C, indexBleachDSSprites_JushiroUkitake },
    { L"Ukitake P7 - Slash Effects", 0x25b099C, 0x25b09bC },
};

const sGame_PaletteDataset BLEACH_DS_UKITAKE_PALETTES_P8[] =
{
    { L"Ukitake P8", 0x25b09bC, 0x25b09dC, indexBleachDSSprites_JushiroUkitake },
    { L"Ukitake P8 - Slash Effects", 0x25b09dC, 0x25b09fC },
};

const sGame_PaletteDataset BLEACH_DS_UKITAKE_PALETTES_EXTRAS[] =
{
    { L"Ukitake - Minabuki", 0x25b1830, 0x25b1850 },
    { L"Ukitake - Mina Attacks 1", 0x25b1850, 0x25b1870 },
    { L"Ukitake - Mina Attacks 2", 0x25b1870, 0x25b1890 },
};

const sDescTreeNode BLEACH_DS_UKITAKE_COLLECTION[] =
{
   { L"Palette 1", DESC_NODETYPE_TREE, (void*)BLEACH_DS_UKITAKE_PALETTES_P1, ARRAYSIZE(BLEACH_DS_UKITAKE_PALETTES_P1) },
   { L"Palette 2", DESC_NODETYPE_TREE, (void*)BLEACH_DS_UKITAKE_PALETTES_P2, ARRAYSIZE(BLEACH_DS_UKITAKE_PALETTES_P2) },
   { L"Palette 3", DESC_NODETYPE_TREE, (void*)BLEACH_DS_UKITAKE_PALETTES_P3, ARRAYSIZE(BLEACH_DS_UKITAKE_PALETTES_P3) },
   { L"Palette 4", DESC_NODETYPE_TREE, (void*)BLEACH_DS_UKITAKE_PALETTES_P4, ARRAYSIZE(BLEACH_DS_UKITAKE_PALETTES_P4) },
   { L"Palette 5", DESC_NODETYPE_TREE, (void*)BLEACH_DS_UKITAKE_PALETTES_P5, ARRAYSIZE(BLEACH_DS_UKITAKE_PALETTES_P5) },
   { L"Palette 6", DESC_NODETYPE_TREE, (void*)BLEACH_DS_UKITAKE_PALETTES_P6, ARRAYSIZE(BLEACH_DS_UKITAKE_PALETTES_P6) },
   { L"Palette 7", DESC_NODETYPE_TREE, (void*)BLEACH_DS_UKITAKE_PALETTES_P7, ARRAYSIZE(BLEACH_DS_UKITAKE_PALETTES_P7) },
   { L"Palette 8", DESC_NODETYPE_TREE, (void*)BLEACH_DS_UKITAKE_PALETTES_P8, ARRAYSIZE(BLEACH_DS_UKITAKE_PALETTES_P8) },
   { L"Extras", DESC_NODETYPE_TREE, (void*)BLEACH_DS_UKITAKE_PALETTES_EXTRAS, ARRAYSIZE(BLEACH_DS_UKITAKE_PALETTES_EXTRAS) },
};

//Hanataro palettes
const sGame_PaletteDataset BLEACH_DS_HANATARO_PALETTES_P1[] =
{
    { L"Hanataro P1", 0x20b5358, 0x20b5378, indexBleachDSSprites_HanataroYamada },
    { L"Hanataro P1 - Shinten", 0x20b5378, 0x20b5398 },
    { L"Hanataro P1 - Retsu", 0x20b5398, 0x20b53b8 },
};

const sGame_PaletteDataset BLEACH_DS_HANATARO_PALETTES_P2[] =
{
    { L"Hanataro P2", 0x20b53b8, 0x20b53d8, indexBleachDSSprites_HanataroYamada },
    { L"Hanataro P2 - Shinten", 0x20b53d8, 0x20b53f8 },
    { L"Hanataro P2 - Retsu", 0x20b53f8, 0x20b5418 },
};

const sGame_PaletteDataset BLEACH_DS_HANATARO_PALETTES_P3[] =
{
    { L"Hanataro P3", 0x20b5418, 0x20b5438, indexBleachDSSprites_HanataroYamada },
    { L"Hanataro P3 - Shinten", 0x20b5438, 0x20b5458 },
    { L"Hanataro P3 - Retsu", 0x20b5458, 0x20b5478 },
};

const sGame_PaletteDataset BLEACH_DS_HANATARO_PALETTES_P4[] =
{
    { L"Hanataro P4", 0x20b5478, 0x20b5498, indexBleachDSSprites_HanataroYamada },
    { L"Hanataro P4 - Shinten", 0x20b5498, 0x20b54b8 },
    { L"Hanataro P4 - Retsu", 0x20b54b8, 0x20b54d8 },
};

const sGame_PaletteDataset BLEACH_DS_HANATARO_PALETTES_P5[] =
{
    { L"Hanataro P5", 0x20b54d8, 0x20b54f8, indexBleachDSSprites_HanataroYamada },
    { L"Hanataro P5 - Shinten", 0x20b54f8, 0x20b5518 },
    { L"Hanataro P5 - Retsu", 0x20b5518, 0x20b5538 },
};

const sGame_PaletteDataset BLEACH_DS_HANATARO_PALETTES_P6[] =
{
    { L"Hanataro P6", 0x20b5538, 0x20b5558, indexBleachDSSprites_HanataroYamada },
    { L"Hanataro P6 - Shinten", 0x20b5558, 0x20b5578 },
    { L"Hanataro P6 - Retsu", 0x20b5578, 0x20b5598 },
};

const sGame_PaletteDataset BLEACH_DS_HANATARO_PALETTES_P7[] =
{
    { L"Hanataro P7", 0x20b5598, 0x20b55b8, indexBleachDSSprites_HanataroYamada },
    { L"Hanataro P7 - Shinten", 0x20b55b8, 0x20b55d8 },
    { L"Hanataro P7 - Retsu", 0x20b55d8, 0x20b55f8 },
};

const sGame_PaletteDataset BLEACH_DS_HANATARO_PALETTES_P8[] =
{
    { L"Hanataro P8", 0x20b55f8, 0x20b5618, indexBleachDSSprites_HanataroYamada },
    { L"Hanataro P8 - Shinten", 0x20b5618, 0x20b5638 },
    { L"Hanataro P8 - Retsu", 0x20b5638, 0x20b5658 },
};

const sGame_PaletteDataset BLEACH_DS_HANATARO_PALETTES_EXTRAS[] =
{
    { L"Hanatoro - Hisagomaru", 0x20b71fc, 0x20b721c },
    { L"Hanatoro - Flow! Hisagomaru! 1", 0x20b723c, 0x20b725c },
    { L"Hanatoro - Hisagomaru Meter", 0x20b725c, 0x20b727c },
    { L"Hanatoro - Flow! Hisagomaru! 2", 0x20b729c, 0x20b72bc },
};

const sDescTreeNode BLEACH_DS_HANATARO_COLLECTION[] =
{
   { L"Palette 1", DESC_NODETYPE_TREE, (void*)BLEACH_DS_HANATARO_PALETTES_P1, ARRAYSIZE(BLEACH_DS_HANATARO_PALETTES_P1) },
   { L"Palette 2", DESC_NODETYPE_TREE, (void*)BLEACH_DS_HANATARO_PALETTES_P2, ARRAYSIZE(BLEACH_DS_HANATARO_PALETTES_P2) },
   { L"Palette 3", DESC_NODETYPE_TREE, (void*)BLEACH_DS_HANATARO_PALETTES_P3, ARRAYSIZE(BLEACH_DS_HANATARO_PALETTES_P3) },
   { L"Palette 4", DESC_NODETYPE_TREE, (void*)BLEACH_DS_HANATARO_PALETTES_P4, ARRAYSIZE(BLEACH_DS_HANATARO_PALETTES_P4) },
   { L"Palette 5", DESC_NODETYPE_TREE, (void*)BLEACH_DS_HANATARO_PALETTES_P5, ARRAYSIZE(BLEACH_DS_HANATARO_PALETTES_P5) },
   { L"Palette 6", DESC_NODETYPE_TREE, (void*)BLEACH_DS_HANATARO_PALETTES_P6, ARRAYSIZE(BLEACH_DS_HANATARO_PALETTES_P6) },
   { L"Palette 7", DESC_NODETYPE_TREE, (void*)BLEACH_DS_HANATARO_PALETTES_P7, ARRAYSIZE(BLEACH_DS_HANATARO_PALETTES_P7) },
   { L"Palette 8", DESC_NODETYPE_TREE, (void*)BLEACH_DS_HANATARO_PALETTES_P8, ARRAYSIZE(BLEACH_DS_HANATARO_PALETTES_P8) },
   { L"Extras", DESC_NODETYPE_TREE, (void*)BLEACH_DS_HANATARO_PALETTES_EXTRAS, ARRAYSIZE(BLEACH_DS_HANATARO_PALETTES_EXTRAS) },
};

//Kisuke Urahara Palettes
const sGame_PaletteDataset BLEACH_DS_URAHARA_PALETTES_P1[] =
{
    { L"Urahara P1", 0x25dcb30, 0x25dcb50, indexBleachDSSprites_KisukeUrahara },
    { L"Urahara P1 - Slash Effects", 0x25dcb50, 0x25dcb70 },
    { L"Urahara P1 - Jinta", 0x25e0f00, 0x25e0f20 },
    { L"Urahara P1 - Tessai", 0x25e59f8, 0x25e5a18 },
    { L"Urahara P1 - Ururu", 0x25e7d04, 0x25e7d24 },
    { L"Urahara P1 - Rocket Sparks", 0x25e7d24, 0x25e7d44 },
};

const sGame_PaletteDataset BLEACH_DS_URAHARA_PALETTES_P2[] =
{
    { L"Urahara P2", 0x25dcb70, 0x25dcb90, indexBleachDSSprites_KisukeUrahara },
    { L"Urahara P2 - Slash Effects", 0x25dcb90, 0x25dcbb0 },
    { L"Urahara P2 - Jinta", 0x25e0f20, 0x25e0f40 },
    { L"Urahara P2 - Tessai", 0x25e5a18, 0x25e5a38 },
    { L"Urahara P2 - Ururu", 0x25e7d44, 0x25e7d64 },
    { L"Urahara P2 - Rocket Sparks", 0x25e7d64, 0x25e7d84 },
};

const sGame_PaletteDataset BLEACH_DS_URAHARA_PALETTES_P3[] =
{
    { L"Urahara P3", 0x25dcbb0, 0x25dcbd0, indexBleachDSSprites_KisukeUrahara },
    { L"Urahara P3 - Slash Effects", 0x25dcbd0, 0x25dcbf0 },
    { L"Urahara P3 - Jinta", 0x25e0f40, 0x25e0f60 },
    { L"Urahara P3 - Tessai", 0x25e5a38, 0x25e5a58 },
    { L"Urahara P3 - Ururu", 0x25e7d84, 0x25e7da4 },
    { L"Urahara P3 - Rocket Sparks", 0x25e7da4, 0x25e7dc4 },
};

const sGame_PaletteDataset BLEACH_DS_URAHARA_PALETTES_P4[] =
{
    { L"Urahara P4", 0x25dcbf0, 0x25dcc10, indexBleachDSSprites_KisukeUrahara },
    { L"Urahara P4 - Slash Effects", 0x25dcc10, 0x25dcc30 },
    { L"Urahara P4 - Jinta", 0x25e0f60, 0x25e0f80 },
    { L"Urahara P4 - Tessai", 0x25e5a58, 0x25e5a78 },
    { L"Urahara P4 - Ururu", 0x25e7dc4, 0x25e7de4 },
    { L"Urahara P4 - Rocket Sparks", 0x25e7de4, 0x25e7e04 },
};

const sGame_PaletteDataset BLEACH_DS_URAHARA_PALETTES_P5[] =
{
    { L"Urahara P5", 0x25dcc30, 0x25dcc50, indexBleachDSSprites_KisukeUrahara },
    { L"Urahara P5 - Slash Effects", 0x25dcc50, 0x25dcc70 },
    { L"Urahara P5 - Jinta", 0x25e0f80, 0x25e0fa0 },
    { L"Urahara P5 - Tessai", 0x25e5a78, 0x25e5a98 },
    { L"Urahara P5 - Ururu", 0x25e7e04, 0x25e7e24 },
    { L"Urahara P5 - Rocket Sparks", 0x25e7e24, 0x25e7e44 },
};

const sGame_PaletteDataset BLEACH_DS_URAHARA_PALETTES_P6[] =
{
    { L"Urahara P6", 0x25dcc70, 0x25dcc90, indexBleachDSSprites_KisukeUrahara },
    { L"Urahara P6 - Slash Effects", 0x25dcc90, 0x25dccb0 },
    { L"Urahara P6 - Jinta", 0x25e0fa0, 0x25e0fc0 },
    { L"Urahara P6 - Tessai", 0x25e5a98, 0x25e5ab8 },
    { L"Urahara P6 - Ururu", 0x25e7e44, 0x25e7e64 },
    { L"Urahara P6 - Rocket Sparks", 0x25e7e64, 0x25e7e84 },
};

const sGame_PaletteDataset BLEACH_DS_URAHARA_PALETTES_P7[] =
{
    { L"Urahara P7", 0x25dccb0, 0x25dccd0, indexBleachDSSprites_KisukeUrahara },
    { L"Urahara P7 - Slash Effects", 0x25dccd0, 0x25dccf0 },
    { L"Urahara P7 - Jinta", 0x25e0fc0, 0x25e0fe0 },
    { L"Urahara P7 - Tessai", 0x25e5ab8, 0x25e5ad8 },
    { L"Urahara P7 - Ururu", 0x25e7e84, 0x25e7ea4 },
    { L"Urahara P7 - Rocket Sparks", 0x25e7ea4, 0x25e7ec4 },
};

const sGame_PaletteDataset BLEACH_DS_URAHARA_PALETTES_P8[] =
{
    { L"Urahara P8", 0x25dccf0, 0x25dcd10, indexBleachDSSprites_KisukeUrahara },
    { L"Urahara P8 - Slash Effects", 0x25dcd10, 0x25dcd30 },
    { L"Urahara P8 - Jinta", 0x25e0fe0, 0x25e1000 },
    { L"Urahara P8 - Tessai", 0x25e5ad8, 0x25e5af8 },
    { L"Urahara P8 - Ururu", 0x25e7ec4, 0x25e7ee4 },
    { L"Urahara P8 - Rocket Sparks", 0x25e7ee4, 0x25e7f04 },
};

const sGame_PaletteDataset BLEACH_DS_URAHARA_PALETTES_EXTRAS[] =
{
    { L"Urahara - Blood Mist Shield", 0x25ddc6c, 0x25ddc8c },
    { L"Urahara - Scream! Benihime!", 0x25ddc8c, 0x25ddcac },
    { L"Urahara - Bankin", 0x25ddcac, 0x25ddccc },
};

const sDescTreeNode BLEACH_DS_URAHARA_COLLECTION[] =
{
   { L"Palette 1", DESC_NODETYPE_TREE, (void*)BLEACH_DS_URAHARA_PALETTES_P1, ARRAYSIZE(BLEACH_DS_URAHARA_PALETTES_P1) },
   { L"Palette 2", DESC_NODETYPE_TREE, (void*)BLEACH_DS_URAHARA_PALETTES_P2, ARRAYSIZE(BLEACH_DS_URAHARA_PALETTES_P2) },
   { L"Palette 3", DESC_NODETYPE_TREE, (void*)BLEACH_DS_URAHARA_PALETTES_P3, ARRAYSIZE(BLEACH_DS_URAHARA_PALETTES_P3) },
   { L"Palette 4", DESC_NODETYPE_TREE, (void*)BLEACH_DS_URAHARA_PALETTES_P4, ARRAYSIZE(BLEACH_DS_URAHARA_PALETTES_P4) },
   { L"Palette 5", DESC_NODETYPE_TREE, (void*)BLEACH_DS_URAHARA_PALETTES_P5, ARRAYSIZE(BLEACH_DS_URAHARA_PALETTES_P5) },
   { L"Palette 6", DESC_NODETYPE_TREE, (void*)BLEACH_DS_URAHARA_PALETTES_P6, ARRAYSIZE(BLEACH_DS_URAHARA_PALETTES_P6) },
   { L"Palette 7", DESC_NODETYPE_TREE, (void*)BLEACH_DS_URAHARA_PALETTES_P7, ARRAYSIZE(BLEACH_DS_URAHARA_PALETTES_P7) },
   { L"Palette 8", DESC_NODETYPE_TREE, (void*)BLEACH_DS_URAHARA_PALETTES_P8, ARRAYSIZE(BLEACH_DS_URAHARA_PALETTES_P8) },
   { L"Extras", DESC_NODETYPE_TREE, (void*)BLEACH_DS_URAHARA_PALETTES_EXTRAS, ARRAYSIZE(BLEACH_DS_URAHARA_PALETTES_EXTRAS) },
};

//Urya palettes
const sGame_PaletteDataset BLEACH_DS_URYU_PALETTES_P1[] =
{
    { L"Uryu P1", 0x2632320, 0x2632340, indexBleachDSSprites_UryuIshida },
    { L"Uryu P1 - Holy Arrow 1", 0x2632340, 0x2632360 },
    { L"Uryu P1 - Holy Arrow 2", 0x2632360, 0x2632380 },
    { L"Uryu P1 - Holy Arrow 3", 0x2632380, 0x26323a0 },
};

const sGame_PaletteDataset BLEACH_DS_URYU_PALETTES_P2[] =
{
    { L"Uryu P2", 0x26323a0, 0x26323c0, indexBleachDSSprites_UryuIshida },
    { L"Uryu P2 - Holy Arrow 1", 0x26323c0, 0x26323e0 },
    { L"Uryu P2 - Holy Arrow 2", 0x26323e0, 0x2632400 },
    { L"Uryu P2 - Holy Arrow 3", 0x2632400, 0x2632420 },
};

const sGame_PaletteDataset BLEACH_DS_URYU_PALETTES_P3[] =
{
    { L"Uryu P3", 0x2632420, 0x2632440, indexBleachDSSprites_UryuIshida },
    { L"Uryu P3 - Holy Arrow 1", 0x2632440, 0x2632460 },
    { L"Uryu P3 - Holy Arrow 2", 0x2632460, 0x2632480 },
    { L"Uryu P3 - Holy Arrow 3", 0x2632480, 0x26324a0 },
};

const sGame_PaletteDataset BLEACH_DS_URYU_PALETTES_P4[] =
{
    { L"Uryu P4", 0x26324a0, 0x26324c0, indexBleachDSSprites_UryuIshida },
    { L"Uryu P4 - Holy Arrow 1", 0x26324c0, 0x26324e0 },
    { L"Uryu P4 - Holy Arrow 2", 0x26324e0, 0x2632500 },
    { L"Uryu P4 - Holy Arrow 3", 0x2632500, 0x2632520 },
};

const sGame_PaletteDataset BLEACH_DS_URYU_PALETTES_P5[] =
{
    { L"Uryu P5", 0x2632520, 0x2632540, indexBleachDSSprites_UryuIshida },
    { L"Uryu P5 - Holy Arrow 1", 0x2632540, 0x2632560 },
    { L"Uryu P5 - Holy Arrow 2", 0x2632560, 0x2632580 },
    { L"Uryu P5 - Holy Arrow 3", 0x2632580, 0x26325a0 },
};

const sGame_PaletteDataset BLEACH_DS_URYU_PALETTES_P6[] =
{
    { L"Uryu P6", 0x26325a0, 0x26325c0, indexBleachDSSprites_UryuIshida },
    { L"Uryu P6 - Holy Arrow 1", 0x26325c0, 0x26325e0 },
    { L"Uryu P6 - Holy Arrow 2", 0x26325e0, 0x2632600 },
    { L"Uryu P6 - Holy Arrow 3", 0x2632600, 0x2632620 },
};


const sGame_PaletteDataset BLEACH_DS_URYU_PALETTES_P7[] =
{
    { L"Uryu P7", 0x2632620, 0x2632640, indexBleachDSSprites_UryuIshida },
    { L"Uryu P7 - Holy Arrow 1", 0x2632640, 0x2632660 },
    { L"Uryu P7 - Holy Arrow 2", 0x2632660, 0x2632680 },
    { L"Uryu P7 - Holy Arrow 3", 0x2632680, 0x26326a0 },
};


const sGame_PaletteDataset BLEACH_DS_URYU_PALETTES_P8[] =
{
    { L"Uryu P8", 0x26326a0, 0x26326c0, indexBleachDSSprites_UryuIshida },
    { L"Uryu P8 - Holy Arrow 1", 0x26326c0, 0x26326e0 },
    { L"Uryu P8 - Holy Arrow 2", 0x26326e0, 0x2632700 },
    { L"Uryu P8 - Holy Arrow 3", 0x2632700, 0x2632720 },
};


const sGame_PaletteDataset BLEACH_DS_URYU_PALETTES_EXTRAS[] =
{
    { L"Uryu P8 - Fired Holy Arrow", 0x2633cb0, 0x2633cd0 },
};

const sDescTreeNode BLEACH_DS_URYU_COLLECTION[] =
{
   { L"Palette 1", DESC_NODETYPE_TREE, (void*)BLEACH_DS_URYU_PALETTES_P1, ARRAYSIZE(BLEACH_DS_URYU_PALETTES_P1) },
   { L"Palette 2", DESC_NODETYPE_TREE, (void*)BLEACH_DS_URYU_PALETTES_P2, ARRAYSIZE(BLEACH_DS_URYU_PALETTES_P2) },
   { L"Palette 3", DESC_NODETYPE_TREE, (void*)BLEACH_DS_URYU_PALETTES_P3, ARRAYSIZE(BLEACH_DS_URYU_PALETTES_P3) },
   { L"Palette 4", DESC_NODETYPE_TREE, (void*)BLEACH_DS_URYU_PALETTES_P4, ARRAYSIZE(BLEACH_DS_URYU_PALETTES_P4) },
   { L"Palette 5", DESC_NODETYPE_TREE, (void*)BLEACH_DS_URYU_PALETTES_P5, ARRAYSIZE(BLEACH_DS_URYU_PALETTES_P5) },
   { L"Palette 6", DESC_NODETYPE_TREE, (void*)BLEACH_DS_URYU_PALETTES_P6, ARRAYSIZE(BLEACH_DS_URYU_PALETTES_P6) },
   { L"Palette 7", DESC_NODETYPE_TREE, (void*)BLEACH_DS_URYU_PALETTES_P7, ARRAYSIZE(BLEACH_DS_URYU_PALETTES_P7) },
   { L"Palette 8", DESC_NODETYPE_TREE, (void*)BLEACH_DS_URYU_PALETTES_P8, ARRAYSIZE(BLEACH_DS_URYU_PALETTES_P8) },
   { L"Extras", DESC_NODETYPE_TREE, (void*)BLEACH_DS_URYU_PALETTES_EXTRAS, ARRAYSIZE(BLEACH_DS_URYU_PALETTES_EXTRAS) },
};

//Ikkaku Palettes
const sGame_PaletteDataset BLEACH_DS_IKKAKU_PALETTES_P1[] =
{
    { L"Ikkaku P1", 0x2297a2c, 0x2297a4c, indexBleachDSSprites_IkkakuMadarame },
    { L"Ikkaku P1 - Slash Effects", 0x2297a4c, 0x2297a6c },
};

const sGame_PaletteDataset BLEACH_DS_IKKAKU_PALETTES_P2[] =
{
    { L"Ikkaku P2", 0x2297a8c, 0x2297aac, indexBleachDSSprites_IkkakuMadarame },
    { L"Ikkaku P2 - Slash Effects", 0x2297aac, 0x2297acc },
};

const sGame_PaletteDataset BLEACH_DS_IKKAKU_PALETTES_P3[] =
{
    { L"Ikkaku P3", 0x2297aec, 0x2297b0c, indexBleachDSSprites_IkkakuMadarame },
    { L"Ikkaku P3 - Slash Effects", 0x2297b0c, 0x2297b2c },
};

const sGame_PaletteDataset BLEACH_DS_IKKAKU_PALETTES_P4[] =
{
    { L"Ikkaku P4", 0x2297b4c, 0x2297b6c, indexBleachDSSprites_IkkakuMadarame },
    { L"Ikkaku P4 - Slash Effects", 0x2297b6c, 0x2297b8c },
};

const sGame_PaletteDataset BLEACH_DS_IKKAKU_PALETTES_P5[] =
{
    { L"Ikkaku P5", 0x2297bac, 0x2297bcc, indexBleachDSSprites_IkkakuMadarame },
    { L"Ikkaku P5 - Slash Effects", 0x2297bcc, 0x2297bec },
};

const sGame_PaletteDataset BLEACH_DS_IKKAKU_PALETTES_P6[] =
{
    { L"Ikkaku P6", 0x2297c0c, 0x2297c2c, indexBleachDSSprites_IkkakuMadarame },
    { L"Ikkaku P6 - Slash Effects", 0x2297c2c, 0x2297c4c },
};

const sGame_PaletteDataset BLEACH_DS_IKKAKU_PALETTES_P7[] =
{
    { L"Ikkaku P7", 0x2297c6c, 0x2297c8c, indexBleachDSSprites_IkkakuMadarame },
    { L"Ikkaku P7 - Slash Effects", 0x2297c8c, 0x2297cac },
};

const sGame_PaletteDataset BLEACH_DS_IKKAKU_PALETTES_P8[] =
{
    { L"Ikkaku P8", 0x2297ccc, 0x2297cec, indexBleachDSSprites_IkkakuMadarame },
    { L"Ikkaku P8 - Slash Effects", 0x2297cec, 0x2297d0c },
};

const sGame_PaletteDataset BLEACH_DS_IKKAKU_PALETTES_EXTRAS[] =
{
    { L"Ikkaku - I'll blast you!", 0x2299380, 0x22993a0 },
    { L"Ikkaku - Ryumon Hozukimaru", 0x22993c0, 0x22993e0 },
};

const sDescTreeNode BLEACH_DS_IKKAKU_COLLECTION[] =
{
   { L"Palette 1", DESC_NODETYPE_TREE, (void*)BLEACH_DS_IKKAKU_PALETTES_P1, ARRAYSIZE(BLEACH_DS_IKKAKU_PALETTES_P1) },
   { L"Palette 2", DESC_NODETYPE_TREE, (void*)BLEACH_DS_IKKAKU_PALETTES_P2, ARRAYSIZE(BLEACH_DS_IKKAKU_PALETTES_P2) },
   { L"Palette 3", DESC_NODETYPE_TREE, (void*)BLEACH_DS_IKKAKU_PALETTES_P3, ARRAYSIZE(BLEACH_DS_IKKAKU_PALETTES_P3) },
   { L"Palette 4", DESC_NODETYPE_TREE, (void*)BLEACH_DS_IKKAKU_PALETTES_P4, ARRAYSIZE(BLEACH_DS_IKKAKU_PALETTES_P4) },
   { L"Palette 5", DESC_NODETYPE_TREE, (void*)BLEACH_DS_IKKAKU_PALETTES_P5, ARRAYSIZE(BLEACH_DS_IKKAKU_PALETTES_P5) },
   { L"Palette 6", DESC_NODETYPE_TREE, (void*)BLEACH_DS_IKKAKU_PALETTES_P6, ARRAYSIZE(BLEACH_DS_IKKAKU_PALETTES_P6) },
   { L"Palette 7", DESC_NODETYPE_TREE, (void*)BLEACH_DS_IKKAKU_PALETTES_P7, ARRAYSIZE(BLEACH_DS_IKKAKU_PALETTES_P7) },
   { L"Palette 8", DESC_NODETYPE_TREE, (void*)BLEACH_DS_IKKAKU_PALETTES_P8, ARRAYSIZE(BLEACH_DS_IKKAKU_PALETTES_P8) },
   { L"Extras", DESC_NODETYPE_TREE, (void*)BLEACH_DS_IKKAKU_PALETTES_EXTRAS, ARRAYSIZE(BLEACH_DS_IKKAKU_PALETTES_EXTRAS) },
};

//Hisagi Palettes
const sGame_PaletteDataset BLEACH_DS_HISAGI_PALETTES_P1[] =
{
    { L"Hisagi P1", 0x2112cc8, 0x2112ce8, indexBleachDSSprites_ShuheiHisagi },
};

const sGame_PaletteDataset BLEACH_DS_HISAGI_PALETTES_P2[] =
{
    { L"Hisagi P2", 0x2112ce8, 0x2112d08, indexBleachDSSprites_ShuheiHisagi },
};

const sGame_PaletteDataset BLEACH_DS_HISAGI_PALETTES_P3[] =
{
    { L"Hisagi P3", 0x2112d08, 0x2112d28, indexBleachDSSprites_ShuheiHisagi },
};

const sGame_PaletteDataset BLEACH_DS_HISAGI_PALETTES_P4[] =
{
    { L"Hisagi P4", 0x2112d28, 0x2112d48, indexBleachDSSprites_ShuheiHisagi },
};

const sGame_PaletteDataset BLEACH_DS_HISAGI_PALETTES_P5[] =
{
    { L"Hisagi P5", 0x2112d48, 0x2112d68, indexBleachDSSprites_ShuheiHisagi },
};

const sGame_PaletteDataset BLEACH_DS_HISAGI_PALETTES_P6[] =
{
    { L"Hisagi P6", 0x2112d68, 0x2112d88, indexBleachDSSprites_ShuheiHisagi },
};

const sGame_PaletteDataset BLEACH_DS_HISAGI_PALETTES_P7[] =
{
    { L"Hisagi P7", 0x2112d88, 0x2112da8, indexBleachDSSprites_ShuheiHisagi },
};

const sGame_PaletteDataset BLEACH_DS_HISAGI_PALETTES_P8[] =
{
    { L"Hisagi P8", 0x2112da8, 0x2112dc8, indexBleachDSSprites_ShuheiHisagi },
};

const sGame_PaletteDataset BLEACH_DS_HISAGI_PALETTES_EXTRAS[] =
{
    { L"Hisagi - Enjin", 0x211473c, 0x211475c },
    { L"Hisagi - Enjin Trails", 0x211475c, 0x211477c },
};

const sDescTreeNode BLEACH_DS_HISAGI_COLLECTION[] =
{
   { L"Palette 1", DESC_NODETYPE_TREE, (void*)BLEACH_DS_HISAGI_PALETTES_P1, ARRAYSIZE(BLEACH_DS_HISAGI_PALETTES_P1) },
   { L"Palette 2", DESC_NODETYPE_TREE, (void*)BLEACH_DS_HISAGI_PALETTES_P2, ARRAYSIZE(BLEACH_DS_HISAGI_PALETTES_P2) },
   { L"Palette 3", DESC_NODETYPE_TREE, (void*)BLEACH_DS_HISAGI_PALETTES_P3, ARRAYSIZE(BLEACH_DS_HISAGI_PALETTES_P3) },
   { L"Palette 4", DESC_NODETYPE_TREE, (void*)BLEACH_DS_HISAGI_PALETTES_P4, ARRAYSIZE(BLEACH_DS_HISAGI_PALETTES_P4) },
   { L"Palette 5", DESC_NODETYPE_TREE, (void*)BLEACH_DS_HISAGI_PALETTES_P5, ARRAYSIZE(BLEACH_DS_HISAGI_PALETTES_P5) },
   { L"Palette 6", DESC_NODETYPE_TREE, (void*)BLEACH_DS_HISAGI_PALETTES_P6, ARRAYSIZE(BLEACH_DS_HISAGI_PALETTES_P6) },
   { L"Palette 7", DESC_NODETYPE_TREE, (void*)BLEACH_DS_HISAGI_PALETTES_P7, ARRAYSIZE(BLEACH_DS_HISAGI_PALETTES_P7) },
   { L"Palette 8", DESC_NODETYPE_TREE, (void*)BLEACH_DS_HISAGI_PALETTES_P8, ARRAYSIZE(BLEACH_DS_HISAGI_PALETTES_P8) },
   { L"Extras", DESC_NODETYPE_TREE, (void*)BLEACH_DS_HISAGI_PALETTES_EXTRAS, ARRAYSIZE(BLEACH_DS_HISAGI_PALETTES_EXTRAS) },
};

//Rangiku Palettes
const sGame_PaletteDataset BLEACH_DS_RANGIKU_PALETTES_P1[] =
{
    { L"Rangiku P1", 0x24be508, 0x24be528, indexBleachDSSprites_RangikuMatsumoto },
    { L"Rangiku P1 - Slash Effects", 0x24be528, 0x24be548 },
    { L"Rangiku P1 - Haineko", 0x24be548, 0x24be568 },
};

const sGame_PaletteDataset BLEACH_DS_RANGIKU_PALETTES_P2[] =
{
    { L"Rangiku P2", 0x24be568, 0x24be588, indexBleachDSSprites_RangikuMatsumoto },
    { L"Rangiku P2 - Slash Effects", 0x24be588, 0x24be5a8 },
    { L"Rangiku P2 - Haineko", 0x24be5a8, 0x24be5c8 },
};

const sGame_PaletteDataset BLEACH_DS_RANGIKU_PALETTES_P3[] =
{
    { L"Rangiku P3", 0x24be5c8, 0x24be5e8, indexBleachDSSprites_RangikuMatsumoto },
    { L"Rangiku P3 - Slash Effects", 0x24be5e8, 0x24be608 },
    { L"Rangiku P3 - Haineko", 0x24be608, 0x24be628 },
};

const sGame_PaletteDataset BLEACH_DS_RANGIKU_PALETTES_P4[] =
{
    { L"Rangiku P4", 0x24be628, 0x24be648, indexBleachDSSprites_RangikuMatsumoto },
    { L"Rangiku P4 - Slash Effects", 0x24be648, 0x24be668 },
    { L"Rangiku P4 - Haineko", 0x24be668, 0x24be688 },
};

const sGame_PaletteDataset BLEACH_DS_RANGIKU_PALETTES_P5[] =
{
    { L"Rangiku P5", 0x24be688, 0x24be6a8, indexBleachDSSprites_RangikuMatsumoto },
    { L"Rangiku P5 - Slash Effects", 0x24be6a8, 0x24be6c8 },
    { L"Rangiku P5 - Haineko", 0x24be6c8, 0x24be6e8 },
};

const sGame_PaletteDataset BLEACH_DS_RANGIKU_PALETTES_P6[] =
{
    { L"Rangiku P6", 0x24be6e8, 0x24be708, indexBleachDSSprites_RangikuMatsumoto },
    { L"Rangiku P6 - Slash Effects", 0x24be708, 0x24be728 },
    { L"Rangiku P6 - Haineko", 0x24be728, 0x24be748 },
};

const sGame_PaletteDataset BLEACH_DS_RANGIKU_PALETTES_P7[] =
{
    { L"Rangiku P7", 0x24be748, 0x24be768, indexBleachDSSprites_RangikuMatsumoto },
    { L"Rangiku P7 - Slash Effects", 0x24be768, 0x24be788 },
    { L"Rangiku P7 - Haineko", 0x24be788, 0x24be7a8 },
};

const sGame_PaletteDataset BLEACH_DS_RANGIKU_PALETTES_P8[] =
{
    { L"Rangiku P8", 0x24be7a8, 0x24be7c8, indexBleachDSSprites_RangikuMatsumoto },
    { L"Rangiku P8 - Slash Effects", 0x24be7c8, 0x24be7e8 },
    { L"Rangiku P8 - Haineko", 0x24be7e8, 0x24be808 },
};

const sDescTreeNode BLEACH_DS_RANGIKU_COLLECTION[] =
{
   { L"Palette 1", DESC_NODETYPE_TREE, (void*)BLEACH_DS_RANGIKU_PALETTES_P1, ARRAYSIZE(BLEACH_DS_RANGIKU_PALETTES_P1) },
   { L"Palette 2", DESC_NODETYPE_TREE, (void*)BLEACH_DS_RANGIKU_PALETTES_P2, ARRAYSIZE(BLEACH_DS_RANGIKU_PALETTES_P2) },
   { L"Palette 3", DESC_NODETYPE_TREE, (void*)BLEACH_DS_RANGIKU_PALETTES_P3, ARRAYSIZE(BLEACH_DS_RANGIKU_PALETTES_P3) },
   { L"Palette 4", DESC_NODETYPE_TREE, (void*)BLEACH_DS_RANGIKU_PALETTES_P4, ARRAYSIZE(BLEACH_DS_RANGIKU_PALETTES_P4) },
   { L"Palette 5", DESC_NODETYPE_TREE, (void*)BLEACH_DS_RANGIKU_PALETTES_P5, ARRAYSIZE(BLEACH_DS_RANGIKU_PALETTES_P5) },
   { L"Palette 6", DESC_NODETYPE_TREE, (void*)BLEACH_DS_RANGIKU_PALETTES_P6, ARRAYSIZE(BLEACH_DS_RANGIKU_PALETTES_P6) },
   { L"Palette 7", DESC_NODETYPE_TREE, (void*)BLEACH_DS_RANGIKU_PALETTES_P7, ARRAYSIZE(BLEACH_DS_RANGIKU_PALETTES_P7) },
   { L"Palette 8", DESC_NODETYPE_TREE, (void*)BLEACH_DS_RANGIKU_PALETTES_P8, ARRAYSIZE(BLEACH_DS_RANGIKU_PALETTES_P8) },
};

//Kyoraku Palettes
const sGame_PaletteDataset BLEACH_DS_KYORAKU_PALETTES_P1[] =
{
    { L"Kyoraku P1", 0x23f8528, 0x23f8548, indexBleachDSSprites_ShunsuiKyoraku },
    { L"Kyoraku P1 - Slash Effects", 0x23f8548, 0x23f8568 },
};

const sGame_PaletteDataset BLEACH_DS_KYORAKU_PALETTES_P2[] =
{
    { L"Kyoraku P2", 0x23f8568, 0x23f8588, indexBleachDSSprites_ShunsuiKyoraku },
    { L"Kyoraku P2 - Slash Effects", 0x23f8588, 0x23f85a8 },
};

const sGame_PaletteDataset BLEACH_DS_KYORAKU_PALETTES_P3[] =
{
    { L"Kyoraku P3", 0x23f85a8, 0x23f85c8, indexBleachDSSprites_ShunsuiKyoraku },
    { L"Kyoraku P3 - Slash Effects", 0x23f85c8, 0x23f85e8 },
};

const sGame_PaletteDataset BLEACH_DS_KYORAKU_PALETTES_P4[] =
{
    { L"Kyoraku P4", 0x23f85e8, 0x23f8608, indexBleachDSSprites_ShunsuiKyoraku },
    { L"Kyoraku P4 - Slash Effects", 0x23f8608, 0x23f8628 },
};

const sGame_PaletteDataset BLEACH_DS_KYORAKU_PALETTES_P5[] =
{
    { L"Kyoraku P5", 0x23f8628, 0x23f8648, indexBleachDSSprites_ShunsuiKyoraku },
    { L"Kyoraku P5 - Slash Effects", 0x23f8648, 0x23f8668 },
};

const sGame_PaletteDataset BLEACH_DS_KYORAKU_PALETTES_P6[] =
{
    { L"Kyoraku P6", 0x23f8668, 0x23f8688, indexBleachDSSprites_ShunsuiKyoraku },
    { L"Kyoraku P6 - Slash Effects", 0x23f8688, 0x23f86a8 },
};

const sGame_PaletteDataset BLEACH_DS_KYORAKU_PALETTES_P7[] =
{
    { L"Kyoraku P7", 0x23f86a8, 0x23f86c8, indexBleachDSSprites_ShunsuiKyoraku },
    { L"Kyoraku P7 - Slash Effects", 0x23f86c8, 0x23f86e8 },
};

const sGame_PaletteDataset BLEACH_DS_KYORAKU_PALETTES_P8[] =
{
    { L"Kyoraku P8", 0x23f86e8, 0x23f8708, indexBleachDSSprites_ShunsuiKyoraku },
    { L"Kyoraku P8 - Slash Effects", 0x23f8708, 0x23f8728 },
};

const sGame_PaletteDataset BLEACH_DS_KYORAKU_PALETTES_EXTRAS[] =
{
    { L"Kyoraku - Kajin Tanka", 0x23f9534, 0x23f9554 },
    { L"Kyoraku - Chifu Kojin", 0x23f9554, 0x23f9574 },
};

const sDescTreeNode BLEACH_DS_KYORAKU_COLLECTION[] =
{
   { L"Palette 1", DESC_NODETYPE_TREE, (void*)BLEACH_DS_KYORAKU_PALETTES_P1, ARRAYSIZE(BLEACH_DS_KYORAKU_PALETTES_P1) },
   { L"Palette 2", DESC_NODETYPE_TREE, (void*)BLEACH_DS_KYORAKU_PALETTES_P2, ARRAYSIZE(BLEACH_DS_KYORAKU_PALETTES_P2) },
   { L"Palette 3", DESC_NODETYPE_TREE, (void*)BLEACH_DS_KYORAKU_PALETTES_P3, ARRAYSIZE(BLEACH_DS_KYORAKU_PALETTES_P3) },
   { L"Palette 4", DESC_NODETYPE_TREE, (void*)BLEACH_DS_KYORAKU_PALETTES_P4, ARRAYSIZE(BLEACH_DS_KYORAKU_PALETTES_P4) },
   { L"Palette 5", DESC_NODETYPE_TREE, (void*)BLEACH_DS_KYORAKU_PALETTES_P5, ARRAYSIZE(BLEACH_DS_KYORAKU_PALETTES_P5) },
   { L"Palette 6", DESC_NODETYPE_TREE, (void*)BLEACH_DS_KYORAKU_PALETTES_P6, ARRAYSIZE(BLEACH_DS_KYORAKU_PALETTES_P6) },
   { L"Palette 7", DESC_NODETYPE_TREE, (void*)BLEACH_DS_KYORAKU_PALETTES_P7, ARRAYSIZE(BLEACH_DS_KYORAKU_PALETTES_P7) },
   { L"Palette 8", DESC_NODETYPE_TREE, (void*)BLEACH_DS_KYORAKU_PALETTES_P8, ARRAYSIZE(BLEACH_DS_KYORAKU_PALETTES_P8) },
   { L"Extras", DESC_NODETYPE_TREE, (void*)BLEACH_DS_KYORAKU_PALETTES_EXTRAS, ARRAYSIZE(BLEACH_DS_KYORAKU_PALETTES_EXTRAS) },
};

// Yasutora "Chad" Sado Palettes
const sGame_PaletteDataset BLEACH_DS_CHAD_PALETTES_P1[] =
{
    { L"Chad P1", 0x2034aa0, 0x2034ac0, indexBleachDSSprites_YasutoraSado },
};

const sGame_PaletteDataset BLEACH_DS_CHAD_PALETTES_P2[] =
{
    { L"Chad P2", 0x2034ac0, 0x2034ae0, indexBleachDSSprites_YasutoraSado },
};

const sGame_PaletteDataset BLEACH_DS_CHAD_PALETTES_P3[] =
{
    { L"Chad P3", 0x2034ae0, 0x2034b00, indexBleachDSSprites_YasutoraSado },
};

const sGame_PaletteDataset BLEACH_DS_CHAD_PALETTES_P4[] =
{
    { L"Chad P4", 0x2034b00, 0x2034b20, indexBleachDSSprites_YasutoraSado },
};

const sGame_PaletteDataset BLEACH_DS_CHAD_PALETTES_P5[] =
{
    { L"Chad P5", 0x2034b20, 0x2034b40, indexBleachDSSprites_YasutoraSado },
};

const sGame_PaletteDataset BLEACH_DS_CHAD_PALETTES_P6[] =
{
    { L"Chad P6", 0x2034b40, 0x2034b60, indexBleachDSSprites_YasutoraSado },
};

const sGame_PaletteDataset BLEACH_DS_CHAD_PALETTES_P7[] =
{
    { L"Chad P7", 0x2034b60, 0x2034b80, indexBleachDSSprites_YasutoraSado },
};

const sGame_PaletteDataset BLEACH_DS_CHAD_PALETTES_P8[] =
{
    { L"Chad P8", 0x2034b80, 0x2034ba0, indexBleachDSSprites_YasutoraSado },
};

const sDescTreeNode BLEACH_DS_CHAD_COLLECTION[] =
{
   { L"Palette 1", DESC_NODETYPE_TREE, (void*)BLEACH_DS_CHAD_PALETTES_P1, ARRAYSIZE(BLEACH_DS_CHAD_PALETTES_P1) },
   { L"Palette 2", DESC_NODETYPE_TREE, (void*)BLEACH_DS_CHAD_PALETTES_P2, ARRAYSIZE(BLEACH_DS_CHAD_PALETTES_P2) },
   { L"Palette 3", DESC_NODETYPE_TREE, (void*)BLEACH_DS_CHAD_PALETTES_P3, ARRAYSIZE(BLEACH_DS_CHAD_PALETTES_P3) },
   { L"Palette 4", DESC_NODETYPE_TREE, (void*)BLEACH_DS_CHAD_PALETTES_P4, ARRAYSIZE(BLEACH_DS_CHAD_PALETTES_P4) },
   { L"Palette 5", DESC_NODETYPE_TREE, (void*)BLEACH_DS_CHAD_PALETTES_P5, ARRAYSIZE(BLEACH_DS_CHAD_PALETTES_P5) },
   { L"Palette 6", DESC_NODETYPE_TREE, (void*)BLEACH_DS_CHAD_PALETTES_P6, ARRAYSIZE(BLEACH_DS_CHAD_PALETTES_P6) },
   { L"Palette 7", DESC_NODETYPE_TREE, (void*)BLEACH_DS_CHAD_PALETTES_P7, ARRAYSIZE(BLEACH_DS_CHAD_PALETTES_P7) },
   { L"Palette 8", DESC_NODETYPE_TREE, (void*)BLEACH_DS_CHAD_PALETTES_P8, ARRAYSIZE(BLEACH_DS_CHAD_PALETTES_P8) },
};

//Ichigo Palettes
const sGame_PaletteDataset BLEACH_DS_ICHIGO_PALETTES_P1[] =
{
    { L"Ichigo P1", 0x219e8cc, 0x219e8ec, indexBleachDSSprites_IchigoKurosaki },
    { L"Ichigo P1 - Slash Effects", 0x219e8ec, 0x219e90c, indexBleachDSSprites_IchigoKurosaki, 0x02 },
    { L"Ichigo P1 - Tensa Zangetsu", 0x219e90c, 0x219e92c, indexBleachDSSprites_IchigoKurosaki, 0x03 },
    { L"Ichigo P1 - Tensa Zangetsu Slash Effects", 0x219e92c, 0x219e94c, indexBleachDSSprites_IchigoKurosaki, 0x04 },
};

const sGame_PaletteDataset BLEACH_DS_ICHIGO_PALETTES_P2[] =
{
    { L"Ichigo P2", 0x219e94c, 0x219e96c, indexBleachDSSprites_IchigoKurosaki },
    { L"Ichigo P2 - Slash Effects", 0x219e96c, 0x219e98c, indexBleachDSSprites_IchigoKurosaki, 0x02 },
    { L"Ichigo P2 - Tensa Zangetsu", 0x219e98c, 0x219e9ac, indexBleachDSSprites_IchigoKurosaki, 0x03 },
    { L"Ichigo P2 - Tensa Zangetsu Slash Effects", 0x219e9ac, 0x219e9cc, indexBleachDSSprites_IchigoKurosaki, 0x04 },
};

const sGame_PaletteDataset BLEACH_DS_ICHIGO_PALETTES_P3[] =
{
    { L"Ichigo P3", 0x219e9cc, 0x219e9ec, indexBleachDSSprites_IchigoKurosaki },
    { L"Ichigo P3 - Slash Effects", 0x219e9ec, 0x219ea0c, indexBleachDSSprites_IchigoKurosaki, 0x02 },
    { L"Ichigo P3 - Tensa Zangetsu", 0x219ea0c, 0x219ea2c, indexBleachDSSprites_IchigoKurosaki, 0x03 },
    { L"Ichigo P3 - Tensa Zangetsu Slash Effects", 0x219ea2c, 0x219ea4c, indexBleachDSSprites_IchigoKurosaki, 0x04 },
};

const sGame_PaletteDataset BLEACH_DS_ICHIGO_PALETTES_P4[] =
{
    { L"Ichigo P4", 0x219ea4c, 0x219ea6c, indexBleachDSSprites_IchigoKurosaki },
    { L"Ichigo P4 - Slash Effects", 0x219ea6c, 0x219ea8c, indexBleachDSSprites_IchigoKurosaki, 0x02 },
    { L"Ichigo P4 - Tensa Zangetsu", 0x219ea8c, 0x219eaac, indexBleachDSSprites_IchigoKurosaki, 0x03 },
    { L"Ichigo P4 - Tensa Zangetsu Slash Effects", 0x219eaac, 0x219eacc, indexBleachDSSprites_IchigoKurosaki, 0x04 },
};

const sGame_PaletteDataset BLEACH_DS_ICHIGO_PALETTES_P5[] =
{
    { L"Ichigo P5", 0x219eacc, 0x219eaec, indexBleachDSSprites_IchigoKurosaki },
    { L"Ichigo P5 - Slash Effects", 0x219eaec, 0x219eb0c, indexBleachDSSprites_IchigoKurosaki, 0x02 },
    { L"Ichigo P5 - Tensa Zangetsu", 0x219eb0c, 0x219eb2c, indexBleachDSSprites_IchigoKurosaki, 0x03 },
    { L"Ichigo P5 - Tensa Zangetsu Slash Effects", 0x219eb2c, 0x219eb4c, indexBleachDSSprites_IchigoKurosaki, 0x04 },
};

const sGame_PaletteDataset BLEACH_DS_ICHIGO_PALETTES_P6[] =
{
    { L"Ichigo P6", 0x219eb4c, 0x219eb6c, indexBleachDSSprites_IchigoKurosaki },
    { L"Ichigo P6 - Slash Effects", 0x219eb6c, 0x219eb8c, indexBleachDSSprites_IchigoKurosaki, 0x02 },
    { L"Ichigo P6 - Tensa Zangetsu", 0x219eb8c, 0x219ebac, indexBleachDSSprites_IchigoKurosaki, 0x03 },
    { L"Ichigo P6 - Tensa Zangetsu Slash Effects", 0x219ebac, 0x219ebcc, indexBleachDSSprites_IchigoKurosaki, 0x04 },
};


const sGame_PaletteDataset BLEACH_DS_ICHIGO_PALETTES_P7[] =
{
    { L"Ichigo P7", 0x219ebcc, 0x219ebec, indexBleachDSSprites_IchigoKurosaki },
    { L"Ichigo P7 - Slash Effects", 0x219ebec, 0x219ec0c, indexBleachDSSprites_IchigoKurosaki, 0x02 },
    { L"Ichigo P7 - Tensa Zangetsu", 0x219ec0c, 0x219ec2c, indexBleachDSSprites_IchigoKurosaki, 0x03 },
    { L"Ichigo P7 - Tensa Zangetsu Slash Effects", 0x219ec2c, 0x219ec4c, indexBleachDSSprites_IchigoKurosaki, 0x04 },
};


const sGame_PaletteDataset BLEACH_DS_ICHIGO_PALETTES_P8[] =
{
    { L"Ichigo P8", 0x219ec4c, 0x219ec6c, indexBleachDSSprites_IchigoKurosaki },
    { L"Ichigo P8 - Slash Effects", 0x219ec6c, 0x219ec8c, indexBleachDSSprites_IchigoKurosaki, 0x02 },
    { L"Ichigo P8 - Tensa Zangetsu", 0x219ec8c, 0x219ecac, indexBleachDSSprites_IchigoKurosaki, 0x03 },
    { L"Ichigo P8 - Tensa Zangetsu Slash Effects", 0x219ecac, 0x219eccc, indexBleachDSSprites_IchigoKurosaki, 0x04 },
};


const sGame_PaletteDataset BLEACH_DS_ICHIGO_PALETTES_EXTRAS[] =
{
    { L"Ichigo - Zangetsu", 0x21a04c4, 0x21a04e4, indexBleachDSSprites_IchigoKurosaki, 0x05 },
    { L"Ichigo - Rocks", 0x21a0504, 0x21a0524, indexBleachDSSprites_IchigoKurosaki, 0x01 },
};

const sDescTreeNode BLEACH_DS_ICHIGO_COLLECTION[] =
{
   { L"Palette 1", DESC_NODETYPE_TREE, (void*)BLEACH_DS_ICHIGO_PALETTES_P1, ARRAYSIZE(BLEACH_DS_ICHIGO_PALETTES_P1) },
   { L"Palette 2", DESC_NODETYPE_TREE, (void*)BLEACH_DS_ICHIGO_PALETTES_P2, ARRAYSIZE(BLEACH_DS_ICHIGO_PALETTES_P2) },
   { L"Palette 3", DESC_NODETYPE_TREE, (void*)BLEACH_DS_ICHIGO_PALETTES_P3, ARRAYSIZE(BLEACH_DS_ICHIGO_PALETTES_P3) },
   { L"Palette 4", DESC_NODETYPE_TREE, (void*)BLEACH_DS_ICHIGO_PALETTES_P4, ARRAYSIZE(BLEACH_DS_ICHIGO_PALETTES_P4) },
   { L"Palette 5", DESC_NODETYPE_TREE, (void*)BLEACH_DS_ICHIGO_PALETTES_P5, ARRAYSIZE(BLEACH_DS_ICHIGO_PALETTES_P5) },
   { L"Palette 6", DESC_NODETYPE_TREE, (void*)BLEACH_DS_ICHIGO_PALETTES_P6, ARRAYSIZE(BLEACH_DS_ICHIGO_PALETTES_P6) },
   { L"Palette 7", DESC_NODETYPE_TREE, (void*)BLEACH_DS_ICHIGO_PALETTES_P7, ARRAYSIZE(BLEACH_DS_ICHIGO_PALETTES_P7) },
   { L"Palette 8", DESC_NODETYPE_TREE, (void*)BLEACH_DS_ICHIGO_PALETTES_P8, ARRAYSIZE(BLEACH_DS_ICHIGO_PALETTES_P8) },
   { L"Extras", DESC_NODETYPE_TREE, (void*)BLEACH_DS_ICHIGO_PALETTES_EXTRAS, ARRAYSIZE(BLEACH_DS_ICHIGO_PALETTES_EXTRAS) },
};

//Renji Palettes
const sGame_PaletteDataset BLEACH_DS_RENJI_PALETTES_P1[] =
{
    { L"Renji P1", 0x24f2a2c, 0x24f2a4c, indexBleachDSSprites_RenjiAbarai },
    { L"Renji P1 - Slash Effects", 0x24f2a4c, 0x24f2a6c },
};

const sGame_PaletteDataset BLEACH_DS_RENJI_PALETTES_P2[] =
{
    { L"Renji P2", 0x24f2a6c, 0x24f2a8c, indexBleachDSSprites_RenjiAbarai },
    { L"Renji P2 - Slash Effects", 0x24f2a8c, 0x24f2aac },
};

const sGame_PaletteDataset BLEACH_DS_RENJI_PALETTES_P3[] =
{
    { L"Renji P3", 0x24f2aac, 0x24f2acc, indexBleachDSSprites_RenjiAbarai },
    { L"Renji P3 - Slash Effects", 0x24f2acc, 0x24f2aec },
};

const sGame_PaletteDataset BLEACH_DS_RENJI_PALETTES_P4[] =
{
    { L"Renji P4", 0x24f2aec, 0x24f2b0c, indexBleachDSSprites_RenjiAbarai },
    { L"Renji P4 - Slash Effects", 0x24f2b0c, 0x24f2b2c },
};

const sGame_PaletteDataset BLEACH_DS_RENJI_PALETTES_P5[] =
{
    { L"Renji P5", 0x24f2b2c, 0x24f2b4c, indexBleachDSSprites_RenjiAbarai },
    { L"Renji P5 - Slash Effects", 0x24f2b4c, 0x24f2b6c },
};

const sGame_PaletteDataset BLEACH_DS_RENJI_PALETTES_P6[] =
{
    { L"Renji P6", 0x24f2b6c, 0x24f2b8c, indexBleachDSSprites_RenjiAbarai },
    { L"Renji P6 - Slash Effects", 0x24f2b8c, 0x24f2bac },
};

const sGame_PaletteDataset BLEACH_DS_RENJI_PALETTES_P7[] =
{
    { L"Renji P7", 0x24f2bac, 0x24f2bcc, indexBleachDSSprites_RenjiAbarai },
    { L"Renji P7 - Slash Effects", 0x24f2bcc, 0x24f2bec },
};

const sGame_PaletteDataset BLEACH_DS_RENJI_PALETTES_P8[] =
{
    { L"Renji P8", 0x24f2bec, 0x24f2c0c, indexBleachDSSprites_RenjiAbarai },
    { L"Renji P8 - Slash Effects", 0x24f2c0c, 0x24f2c2c },
};

const sGame_PaletteDataset BLEACH_DS_RENJI_PALETTES_EXTRAS[] =
{
    { L"Renji - Hihio Zabimaru", 0x24f7fb4, 0x24f7fd4 },
};

const sDescTreeNode BLEACH_DS_RENJI_COLLECTION[] =
{
   { L"Palette 1", DESC_NODETYPE_TREE, (void*)BLEACH_DS_RENJI_PALETTES_P1, ARRAYSIZE(BLEACH_DS_RENJI_PALETTES_P1) },
   { L"Palette 2", DESC_NODETYPE_TREE, (void*)BLEACH_DS_RENJI_PALETTES_P2, ARRAYSIZE(BLEACH_DS_RENJI_PALETTES_P2) },
   { L"Palette 3", DESC_NODETYPE_TREE, (void*)BLEACH_DS_RENJI_PALETTES_P3, ARRAYSIZE(BLEACH_DS_RENJI_PALETTES_P3) },
   { L"Palette 4", DESC_NODETYPE_TREE, (void*)BLEACH_DS_RENJI_PALETTES_P4, ARRAYSIZE(BLEACH_DS_RENJI_PALETTES_P4) },
   { L"Palette 5", DESC_NODETYPE_TREE, (void*)BLEACH_DS_RENJI_PALETTES_P5, ARRAYSIZE(BLEACH_DS_RENJI_PALETTES_P5) },
   { L"Palette 6", DESC_NODETYPE_TREE, (void*)BLEACH_DS_RENJI_PALETTES_P6, ARRAYSIZE(BLEACH_DS_RENJI_PALETTES_P6) },
   { L"Palette 7", DESC_NODETYPE_TREE, (void*)BLEACH_DS_RENJI_PALETTES_P7, ARRAYSIZE(BLEACH_DS_RENJI_PALETTES_P7) },
   { L"Palette 8", DESC_NODETYPE_TREE, (void*)BLEACH_DS_RENJI_PALETTES_P8, ARRAYSIZE(BLEACH_DS_RENJI_PALETTES_P8) },
   { L"Extras", DESC_NODETYPE_TREE, (void*)BLEACH_DS_RENJI_PALETTES_EXTRAS, ARRAYSIZE(BLEACH_DS_RENJI_PALETTES_EXTRAS) },
};

//Kenpachi Palettes
const sGame_PaletteDataset BLEACH_DS_KENPACHI_PALETTES_P1[] =
{
    { L"Kenpachi P1", 0x23296f0, 0x2329710, indexBleachDSSprites_KenpachiZaraki },
    { L"Kenpanchi P1 - Slash Effects", 0x2329710, 0x2329730 },
    { L"Kenpanchi P1 - Spiritual Energy", 0x2329730, 0x2329750 },
};

const sGame_PaletteDataset BLEACH_DS_KENPACHI_PALETTES_P2[] =
{
    { L"Kenpachi P2", 0x2329750, 0x2329770, indexBleachDSSprites_KenpachiZaraki },
    { L"Kenpanchi P2 - Slash Effects", 0x2329770, 0x2329790 },
    { L"Kenpanchi P2 - Spiritual Energy", 0x2329790, 0x23297b0 },
};

const sGame_PaletteDataset BLEACH_DS_KENPACHI_PALETTES_P3[] =
{
    { L"Kenpachi P3", 0x23297b0, 0x23297d0, indexBleachDSSprites_KenpachiZaraki },
    { L"Kenpanchi P3 - Slash Effects", 0x23297d0, 0x23297f0 },
    { L"Kenpanchi P3 - Spiritual Energy", 0x23297f0, 0x2329810 },
};

const sGame_PaletteDataset BLEACH_DS_KENPACHI_PALETTES_P4[] =
{
    { L"Kenpachi P4", 0x2329810, 0x2329830, indexBleachDSSprites_KenpachiZaraki },
    { L"Kenpanchi P4 - Slash Effects", 0x2329830, 0x2329850 },
    { L"Kenpanchi P4 - Spiritual Energy", 0x2329850, 0x2329870 },
};

const sGame_PaletteDataset BLEACH_DS_KENPACHI_PALETTES_P5[] =
{
    { L"Kenpachi P5", 0x2329870, 0x2329890, indexBleachDSSprites_KenpachiZaraki },
    { L"Kenpanchi P5 - Slash Effects", 0x2329890, 0x23298b0 },
    { L"Kenpanchi P5 - Spiritual Energy", 0x23298b0, 0x23298d0 },
};

const sGame_PaletteDataset BLEACH_DS_KENPACHI_PALETTES_P6[] =
{
    { L"Kenpachi P6", 0x23298d0, 0x23298f0, indexBleachDSSprites_KenpachiZaraki },
    { L"Kenpanchi P6 - Slash Effects", 0x23298f0, 0x2329910 },
    { L"Kenpanchi P6 - Spiritual Energy", 0x2329910, 0x2329930 },
};

const sGame_PaletteDataset BLEACH_DS_KENPACHI_PALETTES_P7[] =
{
    { L"Kenpachi P7", 0x2329930, 0x2329950, indexBleachDSSprites_KenpachiZaraki },
    { L"Kenpanchi P7 - Slash Effects", 0x2329950, 0x2329970 },
    { L"Kenpanchi P7 - Spiritual Energy", 0x2329970, 0x2329990 },
};

const sGame_PaletteDataset BLEACH_DS_KENPACHI_PALETTES_P8[] =
{
    { L"Kenpachi P8", 0x2329990, 0x23299b0, indexBleachDSSprites_KenpachiZaraki },
    { L"Kenpanchi P8 - Slash Effects", 0x23299b0, 0x23299d0 },
    { L"Kenpanchi P8 - Spiritual Energy", 0x23299d0, 0x23299f0 },
};

const sDescTreeNode BLEACH_DS_KENPACHI_COLLECTION[] =
{
   { L"Palette 1", DESC_NODETYPE_TREE, (void*)BLEACH_DS_KENPACHI_PALETTES_P1, ARRAYSIZE(BLEACH_DS_KENPACHI_PALETTES_P1) },
   { L"Palette 2", DESC_NODETYPE_TREE, (void*)BLEACH_DS_KENPACHI_PALETTES_P2, ARRAYSIZE(BLEACH_DS_KENPACHI_PALETTES_P2) },
   { L"Palette 3", DESC_NODETYPE_TREE, (void*)BLEACH_DS_KENPACHI_PALETTES_P3, ARRAYSIZE(BLEACH_DS_KENPACHI_PALETTES_P3) },
   { L"Palette 4", DESC_NODETYPE_TREE, (void*)BLEACH_DS_KENPACHI_PALETTES_P4, ARRAYSIZE(BLEACH_DS_KENPACHI_PALETTES_P4) },
   { L"Palette 5", DESC_NODETYPE_TREE, (void*)BLEACH_DS_KENPACHI_PALETTES_P5, ARRAYSIZE(BLEACH_DS_KENPACHI_PALETTES_P5) },
   { L"Palette 6", DESC_NODETYPE_TREE, (void*)BLEACH_DS_KENPACHI_PALETTES_P6, ARRAYSIZE(BLEACH_DS_KENPACHI_PALETTES_P6) },
   { L"Palette 7", DESC_NODETYPE_TREE, (void*)BLEACH_DS_KENPACHI_PALETTES_P7, ARRAYSIZE(BLEACH_DS_KENPACHI_PALETTES_P7) },
   { L"Palette 8", DESC_NODETYPE_TREE, (void*)BLEACH_DS_KENPACHI_PALETTES_P8, ARRAYSIZE(BLEACH_DS_KENPACHI_PALETTES_P8) },
};

//Yachiru
const sGame_PaletteDataset BLEACH_DS_YACHIRU_PALETTES_P1[] =
{
    { L"Yachiru P1", 0x2643c7c, 0x2643c9c, indexBleachDSSprites_YachiruKusajishi },
    { L"Yachiru P1 - Slash Effects", 0x2643c9c, 0x2643cbc },
};

const sGame_PaletteDataset BLEACH_DS_YACHIRU_PALETTES_P2[] =
{
    { L"Yachiru P2", 0x2643cbc, 0x2643cdc, indexBleachDSSprites_YachiruKusajishi },
    { L"Yachiru P2 - Slash Effects", 0x2643cdc, 0x2643cfc },
};

const sGame_PaletteDataset BLEACH_DS_YACHIRU_PALETTES_P3[] =
{
    { L"Yachiru P3", 0x2643cfc, 0x2643d1c, indexBleachDSSprites_YachiruKusajishi },
    { L"Yachiru P3 - Slash Effects", 0x2643d1c, 0x2643d3c },
};

const sGame_PaletteDataset BLEACH_DS_YACHIRU_PALETTES_P4[] =
{
    { L"Yachiru P4", 0x2643d3c, 0x2643d5c, indexBleachDSSprites_YachiruKusajishi },
    { L"Yachiru P4 - Slash Effects", 0x2643d5c, 0x2643d7c },
};

const sGame_PaletteDataset BLEACH_DS_YACHIRU_PALETTES_P5[] =
{
    { L"Yachiru P5", 0x2643d7c, 0x2643d9c, indexBleachDSSprites_YachiruKusajishi },
    { L"Yachiru P5 - Slash Effects", 0x2643d9c, 0x2643dbc },
};

const sGame_PaletteDataset BLEACH_DS_YACHIRU_PALETTES_P6[] =
{
    { L"Yachiru P6", 0x2643dbc, 0x2643ddc, indexBleachDSSprites_YachiruKusajishi },
    { L"Yachiru P6 - Slash Effects", 0x2643ddc, 0x2643dfc },
};

const sGame_PaletteDataset BLEACH_DS_YACHIRU_PALETTES_P7[] =
{
    { L"Yachiru P7", 0x2643dfc, 0x2643e1c, indexBleachDSSprites_YachiruKusajishi },
    { L"Yachiru P7 - Slash Effects", 0x2643e1c, 0x2643e3c },
};

const sGame_PaletteDataset BLEACH_DS_YACHIRU_PALETTES_P8[] =
{
    { L"Yachiru P8", 0x2643e3c, 0x2643e5c, indexBleachDSSprites_YachiruKusajishi },
    { L"Yachiru P8 - Slash Effects", 0x2643e5c, 0x2643e7c },
};

const sGame_PaletteDataset BLEACH_DS_YACHIRU_PALETTES_EXTRAS[] =
{
    { L"Yachiru - Yahoo~~!", 0x2645fa4, 0x2645fc4 },
};

const sDescTreeNode BLEACH_DS_YACHIRU_COLLECTION[] =
{
   { L"Palette 1", DESC_NODETYPE_TREE, (void*)BLEACH_DS_YACHIRU_PALETTES_P1, ARRAYSIZE(BLEACH_DS_YACHIRU_PALETTES_P1) },
   { L"Palette 2", DESC_NODETYPE_TREE, (void*)BLEACH_DS_YACHIRU_PALETTES_P2, ARRAYSIZE(BLEACH_DS_YACHIRU_PALETTES_P2) },
   { L"Palette 3", DESC_NODETYPE_TREE, (void*)BLEACH_DS_YACHIRU_PALETTES_P3, ARRAYSIZE(BLEACH_DS_YACHIRU_PALETTES_P3) },
   { L"Palette 4", DESC_NODETYPE_TREE, (void*)BLEACH_DS_YACHIRU_PALETTES_P4, ARRAYSIZE(BLEACH_DS_YACHIRU_PALETTES_P4) },
   { L"Palette 5", DESC_NODETYPE_TREE, (void*)BLEACH_DS_YACHIRU_PALETTES_P5, ARRAYSIZE(BLEACH_DS_YACHIRU_PALETTES_P5) },
   { L"Palette 6", DESC_NODETYPE_TREE, (void*)BLEACH_DS_YACHIRU_PALETTES_P6, ARRAYSIZE(BLEACH_DS_YACHIRU_PALETTES_P6) },
   { L"Palette 7", DESC_NODETYPE_TREE, (void*)BLEACH_DS_YACHIRU_PALETTES_P7, ARRAYSIZE(BLEACH_DS_YACHIRU_PALETTES_P7) },
   { L"Palette 8", DESC_NODETYPE_TREE, (void*)BLEACH_DS_YACHIRU_PALETTES_P8, ARRAYSIZE(BLEACH_DS_YACHIRU_PALETTES_P8) },
   { L"Extras", DESC_NODETYPE_TREE, (void*)BLEACH_DS_YACHIRU_PALETTES_EXTRAS, ARRAYSIZE(BLEACH_DS_YACHIRU_PALETTES_EXTRAS) },
};

//Kon Palettes
const sGame_PaletteDataset BLEACH_DS_KON_PALETTES_P1[] =
{
    { L"Kon P1", 0x236e22c, 0x236e24c, indexBleachDSSprites_Kon },
};

const sGame_PaletteDataset BLEACH_DS_KON_PALETTES_P2[] =
{
    { L"Kon P2", 0x236e24c, 0x236e26c, indexBleachDSSprites_Kon },
};

const sGame_PaletteDataset BLEACH_DS_KON_PALETTES_P3[] =
{
    { L"Kon P3", 0x236e26c, 0x236e28c, indexBleachDSSprites_Kon },
};

const sGame_PaletteDataset BLEACH_DS_KON_PALETTES_P4[] =
{
    { L"Kon P4", 0x236e28c, 0x236e2ac, indexBleachDSSprites_Kon },
};

const sGame_PaletteDataset BLEACH_DS_KON_PALETTES_P5[] =
{
    { L"Kon P5", 0x236e2ac, 0x236e2cc, indexBleachDSSprites_Kon },
};

const sGame_PaletteDataset BLEACH_DS_KON_PALETTES_P6[] =
{
    { L"Kon P6", 0x236e2cc, 0x236e2ec, indexBleachDSSprites_Kon },
};

const sGame_PaletteDataset BLEACH_DS_KON_PALETTES_P7[] =
{
    { L"Kon P7", 0x236e2ec, 0x236e30c, indexBleachDSSprites_Kon },
};

const sGame_PaletteDataset BLEACH_DS_KON_PALETTES_P8[] =
{
    { L"Kon P8", 0x236e30c, 0x236e32c, indexBleachDSSprites_Kon },
};

const sGame_PaletteDataset BLEACH_DS_KON_PALETTES_EXTRAS[] =
{
    { L"Kon - Special Spirit", 0x236eb28, 0x236eb48 },
};

const sDescTreeNode BLEACH_DS_KON_COLLECTION[] =
{
   { L"Palette 1", DESC_NODETYPE_TREE, (void*)BLEACH_DS_KON_PALETTES_P1, ARRAYSIZE(BLEACH_DS_KON_PALETTES_P1) },
   { L"Palette 2", DESC_NODETYPE_TREE, (void*)BLEACH_DS_KON_PALETTES_P2, ARRAYSIZE(BLEACH_DS_KON_PALETTES_P2) },
   { L"Palette 3", DESC_NODETYPE_TREE, (void*)BLEACH_DS_KON_PALETTES_P3, ARRAYSIZE(BLEACH_DS_KON_PALETTES_P3) },
   { L"Palette 4", DESC_NODETYPE_TREE, (void*)BLEACH_DS_KON_PALETTES_P4, ARRAYSIZE(BLEACH_DS_KON_PALETTES_P4) },
   { L"Palette 5", DESC_NODETYPE_TREE, (void*)BLEACH_DS_KON_PALETTES_P5, ARRAYSIZE(BLEACH_DS_KON_PALETTES_P5) },
   { L"Palette 6", DESC_NODETYPE_TREE, (void*)BLEACH_DS_KON_PALETTES_P6, ARRAYSIZE(BLEACH_DS_KON_PALETTES_P6) },
   { L"Palette 7", DESC_NODETYPE_TREE, (void*)BLEACH_DS_KON_PALETTES_P7, ARRAYSIZE(BLEACH_DS_KON_PALETTES_P7) },
   { L"Palette 8", DESC_NODETYPE_TREE, (void*)BLEACH_DS_KON_PALETTES_P8, ARRAYSIZE(BLEACH_DS_KON_PALETTES_P8) },
   { L"Extras", DESC_NODETYPE_TREE, (void*)BLEACH_DS_KON_PALETTES_EXTRAS, ARRAYSIZE(BLEACH_DS_KON_PALETTES_EXTRAS) },
};

//Rukia Palettes
const sGame_PaletteDataset BLEACH_DS_RUKIA_PALETTES_P1[] =
{
    { L"Rukia P1", 0x2519264, 0x2519284, indexBleachDSSprites_RukiaKuchiki },
    { L"Rukia P1 - Kon", 0x2519284, 0x25192a4, indexBleachDSSprites_Kon, 0x00 },
    { L"Rukia P1 - Sode no Shirayuki", 0x25192a4, 0x25192c4 },
};

const sGame_PaletteDataset BLEACH_DS_RUKIA_PALETTES_P2[] =
{
    { L"Rukia P2", 0x25192c4, 0x25192e4, indexBleachDSSprites_RukiaKuchiki },
    { L"Rukia P2 - Kon", 0x25192e4, 0x2519304, indexBleachDSSprites_Kon, 0x00 },
    { L"Rukia P2 - Sode no Shirayuki", 0x2519304, 0x2519324 },
};

const sGame_PaletteDataset BLEACH_DS_RUKIA_PALETTES_P3[] =
{
    { L"Rukia P3", 0x2519324, 0x2519344, indexBleachDSSprites_RukiaKuchiki },
    { L"Rukia P3 - Kon", 0x2519344, 0x2519364, indexBleachDSSprites_Kon, 0x00 },
    { L"Rukia P3 - Sode no Shirayuki", 0x2519364, 0x2519384 },
};

const sGame_PaletteDataset BLEACH_DS_RUKIA_PALETTES_P4[] =
{
    { L"Rukia P4", 0x2519384, 0x25193a4, indexBleachDSSprites_RukiaKuchiki },
    { L"Rukia P4 - Kon", 0x25193a4, 0x25193c4, indexBleachDSSprites_Kon, 0x00 },
    { L"Rukia P4 - Sode no Shirayuki", 0x25193c4, 0x25193e4 },
};

const sGame_PaletteDataset BLEACH_DS_RUKIA_PALETTES_P5[] =
{
    { L"Rukia P5", 0x25193e4, 0x2519404, indexBleachDSSprites_RukiaKuchiki },
    { L"Rukia P5 - Kon", 0x2519404, 0x2519424, indexBleachDSSprites_Kon, 0x00 },
    { L"Rukia P5 - Sode no Shirayuki", 0x2519424, 0x2519444 },
};

const sGame_PaletteDataset BLEACH_DS_RUKIA_PALETTES_P6[] =
{
    { L"Rukia P6", 0x2519444, 0x2519464, indexBleachDSSprites_RukiaKuchiki },
    { L"Rukia P6 - Kon", 0x2519464, 0x2519484, indexBleachDSSprites_Kon, 0x00 },
    { L"Rukia P6 - Sode no Shirayuki", 0x2519484, 0x25194a4 },
};

const sGame_PaletteDataset BLEACH_DS_RUKIA_PALETTES_P7[] =
{
    { L"Rukia P7", 0x25194a4, 0x25194c4, indexBleachDSSprites_RukiaKuchiki },
    { L"Rukia P7 - Kon", 0x25194c4, 0x25194e4, indexBleachDSSprites_Kon, 0x00 },
    { L"Rukia P7 - Sode no Shirayuki", 0x25194e4, 0x2519504 },
};

const sGame_PaletteDataset BLEACH_DS_RUKIA_PALETTES_P8[] =
{
    { L"Rukia P8", 0x2519504, 0x2519524, indexBleachDSSprites_RukiaKuchiki },
    { L"Rukia P8 - Kon", 0x2519524, 0x2519544, indexBleachDSSprites_Kon, 0x00 },
    { L"Rukia P8 - Sode no Shirayuki", 0x2519544, 0x2519564 },
};

const sGame_PaletteDataset BLEACH_DS_RUKIA_PALETTES_EXTRAS[] =
{
    { L"Rukia - Rolling Kon", 0x2519f34, 0x2519f54, indexBleachDSSprites_Kon, 0x00 },
};

const sDescTreeNode BLEACH_DS_RUKIA_COLLECTION[] =
{
   { L"Palette 1", DESC_NODETYPE_TREE, (void*)BLEACH_DS_RUKIA_PALETTES_P1, ARRAYSIZE(BLEACH_DS_RUKIA_PALETTES_P1) },
   { L"Palette 2", DESC_NODETYPE_TREE, (void*)BLEACH_DS_RUKIA_PALETTES_P2, ARRAYSIZE(BLEACH_DS_RUKIA_PALETTES_P2) },
   { L"Palette 3", DESC_NODETYPE_TREE, (void*)BLEACH_DS_RUKIA_PALETTES_P3, ARRAYSIZE(BLEACH_DS_RUKIA_PALETTES_P3) },
   { L"Palette 4", DESC_NODETYPE_TREE, (void*)BLEACH_DS_RUKIA_PALETTES_P4, ARRAYSIZE(BLEACH_DS_RUKIA_PALETTES_P4) },
   { L"Palette 5", DESC_NODETYPE_TREE, (void*)BLEACH_DS_RUKIA_PALETTES_P5, ARRAYSIZE(BLEACH_DS_RUKIA_PALETTES_P5) },
   { L"Palette 6", DESC_NODETYPE_TREE, (void*)BLEACH_DS_RUKIA_PALETTES_P6, ARRAYSIZE(BLEACH_DS_RUKIA_PALETTES_P6) },
   { L"Palette 7", DESC_NODETYPE_TREE, (void*)BLEACH_DS_RUKIA_PALETTES_P7, ARRAYSIZE(BLEACH_DS_RUKIA_PALETTES_P7) },
   { L"Palette 8", DESC_NODETYPE_TREE, (void*)BLEACH_DS_RUKIA_PALETTES_P8, ARRAYSIZE(BLEACH_DS_RUKIA_PALETTES_P8) },
   { L"Extras", DESC_NODETYPE_TREE, (void*)BLEACH_DS_RUKIA_PALETTES_EXTRAS, ARRAYSIZE(BLEACH_DS_RUKIA_PALETTES_EXTRAS) },
};

//Hitsugaya Palettes
const sGame_PaletteDataset BLEACH_DS_HITSUGAYA_PALETTES_P1[] =
{
    { L"Hitsugaya P1", 0x2147624, 0x2147644, indexBleachDSSprites_ToshirOHitsugaya },
    { L"Hitsugaya P1 - Slash Effects", 0x2147644, 0x2147664 },
};

const sGame_PaletteDataset BLEACH_DS_HITSUGAYA_PALETTES_P2[] =
{
    { L"Hitsugaya P2", 0x2147664, 0x2147684, indexBleachDSSprites_ToshirOHitsugaya },
    { L"Hitsugaya P2 - Slash Effects", 0x2147684, 0x21476a4 },
};

const sGame_PaletteDataset BLEACH_DS_HITSUGAYA_PALETTES_P3[] =
{
    { L"Hitsugaya P3", 0x21476a4, 0x21476c4, indexBleachDSSprites_ToshirOHitsugaya },
    { L"Hitsugaya P3 - Slash Effects", 0x21476c4, 0x21476e4 },
};

const sGame_PaletteDataset BLEACH_DS_HITSUGAYA_PALETTES_P4[] =
{
    { L"Hitsugaya P4", 0x21476e4, 0x2147704, indexBleachDSSprites_ToshirOHitsugaya },
    { L"Hitsugaya P4 - Slash Effects", 0x2147704, 0x2147724 },
};

const sGame_PaletteDataset BLEACH_DS_HITSUGAYA_PALETTES_P5[] =
{
    { L"Hitsugaya P5", 0x2147724, 0x2147744, indexBleachDSSprites_ToshirOHitsugaya },
    { L"Hitsugaya P5 - Slash Effects", 0x2147744, 0x2147764 },
};

const sGame_PaletteDataset BLEACH_DS_HITSUGAYA_PALETTES_P6[] =
{
    { L"Hitsugaya P6", 0x2147764, 0x2147784, indexBleachDSSprites_ToshirOHitsugaya },
    { L"Hitsugaya P6 - Slash Effects", 0x2147784, 0x21477a4 },
};

const sGame_PaletteDataset BLEACH_DS_HITSUGAYA_PALETTES_P7[] =
{
    { L"Hitsugaya P7", 0x21477a4, 0x21477c4, indexBleachDSSprites_ToshirOHitsugaya },
    { L"Hitsugaya P7 - Slash Effects", 0x21477c4, 0x21477e4 },
};

const sGame_PaletteDataset BLEACH_DS_HITSUGAYA_PALETTES_P8[] =
{
    { L"Hitsugaya P8", 0x21477e4, 0x2147804, indexBleachDSSprites_ToshirOHitsugaya },
    { L"Hitsugaya P8 - Slash Effects", 0x2147804, 0x2147824 },
};

const sGame_PaletteDataset BLEACH_DS_HITSUGAYA_PALETTES_EXTRAS[] =
{
    { L"Hitsugaya - Hyoryu Toha", 0x2149538, 0x2149558 },
    { L"Hitsugaya - Daiguren Hyorinmaru", 0x2149598, 0x21495b8 },
    { L"Hitsugaya - Daiguren Hyorinmaru Wings", 0x2161398, 0x21613b8 },
};

const sDescTreeNode BLEACH_DS_HITSUGAYA_COLLECTION[] =
{
   { L"Palette 1", DESC_NODETYPE_TREE, (void*)BLEACH_DS_HITSUGAYA_PALETTES_P1, ARRAYSIZE(BLEACH_DS_HITSUGAYA_PALETTES_P1) },
   { L"Palette 2", DESC_NODETYPE_TREE, (void*)BLEACH_DS_HITSUGAYA_PALETTES_P2, ARRAYSIZE(BLEACH_DS_HITSUGAYA_PALETTES_P2) },
   { L"Palette 3", DESC_NODETYPE_TREE, (void*)BLEACH_DS_HITSUGAYA_PALETTES_P3, ARRAYSIZE(BLEACH_DS_HITSUGAYA_PALETTES_P3) },
   { L"Palette 4", DESC_NODETYPE_TREE, (void*)BLEACH_DS_HITSUGAYA_PALETTES_P4, ARRAYSIZE(BLEACH_DS_HITSUGAYA_PALETTES_P4) },
   { L"Palette 5", DESC_NODETYPE_TREE, (void*)BLEACH_DS_HITSUGAYA_PALETTES_P5, ARRAYSIZE(BLEACH_DS_HITSUGAYA_PALETTES_P5) },
   { L"Palette 6", DESC_NODETYPE_TREE, (void*)BLEACH_DS_HITSUGAYA_PALETTES_P6, ARRAYSIZE(BLEACH_DS_HITSUGAYA_PALETTES_P6) },
   { L"Palette 7", DESC_NODETYPE_TREE, (void*)BLEACH_DS_HITSUGAYA_PALETTES_P7, ARRAYSIZE(BLEACH_DS_HITSUGAYA_PALETTES_P7) },
   { L"Palette 8", DESC_NODETYPE_TREE, (void*)BLEACH_DS_HITSUGAYA_PALETTES_P8, ARRAYSIZE(BLEACH_DS_HITSUGAYA_PALETTES_P8) },
   { L"Extras", DESC_NODETYPE_TREE, (void*)BLEACH_DS_HITSUGAYA_PALETTES_EXTRAS, ARRAYSIZE(BLEACH_DS_HITSUGAYA_PALETTES_EXTRAS) },
};

//Hinamori Palettes
const sGame_PaletteDataset BLEACH_DS_HINAMORI_PALETTES_P1[] =
{
    { L"Hinamori P1", 0x20d5a40, 0x20d5a60, indexBleachDSSprites_MomoHinamori },
    { L"Hinamori P1 - Slash Effects", 0x20d5a60, 0x20d5a80 },
    { L"Hinamori P1 - Tobiume", 0x20d5a80, 0x20d5aa0 },
};

const sGame_PaletteDataset BLEACH_DS_HINAMORI_PALETTES_P2[] =
{
    { L"Hinamori P2", 0x20d5aa0, 0x20d5ac0, indexBleachDSSprites_MomoHinamori },
    { L"Hinamori P2 - Slash Effects", 0x20d5ac0, 0x20d5ae0 },
    { L"Hinamori P2 - Tobiume", 0x20d5ae0, 0x20d5b00 },
};

const sGame_PaletteDataset BLEACH_DS_HINAMORI_PALETTES_P3[] =
{
    { L"Hinamori P3", 0x20d5b00, 0x20d5b20, indexBleachDSSprites_MomoHinamori },
    { L"Hinamori P3 - Slash Effects", 0x20d5b20, 0x20d5b40 },
    { L"Hinamori P3 - Tobiume", 0x20d5b40, 0x20d5b60 },
};

const sGame_PaletteDataset BLEACH_DS_HINAMORI_PALETTES_P4[] =
{
    { L"Hinamori P4", 0x20d5b60, 0x20d5b80, indexBleachDSSprites_MomoHinamori },
    { L"Hinamori P4 - Slash Effects", 0x20d5b80, 0x20d5ba0 },
    { L"Hinamori P4 - Tobiume", 0x20d5ba0, 0x20d5bc0 },
};

const sGame_PaletteDataset BLEACH_DS_HINAMORI_PALETTES_P5[] =
{
    { L"Hinamori P5", 0x20d5bc0, 0x20d5be0, indexBleachDSSprites_MomoHinamori },
    { L"Hinamori P5 - Slash Effects", 0x20d5be0, 0x20d5c00 },
    { L"Hinamori P5 - Tobiume", 0x20d5c00, 0x20d5c20 },
};

const sGame_PaletteDataset BLEACH_DS_HINAMORI_PALETTES_P6[] =
{
    { L"Hinamori P6", 0x20d5c20, 0x20d5c40, indexBleachDSSprites_MomoHinamori },
    { L"Hinamori P6 - Slash Effects", 0x20d5c40, 0x20d5c60 },
    { L"Hinamori P6 - Tobiume", 0x20d5c60, 0x20d5c80 },
};

const sGame_PaletteDataset BLEACH_DS_HINAMORI_PALETTES_P7[] =
{
    { L"Hinamori P7", 0x20d5c80, 0x20d5ca0, indexBleachDSSprites_MomoHinamori },
    { L"Hinamori P7 - Slash Effects", 0x20d5ca0, 0x20d5cc0 },
    { L"Hinamori P7 - Tobiume", 0x20d5cc0, 0x20d5ce0 },
};

const sGame_PaletteDataset BLEACH_DS_HINAMORI_PALETTES_P8[] =
{
    { L"Hinamori P8", 0x20d5ce0, 0x20d5d00, indexBleachDSSprites_MomoHinamori },
    { L"Hinamori P8 - Slash Effects", 0x20d5d00, 0x20d5d20 },
    { L"Hinamori P8 - Tobiume", 0x20d5d20, 0x20d5d40 },
};

const sDescTreeNode BLEACH_DS_HINAMORI_COLLECTION[] =
{
   { L"Palette 1", DESC_NODETYPE_TREE, (void*)BLEACH_DS_HINAMORI_PALETTES_P1, ARRAYSIZE(BLEACH_DS_HINAMORI_PALETTES_P1) },
   { L"Palette 2", DESC_NODETYPE_TREE, (void*)BLEACH_DS_HINAMORI_PALETTES_P2, ARRAYSIZE(BLEACH_DS_HINAMORI_PALETTES_P2) },
   { L"Palette 3", DESC_NODETYPE_TREE, (void*)BLEACH_DS_HINAMORI_PALETTES_P3, ARRAYSIZE(BLEACH_DS_HINAMORI_PALETTES_P3) },
   { L"Palette 4", DESC_NODETYPE_TREE, (void*)BLEACH_DS_HINAMORI_PALETTES_P4, ARRAYSIZE(BLEACH_DS_HINAMORI_PALETTES_P4) },
   { L"Palette 5", DESC_NODETYPE_TREE, (void*)BLEACH_DS_HINAMORI_PALETTES_P5, ARRAYSIZE(BLEACH_DS_HINAMORI_PALETTES_P5) },
   { L"Palette 6", DESC_NODETYPE_TREE, (void*)BLEACH_DS_HINAMORI_PALETTES_P6, ARRAYSIZE(BLEACH_DS_HINAMORI_PALETTES_P6) },
   { L"Palette 7", DESC_NODETYPE_TREE, (void*)BLEACH_DS_HINAMORI_PALETTES_P7, ARRAYSIZE(BLEACH_DS_HINAMORI_PALETTES_P7) },
   { L"Palette 8", DESC_NODETYPE_TREE, (void*)BLEACH_DS_HINAMORI_PALETTES_P8, ARRAYSIZE(BLEACH_DS_HINAMORI_PALETTES_P8) },
};

//Orihime Palttes
const sGame_PaletteDataset BLEACH_DS_ORIHIME_PALETTES_P1[] =
{
    { L"Orihime P1", 0x2475974, 0x2475994, indexBleachDSSprites_OrihimeInoue },
    { L"Orihime P1 - Attack Effects 1", 0x2475994, 0x24759b4 },
    { L"Orihime P1 - Attack Effects 2", 0x24759b4, 0x24759d4 },
};

const sGame_PaletteDataset BLEACH_DS_ORIHIME_PALETTES_P2[] =
{
    { L"Orihime P2", 0x24759d4, 0x24759f4, indexBleachDSSprites_OrihimeInoue },
    { L"Orihime P2 - Attack Effects 1", 0x24759f4, 0x2475a14 },
    { L"Orihime P2 - Attack Effects 2", 0x2475a14, 0x2475a34 },
};

const sGame_PaletteDataset BLEACH_DS_ORIHIME_PALETTES_P3[] =
{
    { L"Orihime P3", 0x2475a34, 0x2475a54, indexBleachDSSprites_OrihimeInoue },
    { L"Orihime P3 - Attack Effects 1", 0x2475a54, 0x2475a74 },
    { L"Orihime P3 - Attack Effects 2", 0x2475a74, 0x2475a94 },
};

const sGame_PaletteDataset BLEACH_DS_ORIHIME_PALETTES_P4[] =
{
    { L"Orihime P4", 0x2475a94, 0x2475ab4, indexBleachDSSprites_OrihimeInoue },
    { L"Orihime P4 - Attack Effects 1", 0x2475ab4, 0x2475ad4 },
    { L"Orihime P4 - Attack Effects 2", 0x2475ad4, 0x2475af4 },
};

const sGame_PaletteDataset BLEACH_DS_ORIHIME_PALETTES_P5[] =
{
    { L"Orihime P5", 0x2475af4, 0x2475b14, indexBleachDSSprites_OrihimeInoue },
    { L"Orihime P5 - Attack Effects 1", 0x2475b14, 0x2475b34 },
    { L"Orihime P5 - Attack Effects 2", 0x2475b34, 0x2475b54 },
};

const sGame_PaletteDataset BLEACH_DS_ORIHIME_PALETTES_P6[] =
{
    { L"Orihime P6", 0x2475b54, 0x2475b74, indexBleachDSSprites_OrihimeInoue },
    { L"Orihime P6 - Attack Effects 1", 0x2475b74, 0x2475b94 },
    { L"Orihime P6 - Attack Effects 2", 0x2475b94, 0x2475bb4 },
};

const sGame_PaletteDataset BLEACH_DS_ORIHIME_PALETTES_P7[] =
{
    { L"Orihime P7", 0x2475bb4, 0x2475bd4, indexBleachDSSprites_OrihimeInoue },
    { L"Orihime P7 - Attack Effects 1", 0x2475bd4, 0x2475bf4 },
    { L"Orihime P7 - Attack Effects 2", 0x2475bf4, 0x2475c14 },
};

const sGame_PaletteDataset BLEACH_DS_ORIHIME_PALETTES_P8[] =
{
    { L"Orihime P8", 0x2475c14, 0x2475c34, indexBleachDSSprites_OrihimeInoue },
    { L"Orihime P8 - Attack Effects 1", 0x2475c34, 0x2475c54 },
    { L"Orihime P8 - Attack Effects 2", 0x2475c54, 0x2475c74 },
};

const sGame_PaletteDataset BLEACH_DS_ORIHIME_PALETTES_EXTRAS[] =
{
    { L"Orihime - Gale Chant", 0x24787f4, 0x2478814 },
    { L"Orihime - Sotenkishun", 0x2478814, 0x2478834 },
    { L"Orihime - Rejection Chant", 0x2478834, 0x2478854 },
};

const sDescTreeNode BLEACH_DS_ORIHIME_COLLECTION[] =
{
   { L"Palette 1", DESC_NODETYPE_TREE, (void*)BLEACH_DS_ORIHIME_PALETTES_P1, ARRAYSIZE(BLEACH_DS_ORIHIME_PALETTES_P1) },
   { L"Palette 2", DESC_NODETYPE_TREE, (void*)BLEACH_DS_ORIHIME_PALETTES_P2, ARRAYSIZE(BLEACH_DS_ORIHIME_PALETTES_P2) },
   { L"Palette 3", DESC_NODETYPE_TREE, (void*)BLEACH_DS_ORIHIME_PALETTES_P3, ARRAYSIZE(BLEACH_DS_ORIHIME_PALETTES_P3) },
   { L"Palette 4", DESC_NODETYPE_TREE, (void*)BLEACH_DS_ORIHIME_PALETTES_P4, ARRAYSIZE(BLEACH_DS_ORIHIME_PALETTES_P4) },
   { L"Palette 5", DESC_NODETYPE_TREE, (void*)BLEACH_DS_ORIHIME_PALETTES_P5, ARRAYSIZE(BLEACH_DS_ORIHIME_PALETTES_P5) },
   { L"Palette 6", DESC_NODETYPE_TREE, (void*)BLEACH_DS_ORIHIME_PALETTES_P6, ARRAYSIZE(BLEACH_DS_ORIHIME_PALETTES_P6) },
   { L"Palette 7", DESC_NODETYPE_TREE, (void*)BLEACH_DS_ORIHIME_PALETTES_P7, ARRAYSIZE(BLEACH_DS_ORIHIME_PALETTES_P7) },
   { L"Palette 8", DESC_NODETYPE_TREE, (void*)BLEACH_DS_ORIHIME_PALETTES_P8, ARRAYSIZE(BLEACH_DS_ORIHIME_PALETTES_P8) },
   { L"Extras", DESC_NODETYPE_TREE, (void*)BLEACH_DS_ORIHIME_PALETTES_EXTRAS, ARRAYSIZE(BLEACH_DS_ORIHIME_PALETTES_EXTRAS) },
};

//Soi Fon Palettes
const sGame_PaletteDataset BLEACH_DS_SOIFON_PALETTES_P1[] =
{
    { L"Soi Fon P1", 0x2532ef4, 0x2532f14, indexBleachDSSprites_SuiFeng },
    { L"Soi Fon P1 - Slash Effects", 0x2532f14, 0x2532f34 },
};

const sGame_PaletteDataset BLEACH_DS_SOIFON_PALETTES_P2[] =
{
    { L"Soi Fon P2", 0x2532f34, 0x2532f54, indexBleachDSSprites_SuiFeng },
    { L"Soi Fon P2 - Slash Effects", 0x2532f54, 0x2532f74 },
};

const sGame_PaletteDataset BLEACH_DS_SOIFON_PALETTES_P3[] =
{
    { L"Soi Fon P3", 0x2532f74, 0x2532f94, indexBleachDSSprites_SuiFeng },
    { L"Soi Fon P3 - Slash Effects", 0x2532f94, 0x2532fb4 },
};

const sGame_PaletteDataset BLEACH_DS_SOIFON_PALETTES_P4[] =
{
    { L"Soi Fon P4", 0x2532fb4, 0x2532fd4, indexBleachDSSprites_SuiFeng },
    { L"Soi Fon P4 - Slash Effects", 0x2532fd4, 0x2532ff4 },
};

const sGame_PaletteDataset BLEACH_DS_SOIFON_PALETTES_P5[] =
{
    { L"Soi Fon P5", 0x2532ff4, 0x2533014, indexBleachDSSprites_SuiFeng },
    { L"Soi Fon P5 - Slash Effects", 0x2533014, 0x2533034 },
};

const sGame_PaletteDataset BLEACH_DS_SOIFON_PALETTES_P6[] =
{
    { L"Soi Fon P6", 0x2533034, 0x2533054, indexBleachDSSprites_SuiFeng },
    { L"Soi Fon P6 - Slash Effects", 0x2533054, 0x2533074 },
};

const sGame_PaletteDataset BLEACH_DS_SOIFON_PALETTES_P7[] =
{
    { L"Soi Fon P7", 0x2533074, 0x2533094, indexBleachDSSprites_SuiFeng },
    { L"Soi Fon P7 - Slash Effects", 0x2533094, 0x25330b4 },
};

const sGame_PaletteDataset BLEACH_DS_SOIFON_PALETTES_P8[] =
{
    { L"Soi Fon P8", 0x25330b4, 0x25330d4, indexBleachDSSprites_SuiFeng },
    { L"Soi Fon P8 - Slash Effects", 0x25330d4, 0x25330e4 },
};

const sDescTreeNode BLEACH_DS_SOIFON_COLLECTION[] =
{
   { L"Palette 1", DESC_NODETYPE_TREE, (void*)BLEACH_DS_SOIFON_PALETTES_P1, ARRAYSIZE(BLEACH_DS_SOIFON_PALETTES_P1) },
   { L"Palette 2", DESC_NODETYPE_TREE, (void*)BLEACH_DS_SOIFON_PALETTES_P2, ARRAYSIZE(BLEACH_DS_SOIFON_PALETTES_P2) },
   { L"Palette 3", DESC_NODETYPE_TREE, (void*)BLEACH_DS_SOIFON_PALETTES_P3, ARRAYSIZE(BLEACH_DS_SOIFON_PALETTES_P3) },
   { L"Palette 4", DESC_NODETYPE_TREE, (void*)BLEACH_DS_SOIFON_PALETTES_P4, ARRAYSIZE(BLEACH_DS_SOIFON_PALETTES_P4) },
   { L"Palette 5", DESC_NODETYPE_TREE, (void*)BLEACH_DS_SOIFON_PALETTES_P5, ARRAYSIZE(BLEACH_DS_SOIFON_PALETTES_P5) },
   { L"Palette 6", DESC_NODETYPE_TREE, (void*)BLEACH_DS_SOIFON_PALETTES_P6, ARRAYSIZE(BLEACH_DS_SOIFON_PALETTES_P6) },
   { L"Palette 7", DESC_NODETYPE_TREE, (void*)BLEACH_DS_SOIFON_PALETTES_P7, ARRAYSIZE(BLEACH_DS_SOIFON_PALETTES_P7) },
   { L"Palette 8", DESC_NODETYPE_TREE, (void*)BLEACH_DS_SOIFON_PALETTES_P8, ARRAYSIZE(BLEACH_DS_SOIFON_PALETTES_P8) },
};

//Bonnie Palettes
const sGame_PaletteDataset BLEACH_DS_BONNIE_PALETTES_P1[] =
{
    { L"Bonnie P1", 0x1fe16ac, 0x1fe16cc, indexBleachDSSprites_Bonnie },
    { L"Bonnie P1 - Attack Effects", 0x1fe16cc, 0x1fe16ec },
};

const sGame_PaletteDataset BLEACH_DS_BONNIE_PALETTES_P2[] =
{
    { L"Bonnie P2", 0x1fe16ec, 0x1fe170c, indexBleachDSSprites_Bonnie },
    { L"Bonnie P2 - Attack Effects", 0x1fe170c, 0x1fe172c },
};

const sGame_PaletteDataset BLEACH_DS_BONNIE_PALETTES_P3[] =
{
    { L"Bonnie P3", 0x1fe172c, 0x1fe174c, indexBleachDSSprites_Bonnie },
    { L"Bonnie P3 - Attack Effects", 0x1fe174c, 0x1fe176c },
};

const sGame_PaletteDataset BLEACH_DS_BONNIE_PALETTES_P4[] =
{
    { L"Bonnie P4", 0x1fe176c, 0x1fe178c, indexBleachDSSprites_Bonnie },
    { L"Bonnie P4 - Attack Effects", 0x1fe178c, 0x1fe17ac },
};

const sGame_PaletteDataset BLEACH_DS_BONNIE_PALETTES_P5[] =
{
    { L"Bonnie P5", 0x1fe17ac, 0x1fe17cc, indexBleachDSSprites_Bonnie },
    { L"Bonnie P5 - Attack Effects", 0x1fe17cc, 0x1fe17ec },
};

const sGame_PaletteDataset BLEACH_DS_BONNIE_PALETTES_P6[] =
{
    { L"Bonnie P6", 0x1fe17ec, 0x1fe180c, indexBleachDSSprites_Bonnie },
    { L"Bonnie P6 - Attack Effects", 0x1fe180c, 0x1fe182c },
};

const sGame_PaletteDataset BLEACH_DS_BONNIE_PALETTES_P7[] =
{
    { L"Bonnie P7", 0x1fe182c, 0x1fe184c, indexBleachDSSprites_Bonnie },
    { L"Bonnie P7 - Attack Effects", 0x1fe184c, 0x1fe186c },
};

const sGame_PaletteDataset BLEACH_DS_BONNIE_PALETTES_P8[] =
{
    { L"Bonnie P8", 0x1fe186c, 0x1fe188c, indexBleachDSSprites_Bonnie },
    { L"Bonnie P8 - Attack Effects", 0x1fe188c, 0x1fe18ac },
};

const sDescTreeNode BLEACH_DS_BONNIE_COLLECTION[] =
{
   { L"Palette 1", DESC_NODETYPE_TREE, (void*)BLEACH_DS_BONNIE_PALETTES_P1, ARRAYSIZE(BLEACH_DS_BONNIE_PALETTES_P1) },
   { L"Palette 2", DESC_NODETYPE_TREE, (void*)BLEACH_DS_BONNIE_PALETTES_P2, ARRAYSIZE(BLEACH_DS_BONNIE_PALETTES_P2) },
   { L"Palette 3", DESC_NODETYPE_TREE, (void*)BLEACH_DS_BONNIE_PALETTES_P3, ARRAYSIZE(BLEACH_DS_BONNIE_PALETTES_P3) },
   { L"Palette 4", DESC_NODETYPE_TREE, (void*)BLEACH_DS_BONNIE_PALETTES_P4, ARRAYSIZE(BLEACH_DS_BONNIE_PALETTES_P4) },
   { L"Palette 5", DESC_NODETYPE_TREE, (void*)BLEACH_DS_BONNIE_PALETTES_P5, ARRAYSIZE(BLEACH_DS_BONNIE_PALETTES_P5) },
   { L"Palette 6", DESC_NODETYPE_TREE, (void*)BLEACH_DS_BONNIE_PALETTES_P6, ARRAYSIZE(BLEACH_DS_BONNIE_PALETTES_P6) },
   { L"Palette 7", DESC_NODETYPE_TREE, (void*)BLEACH_DS_BONNIE_PALETTES_P7, ARRAYSIZE(BLEACH_DS_BONNIE_PALETTES_P7) },
   { L"Palette 8", DESC_NODETYPE_TREE, (void*)BLEACH_DS_BONNIE_PALETTES_P8, ARRAYSIZE(BLEACH_DS_BONNIE_PALETTES_P8) },
};

//Kan'Onji Palettes
const sGame_PaletteDataset BLEACH_DS_KANONJI_PALETTES_P1[] =
{
    { L"Kan'Onji P1", 0x22ce7b8, 0x22ce7d8, indexBleachDSSprites_DonKanonji },
    { L"Kan'Onji P1 - Slash Effects", 0x22ce7d8, 0x22ce7f8 },
    { L"Kan'Onji P1 - Jinta", 0x22d2f00, 0x22d2f20 },
    { L"Kan'Onji P1 - Karin", 0x22d5e60, 0x22d5e80 },
    { L"Kan'Onji P1 - Dust", 0x22d5e80, 0x22d5ea0 },
    { L"Kan'Onji P1 - Ururu", 0x22d8304, 0x22d8324 },
    { L"Kan'Onji P1 - Rocket Sparks", 0x22d8324, 0x22d8344 },
};

const sGame_PaletteDataset BLEACH_DS_KANONJI_PALETTES_P2[] =
{
    { L"Kan'Onji P2", 0x22ce7f8, 0x22ce818, indexBleachDSSprites_DonKanonji },
    { L"Kan'Onji P2 - Slash Effects", 0x22ce818, 0x22ce838 },
    { L"Kan'Onji P2 - Jinta", 0x22d2f20, 0x22d2f40 },
    { L"Kan'Onji P2 - Karin", 0x22d5ea0, 0x22d5ec0 },
    { L"Kan'Onji P2 - Dust", 0x22d5ec0, 0x22d5ee0 },
    { L"Kan'Onji P2 - Ururu", 0x22d8344, 0x22d8364 },
    { L"Kan'Onji P2 - Rocket Sparks", 0x22d8364, 0x22d8384 },
};

const sGame_PaletteDataset BLEACH_DS_KANONJI_PALETTES_P3[] =
{
    { L"Kan'Onji P3", 0x22ce838, 0x22ce858, indexBleachDSSprites_DonKanonji },
    { L"Kan'Onji P3 - Slash Effects", 0x22ce858, 0x22ce878 },
    { L"Kan'Onji P3 - Jinta", 0x22d2f40, 0x22d2f60 },
    { L"Kan'Onji P3 - Karin", 0x22d5ee0, 0x22d5f00 },
    { L"Kan'Onji P3 - Dust", 0x22d5f00, 0x22d5f20 },
    { L"Kan'Onji P3 - Ururu", 0x22d8384, 0x22d83a4 },
    { L"Kan'Onji P3 - Rocket Sparks", 0x22d83a4, 0x22d83c4 },
};

const sGame_PaletteDataset BLEACH_DS_KANONJI_PALETTES_P4[] =
{
    { L"Kan'Onji P4", 0x22ce878, 0x22ce898, indexBleachDSSprites_DonKanonji },
    { L"Kan'Onji P4 - Slash Effects", 0x22ce898, 0x22ce8b8 },
    { L"Kan'Onji P4 - Jinta", 0x22d2f60, 0x22d2f80 },
    { L"Kan'Onji P4 - Karin", 0x22d5f20, 0x22d5f40 },
    { L"Kan'Onji P4 - Dust", 0x22d5f40, 0x22d5f60 },
    { L"Kan'Onji P4 - Ururu", 0x22d83c4, 0x22d83e4 },
    { L"Kan'Onji P4 - Rocket Sparks", 0x22d83e4, 0x22d8404 },
};

const sGame_PaletteDataset BLEACH_DS_KANONJI_PALETTES_P5[] =
{
    { L"Kan'Onji P5", 0x22ce8b8, 0x22ce8d8, indexBleachDSSprites_DonKanonji },
    { L"Kan'Onji P5 - Slash Effects", 0x22ce8d8, 0x22ce8f8 },
    { L"Kan'Onji P5 - Jinta", 0x22d2f80, 0x22d2fa0 },
    { L"Kan'Onji P5 - Karin", 0x22d5f60, 0x22d5f80 },
    { L"Kan'Onji P5 - Dust", 0x22d5f80, 0x22d5fa0 },
    { L"Kan'Onji P5 - Ururu", 0x22d8404, 0x22d8424 },
    { L"Kan'Onji P5 - Rocket Sparks", 0x22d8424, 0x22d8444 },
};

const sGame_PaletteDataset BLEACH_DS_KANONJI_PALETTES_P6[] =
{
    { L"Kan'Onji P6", 0x22ce8f8, 0x22ce918, indexBleachDSSprites_DonKanonji },
    { L"Kan'Onji P6 - Slash Effects", 0x22ce918, 0x22ce938 },
    { L"Kan'Onji P6 - Jinta", 0x22d2fa0, 0x22d2fc0 },
    { L"Kan'Onji P6 - Karin", 0x22d5fa0, 0x22d5fc0 },
    { L"Kan'Onji P6 - Dust", 0x22d5fc0, 0x22d5fe0 },
    { L"Kan'Onji P6 - Ururu", 0x22d8444, 0x22d8464 },
    { L"Kan'Onji P6 - Rocket Sparks", 0x22d8464, 0x22d8484 },
};

const sGame_PaletteDataset BLEACH_DS_KANONJI_PALETTES_P7[] =
{
    { L"Kan'Onji P7", 0x22ce938, 0x22ce958, indexBleachDSSprites_DonKanonji },
    { L"Kan'Onji P7 - Slash Effects", 0x22ce958, 0x22ce978 },
    { L"Kan'Onji P7 - Jinta", 0x22d2fc0, 0x22d2fe0 },
    { L"Kan'Onji P7 - Karin", 0x22d5fe0, 0x22d6000 },
    { L"Kan'Onji P7 - Dust", 0x22d6000, 0x22d6020 },
    { L"Kan'Onji P7 - Ururu", 0x22d8484, 0x22d84a4 },
    { L"Kan'Onji P7 - Rocket Sparks", 0x22d84a4, 0x22d84c4 },
};

const sGame_PaletteDataset BLEACH_DS_KANONJI_PALETTES_P8[] =
{
    { L"Kan'Onji P8", 0x22ce978, 0x22ce998, indexBleachDSSprites_DonKanonji },
    { L"Kan'Onji P8 - Slash Effects", 0x22ce998, 0x22ce9b8 },
    { L"Kan'Onji P8 - Jinta", 0x22d2fe0, 0x22d3000 },
    { L"Kan'Onji P8 - Karin", 0x22d6020, 0x22d6040 },
    { L"Kan'Onji P8 - Dust", 0x22d6040, 0x22d6060 },
    { L"Kan'Onji P8 - Ururu", 0x22d84c4, 0x22d84e4 },
    { L"Kan'Onji P8 - Rocket Sparks", 0x22d84e4, 0x22d8504 },
};

const sGame_PaletteDataset BLEACH_DS_KANONJI_PALETTES_EXTRAS[] =
{
    { L"Kan'Onji - Meter 0%", 0x22cfb24, 0x22cfb44 },
    { L"Kan'Onji - Meter 25%", 0x22cfb44, 0x22cfb64 },
    { L"Kan'Onji - Meter 80%", 0x22cfb64, 0x22cfb84 },
    { L"Kan'Onji - Meter 100%", 0x22cfb84, 0x22cfba4 },
    { L"Kan'Onji - Soccer Ball", 0x22cfba4, 0x22cfbc4 },
};

const sDescTreeNode BLEACH_DS_KANONJI_COLLECTION[] =
{
   { L"Palette 1", DESC_NODETYPE_TREE, (void*)BLEACH_DS_KANONJI_PALETTES_P1, ARRAYSIZE(BLEACH_DS_KANONJI_PALETTES_P1) },
   { L"Palette 2", DESC_NODETYPE_TREE, (void*)BLEACH_DS_KANONJI_PALETTES_P2, ARRAYSIZE(BLEACH_DS_KANONJI_PALETTES_P2) },
   { L"Palette 3", DESC_NODETYPE_TREE, (void*)BLEACH_DS_KANONJI_PALETTES_P3, ARRAYSIZE(BLEACH_DS_KANONJI_PALETTES_P3) },
   { L"Palette 4", DESC_NODETYPE_TREE, (void*)BLEACH_DS_KANONJI_PALETTES_P4, ARRAYSIZE(BLEACH_DS_KANONJI_PALETTES_P4) },
   { L"Palette 5", DESC_NODETYPE_TREE, (void*)BLEACH_DS_KANONJI_PALETTES_P5, ARRAYSIZE(BLEACH_DS_KANONJI_PALETTES_P5) },
   { L"Palette 6", DESC_NODETYPE_TREE, (void*)BLEACH_DS_KANONJI_PALETTES_P6, ARRAYSIZE(BLEACH_DS_KANONJI_PALETTES_P6) },
   { L"Palette 7", DESC_NODETYPE_TREE, (void*)BLEACH_DS_KANONJI_PALETTES_P7, ARRAYSIZE(BLEACH_DS_KANONJI_PALETTES_P7) },
   { L"Palette 8", DESC_NODETYPE_TREE, (void*)BLEACH_DS_KANONJI_PALETTES_P8, ARRAYSIZE(BLEACH_DS_KANONJI_PALETTES_P8) },
   { L"Extras", DESC_NODETYPE_TREE, (void*)BLEACH_DS_KANONJI_PALETTES_EXTRAS, ARRAYSIZE(BLEACH_DS_KANONJI_PALETTES_EXTRAS) },
};

//Ririn palettes
const sGame_PaletteDataset BLEACH_DS_RIRIN_PALETTES_P1[] =
{
    { L"Ririn P1", 0x24fdbb8, 0x24fdbd8, indexBleachDSSprites_Ririn },
    { L"Ririn P1 - Claud", 0x24fdbf8, 0x24fdc18 },
};

const sGame_PaletteDataset BLEACH_DS_RIRIN_PALETTES_P2[] =
{
    { L"Ririn P2", 0x24fdc18, 0x24fdc38, indexBleachDSSprites_Ririn },
    { L"Ririn P2 - Claud", 0x24fdc58, 0x24fdc78 },
};

const sGame_PaletteDataset BLEACH_DS_RIRIN_PALETTES_P3[] =
{
    { L"Ririn P3", 0x24fdc78, 0x24fdc98, indexBleachDSSprites_Ririn },
    { L"Ririn P3 - Claud", 0x24fdcb8, 0x24fdcd8 },
};

const sGame_PaletteDataset BLEACH_DS_RIRIN_PALETTES_P4[] =
{
    { L"Ririn P4", 0x24fdcd8, 0x24fdcf8, indexBleachDSSprites_Ririn },
    { L"Ririn P4 - Claud", 0x24fdd18, 0x24fdd38 },
};

const sGame_PaletteDataset BLEACH_DS_RIRIN_PALETTES_P5[] =
{
    { L"Ririn P5", 0x24fdd38, 0x24fdd58, indexBleachDSSprites_Ririn },
    { L"Ririn P5 - Claud", 0x24fdd78, 0x24fdd98 },
};

const sGame_PaletteDataset BLEACH_DS_RIRIN_PALETTES_P6[] =
{
    { L"Ririn P6", 0x24fdd98, 0x24fddb8, indexBleachDSSprites_Ririn },
    { L"Ririn P6 - Claud", 0x24fddd8, 0x24fddf8 },
};

const sGame_PaletteDataset BLEACH_DS_RIRIN_PALETTES_P7[] =
{
    { L"Ririn P7", 0x24fddf8, 0x24fde18, indexBleachDSSprites_Ririn },
    { L"Ririn P7 - Claud", 0x24fde38, 0x24fde58 },
};

const sGame_PaletteDataset BLEACH_DS_RIRIN_PALETTES_P8[] =
{
    { L"Ririn P8", 0x24fde58, 0x24fde78, indexBleachDSSprites_Ririn },
    { L"Ririn P8 - Claud", 0x24fde98, 0x24fdeb8 },
};

const sGame_PaletteDataset BLEACH_DS_RIRIN_PALETTES_EXTRAS[] =
{
    { L"Ririn - Nova", 0x24fe880, 0x24fe8a0 },
};

const sDescTreeNode BLEACH_DS_RIRIN_COLLECTION[] =
{
   { L"Palette 1", DESC_NODETYPE_TREE, (void*)BLEACH_DS_RIRIN_PALETTES_P1, ARRAYSIZE(BLEACH_DS_RIRIN_PALETTES_P1) },
   { L"Palette 2", DESC_NODETYPE_TREE, (void*)BLEACH_DS_RIRIN_PALETTES_P2, ARRAYSIZE(BLEACH_DS_RIRIN_PALETTES_P2) },
   { L"Palette 3", DESC_NODETYPE_TREE, (void*)BLEACH_DS_RIRIN_PALETTES_P3, ARRAYSIZE(BLEACH_DS_RIRIN_PALETTES_P3) },
   { L"Palette 4", DESC_NODETYPE_TREE, (void*)BLEACH_DS_RIRIN_PALETTES_P4, ARRAYSIZE(BLEACH_DS_RIRIN_PALETTES_P4) },
   { L"Palette 5", DESC_NODETYPE_TREE, (void*)BLEACH_DS_RIRIN_PALETTES_P5, ARRAYSIZE(BLEACH_DS_RIRIN_PALETTES_P5) },
   { L"Palette 6", DESC_NODETYPE_TREE, (void*)BLEACH_DS_RIRIN_PALETTES_P6, ARRAYSIZE(BLEACH_DS_RIRIN_PALETTES_P6) },
   { L"Palette 7", DESC_NODETYPE_TREE, (void*)BLEACH_DS_RIRIN_PALETTES_P7, ARRAYSIZE(BLEACH_DS_RIRIN_PALETTES_P7) },
   { L"Palette 8", DESC_NODETYPE_TREE, (void*)BLEACH_DS_RIRIN_PALETTES_P8, ARRAYSIZE(BLEACH_DS_RIRIN_PALETTES_P8) },
   { L"Extras", DESC_NODETYPE_TREE, (void*)BLEACH_DS_RIRIN_PALETTES_EXTRAS, ARRAYSIZE(BLEACH_DS_RIRIN_PALETTES_EXTRAS) },
};

//Tatsuki palettes
const sGame_PaletteDataset BLEACH_DS_TATSUKI_PALETTES_P1[] =
{
    { L"Tatsuki P1", 0x2546e58, 0x2546e78, indexBleachDSSprites_TatsukiArisawa },
};

const sGame_PaletteDataset BLEACH_DS_TATSUKI_PALETTES_P2[] =
{
    { L"Tatsuki P2", 0x2546e78, 0x2546e98, indexBleachDSSprites_TatsukiArisawa },
};

const sGame_PaletteDataset BLEACH_DS_TATSUKI_PALETTES_P3[] =
{
    { L"Tatsuki P3", 0x2546e98, 0x2546eb8, indexBleachDSSprites_TatsukiArisawa },
};

const sGame_PaletteDataset BLEACH_DS_TATSUKI_PALETTES_P4[] =
{
    { L"Tatsuki P4", 0x2546eb8, 0x2546ed8, indexBleachDSSprites_TatsukiArisawa },
};

const sGame_PaletteDataset BLEACH_DS_TATSUKI_PALETTES_P5[] =
{
    { L"Tatsuki P5", 0x2546ed8, 0x2546ef8, indexBleachDSSprites_TatsukiArisawa },
};

const sGame_PaletteDataset BLEACH_DS_TATSUKI_PALETTES_P6[] =
{
    { L"Tatsuki P6", 0x2546ef8, 0x2546f18, indexBleachDSSprites_TatsukiArisawa },
};

const sGame_PaletteDataset BLEACH_DS_TATSUKI_PALETTES_P7[] =
{
    { L"Tatsuki P7", 0x2546f18, 0x2546f38, indexBleachDSSprites_TatsukiArisawa },
};

const sGame_PaletteDataset BLEACH_DS_TATSUKI_PALETTES_P8[] =
{
    { L"Tatsuki P8", 0x2546f38, 0x2546f58, indexBleachDSSprites_TatsukiArisawa },
};

const sDescTreeNode BLEACH_DS_TATSUKI_COLLECTION[] =
{
   { L"Palette 1", DESC_NODETYPE_TREE, (void*)BLEACH_DS_TATSUKI_PALETTES_P1, ARRAYSIZE(BLEACH_DS_TATSUKI_PALETTES_P1) },
   { L"Palette 2", DESC_NODETYPE_TREE, (void*)BLEACH_DS_TATSUKI_PALETTES_P2, ARRAYSIZE(BLEACH_DS_TATSUKI_PALETTES_P2) },
   { L"Palette 3", DESC_NODETYPE_TREE, (void*)BLEACH_DS_TATSUKI_PALETTES_P3, ARRAYSIZE(BLEACH_DS_TATSUKI_PALETTES_P3) },
   { L"Palette 4", DESC_NODETYPE_TREE, (void*)BLEACH_DS_TATSUKI_PALETTES_P4, ARRAYSIZE(BLEACH_DS_TATSUKI_PALETTES_P4) },
   { L"Palette 5", DESC_NODETYPE_TREE, (void*)BLEACH_DS_TATSUKI_PALETTES_P5, ARRAYSIZE(BLEACH_DS_TATSUKI_PALETTES_P5) },
   { L"Palette 6", DESC_NODETYPE_TREE, (void*)BLEACH_DS_TATSUKI_PALETTES_P6, ARRAYSIZE(BLEACH_DS_TATSUKI_PALETTES_P6) },
   { L"Palette 7", DESC_NODETYPE_TREE, (void*)BLEACH_DS_TATSUKI_PALETTES_P7, ARRAYSIZE(BLEACH_DS_TATSUKI_PALETTES_P7) },
   { L"Palette 8", DESC_NODETYPE_TREE, (void*)BLEACH_DS_TATSUKI_PALETTES_P8, ARRAYSIZE(BLEACH_DS_TATSUKI_PALETTES_P8) },
};

//Aizen palettes
const sGame_PaletteDataset BLEACH_DS_AIZEN_PALETTES_P1[] =
{
    { L"Aizen P1", 0x1fd2fa0, 0x1fd2fc0, indexBleachDSSprites_SosukeAizen },
    { L"Aizen P1 - Slash Effects", 0x1fd2fc0, 0x1fd2fe0 },
};

const sGame_PaletteDataset BLEACH_DS_AIZEN_PALETTES_P2[] =
{
    { L"Aizen P2", 0x1fd2fe0, 0x1fd3000, indexBleachDSSprites_SosukeAizen },
    { L"Aizen P2 - Slash Effects", 0x1fd3000, 0x1fd3020 },
};

const sGame_PaletteDataset BLEACH_DS_AIZEN_PALETTES_P3[] =
{
    { L"Aizen P3", 0x1fd3020, 0x1fd3040, indexBleachDSSprites_SosukeAizen },
    { L"Aizen P3 - Slash Effects", 0x1fd3040, 0x1fd3060 },
};

const sGame_PaletteDataset BLEACH_DS_AIZEN_PALETTES_P4[] =
{
    { L"Aizen P4", 0x1fd3060, 0x1fd3080, indexBleachDSSprites_SosukeAizen },
    { L"Aizen P4 - Slash Effects", 0x1fd3080, 0x1fd30a0 },
};

const sGame_PaletteDataset BLEACH_DS_AIZEN_PALETTES_P5[] =
{
    { L"Aizen P5", 0x1fd30a0, 0x1fd30c0, indexBleachDSSprites_SosukeAizen },
    { L"Aizen P5 - Slash Effects", 0x1fd30c0, 0x1fd30e0 },
};

const sGame_PaletteDataset BLEACH_DS_AIZEN_PALETTES_P6[] =
{
    { L"Aizen P6", 0x1fd30e0, 0x1fd3100, indexBleachDSSprites_SosukeAizen },
    { L"Aizen P6 - Slash Effects", 0x1fd3100, 0x1fd3120 },
};

const sGame_PaletteDataset BLEACH_DS_AIZEN_PALETTES_P7[] =
{
    { L"Aizen P7", 0x1fd3120, 0x1fd3140, indexBleachDSSprites_SosukeAizen },
    { L"Aizen P7 - Slash Effects", 0x1fd3140, 0x1fd3160 },
};

const sGame_PaletteDataset BLEACH_DS_AIZEN_PALETTES_P8[] =
{
    { L"Aizen P8", 0x1fd3160, 0x1fd3180, indexBleachDSSprites_SosukeAizen },
    { L"Aizen P8 - Slash Effects", 0x1fd3180, 0x1fd31a0 },
};

const sGame_PaletteDataset BLEACH_DS_AIZEN_PALETTES_EXTRAS[] =
{
    { L"Aizen - Black Coffin", 0x1fd3b7c, 0x1fd3b9c },
    { L"Aizen - Six Bars of Light", 0x1fd3b9c, 0x1fd3bbc },
};

const sDescTreeNode BLEACH_DS_AIZEN_COLLECTION[] =
{
   { L"Palette 1", DESC_NODETYPE_TREE, (void*)BLEACH_DS_AIZEN_PALETTES_P1, ARRAYSIZE(BLEACH_DS_AIZEN_PALETTES_P1) },
   { L"Palette 2", DESC_NODETYPE_TREE, (void*)BLEACH_DS_AIZEN_PALETTES_P2, ARRAYSIZE(BLEACH_DS_AIZEN_PALETTES_P2) },
   { L"Palette 3", DESC_NODETYPE_TREE, (void*)BLEACH_DS_AIZEN_PALETTES_P3, ARRAYSIZE(BLEACH_DS_AIZEN_PALETTES_P3) },
   { L"Palette 4", DESC_NODETYPE_TREE, (void*)BLEACH_DS_AIZEN_PALETTES_P4, ARRAYSIZE(BLEACH_DS_AIZEN_PALETTES_P4) },
   { L"Palette 5", DESC_NODETYPE_TREE, (void*)BLEACH_DS_AIZEN_PALETTES_P5, ARRAYSIZE(BLEACH_DS_AIZEN_PALETTES_P5) },
   { L"Palette 6", DESC_NODETYPE_TREE, (void*)BLEACH_DS_AIZEN_PALETTES_P6, ARRAYSIZE(BLEACH_DS_AIZEN_PALETTES_P6) },
   { L"Palette 7", DESC_NODETYPE_TREE, (void*)BLEACH_DS_AIZEN_PALETTES_P7, ARRAYSIZE(BLEACH_DS_AIZEN_PALETTES_P7) },
   { L"Palette 8", DESC_NODETYPE_TREE, (void*)BLEACH_DS_AIZEN_PALETTES_P8, ARRAYSIZE(BLEACH_DS_AIZEN_PALETTES_P8) },
   { L"Extras", DESC_NODETYPE_TREE, (void*)BLEACH_DS_AIZEN_PALETTES_EXTRAS, ARRAYSIZE(BLEACH_DS_AIZEN_PALETTES_EXTRAS) },
};

//Gin palettes
const sGame_PaletteDataset BLEACH_DS_GIN_PALETTES_P1[] =
{
    { L"Gin P1", 0x2219344, 0x2219364, indexBleachDSSprites_GinIchimaru },
    { L"Gin P1 - Slash Effects", 0x2219364, 0x2219384 },
};

const sGame_PaletteDataset BLEACH_DS_GIN_PALETTES_P2[] =
{
    { L"Gin P2", 0x2219384, 0x22193a4, indexBleachDSSprites_GinIchimaru },
    { L"Gin P2 - Slash Effects", 0x22193a4, 0x22193c4 },
};

const sGame_PaletteDataset BLEACH_DS_GIN_PALETTES_P3[] =
{
    { L"Gin P3", 0x22193c4, 0x22193e4, indexBleachDSSprites_GinIchimaru },
    { L"Gin P3 - Slash Effects", 0x22193e4, 0x2219404 },
};

const sGame_PaletteDataset BLEACH_DS_GIN_PALETTES_P4[] =
{
    { L"Gin P4", 0x2219404, 0x2219424, indexBleachDSSprites_GinIchimaru },
    { L"Gin P4 - Slash Effects", 0x2219424, 0x2219444 },
};

const sGame_PaletteDataset BLEACH_DS_GIN_PALETTES_P5[] =
{
    { L"Gin P5", 0x2219444, 0x2219464, indexBleachDSSprites_GinIchimaru },
    { L"Gin P5 - Slash Effects", 0x2219464, 0x2219484 },
};

const sGame_PaletteDataset BLEACH_DS_GIN_PALETTES_P6[] =
{
    { L"Gin P6", 0x2219484, 0x22194a4, indexBleachDSSprites_GinIchimaru },
    { L"Gin P6 - Slash Effects", 0x22194a4, 0x22194c4 },
};

const sGame_PaletteDataset BLEACH_DS_GIN_PALETTES_P7[] =
{
    { L"Gin P7", 0x22194c4, 0x22194e4, indexBleachDSSprites_GinIchimaru },
    { L"Gin P7 - Slash Effects", 0x22194e4, 0x2219504 },
};

const sGame_PaletteDataset BLEACH_DS_GIN_PALETTES_P8[] =
{
    { L"Gin P8", 0x2219504, 0x2219524, indexBleachDSSprites_GinIchimaru },
    { L"Gin P8 - Slash Effects", 0x2219524, 0x2219544 },
};

const sGame_PaletteDataset BLEACH_DS_GIN_PALETTES_EXTRAS[] =
{
    { L"Gin - Shinso 1", 0x221a374, 0x221a394 },
    { L"Gin - Soeikan", 0x221a394, 0x221a3b4 },
    { L"Gin - Shinso 2", 0x221a3b4, 0x221a3d4 },
};

const sDescTreeNode BLEACH_DS_GIN_COLLECTION[] =
{
   { L"Palette 1", DESC_NODETYPE_TREE, (void*)BLEACH_DS_GIN_PALETTES_P1, ARRAYSIZE(BLEACH_DS_GIN_PALETTES_P1) },
   { L"Palette 2", DESC_NODETYPE_TREE, (void*)BLEACH_DS_GIN_PALETTES_P2, ARRAYSIZE(BLEACH_DS_GIN_PALETTES_P2) },
   { L"Palette 3", DESC_NODETYPE_TREE, (void*)BLEACH_DS_GIN_PALETTES_P3, ARRAYSIZE(BLEACH_DS_GIN_PALETTES_P3) },
   { L"Palette 4", DESC_NODETYPE_TREE, (void*)BLEACH_DS_GIN_PALETTES_P4, ARRAYSIZE(BLEACH_DS_GIN_PALETTES_P4) },
   { L"Palette 5", DESC_NODETYPE_TREE, (void*)BLEACH_DS_GIN_PALETTES_P5, ARRAYSIZE(BLEACH_DS_GIN_PALETTES_P5) },
   { L"Palette 6", DESC_NODETYPE_TREE, (void*)BLEACH_DS_GIN_PALETTES_P6, ARRAYSIZE(BLEACH_DS_GIN_PALETTES_P6) },
   { L"Palette 7", DESC_NODETYPE_TREE, (void*)BLEACH_DS_GIN_PALETTES_P7, ARRAYSIZE(BLEACH_DS_GIN_PALETTES_P7) },
   { L"Palette 8", DESC_NODETYPE_TREE, (void*)BLEACH_DS_GIN_PALETTES_P8, ARRAYSIZE(BLEACH_DS_GIN_PALETTES_P8) },
   { L"Extras", DESC_NODETYPE_TREE, (void*)BLEACH_DS_GIN_PALETTES_EXTRAS, ARRAYSIZE(BLEACH_DS_GIN_PALETTES_EXTRAS) },
};

//Tosen Palettes
const sGame_PaletteDataset BLEACH_DS_TOSEN_PALETTES_P1[] =
{
    { L"Tosen P1", 0x2571360, 0x2571380, indexBleachDSSprites_KanameTosen },
    { L"Tosen P1 - Slash Effects", 0x2571380, 0x25713a0 },
};

const sGame_PaletteDataset BLEACH_DS_TOSEN_PALETTES_P2[] =
{
    { L"Tosen P2", 0x25713a0, 0x25713c0, indexBleachDSSprites_KanameTosen },
    { L"Tosen P2 - Slash Effects", 0x25713c0, 0x25713e0 },
};

const sGame_PaletteDataset BLEACH_DS_TOSEN_PALETTES_P3[] =
{
    { L"Tosen P3", 0x25713e0, 0x2571400, indexBleachDSSprites_KanameTosen },
    { L"Tosen P3 - Slash Effects", 0x2571400, 0x2571420 },
};

const sGame_PaletteDataset BLEACH_DS_TOSEN_PALETTES_P4[] =
{
    { L"Tosen P4", 0x2571420, 0x2571440, indexBleachDSSprites_KanameTosen },
    { L"Tosen P4 - Slash Effects", 0x2571440, 0x2571460 },
};

const sGame_PaletteDataset BLEACH_DS_TOSEN_PALETTES_P5[] =
{
    { L"Tosen P5", 0x2571460, 0x2571480, indexBleachDSSprites_KanameTosen },
    { L"Tosen P5 - Slash Effects", 0x2571480, 0x25714a0 },
};

const sGame_PaletteDataset BLEACH_DS_TOSEN_PALETTES_P6[] =
{
    { L"Tosen P6", 0x25714a0, 0x25714c0, indexBleachDSSprites_KanameTosen },
    { L"Tosen P6 - Slash Effects", 0x25714c0, 0x25714e0 },
};

const sGame_PaletteDataset BLEACH_DS_TOSEN_PALETTES_P7[] =
{
    { L"Tosen P7", 0x25714e0, 0x2571500, indexBleachDSSprites_KanameTosen },
    { L"Tosen P7 - Slash Effects", 0x2571500, 0x2571520 },
};

const sGame_PaletteDataset BLEACH_DS_TOSEN_PALETTES_P8[] =
{
    { L"Tosen P8", 0x2571520, 0x2571540, indexBleachDSSprites_KanameTosen },
    { L"Tosen P8 - Slash Effects", 0x2571540, 0x2571560 },
};

const sGame_PaletteDataset BLEACH_DS_TOSEN_PALETTES_EXTRAS[] =
{
    { L"Tosen - Benihiko 1", 0x25722cc, 0x25722ec },
    { L"Tosen - Benihiko 2", 0x25722ec, 0x257230c },
    { L"Tosen - Benihiko 3", 0x257230c, 0x257232c },
    { L"Tosen - Continuous Charge", 0x257232c, 0x257234c },
    { L"Tosen - Enma Korogi", 0x257234c, 0x257236c },
    { L"Tosen - Cry, Suzumushi", 0x257236c, 0x257238c },
};

const sDescTreeNode BLEACH_DS_TOSEN_COLLECTION[] =
{
   { L"Palette 1", DESC_NODETYPE_TREE, (void*)BLEACH_DS_TOSEN_PALETTES_P1, ARRAYSIZE(BLEACH_DS_TOSEN_PALETTES_P1) },
   { L"Palette 2", DESC_NODETYPE_TREE, (void*)BLEACH_DS_TOSEN_PALETTES_P2, ARRAYSIZE(BLEACH_DS_TOSEN_PALETTES_P2) },
   { L"Palette 3", DESC_NODETYPE_TREE, (void*)BLEACH_DS_TOSEN_PALETTES_P3, ARRAYSIZE(BLEACH_DS_TOSEN_PALETTES_P3) },
   { L"Palette 4", DESC_NODETYPE_TREE, (void*)BLEACH_DS_TOSEN_PALETTES_P4, ARRAYSIZE(BLEACH_DS_TOSEN_PALETTES_P4) },
   { L"Palette 5", DESC_NODETYPE_TREE, (void*)BLEACH_DS_TOSEN_PALETTES_P5, ARRAYSIZE(BLEACH_DS_TOSEN_PALETTES_P5) },
   { L"Palette 6", DESC_NODETYPE_TREE, (void*)BLEACH_DS_TOSEN_PALETTES_P6, ARRAYSIZE(BLEACH_DS_TOSEN_PALETTES_P6) },
   { L"Palette 7", DESC_NODETYPE_TREE, (void*)BLEACH_DS_TOSEN_PALETTES_P7, ARRAYSIZE(BLEACH_DS_TOSEN_PALETTES_P7) },
   { L"Palette 8", DESC_NODETYPE_TREE, (void*)BLEACH_DS_TOSEN_PALETTES_P8, ARRAYSIZE(BLEACH_DS_TOSEN_PALETTES_P8) },
   { L"Extras", DESC_NODETYPE_TREE, (void*)BLEACH_DS_TOSEN_PALETTES_EXTRAS, ARRAYSIZE(BLEACH_DS_TOSEN_PALETTES_EXTRAS) },
};

//Kukaku palettes
const sGame_PaletteDataset BLEACH_DS_KUKAKU_PALETTES_P1[] =
{
    { L"Kukaku P1", 0x23a95b8, 0x23a95d8, indexBleachDSSprites_KukakuShiba },
    { L"Kukaku P1 - Kagizaki Blossom", 0x23a95d8, 0x23a95f8 },
    { L"Kukaku P1 - Flower Crane Cannon", 0x23a95f8, 0x23a9618 },
};

const sGame_PaletteDataset BLEACH_DS_KUKAKU_PALETTES_P2[] =
{
    { L"Kukaku P2", 0x23a9618, 0x23a9638, indexBleachDSSprites_KukakuShiba },
    { L"Kukaku P2 - Kagizaki Blossom", 0x23a9638, 0x23a9658 },
    { L"Kukaku P2 - Flower Crane Cannon", 0x23a9658, 0x23a9678 },
};

const sGame_PaletteDataset BLEACH_DS_KUKAKU_PALETTES_P3[] =
{
    { L"Kukaku P3", 0x23a9678, 0x23a9698, indexBleachDSSprites_KukakuShiba },
    { L"Kukaku P3 - Kagizaki Blossom", 0x23a9698, 0x23a96b8 },
    { L"Kukaku P3 - Flower Crane Cannon", 0x23a96b8, 0x23a96d8 },
};

const sGame_PaletteDataset BLEACH_DS_KUKAKU_PALETTES_P4[] =
{
    { L"Kukaku P4", 0x23a96d8, 0x23a96f8, indexBleachDSSprites_KukakuShiba },
    { L"Kukaku P4 - Kagizaki Blossom", 0x23a96f8, 0x23a9718 },
    { L"Kukaku P4 - Flower Crane Cannon", 0x23a9718, 0x23a9738 },
};

const sGame_PaletteDataset BLEACH_DS_KUKAKU_PALETTES_P5[] =
{
    { L"Kukaku P5", 0x23a9738, 0x23a9758, indexBleachDSSprites_KukakuShiba },
    { L"Kukaku P5 - Kagizaki Blossom", 0x23a9758, 0x23a9778 },
    { L"Kukaku P5 - Flower Crane Cannon", 0x23a9778, 0x23a9798 },
};

const sGame_PaletteDataset BLEACH_DS_KUKAKU_PALETTES_P6[] =
{
    { L"Kukaku P6", 0x23a9798, 0x23a97b8, indexBleachDSSprites_KukakuShiba },
    { L"Kukaku P6 - Kagizaki Blossom", 0x23a97b8, 0x23a97d8 },
    { L"Kukaku P6 - Flower Crane Cannon", 0x23a97d8, 0x23a97f8 },
};

const sGame_PaletteDataset BLEACH_DS_KUKAKU_PALETTES_P7[] =
{
    { L"Kukaku P7", 0x23a97f8, 0x23a9818, indexBleachDSSprites_KukakuShiba },
    { L"Kukaku P7 - Kagizaki Blossom", 0x23a9818, 0x23a9838 },
    { L"Kukaku P7 - Flower Crane Cannon", 0x23a9838, 0x23a9858 },
};

const sGame_PaletteDataset BLEACH_DS_KUKAKU_PALETTES_P8[] =
{
    { L"Kukaku P8", 0x23a9858, 0x23a9878, indexBleachDSSprites_KukakuShiba },
    { L"Kukaku P8 - Kagizaki Blossom", 0x23a9878, 0x23a9898 },
    { L"Kukaku P8 - Flower Crane Cannon", 0x23a9898, 0x23a98b8 },
};

const sGame_PaletteDataset BLEACH_DS_KUKAKU_PALETTES_EXTRAS[] =
{
    { L"Kukaku - Pinwheel & Parachute Fireworks", 0x23aa848, 0x23aa868 },
};

const sDescTreeNode BLEACH_DS_KUKAKU_COLLECTION[] =
{
   { L"Palette 1", DESC_NODETYPE_TREE, (void*)BLEACH_DS_KUKAKU_PALETTES_P1, ARRAYSIZE(BLEACH_DS_KUKAKU_PALETTES_P1) },
   { L"Palette 2", DESC_NODETYPE_TREE, (void*)BLEACH_DS_KUKAKU_PALETTES_P2, ARRAYSIZE(BLEACH_DS_KUKAKU_PALETTES_P2) },
   { L"Palette 3", DESC_NODETYPE_TREE, (void*)BLEACH_DS_KUKAKU_PALETTES_P3, ARRAYSIZE(BLEACH_DS_KUKAKU_PALETTES_P3) },
   { L"Palette 4", DESC_NODETYPE_TREE, (void*)BLEACH_DS_KUKAKU_PALETTES_P4, ARRAYSIZE(BLEACH_DS_KUKAKU_PALETTES_P4) },
   { L"Palette 5", DESC_NODETYPE_TREE, (void*)BLEACH_DS_KUKAKU_PALETTES_P5, ARRAYSIZE(BLEACH_DS_KUKAKU_PALETTES_P5) },
   { L"Palette 6", DESC_NODETYPE_TREE, (void*)BLEACH_DS_KUKAKU_PALETTES_P6, ARRAYSIZE(BLEACH_DS_KUKAKU_PALETTES_P6) },
   { L"Palette 7", DESC_NODETYPE_TREE, (void*)BLEACH_DS_KUKAKU_PALETTES_P7, ARRAYSIZE(BLEACH_DS_KUKAKU_PALETTES_P7) },
   { L"Palette 8", DESC_NODETYPE_TREE, (void*)BLEACH_DS_KUKAKU_PALETTES_P8, ARRAYSIZE(BLEACH_DS_KUKAKU_PALETTES_P8) },
   { L"Extras", DESC_NODETYPE_TREE, (void*)BLEACH_DS_KUKAKU_PALETTES_EXTRAS, ARRAYSIZE(BLEACH_DS_KUKAKU_PALETTES_EXTRAS) },
};

//Ururu palletes
const sGame_PaletteDataset BLEACH_DS_URURU_PALETTES_P1[] =
{
    { L"Ururu P1", 0x2604f44, 0x2604f64, indexBleachDSSprites_UruruTsumugiya },
    { L"Ururu P1 - Rocket Sparks", 0x2604f64, 0x2604f84 },
};

const sGame_PaletteDataset BLEACH_DS_URURU_PALETTES_P2[] =
{
    { L"Ururu P2", 0x2604f84, 0x2604fa4, indexBleachDSSprites_UruruTsumugiya },
    { L"Ururu P2 - Rocket Sparks", 0x2604fa4, 0x2604fc4 },
};

const sGame_PaletteDataset BLEACH_DS_URURU_PALETTES_P3[] =
{
    { L"Ururu P3", 0x2604fc4, 0x2604fe4, indexBleachDSSprites_UruruTsumugiya },
    { L"Ururu P3 - Rocket Sparks", 0x2604fe4, 0x2605004 },
};

const sGame_PaletteDataset BLEACH_DS_URURU_PALETTES_P4[] =
{
    { L"Ururu P4", 0x2605004, 0x2605024, indexBleachDSSprites_UruruTsumugiya },
    { L"Ururu P4 - Rocket Sparks", 0x2605024, 0x2605044 },
};

const sGame_PaletteDataset BLEACH_DS_URURU_PALETTES_P5[] =
{
    { L"Ururu P5", 0x2605044, 0x2605064, indexBleachDSSprites_UruruTsumugiya },
    { L"Ururu P5 - Rocket Sparks", 0x2605064, 0x2605084 },
};

const sGame_PaletteDataset BLEACH_DS_URURU_PALETTES_P6[] =
{
    { L"Ururu P6", 0x2605084, 0x26050a4, indexBleachDSSprites_UruruTsumugiya },
    { L"Ururu P6 - Rocket Sparks", 0x26050a4, 0x26050c4 },
};

const sGame_PaletteDataset BLEACH_DS_URURU_PALETTES_P7[] =
{
    { L"Ururu P7", 0x26050c4, 0x26050e4, indexBleachDSSprites_UruruTsumugiya },
    { L"Ururu P7 - Rocket Sparks", 0x26050e4, 0x2605104 },
};

const sGame_PaletteDataset BLEACH_DS_URURU_PALETTES_P8[] =
{
    { L"Ururu P8", 0x2605104, 0x2605124, indexBleachDSSprites_UruruTsumugiya },
    { L"Ururu P8 - Rocket Sparks", 0x2605124, 0x2605144 },
};

const sDescTreeNode BLEACH_DS_URURU_COLLECTION[] =
{
   { L"Palette 1", DESC_NODETYPE_TREE, (void*)BLEACH_DS_URURU_PALETTES_P1, ARRAYSIZE(BLEACH_DS_URURU_PALETTES_P1) },
   { L"Palette 2", DESC_NODETYPE_TREE, (void*)BLEACH_DS_URURU_PALETTES_P2, ARRAYSIZE(BLEACH_DS_URURU_PALETTES_P2) },
   { L"Palette 3", DESC_NODETYPE_TREE, (void*)BLEACH_DS_URURU_PALETTES_P3, ARRAYSIZE(BLEACH_DS_URURU_PALETTES_P3) },
   { L"Palette 4", DESC_NODETYPE_TREE, (void*)BLEACH_DS_URURU_PALETTES_P4, ARRAYSIZE(BLEACH_DS_URURU_PALETTES_P4) },
   { L"Palette 5", DESC_NODETYPE_TREE, (void*)BLEACH_DS_URURU_PALETTES_P5, ARRAYSIZE(BLEACH_DS_URURU_PALETTES_P5) },
   { L"Palette 6", DESC_NODETYPE_TREE, (void*)BLEACH_DS_URURU_PALETTES_P6, ARRAYSIZE(BLEACH_DS_URURU_PALETTES_P6) },
   { L"Palette 7", DESC_NODETYPE_TREE, (void*)BLEACH_DS_URURU_PALETTES_P7, ARRAYSIZE(BLEACH_DS_URURU_PALETTES_P7) },
   { L"Palette 8", DESC_NODETYPE_TREE, (void*)BLEACH_DS_URURU_PALETTES_P8, ARRAYSIZE(BLEACH_DS_URURU_PALETTES_P8) },
};

//Hollow Ichigo Palettes
const sGame_PaletteDataset BLEACH_DS_HICHIGO_PALETTES_P1[] =
{
    { L"Hollow Ichigo P1",  0x21e4a34, 0x21e4a54, indexBleachDSSprites_HollowIchigo },
    { L"Hollow Ichigo P1 - Slash Effects", 0x21e4a54, 0x21e4a74, indexBleachDSSprites_IchigoKurosaki, 0x02 },
    { L"Hollow Ichigo P1 - Tensa Zangetsu", 0x21e4a74, 0x21e4a94, indexBleachDSSprites_HollowIchigo, 0x02 },
    { L"Hollow Ichigo P1 - Tensa Zangetsu Slash Effects", 0x21e4a94, 0x21e4ab4, indexBleachDSSprites_IchigoKurosaki, 0x04 },
    { L"Hollow Ichigo P1 - Shall I slice you?", 0x21e4ab4, 0x21e4ad4, indexBleachDSSprites_HollowIchigo, 0x01 },
};

const sGame_PaletteDataset BLEACH_DS_HICHIGO_PALETTES_P2[] =
{
    { L"Hollow Ichigo P2", 0x21e4ad4, 0x21e4af4, indexBleachDSSprites_HollowIchigo },
    { L"Hollow Ichigo P2 - Slash Effects", 0x21e4af4, 0x21e4b14, indexBleachDSSprites_IchigoKurosaki, 0x02 },
    { L"Hollow Ichigo P2 - Tensa Zangetsu", 0x21e4b14, 0x21e4b34, indexBleachDSSprites_HollowIchigo, 0x02 },
    { L"Hollow Ichigo P2 - Tensa Zangetsu Slash Effects", 0x21e4b34, 0x21e4b54, indexBleachDSSprites_IchigoKurosaki, 0x04 },
    { L"Hollow Ichigo P2 - Shall I slice you?", 0x21e4b54, 0x21e4b74, indexBleachDSSprites_HollowIchigo, 0x01 },
};

const sGame_PaletteDataset BLEACH_DS_HICHIGO_PALETTES_P3[] =
{
    { L"Hollow Ichigo P3", 0x21e4b74, 0x21e4b94, indexBleachDSSprites_HollowIchigo },
    { L"Hollow Ichigo P3 - Slash Effects", 0x21e4b94, 0x21e4bb4, indexBleachDSSprites_IchigoKurosaki, 0x02 },
    { L"Hollow Ichigo P3 - Tensa Zangetsu", 0x21e4bb4, 0x21e4bd4, indexBleachDSSprites_HollowIchigo, 0x02 },
    { L"Hollow Ichigo P3 - Tensa Zangetsu Slash Effects", 0x21e4bd4, 0x21e4bf4, indexBleachDSSprites_IchigoKurosaki, 0x04 },
    { L"Hollow Ichigo P3 - Shall I slice you?", 0x21e4bf4, 0x21e4c14, indexBleachDSSprites_HollowIchigo, 0x01 },
};

const sGame_PaletteDataset BLEACH_DS_HICHIGO_PALETTES_P4[] =
{
    { L"Hollow Ichigo P4", 0x21e4c14, 0x21e4c34, indexBleachDSSprites_HollowIchigo },
    { L"Hollow Ichigo P4 - Slash Effects", 0x21e4c34, 0x21e4c54, indexBleachDSSprites_IchigoKurosaki, 0x02 },
    { L"Hollow Ichigo P4 - Tensa Zangetsu", 0x21e4c54, 0x21e4c74, indexBleachDSSprites_HollowIchigo, 0x02 },
    { L"Hollow Ichigo P4 - Tensa Zangetsu Slash Effects", 0x21e4c74, 0x21e4c94, indexBleachDSSprites_IchigoKurosaki, 0x04 },
    { L"Hollow Ichigo P4 - Shall I slice you?", 0x21e4c94, 0x21e4cb4, indexBleachDSSprites_HollowIchigo, 0x01 },
};

const sGame_PaletteDataset BLEACH_DS_HICHIGO_PALETTES_P5[] =
{
    { L"Hollow Ichigo P5", 0x21e4cb4, 0x21e4cd4, indexBleachDSSprites_HollowIchigo },
    { L"Hollow Ichigo P5 - Slash Effects", 0x21e4cd4, 0x21e4cf4, indexBleachDSSprites_IchigoKurosaki, 0x02 },
    { L"Hollow Ichigo P5 - Tensa Zangetsu", 0x21e4cf4, 0x21e4d14, indexBleachDSSprites_HollowIchigo, 0x02 },
    { L"Hollow Ichigo P5 - Tensa Zangetsu Slash Effects", 0x21e4d14, 0x21e4d34, indexBleachDSSprites_IchigoKurosaki, 0x04 },
    { L"Hollow Ichigo P5 - Shall I slice you?", 0x21e4d34, 0x21e4d54, indexBleachDSSprites_HollowIchigo, 0x01 },
};

const sGame_PaletteDataset BLEACH_DS_HICHIGO_PALETTES_P6[] =
{
    { L"Hollow Ichigo P6", 0x21e4d54, 0x21e4d74, indexBleachDSSprites_HollowIchigo },
    { L"Hollow Ichigo P6 - Slash Effects", 0x21e4d74, 0x21e4d94, indexBleachDSSprites_IchigoKurosaki, 0x02 },
    { L"Hollow Ichigo P6 - Tensa Zangetsu", 0x21e4d94, 0x21e4db4, indexBleachDSSprites_HollowIchigo, 0x02 },
    { L"Hollow Ichigo P6 - Tensa Zangetsu Slash Effects", 0x21e4db4, 0x21e4dd4, indexBleachDSSprites_IchigoKurosaki, 0x04 },
    { L"Hollow Ichigo P6 - Shall I slice you?", 0x21e4dd4, 0x21e4df4, indexBleachDSSprites_HollowIchigo, 0x01 },
};

const sGame_PaletteDataset BLEACH_DS_HICHIGO_PALETTES_P7[] =
{
    { L"Hollow Ichigo P7", 0x21e4df4, 0x21e4e14, indexBleachDSSprites_HollowIchigo },
    { L"Hollow Ichigo P7 - Slash Effects", 0x21e4e14, 0x21e4e34, indexBleachDSSprites_IchigoKurosaki, 0x02 },
    { L"Hollow Ichigo P7 - Tensa Zangetsu", 0x21e4e34, 0x21e4e54, indexBleachDSSprites_HollowIchigo, 0x02 },
    { L"Hollow Ichigo P7 - Tensa Zangetsu Slash Effects", 0x21e4e54, 0x21e4e74, indexBleachDSSprites_IchigoKurosaki, 0x04 },
    { L"Hollow Ichigo P7 - Shall I slice you?", 0x21e4e74, 0x21e4e94, indexBleachDSSprites_HollowIchigo, 0x01 },
};

const sGame_PaletteDataset BLEACH_DS_HICHIGO_PALETTES_P8[] =
{
    { L"Hollow Ichigo P8", 0x21e4e94, 0x21e4eb4, indexBleachDSSprites_HollowIchigo },
    { L"Hollow Ichigo P8 - Slash Effects", 0x21e4eb4, 0x21e4ed4, indexBleachDSSprites_IchigoKurosaki, 0x02 },
    { L"Hollow Ichigo P8 - Tensa Zangetsu", 0x21e4ed4, 0x21e4ef4, indexBleachDSSprites_HollowIchigo, 0x02 },
    { L"Hollow Ichigo P8 - Tensa Zangetsu Slash Effects", 0x21e4ef4, 0x21e4f14, indexBleachDSSprites_IchigoKurosaki, 0x04 },
    { L"Hollow Ichigo P8 - Shall I slice you?", 0x21e4f14, 0x21e4f34, indexBleachDSSprites_HollowIchigo, 0x01 },
};

const sDescTreeNode BLEACH_DS_HICHIGO_COLLECTION[] =
{
   { L"Palette 1", DESC_NODETYPE_TREE, (void*)BLEACH_DS_HICHIGO_PALETTES_P1, ARRAYSIZE(BLEACH_DS_HICHIGO_PALETTES_P1) },
   { L"Palette 2", DESC_NODETYPE_TREE, (void*)BLEACH_DS_HICHIGO_PALETTES_P2, ARRAYSIZE(BLEACH_DS_HICHIGO_PALETTES_P2) },
   { L"Palette 3", DESC_NODETYPE_TREE, (void*)BLEACH_DS_HICHIGO_PALETTES_P3, ARRAYSIZE(BLEACH_DS_HICHIGO_PALETTES_P3) },
   { L"Palette 4", DESC_NODETYPE_TREE, (void*)BLEACH_DS_HICHIGO_PALETTES_P4, ARRAYSIZE(BLEACH_DS_HICHIGO_PALETTES_P4) },
   { L"Palette 5", DESC_NODETYPE_TREE, (void*)BLEACH_DS_HICHIGO_PALETTES_P5, ARRAYSIZE(BLEACH_DS_HICHIGO_PALETTES_P5) },
   { L"Palette 6", DESC_NODETYPE_TREE, (void*)BLEACH_DS_HICHIGO_PALETTES_P6, ARRAYSIZE(BLEACH_DS_HICHIGO_PALETTES_P6) },
   { L"Palette 7", DESC_NODETYPE_TREE, (void*)BLEACH_DS_HICHIGO_PALETTES_P7, ARRAYSIZE(BLEACH_DS_HICHIGO_PALETTES_P7) },
   { L"Palette 8", DESC_NODETYPE_TREE, (void*)BLEACH_DS_HICHIGO_PALETTES_P8, ARRAYSIZE(BLEACH_DS_HICHIGO_PALETTES_P8) },
};

const sGame_PaletteDataset BLEACH_DS_BONUS_PALETTES_EURO[] =
{
    { L"Common hit effect", 0x7F9BE0, 0x7F9C00 },
    { L"DS icon", 0x6F3C20, 0x6F3C40 },
};

// This isn't currently exposed as these locations are Euro-only and somewhere else for US
const sDescTreeNode BLEACH_DS_BONUS_COLLECTION_EURO[] =
{
    { L"Misc", DESC_NODETYPE_TREE, (void*)BLEACH_DS_BONUS_PALETTES_EURO, ARRAYSIZE(BLEACH_DS_BONUS_PALETTES_EURO) },
};

const sDescTreeNode BLEACH_DS_UNITS[] =
{
    { L"Yuichi Shibata", DESC_NODETYPE_TREE, (void*)BLEACH_DS_YUICHI_COLLECTION, ARRAYSIZE(BLEACH_DS_YUICHI_COLLECTION) },
    { L"Soul Reaper", DESC_NODETYPE_TREE, (void*)BLEACH_DS_REAPER_COLLECTION, ARRAYSIZE(BLEACH_DS_REAPER_COLLECTION) },
    { L"Shrieker", DESC_NODETYPE_TREE, (void*)BLEACH_DS_SHRIEKER_COLLECTION, ARRAYSIZE(BLEACH_DS_SHRIEKER_COLLECTION) },
    { L"Menos Grande", DESC_NODETYPE_TREE, (void*)BLEACH_DS_MENOS_COLLECTION, ARRAYSIZE(BLEACH_DS_MENOS_COLLECTION) },
    { L"Grand Fisher", DESC_NODETYPE_TREE, (void*)BLEACH_DS_GRAND_COLLECTION, ARRAYSIZE(BLEACH_DS_GRAND_COLLECTION) },
    { L"Familiar", DESC_NODETYPE_TREE, (void*)BLEACH_DS_FAMILIAR_COLLECTION, ARRAYSIZE(BLEACH_DS_FAMILIAR_COLLECTION) },
    { L"Nurse", DESC_NODETYPE_TREE, (void*)BLEACH_DS_NURSE_COLLECTION, ARRAYSIZE(BLEACH_DS_NURSE_COLLECTION) },
    { L"Byayuka Kuchiki", DESC_NODETYPE_TREE, (void*)BLEACH_DS_BYAKUYA_COLLECTION, ARRAYSIZE(BLEACH_DS_BYAKUYA_COLLECTION) },
    { L"Yamamoto Shigekuni Genryusai", DESC_NODETYPE_TREE, (void*)BLEACH_DS_YAMAMOTO_COLLECTION, ARRAYSIZE(BLEACH_DS_YAMAMOTO_COLLECTION) },
    { L"Sajin Komamura", DESC_NODETYPE_TREE, (void*)BLEACH_DS_KOMAMURA_COLLECTION, ARRAYSIZE(BLEACH_DS_KOMAMURA_COLLECTION) },
    { L"Yoruichi Shihoin", DESC_NODETYPE_TREE, (void*)BLEACH_DS_YORUICHI_COLLECTION, ARRAYSIZE(BLEACH_DS_YORUICHI_COLLECTION) },
    { L"Ganju Shiba", DESC_NODETYPE_TREE, (void*)BLEACH_DS_GANJU_COLLECTION, ARRAYSIZE(BLEACH_DS_GANJU_COLLECTION) },
    { L"Mayuri Kurotsuchi", DESC_NODETYPE_TREE, (void*)BLEACH_DS_MAYURI_COLLECTION, ARRAYSIZE(BLEACH_DS_MAYURI_COLLECTION) },
    { L"Nemu Kurotsuchi", DESC_NODETYPE_TREE, (void*)BLEACH_DS_NEMU_COLLECTION, ARRAYSIZE(BLEACH_DS_NEMU_COLLECTION) },
    { L"Izuru Kira", DESC_NODETYPE_TREE, (void*)BLEACH_DS_IZURU_COLLECTION, ARRAYSIZE(BLEACH_DS_IZURU_COLLECTION) },
    { L"Jushiro Ukitake", DESC_NODETYPE_TREE, (void*)BLEACH_DS_UKITAKE_COLLECTION, ARRAYSIZE(BLEACH_DS_UKITAKE_COLLECTION) },
    { L"Hanataro Yamada", DESC_NODETYPE_TREE, (void*)BLEACH_DS_HANATARO_COLLECTION, ARRAYSIZE(BLEACH_DS_HANATARO_COLLECTION) },
    { L"Kisuke Urahara", DESC_NODETYPE_TREE, (void*)BLEACH_DS_URAHARA_COLLECTION, ARRAYSIZE(BLEACH_DS_URAHARA_COLLECTION) },
    { L"Uryu Ishida", DESC_NODETYPE_TREE, (void*)BLEACH_DS_URYU_COLLECTION, ARRAYSIZE(BLEACH_DS_URYU_COLLECTION) },
    { L"Ikkaku Madarame", DESC_NODETYPE_TREE, (void*)BLEACH_DS_IKKAKU_COLLECTION, ARRAYSIZE(BLEACH_DS_IKKAKU_COLLECTION) },
    { L"Shuhei Hisagi", DESC_NODETYPE_TREE, (void*)BLEACH_DS_HISAGI_COLLECTION, ARRAYSIZE(BLEACH_DS_HISAGI_COLLECTION) },
    { L"Rangiku Matsumoto", DESC_NODETYPE_TREE, (void*)BLEACH_DS_RANGIKU_COLLECTION, ARRAYSIZE(BLEACH_DS_RANGIKU_COLLECTION) },
    { L"Shunsui Kyoraku", DESC_NODETYPE_TREE, (void*)BLEACH_DS_KYORAKU_COLLECTION, ARRAYSIZE(BLEACH_DS_KYORAKU_COLLECTION) },
    { L"Yasutora \"Chad\" Sado", DESC_NODETYPE_TREE, (void*)BLEACH_DS_CHAD_COLLECTION, ARRAYSIZE(BLEACH_DS_CHAD_COLLECTION) },
    { L"Ichigo Kurosaki", DESC_NODETYPE_TREE, (void*)BLEACH_DS_ICHIGO_COLLECTION, ARRAYSIZE(BLEACH_DS_ICHIGO_COLLECTION) },
    { L"Renji Abarai", DESC_NODETYPE_TREE, (void*)BLEACH_DS_RENJI_COLLECTION, ARRAYSIZE(BLEACH_DS_RENJI_COLLECTION) },
    { L"Kenpachi Zaraki", DESC_NODETYPE_TREE, (void*)BLEACH_DS_KENPACHI_COLLECTION, ARRAYSIZE(BLEACH_DS_KENPACHI_COLLECTION) },
    { L"Yachiru Kusajishi", DESC_NODETYPE_TREE, (void*)BLEACH_DS_YACHIRU_COLLECTION, ARRAYSIZE(BLEACH_DS_YACHIRU_COLLECTION) },
    { L"Kon", DESC_NODETYPE_TREE, (void*)BLEACH_DS_KON_COLLECTION, ARRAYSIZE(BLEACH_DS_KON_COLLECTION) },
    { L"Rukia Kuchiki", DESC_NODETYPE_TREE, (void*)BLEACH_DS_RUKIA_COLLECTION, ARRAYSIZE(BLEACH_DS_RUKIA_COLLECTION) },
    { L"Toshiro Hitsugaya", DESC_NODETYPE_TREE, (void*)BLEACH_DS_HITSUGAYA_COLLECTION, ARRAYSIZE(BLEACH_DS_HITSUGAYA_COLLECTION) },
    { L"Momo Hinamori", DESC_NODETYPE_TREE, (void*)BLEACH_DS_HINAMORI_COLLECTION, ARRAYSIZE(BLEACH_DS_HINAMORI_COLLECTION) },
    { L"Orihime Inoue", DESC_NODETYPE_TREE, (void*)BLEACH_DS_ORIHIME_COLLECTION, ARRAYSIZE(BLEACH_DS_ORIHIME_COLLECTION) },
    { L"Soi Fon", DESC_NODETYPE_TREE, (void*)BLEACH_DS_SOIFON_COLLECTION, ARRAYSIZE(BLEACH_DS_SOIFON_COLLECTION) },
    { L"Bonnie", DESC_NODETYPE_TREE, (void*)BLEACH_DS_BONNIE_COLLECTION, ARRAYSIZE(BLEACH_DS_BONNIE_COLLECTION) },
    { L"Don Kan'Onji", DESC_NODETYPE_TREE, (void*)BLEACH_DS_KANONJI_COLLECTION, ARRAYSIZE(BLEACH_DS_KANONJI_COLLECTION) },
    { L"Ririn", DESC_NODETYPE_TREE, (void*)BLEACH_DS_RIRIN_COLLECTION, ARRAYSIZE(BLEACH_DS_RIRIN_COLLECTION) },
    { L"Tatsuki Arisawa", DESC_NODETYPE_TREE, (void*)BLEACH_DS_TATSUKI_COLLECTION, ARRAYSIZE(BLEACH_DS_TATSUKI_COLLECTION) },
    { L"Sosuke Aizen", DESC_NODETYPE_TREE, (void*)BLEACH_DS_AIZEN_COLLECTION, ARRAYSIZE(BLEACH_DS_AIZEN_COLLECTION) },
    { L"Gin Ichimaru", DESC_NODETYPE_TREE, (void*)BLEACH_DS_GIN_COLLECTION, ARRAYSIZE(BLEACH_DS_GIN_COLLECTION) },
    { L"Kaname Tosen", DESC_NODETYPE_TREE, (void*)BLEACH_DS_TOSEN_COLLECTION, ARRAYSIZE(BLEACH_DS_TOSEN_COLLECTION) },
    { L"Kukaku Shiba", DESC_NODETYPE_TREE, (void*)BLEACH_DS_KUKAKU_COLLECTION, ARRAYSIZE(BLEACH_DS_KUKAKU_COLLECTION) },
    { L"Ururu Tsumugiya", DESC_NODETYPE_TREE, (void*)BLEACH_DS_URURU_COLLECTION, ARRAYSIZE(BLEACH_DS_URURU_COLLECTION) },
    { L"Ichigo Kurosaki (Inner Hollow)", DESC_NODETYPE_TREE, (void*)BLEACH_DS_HICHIGO_COLLECTION, ARRAYSIZE(BLEACH_DS_HICHIGO_COLLECTION) },

    // { L"Bonus Palettes", DESC_NODETYPE_TREE, (void*)BLEACH_DS_BONUS_COLLECTION_EURO, ARRAYSIZE(BLEACH_DS_BONUS_COLLECTION_EURO) },
};

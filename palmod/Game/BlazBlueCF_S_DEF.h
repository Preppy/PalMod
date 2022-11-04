#pragma once
#include "GameClassByUnitPerFile.h"

const std::vector<uint16_t> BlazBlueCF_S_IMGIDS_USED =
{
    indexBBCFSprites_AmaneNishiki,          // 0x17
    indexBBCFSprites_Arakune,               // 0x18
    indexBBCFSprites_Azrael,                // 0x19
    indexBBCFSprites_BangShishigami,        // 0x1A
    indexBBCFSprites_Bullet,                // 0x1B
    indexBBCFSprites_CarlClover,            // 0x1C
    indexBBCFSprites_CelicaAMercury,        // 0x1D
    indexBBCFSprites_Es,                    // 0x1E
    indexBBCFSprites_Hakumen,               // 0x1F
    indexBBCFSprites_Hazama,                // 0x20
    indexBBCFSprites_HibikiKohaku,          // 0x21
    indexBBCFSprites_IronTager,             // 0x22
    indexBBCFSprites_Izanami,               // 0x23
    indexBBCFSprites_Izayoi,                // 0x24
    indexBBCFSprites_JinKisaragi,           // 0x25
    indexBBCFSprites_Jubei,                 // 0x26
    indexBBCFSprites_KaguraMutsuki,         // 0x27
    indexBBCFSprites_Kokonoe,               // 0x28
    indexBBCFSprites_Lambda11,              // 0x29
    indexBBCFSprites_LitchiFayeLing,        // 0x2A
    indexBBCFSprites_MaiNatsume,            // 0x2B
    indexBBCFSprites_MakotoNanaya,          // 0x2C
    indexBBCFSprites_Mu12,                  // 0x2D
    indexBBCFSprites_NaotoKurogane,         // 0x2E
    indexBBCFSprites_NineThePhantom,        // 0x2F
    indexBBCFSprites_NoelVermillion,        // 0x30
    indexBBCFSprites_Nu13,                  // 0x31
    indexBBCFSprites_PlatinumtheTrinity,    // 0x32
    indexBBCFSprites_RachelAlucard,         // 0x33
    indexBBCFSprites_RagnaTheBloodedge,     // 0x34
    indexBBCFSprites_ReliusClover,          // 0x35
    indexBBCFSprites_Susanoo,               // 0x36
    indexBBCFSprites_Taokaka,               // 0x37
    indexBBCFSprites_TsubakiYayoi,          // 0x38
    indexBBCFSprites_ValkenhaynRHellsing,   // 0x39
    indexBBCFSprites_YuukiTerumi,           // 0x3A
    indexBBCFSprites_Bonus,                 // 0x3B
};

const sGCBUPF_BasicNodeData BlazBlueCFCollection24 =
{
    {
        L"Color 1",
        L"Color 2",
        L"Color 3",
        L"Color 4",
        L"Color 5",
        L"Color 6",
        L"Color 7",
        L"Color 8",
        L"Color 9",
        L"Color 10",
        L"Color 11",
        L"Color 12",
        L"Color 13",
        L"Color 14",
        L"Color 15",
        L"Color 16",
        L"Color 17",
        L"Color 18",
        L"Color 19",
        L"Color 20",
        L"Color 21",
        L"Color 22",
        L"Color 23",
        L"Color 24",
    },
    0x2100
};

const sGCBUPF_BasicNodeData BlazBlueCFCollection25 =
{
    {
        L"Color 1",
        L"Color 2",
        L"Color 3",
        L"Color 4",
        L"Color 5",
        L"Color 6",
        L"Color 7",
        L"Color 8",
        L"Color 9",
        L"Color 10",
        L"Color 11",
        L"Color 12",
        L"Color 13",
        L"Color 14",
        L"Color 15",
        L"Color 16",
        L"Color 17",
        L"Color 18",
        L"Color 19",
        L"Color 20",
        L"Color 21",
        L"Color 22",
        L"Color 23",
        L"Color 24",

        L"Color 25 (Unused)",
    },
    0x2100
};

const sGCBUPF_BasicNodeData BlazBlueCFCollection26 =
{
    {
        L"Color 1",
        L"Color 2",
        L"Color 3",
        L"Color 4",
        L"Color 5",
        L"Color 6",
        L"Color 7",
        L"Color 8",
        L"Color 9",
        L"Color 10",
        L"Color 11",
        L"Color 12",
        L"Color 13",
        L"Color 14",
        L"Color 15",
        L"Color 16",
        L"Color 17",
        L"Color 18",
        L"Color 19",
        L"Color 20",
        L"Color 21",
        L"Color 22",
        L"Color 23",
        L"Color 24",

        L"Color 25 (Unused)",
        L"Color 26 (Unused)",
    },
    0x2100
};

const std::vector<sGCBUPF_RelativePaletteData> BlazBlueCFPaletteListGeneric =
{
    { L"Main", 0x0, INVALID_UNIT_VALUE, 0x00 },
    { L"Extra 1", 0x420, INVALID_UNIT_VALUE, 0x01 },
    { L"Extra 2", 0x840, INVALID_UNIT_VALUE, 0x02 },
    { L"Extra 3", 0xc60, INVALID_UNIT_VALUE, 0x03 },
    { L"Extra 4", 0x1080, INVALID_UNIT_VALUE, 0x04 },
    { L"Extra 5", 0x14a0, INVALID_UNIT_VALUE, 0x05 },
    { L"Extra 6", 0x18c0, INVALID_UNIT_VALUE, 0x06 },
    { L"Extra 7", 0x1ce0, INVALID_UNIT_VALUE, 0x07 },
};

uint8_t TranslatePalModSpriteIdToBBCFGameId(uint32_t nSpriteId);
uint32_t TranslateBBCFGameIdToPalModSpriteId(uint8_t nGameId);

const std::vector<sGCBUPF_BasicFileData> BlazBlueCF_S_CharacterData =
{
    //Alphabetical by character name, not by file name
    { L"data\\char\\char_am_pal.pac", L"Amane Nishiki",           226336, BlazBlueCFCollection26,   BlazBlueCFPaletteListGeneric,  0x1A40, indexBBCFSprites_AmaneNishiki },
    { L"data\\char\\char_ar_pal.pac", L"Arakune",                 226336, BlazBlueCFCollection26,   BlazBlueCFPaletteListGeneric,  0x1A40, indexBBCFSprites_Arakune },
    { L"data\\char\\char_az_pal.pac", L"Azrael",                  226336, BlazBlueCFCollection26,   BlazBlueCFPaletteListGeneric,  0x1A40, indexBBCFSprites_Azrael },
    { L"data\\char\\char_bn_pal.pac", L"Bang Shishigami",         226336, BlazBlueCFCollection26,   BlazBlueCFPaletteListGeneric,  0x1A40, indexBBCFSprites_BangShishigami },
    { L"data\\char\\char_bl_pal.pac", L"Bullet",                  226336, BlazBlueCFCollection26,   BlazBlueCFPaletteListGeneric,  0x1A40, indexBBCFSprites_Bullet },
    { L"data\\char\\char_ca_pal.pac", L"Carl Clover",             226336, BlazBlueCFCollection26,   BlazBlueCFPaletteListGeneric,  0x1A40, indexBBCFSprites_CarlClover },
    { L"data\\char\\char_ce_pal.pac", L"Celica A. Mercury",       226336, BlazBlueCFCollection26,   BlazBlueCFPaletteListGeneric,  0x1A40, indexBBCFSprites_CelicaAMercury },
    { L"data\\char\\char_es_pal.pac", L"Es",                      226336, BlazBlueCFCollection26,   BlazBlueCFPaletteListGeneric,  0x1A40, indexBBCFSprites_Es },
    { L"data\\char\\char_ha_pal.pac", L"Hakumen",                 226336, BlazBlueCFCollection26,   BlazBlueCFPaletteListGeneric,  0x1A40, indexBBCFSprites_Hakumen },
    { L"data\\char\\char_hz_pal.pac", L"Hazama",                  226336, BlazBlueCFCollection26,   BlazBlueCFPaletteListGeneric,  0x1A40, indexBBCFSprites_Hazama },
    { L"data\\char\\char_hb_pal.pac", L"Hibiki Kohaku",           208928, BlazBlueCFCollection24,   BlazBlueCFPaletteListGeneric,  0x1840, indexBBCFSprites_HibikiKohaku },   //-2 Colors
    { L"data\\char\\char_tg_pal.pac", L"Iron Tager",              226336, BlazBlueCFCollection26,   BlazBlueCFPaletteListGeneric,  0x1A40, indexBBCFSprites_IronTager },
    { L"data\\char\\char_mi_pal.pac", L"Izanami",                 217632, BlazBlueCFCollection25,   BlazBlueCFPaletteListGeneric,  0x1940, indexBBCFSprites_Izanami },   //-1 Colors
    { L"data\\char\\char_iz_pal.pac", L"Izayoi",                  226336, BlazBlueCFCollection26,   BlazBlueCFPaletteListGeneric,  0x1A40, indexBBCFSprites_Izayoi },
    { L"data\\char\\char_jn_pal.pac", L"Jin Kisaragi",            226336, BlazBlueCFCollection26,   BlazBlueCFPaletteListGeneric,  0x1A40, indexBBCFSprites_JinKisaragi },
    { L"data\\char\\char_jb_pal.pac", L"Jubei",                   226336, BlazBlueCFCollection26,   BlazBlueCFPaletteListGeneric,  0x1A40, indexBBCFSprites_Jubei },
    { L"data\\char\\char_kg_pal.pac", L"Kagura Mutsuki",          226336, BlazBlueCFCollection26,   BlazBlueCFPaletteListGeneric,  0x1A40, indexBBCFSprites_KaguraMutsuki },
    { L"data\\char\\char_kk_pal.pac", L"Kokonoe",                 226336, BlazBlueCFCollection26,   BlazBlueCFPaletteListGeneric,  0x1A40, indexBBCFSprites_Kokonoe },
    { L"data\\char\\char_rm_pal.pac", L"Lambda-11 (Λ-No.11-)",    226336, BlazBlueCFCollection26,   BlazBlueCFPaletteListGeneric,  0x1A40, indexBBCFSprites_Lambda11 },
    { L"data\\char\\char_lc_pal.pac", L"Litchi Faye Ling",        226336, BlazBlueCFCollection26,   BlazBlueCFPaletteListGeneric,  0x1A40, indexBBCFSprites_LitchiFayeLing },
    { L"data\\char\\char_ma_pal.pac", L"Mai Natsume",             217632, BlazBlueCFCollection25,   BlazBlueCFPaletteListGeneric,  0x1940, indexBBCFSprites_MaiNatsume },   //-1 Colors
    { L"data\\char\\char_mk_pal.pac", L"Makoto Nanaya",           226336, BlazBlueCFCollection26,   BlazBlueCFPaletteListGeneric,  0x1A40, indexBBCFSprites_MakotoNanaya },
    { L"data\\char\\char_mu_pal.pac", L"Mu-12 (μ-No.12-)",        226336, BlazBlueCFCollection26,   BlazBlueCFPaletteListGeneric,  0x1A40, indexBBCFSprites_Mu12 },
    { L"data\\char\\char_nt_pal.pac", L"Naoto Kurogane",          217632, BlazBlueCFCollection25,   BlazBlueCFPaletteListGeneric,  0x1940, indexBBCFSprites_NaotoKurogane },   //-1 Colors
    { L"data\\char\\char_ph_pal.pac", L"Nine The Phantom",        208928, BlazBlueCFCollection24,   BlazBlueCFPaletteListGeneric,  0x1840, indexBBCFSprites_NineThePhantom },   //-2 Colors
    { L"data\\char\\char_no_pal.pac", L"Noel Vermillion",         226336, BlazBlueCFCollection26,   BlazBlueCFPaletteListGeneric,  0x1A40, indexBBCFSprites_NoelVermillion },
    { L"data\\char\\char_ny_pal.pac", L"Nu-13 (ν-No.13-)",        226336, BlazBlueCFCollection26,   BlazBlueCFPaletteListGeneric,  0x1A40, indexBBCFSprites_Nu13 },
    { L"data\\char\\char_pt_pal.pac", L"Platinum the Trinity",    226336, BlazBlueCFCollection26,   BlazBlueCFPaletteListGeneric,  0x1A40, indexBBCFSprites_PlatinumtheTrinity },
    { L"data\\char\\char_rc_pal.pac", L"Rachel Alucard",          226336, BlazBlueCFCollection26,   BlazBlueCFPaletteListGeneric,  0x1A40, indexBBCFSprites_RachelAlucard },
    { L"data\\char\\char_rg_pal.pac", L"Ragna The Bloodedge",     226336, BlazBlueCFCollection26,   BlazBlueCFPaletteListGeneric,  0x1A40, indexBBCFSprites_RagnaTheBloodedge },
    { L"data\\char\\char_rl_pal.pac", L"Relius Clover",           226336, BlazBlueCFCollection26,   BlazBlueCFPaletteListGeneric,  0x1A40, indexBBCFSprites_ReliusClover },
    { L"data\\char\\char_su_pal.pac", L"Susano'o",                226336, BlazBlueCFCollection26,   BlazBlueCFPaletteListGeneric,  0x1A40, indexBBCFSprites_Susanoo },
    { L"data\\char\\char_tk_pal.pac", L"Taokaka",                 226336, BlazBlueCFCollection26,   BlazBlueCFPaletteListGeneric,  0x1A40, indexBBCFSprites_Taokaka },
    { L"data\\char\\char_tb_pal.pac", L"Tsubaki Yayoi",           226336, BlazBlueCFCollection26,   BlazBlueCFPaletteListGeneric,  0x1A40, indexBBCFSprites_TsubakiYayoi },
    { L"data\\char\\char_vh_pal.pac", L"Valkenhayn R. Hellsing",  226336, BlazBlueCFCollection26,   BlazBlueCFPaletteListGeneric,  0x1A40, indexBBCFSprites_ValkenhaynRHellsing },
    { L"data\\char\\char_tm_pal.pac", L"Yuuki Terumi",            226336, BlazBlueCFCollection26,   BlazBlueCFPaletteListGeneric,  0x1A40, indexBBCFSprites_YuukiTerumi },
    //Unknown/Unused, figure out later
    //{ L"data\\char\\char_old_ny_pal.pac",   L"Old NY",      104480, 
    //{ L"data\\char\\char_E0_pal.pac",         L"Unknown E0",  4384, 
    //{ L"data\\char\\char_ta_pal.pac",        L"Unknown TA",  17440,    
};

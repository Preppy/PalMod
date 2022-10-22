#pragma once

#include "GameClassByUnitPerFile.h"


const std::vector<uint16_t> MAAB_A_IMGIDS_USED =
{
    indexArcanaSprites_Bisclavret,      // 0x00
    indexArcanaSprites_BladeProtector,  // 0x01
    indexArcanaSprites_EternalFlame,    // 0x02
    indexArcanaSprites_IaiArthur,       // 0x03
    indexArcanaSprites_IoriYagami,      // 0x04
    indexArcanaSprites_Koume,           // 0x05
    indexArcanaSprites_Nimue,           // 0x06
    indexArcanaSprites_Riesz,           // 0x07
    indexArcanaSprites_SnowWhite,       // 0x08
    indexArcanaSprites_Thief,           // 0x09
    indexArcanaSprites_Twinblade,       // 0x0a
    indexArcanaSprites_Wildcat,         // 0x0b
    indexArcanaSprites_Zechs,           // 0x0c
    indexArcanaSprites_Bonus,           // 0x0d
    indexArcanaSprites_Support,         // 0x0e
};

const std::vector<LPCWSTR> MAABPaletteNamesNormal =
{
    L"1",
    L"2",
    L"3",
    L"4",
    L"5",

    L"6",
    L"7",
    L"8",
    L"9",
    L"10",

    L"11",
    L"12",
    L"13",
    L"14",
    L"15",

    L"16",
    L"17",
    L"18",
    L"19",
    L"20 (Unused)",

    L"21 (Unused)",
};

// Identical for now, but leaving in so we can be flexible
const std::vector<LPCWSTR> MAABPaletteNamesSupport =
{
    L"P1",
    L"P2",
};

// Identical for now, but leaving in so we can be flexible
const std::vector<LPCWSTR> MAABPaletteNamesEx =
{
    L"1",
    L"2",
    L"3",
    L"4",
    L"5",

    L"6",
    L"7",
    L"8",
    L"9",
    L"10",

    L"11",
    L"12",
    L"13",
    L"14",
    L"15",

    L"16",
    L"17",
    L"18",
    L"19",
    L"20 (Unused)",

    L"21 (Unused)",
};

const sGCBUPF_BasicNodeData MAABNode_Normal                               = { { L"Core Palettes" }, 0, MAABPaletteNamesNormal };
const sGCBUPF_BasicNodeData MAABNode_Support                              = { { L"Core Palettes" }, 0, MAABPaletteNamesSupport };
const sGCBUPF_BasicNodeData MAABNode_SupportKnights_CloneAife             = { { L"Clone Aife" }, 0, MAABPaletteNamesSupport };
const sGCBUPF_BasicNodeData MAABNode_SupportKnights_CloneAzia             = { { L"Clone Azia Kriemhild" }, 0, MAABPaletteNamesSupport };
const sGCBUPF_BasicNodeData MAABNode_SupportKnights_CloneCuchulainn       = { { L"Clone Cuchulainn" }, 0, MAABPaletteNamesSupport };
const sGCBUPF_BasicNodeData MAABNode_SupportKnights_CloneDiva             = { { L"Clone Diva Arthur" }, 0, MAABPaletteNamesSupport };
const sGCBUPF_BasicNodeData MAABNode_SupportKnights_CloneElee             = { { L"Clone Elle" }, 0, MAABPaletteNamesSupport };
const sGCBUPF_BasicNodeData MAABNode_SupportKnights_CloneFay              = { { L"Clone Fay" }, 0, MAABPaletteNamesSupport };
const sGCBUPF_BasicNodeData MAABNode_SupportKnights_CloneLifee            = { { L"Clone Lifee" }, 0, MAABPaletteNamesSupport };
const sGCBUPF_BasicNodeData MAABNode_SupportKnights_CloneMGArthur         = { { L"Clone Magic Guard Arthur" }, 0, MAABPaletteNamesSupport };
const sGCBUPF_BasicNodeData MAABNode_SupportKnights_CloneMercArthur       = { { L"Clone Mercenary Arthur" }, 0, MAABPaletteNamesSupport };
const sGCBUPF_BasicNodeData MAABNode_SupportKnights_CloneMerchArthur      = { { L"Clone Merchant Arthur" }, 0, MAABPaletteNamesSupport };
const sGCBUPF_BasicNodeData MAABNode_SupportKnights_ClonePharsalia        = { { L"Clone Pharsalia" }, 0, MAABPaletteNamesSupport };
const sGCBUPF_BasicNodeData MAABNode_SupportKnights_CloneScathach         = { { L"Clone Scathach" }, 0, MAABPaletteNamesSupport };
const sGCBUPF_BasicNodeData MAABNode_SupportKnights_CloneTechnoArthur     = { { L"Clone Techno-Smith Arthur" }, 0, MAABPaletteNamesSupport };
const sGCBUPF_BasicNodeData MAABNode_SupportKnights_CloneUathach          = { { L"Clone Uathach" }, 0, MAABPaletteNamesSupport };
const sGCBUPF_BasicNodeData MAABNode_SupportKnights_Foible                = { { L"Foible Elle" }, 0, MAABPaletteNamesSupport };
const sGCBUPF_BasicNodeData MAABNode_SupportKnights_Monarch               = { { L"Monarch Constantine" }, 0, MAABPaletteNamesSupport };
const sGCBUPF_BasicNodeData MAABNode_SupportKnights_OtherAkira            = { { L"Otherworldly Akira Ono" }, 0, MAABPaletteNamesSupport };
const sGCBUPF_BasicNodeData MAABNode_SupportKnights_OtherHawkeye          = { { L"Otherworldly Hawkeye" }, 0, MAABPaletteNamesSupport };
const sGCBUPF_BasicNodeData MAABNode_SupportKnights_Ruler                 = { { L"Ruler Supreme Guinevere" }, 0, MAABPaletteNamesSupport };
const sGCBUPF_BasicNodeData MAABNode_SupportKnights_Summer                = { { L"Summer Evaine" }, 0, MAABPaletteNamesSupport };
const sGCBUPF_BasicNodeData MAABNode_SupportKnights_SuppClaire            = { { L"Supporter Claire" }, 0, MAABPaletteNamesSupport };
const sGCBUPF_BasicNodeData MAABNode_SupportKnights_SuppEnide             = { { L"Supporter Enide" }, 0, MAABPaletteNamesSupport };
const sGCBUPF_BasicNodeData MAABNode_SupportKnights_Galahad               = { { L"Type I Galahad" }, 0, MAABPaletteNamesSupport };
const sGCBUPF_BasicNodeData MAABNode_SupportKnights_Gawain                = { { L"Type I Gawain" }, 0, MAABPaletteNamesSupport };
const sGCBUPF_BasicNodeData MAABNode_SupportKnights_Lancelot              = { { L"Type I Lancelot" }, 0, MAABPaletteNamesSupport };
const sGCBUPF_BasicNodeData MAABNode_SupportKnights_Mordred               = { { L"Type I Mordred" }, 0, MAABPaletteNamesSupport };
const sGCBUPF_BasicNodeData MAABNode_SupportKnights_Balin                 = { { L"Type II Balin" }, 0, MAABPaletteNamesSupport };
const sGCBUPF_BasicNodeData MAABNode_SupportKnights_Peridod               = { { L"Type II Peridod" }, 0, MAABPaletteNamesSupport };
const sGCBUPF_BasicNodeData MAABNode_SupportKnights_Tor                   = { { L"Type II Tor" }, 0, MAABPaletteNamesSupport };
const sGCBUPF_BasicNodeData MAABNode_SupportKnights_LittleGrey            = { { L"Unique Little Grey" }, 0, MAABPaletteNamesSupport };
const sGCBUPF_BasicNodeData MAABNode_SupportKnights_Kagura                = { { L"Woeful Princess Kagura" }, 0, MAABPaletteNamesSupport };


const std::vector<sGCBUPF_BasicFileData> MAAB_A_CharacterData =
{
    //Alphabetical by character name, not by file name
    { L"act\\chara\\chara_05_00.pal",       L"Bisclavret",                              65552,    MAABNode_Normal,          {},    0x10, indexArcanaSprites_Bisclavret },
    { L"act\\chara\\chara_01_00.pal",       L"Blade Protector Arthur",                  65552,    MAABNode_Normal,          {},    0x10, indexArcanaSprites_BladeProtector },
    { L"act\\chara\\chara_06_00.pal",       L"Eternal Flame",                           65552,    MAABNode_Normal,          {},    0x10, indexArcanaSprites_EternalFlame },
    { L"act\\chara\\chara_04_00.pal",       L"Hybrid Nimue",                            65552,    MAABNode_Normal,          {},    0x10, indexArcanaSprites_Nimue },
    { L"act\\chara\\chara_09_00.pal",       L"Iai Arthur",                              65552,    MAABNode_Normal,          {},    0x10, indexArcanaSprites_IaiArthur },
    { L"act\\chara\\chara_0C_00.pal",       L"Iori Yagami",                             65552,    MAABNode_Normal,          {},    0x10, indexArcanaSprites_IoriYagami },
    { L"act\\chara\\chara_0A_00.pal",       L"Koume Sakiyama",                          65552,    MAABNode_Normal,          {},    0x10, indexArcanaSprites_Koume},
    { L"act\\chara\\chara_08_00.pal",       L"Riesz",                                   65552,    MAABNode_Normal,          {},    0x10, indexArcanaSprites_Riesz },
    { L"act\\chara\\chara_07_00.pal",       L"Snow White",                              65552,    MAABNode_Normal,          {},    0x10, indexArcanaSprites_SnowWhite },
    { L"act\\chara\\chara_02_00.pal",       L"Thief Arthur",                            65552,    MAABNode_Normal,          {},    0x10, indexArcanaSprites_Thief },
    { L"act\\chara\\chara_00_00.pal",       L"Twinblade Arthur",                        65552,    MAABNode_Normal,          {},    0x10, indexArcanaSprites_Twinblade },
    { L"act\\chara\\chara_0B_00.pal",       L"Wildcat Arthur",                          65552,    MAABNode_Normal,          {},    0x10, indexArcanaSprites_Wildcat },
    { L"act\\chara\\chara_03_00.pal",       L"Zechs Siegfried",                         65552,    MAABNode_Normal,          {},    0x10, indexArcanaSprites_Zechs },

    //Extras
    { L"act\\chara\\chara_05s_00.pal",      L"Bisclavret Extra",                        65552,    MAABNode_Normal,          {},    0x10, indexArcanaSprites_Bisclavret, 0x08 },
    { L"act\\chara\\chara_06s_00.pal",      L"Eternal Flame Extra",                     65552,    MAABNode_Normal,          {},    0x10, indexArcanaSprites_EternalFlame, 0x08 },
    { L"act\\chara\\chara_04s_00.pal",      L"Hybrid Nimue Extra",                      65552,    MAABNode_Normal,          {},    0x10, indexArcanaSprites_Nimue, 0x08 },
    { L"act\\chara\\chara_09s_00.pal",      L"Iai Arthur Extra",                        65552,    MAABNode_Normal,          {},    0x10, indexArcanaSprites_IaiArthur, 0x08 },
    { L"act\\chara\\chara_09s_01.pal",      L"Iai Arthur Nyneue",                       65552,    MAABNode_Support,         {},    0x10, indexArcanaSprites_IaiArthur, 0x09 },
    { L"act\\chara\\chara_09p_01.pal",      L"Iai Arthur Cat",                          65552,    MAABNode_Normal,          {},    0x10, indexArcanaSprites_Bonus, 0x00 },
    { L"act\\chara\\chara_0As_00.pal",      L"Koume Sakiyama Extra",                    65552,    MAABNode_Normal,          {},    0x10, indexArcanaSprites_Koume, 0x08 },
    { L"act\\chara\\chara_0As_01.pal",      L"Koume March Hare",                        65552,    MAABNode_Normal,          {},    0x10, indexArcanaSprites_Koume, 0x0b },
    { L"act\\chara\\chara_0As_02.pal",      L"Koume Tri-Horn",                          65552,    MAABNode_Normal,          {},    0x10, indexArcanaSprites_Koume, 0x0d },
    { L"act\\chara\\chara_0As_03.pal",      L"Koume Stolas",                            65552,    MAABNode_Normal,          {},    0x10, indexArcanaSprites_Koume, 0x0c },
    { L"act\\chara\\chara_0As_04.pal",      L"Koume Fia",                               65552,    MAABNode_Normal,          {},    0x10, indexArcanaSprites_Koume, 0x0e },
    { L"act\\chara\\chara_0As_05.pal",      L"Koume Eligos",                            65552,    MAABNode_Normal,          {},    0x10, indexArcanaSprites_Koume, 0x0a },
    { L"act\\chara\\chara_0As_06.pal",      L"Koume Dantalion",                         65552,    MAABNode_Normal,          {},    0x10, indexArcanaSprites_Koume, 0x09 },
    { L"act\\chara\\chara_0As_07.pal",      L"Koume Wadatsumi",                         65552,    MAABNode_Normal,          {},    0x10, indexArcanaSprites_Koume, 0x0f },
    { L"act\\chara\\chara_08s_00.pal",      L"Riesz Extra",                             65552,    MAABNode_Normal,          {},    0x10, indexArcanaSprites_Riesz, 0x08 },
    { L"act\\chara\\chara_07s_00.pal",      L"Snow White Extra",                        65552,    MAABNode_Normal,          {},    0x10, indexArcanaSprites_SnowWhite, 0x08 },
    { L"act\\chara\\chara_07p_00.pal",      L"Snow White Blue Dwarf",                   65552,    MAABNode_Normal,          {},    0x10, indexArcanaSprites_SnowWhite, 0x09 },
    { L"act\\chara\\chara_07p_01.pal",      L"Snow White White Dwarf",                  65552,    MAABNode_Normal,          {},    0x10, indexArcanaSprites_SnowWhite, 0x09 },
    { L"act\\chara\\chara_07p_02.pal",      L"Snow White Green Dwarf",                  65552,    MAABNode_Normal,          {},    0x10, indexArcanaSprites_SnowWhite, 0x09 },
    { L"act\\chara\\chara_07p_03.pal",      L"Snow White Brown Dwarf",                  65552,    MAABNode_Normal,          {},    0x10, indexArcanaSprites_SnowWhite, 0x09 },
    { L"act\\chara\\chara_07p_04.pal",      L"Snow White Gray Dwarf",                   65552,    MAABNode_Normal,          {},    0x10, indexArcanaSprites_SnowWhite, 0x09 },
    { L"act\\chara\\chara_07p_05.pal",      L"Snow White Pink Dwarf",                   65552,    MAABNode_Normal,          {},    0x10, indexArcanaSprites_SnowWhite, 0x09 },
    { L"act\\chara\\chara_07p_06.pal",      L"Snow White Red Dwarf",                    65552,    MAABNode_Normal,          {},    0x10, indexArcanaSprites_SnowWhite, 0x09 },
    { L"act\\chara\\chara_02s_00.pal",      L"Thief Arthur Extra",                      65552,    MAABNode_Normal,          {},    0x10, indexArcanaSprites_Thief, 0x08 },
    { L"act\\chara\\chara_00s_01.pal",      L"Twinblade Arthur Extra",                  65552,    MAABNode_Normal,          {},    0x10, indexArcanaSprites_Twinblade, 0x08 },
    { L"act\\chara\\chara_00s_00.pal",      L"Twinblade Arthur Nimane",                 65552,    MAABNode_Support,         {},    0x10, indexArcanaSprites_Twinblade, 0x09  },
    { L"act\\chara\\chara_00p_00.pal",      L"Twinblade Arthur Cats",                   65552,    MAABNode_Normal,          {},    0x10, indexArcanaSprites_Bonus, 0x00 },
    { L"act\\chara\\chara_0Bs_02.pal",      L"Wildcat Arthur Extra",                    65552,    MAABNode_Normal,          {},    0x10, indexArcanaSprites_Wildcat, 0x08 },
    { L"act\\chara\\chara_0Bs_00.pal",      L"Wildcat Arthur Coupy",                    65552,    MAABNode_Normal,          {},    0x10, indexArcanaSprites_Wildcat, 0x09 },
    { L"act\\chara\\chara_0Bs_01.pal",      L"Wildcat Arthur Angelic Disaster",         65552,    MAABNode_Normal,          {},    0x10, indexArcanaSprites_Wildcat, 0x0a },

    // Underlighting for characters
    { L"act\\chara\\chara_05_00g.pal",      L"Bisclavret (Underlighting)",              65552,    MAABNode_Normal,          {},    0x10, indexArcanaSprites_Bisclavret },
    { L"act\\chara\\chara_01_00g.pal",      L"Blade Protector Arthur (Underlighting)",  65552,    MAABNode_Normal,          {},    0x10, indexArcanaSprites_BladeProtector },
    { L"act\\chara\\chara_06_00g.pal",      L"Eternal Flame (Underlighting)",           65552,    MAABNode_Normal,          {},    0x10, indexArcanaSprites_EternalFlame },
    { L"act\\chara\\chara_04_00g.pal",      L"Hybrid Nimue (Underlighting)",            65552,    MAABNode_Normal,          {},    0x10, indexArcanaSprites_Nimue },
    { L"act\\chara\\chara_09_00g.pal",      L"Iai Arthur (Underlighting)",              65552,    MAABNode_Normal,          {},    0x10, indexArcanaSprites_IaiArthur },
    { L"act\\chara\\chara_0C_00g.pal",      L"Iori Yagami (Underlighting)",             65552,    MAABNode_Normal,          {},    0x10, indexArcanaSprites_IoriYagami },
    { L"act\\chara\\chara_0A_00g.pal",      L"Koume Sakiyama (Underlighting)",          65552,    MAABNode_Normal,          {},    0x10, indexArcanaSprites_Koume},
    { L"act\\chara\\chara_08_00g.pal",      L"Riesz (Underlighting)",                   65552,    MAABNode_Normal,          {},    0x10, indexArcanaSprites_Riesz },
    { L"act\\chara\\chara_07_00g.pal",      L"Snow White (Underlighting)",              65552,    MAABNode_Normal,          {},    0x10, indexArcanaSprites_SnowWhite },
    { L"act\\chara\\chara_02_00g.pal",      L"Thief Arthur (Underlighting)",            65552,    MAABNode_Normal,          {},    0x10, indexArcanaSprites_Thief },
    { L"act\\chara\\chara_00_00g.pal",      L"Twinblade Arthur (Underlighting)",        65552,    MAABNode_Normal,          {},    0x10, indexArcanaSprites_Twinblade },
    { L"act\\chara\\chara_0B_00g.pal",      L"Wildcat Arthur (Underlighting)",          65552,    MAABNode_Normal,          {},    0x10, indexArcanaSprites_Wildcat },
    { L"act\\chara\\chara_03_00g.pal",      L"Zechs Siegfried (Underlighting)",         65552,    MAABNode_Normal,          {},    0x10, indexArcanaSprites_Zechs },

    // Underlighting for extras
    { L"act\\chara\\chara_05s_00g.pal",     L"Bisclavret Extra (Underlighting)",        65552,    MAABNode_Normal,          {},    0x10, indexArcanaSprites_Bisclavret, 0x08 },
    { L"act\\chara\\chara_06s_00g.pal",     L"Eternal Flame Extra (Underlighting)",     65552,    MAABNode_Normal,          {},    0x10, indexArcanaSprites_EternalFlame, 0x08 },
    { L"act\\chara\\chara_04s_00g.pal",     L"Hybrid Nimue Extra (Underlighting)",      65552,    MAABNode_Normal,          {},    0x10, indexArcanaSprites_Nimue, 0x08 },
    { L"act\\chara\\chara_09s_00g.pal",     L"Iai Arthur Extra (Underlighting)",        65552,    MAABNode_Normal,          {},    0x10, indexArcanaSprites_IaiArthur, 0x08 },
    { L"act\\chara\\chara_09s_01g.pal",     L"Iai Arthur Nyneue (Underlighting)",       65552,    MAABNode_Support,         {},    0x10, indexArcanaSprites_IaiArthur, 0x09 },
    { L"act\\chara\\chara_0As_00g.pal",     L"Koume Sakiyama Extra (Underlighting)",    65552,    MAABNode_Normal,          {},    0x10, indexArcanaSprites_Koume, 0x08 },
    { L"act\\chara\\chara_0As_01g.pal",     L"Koume March Hare (Underlighting)",        65552,    MAABNode_Normal,          {},    0x10, indexArcanaSprites_Koume, 0x0b },
    { L"act\\chara\\chara_0As_02g.pal",     L"Koume Tri-Horn (Underlighting)",          65552,    MAABNode_Normal,          {},    0x10, indexArcanaSprites_Koume, 0x0d },
    { L"act\\chara\\chara_0As_03g.pal",     L"Koume Stolas (Underlighting)",            65552,    MAABNode_Normal,          {},    0x10, indexArcanaSprites_Koume, 0x0c },
    { L"act\\chara\\chara_0As_04g.pal",     L"Koume Fia (Underlighting)",               65552,    MAABNode_Normal,          {},    0x10, indexArcanaSprites_Koume, 0x0e },
    { L"act\\chara\\chara_0As_05g.pal",     L"Koume Eligos (Underlighting)",            65552,    MAABNode_Normal,          {},    0x10, indexArcanaSprites_Koume, 0x0a },
    { L"act\\chara\\chara_0As_06g.pal",     L"Koume Dantalion (Underlighting)",         65552,    MAABNode_Normal,          {},    0x10, indexArcanaSprites_Koume, 0x09 },
    { L"act\\chara\\chara_0As_07g.pal",     L"Koume Wadatsumi (Underlighting)",         65552,    MAABNode_Normal,          {},    0x10, indexArcanaSprites_Koume, 0x0f },
    { L"act\\chara\\chara_08s_00g.pal",     L"Riesz Extra (Underlighting)",             65552,    MAABNode_Normal,          {},    0x10, indexArcanaSprites_Riesz, 0x08 },
    { L"act\\chara\\chara_07s_00g.pal",     L"Snow White Extra (Underlighting)",        65552,    MAABNode_Normal,          {},    0x10, indexArcanaSprites_SnowWhite, 0x08 },

    { L"act\\chara\\chara_02s_00g.pal",     L"Thief Arthur Extra (Underlighting)",      65552,    MAABNode_Normal,          {},    0x10, indexArcanaSprites_Thief, 0x08 },
    { L"act\\chara\\chara_00s_01g.pal",     L"Twinblade Arthur Extra (Underlighting)",  65552,    MAABNode_Normal,          {},    0x10, indexArcanaSprites_Twinblade, 0x08 },
    { L"act\\chara\\chara_00s_00g.pal",     L"Twinblade Arthur Nimane (Underlighting)", 65552,    MAABNode_Support,         {},    0x10, indexArcanaSprites_Twinblade, 0x09  },

    { L"act\\chara\\chara_0Bs_02g.pal",     L"Wildcat Arthur Extra (Underlighting)",    65552,    MAABNode_Normal,          {},    0x10, indexArcanaSprites_Wildcat, 0x08 },
    { L"act\\chara\\chara_0Bs_00g.pal",     L"Wildcat Arthur Coupy (Underlighting)",    65552,    MAABNode_Normal,          {},    0x10, indexArcanaSprites_Wildcat, 0x09 },
    { L"act\\chara\\chara_0Bs_01g.pal",     L"Wildcat Arthur Angelic Disaster (Underlighting)", 65552, MAABNode_Normal,     {},    0x10, indexArcanaSprites_Wildcat, 0x0a },

    //Support
    { L"act\\partner\\partner_11_00.pal",   L"Support Knight",  65552,      MAABNode_SupportKnights_CloneAife,          {},     0x10, indexArcanaSprites_Support, 0x01 },
    { L"act\\partner\\partner_1C_00.pal",   L"Support Knight",  65552,      MAABNode_SupportKnights_CloneAzia,          {},     0x10, indexArcanaSprites_Support, 0x02 },
    { L"act\\partner\\partner_12_00.pal",   L"Support Knight",  65552,      MAABNode_SupportKnights_CloneCuchulainn,    {},     0x10, indexArcanaSprites_Support, 0x03 },
    { L"act\\partner\\partner_0E_00.pal",   L"Support Knight",  65552,      MAABNode_SupportKnights_CloneDiva,          {},     0x10, indexArcanaSprites_Support, 0x04 },
    { L"act\\partner\\partner_04_00.pal",   L"Support Knight",  65552,      MAABNode_SupportKnights_CloneElee,          {},     0x10, indexArcanaSprites_Support, 0x05 },
    { L"act\\partner\\partner_02_00.pal",   L"Support Knight",  65552,      MAABNode_SupportKnights_CloneFay,           {},     0x10, indexArcanaSprites_Support, 0x06 },
    { L"act\\partner\\partner_03_00.pal",   L"Support Knight",  65552,      MAABNode_SupportKnights_CloneLifee,         {},     0x10, indexArcanaSprites_Support, 0x07 },
    { L"act\\partner\\partner_01_00.pal",   L"Support Knight",  65552,      MAABNode_SupportKnights_CloneMGArthur,      {},     0x10, indexArcanaSprites_Support, 0x08 },
    { L"act\\partner\\partner_0C_00.pal",   L"Support Knight",  65552,      MAABNode_SupportKnights_CloneMercArthur,    {},     0x10, indexArcanaSprites_Support, 0x09 },
    { L"act\\partner\\partner_0D_00.pal",   L"Support Knight",  65552,      MAABNode_SupportKnights_CloneMerchArthur,   {},     0x10, indexArcanaSprites_Support, 0x12 },
    { L"act\\partner\\partner_13_00.pal",   L"Support Knight",  65552,      MAABNode_SupportKnights_ClonePharsalia,     {},     0x10, indexArcanaSprites_Support, 0x0a },
    { L"act\\partner\\partner_0F_00.pal",   L"Support Knight",  65552,      MAABNode_SupportKnights_CloneScathach,      {},     0x10, indexArcanaSprites_Support, 0x0b },
    { L"act\\partner\\partner_00_00.pal",   L"Support Knight",  65552,      MAABNode_SupportKnights_CloneTechnoArthur,  {},     0x10, indexArcanaSprites_Support, 0x1f },
    { L"act\\partner\\partner_10_00.pal",   L"Support Knight",  65552,      MAABNode_SupportKnights_CloneUathach,       {},     0x10, indexArcanaSprites_Support, 0x0c },
    { L"act\\partner\\partner_1B_00.pal",   L"Support Knight",  65552,      MAABNode_SupportKnights_Foible,             {},     0x10, indexArcanaSprites_Support, 0x0e },
    { L"act\\partner\\partner_0A_00.pal",   L"Support Knight",  65552,      MAABNode_SupportKnights_Monarch,            {},     0x10, indexArcanaSprites_Support, 0x0d },
    { L"act\\partner\\partner_1E_00.pal",   L"Support Knight",  65552,      MAABNode_SupportKnights_OtherAkira,         {},     0x10, indexArcanaSprites_Support, 0x00 },
    { L"act\\partner\\partner_1D_00.pal",   L"Support Knight",  65552,      MAABNode_SupportKnights_OtherHawkeye,       {},     0x10, indexArcanaSprites_Support, 0x10 },
    { L"act\\partner\\partner_08_00.pal",   L"Support Knight",  65552,      MAABNode_SupportKnights_Ruler,              {},     0x10, indexArcanaSprites_Support, 0x0f },
    { L"act\\partner\\partner_14_00.pal",   L"Support Knight",  65552,      MAABNode_SupportKnights_Summer,             {},     0x10, indexArcanaSprites_Support, 0x14 },
    { L"act\\partner\\partner_17_00.pal",   L"Support Knight",  65552,      MAABNode_SupportKnights_SuppClaire,         {},     0x10, indexArcanaSprites_Support, 0x15 },
    { L"act\\partner\\partner_15_00.pal",   L"Support Knight",  65552,      MAABNode_SupportKnights_SuppEnide,          {},     0x10, indexArcanaSprites_Support, 0x16 },
    { L"act\\partner\\partner_07_00.pal",   L"Support Knight",  65552,      MAABNode_SupportKnights_Galahad,            {},     0x10, indexArcanaSprites_Support, 0x17 },
    { L"act\\partner\\partner_06_00.pal",   L"Support Knight",  65552,      MAABNode_SupportKnights_Gawain,             {},     0x10, indexArcanaSprites_Support, 0x18 },
    { L"act\\partner\\partner_05_00.pal",   L"Support Knight",  65552,      MAABNode_SupportKnights_Lancelot,           {},     0x10, indexArcanaSprites_Support, 0x1c },
    { L"act\\partner\\partner_09_00.pal",   L"Support Knight",  65552,      MAABNode_SupportKnights_Mordred,            {},     0x10, indexArcanaSprites_Support, 0x1d },
    { L"act\\partner\\partner_19_00.pal",   L"Support Knight",  65552,      MAABNode_SupportKnights_Balin,              {},     0x10, indexArcanaSprites_Support, 0x19 },
    { L"act\\partner\\partner_0B_00.pal",   L"Support Knight",  65552,      MAABNode_SupportKnights_Peridod,            {},     0x10, indexArcanaSprites_Support, 0x1a },
    { L"act\\partner\\partner_18_00.pal",   L"Support Knight",  65552,      MAABNode_SupportKnights_Tor,                {},     0x10, indexArcanaSprites_Support, 0x1b },
    { L"act\\partner\\partner_1A_00.pal",   L"Support Knight",  65552,      MAABNode_SupportKnights_LittleGrey,         {},     0x10, indexArcanaSprites_Support, 0x11 },
    { L"act\\partner\\partner_16_00.pal",   L"Support Knight",  65552,      MAABNode_SupportKnights_Kagura,             {},     0x10, indexArcanaSprites_Support, 0x13 },
};

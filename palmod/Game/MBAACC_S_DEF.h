#pragma once

const std::vector<uint16_t> MBAACC_S_IMGIDS_USED =
{
    indexMBAACCSprites_AkihaTohno,          // 0x4A
    indexMBAACCSprites_AkihaTohnoSeifuku,   // 0x4B
    indexMBAACCSprites_AkihaVermillion,     // 0x4C
    indexMBAACCSprites_AokoAozaki,          // 0x4D
    indexMBAACCSprites_ArcueidBrunestud,    // 0x4E
    indexMBAACCSprites_Ciel,                // 0x4F
    indexMBAACCSprites_DustOfOsiris,        // 0x50
    indexMBAACCSprites_Hime,                // 0x51
    indexMBAACCSprites_Hisui,               // 0x52
    indexMBAACCSprites_Kohaku,              // 0x53
    indexMBAACCSprites_KoumaKishima,        // 0x54
    indexMBAACCSprites_Len,                 // 0x55
    indexMBAACCSprites_MechHisui,           // 0x56
    indexMBAACCSprites_MiyakoArima,         // 0x57
    indexMBAACCSprites_NecoArc,             // 0x58
    indexMBAACCSprites_NecoArcChaos,        // 0x59
    indexMBAACCSprites_NeroChaos,           // 0x5A
    indexMBAACCSprites_PowerdCiel,          // 0x5B
    indexMBAACCSprites_RedArcueid,          // 0x5C
    indexMBAACCSprites_RiesbyfeStridberg,   // 0x5D
    indexMBAACCSprites_Roa,                 // 0x5E
    indexMBAACCSprites_SatsukiYumiduka,     // 0x5F
    indexMBAACCSprites_ShikiNanaya,         // 0x60
    indexMBAACCSprites_ShikiRyougi,         // 0x61
    indexMBAACCSprites_ShikiTohno,          // 0x62
    indexMBAACCSprites_SionEltnamAtlasia,   // 0x63
    indexMBAACCSprites_SionTATARI,          // 0x64
    indexMBAACCSprites_Warachia,            // 0x65
    indexMBAACCSprites_WhiteLen,            // 0x66
    indexMBAACCSprites_Bonus,               // 0x67
    indexMBAACCSprites_KohaMechHisui,               // 0x7C
    indexMBAACCSprites_KohaMechKohaku,              // 0x7D #Koha - Mech, Kohaku
    indexMBAACCSprites_NecoMechHisui,               // 0x7E #Neco - Mech, Mech - Hisui
    indexMBAACCSprites_NecoMechNeco,                // 0x7F #Nech - Mech, NecoArc
};

const std::vector<LPCWSTR> MBAACCButtonLabelsNormal =
{
    L"Palette 01",
    L"Palette 02",
    L"Palette 03",
    L"Palette 04",
    L"Palette 05",
    L"Palette 06",
    L"Palette 07",
    L"Palette 08",
    L"Palette 09",
    L"Palette 10",
    L"Palette 11",
    L"Palette 12",
    L"Palette 13",
    L"Palette 14",
    L"Palette 15",
    L"Palette 16",
    L"Palette 17",
    L"Palette 18",
    L"Palette 19",
    L"Palette 20",
    L"Palette 21",
    L"Palette 22",
    L"Palette 23",
    L"Palette 24",
    L"Palette 25",
    L"Palette 26",
    L"Palette 27",
    L"Palette 28",
    L"Palette 29",
    L"Palette 30",
    L"Palette 31",
    L"Palette 32",
    L"Palette 33",
    L"Palette 34",
    L"Palette 35",
    L"Palette 36",
    //In the files, not used in game afaik
        L"Palette 37 (Unused)",
        L"Palette 38 (Unused)",
        L"Palette 39 (Unused)",
        L"Palette 40 (Unused)",
        L"Palette 41 (Unused)",
        L"Palette 42 (Unused)",
        L"Palette 43 (Unused)",
        L"Palette 44 (Unused)",
        L"Palette 45 (Unused)",
        L"Palette 46 (Unused)",
        L"Palette 47 (Unused)",
        L"Palette 48 (Unused)",
        L"Palette 49 (Unused)",
        L"Palette 50 (Unused)",
        L"Palette 51 (Unused)",
        L"Palette 52 (Unused)",
        L"Palette 53 (Unused)",
        L"Palette 54 (Unused)",
        L"Palette 55 (Unused)",
        L"Palette 56 (Unused)",
        L"Palette 57 (Unused)",
        L"Palette 58 (Unused)",
        L"Palette 59 (Unused)",
        L"Palette 60 (Unused)",
        L"Palette 61 (Unused)",
        L"Palette 62 (Unused)",
        L"Palette 63 (Unused)",
        L"Palette 64 (Unused)",
};

const sGCBUPF_BasicNodeData MBAACCPaletteNodes =
{
    { L"Palettes" }, 0x0, MBAACCButtonLabelsNormal
};

const std::vector<sGCBUPF_BasicFileData> MBAACCCharacterData =
{
    //css start
    { L"aoko.pal",              L"Aozaki Aoko",                 65540, MBAACCPaletteNodes, GCBUPF_UseButtonLabelsAsPaletteSet,  0x4, indexMBAACCSprites_AokoAozaki },
    { L"shiki.pal",             L"Tohno Shiki",                 65540, MBAACCPaletteNodes, GCBUPF_UseButtonLabelsAsPaletteSet,  0x4, indexMBAACCSprites_ShikiTohno },
    { L"p_arc.pal",             L"Archetype: Earth (Hime)",		65540, MBAACCPaletteNodes, GCBUPF_UseButtonLabelsAsPaletteSet,  0x4, indexMBAACCSprites_Hime },
    { L"p_arc_D.pal",			L"Archetype: Earth (Arcueid Revertion)",	65540, MBAACCPaletteNodes, GCBUPF_UseButtonLabelsAsPaletteSet, 0x4, indexMBAACCSprites_Hime },
    //p_arc_D.pal is used by the Arcueid Sprites that show up when Archetype Earth has lost a set (NOT a round) and "died". Palette layout looks identical to Archetype Earth's, but it may need a different preview to focus on the fact it only has arc sprites.
    { L"nanaya.pal",            L"Nanaya Shiki",                65540, MBAACCPaletteNodes, GCBUPF_UseButtonLabelsAsPaletteSet,  0x4, indexMBAACCSprites_ShikiNanaya },
    { L"kishima.pal",           L"Kishima Kouma",               65540, MBAACCPaletteNodes, GCBUPF_UseButtonLabelsAsPaletteSet,  0x4, indexMBAACCSprites_KoumaKishima },
    { L"miyako.pal",            L"Arima Miyako",                65540, MBAACCPaletteNodes, GCBUPF_UseButtonLabelsAsPaletteSet,  0x4, indexMBAACCSprites_MiyakoArima },
    { L"ciel.pal",              L"Ciel",                        65540, MBAACCPaletteNodes, GCBUPF_UseButtonLabelsAsPaletteSet,  0x4, indexMBAACCSprites_Ciel },
    { L"sion.pal",              L"Sion Eltnam Atlasia",         65540, MBAACCPaletteNodes, GCBUPF_UseButtonLabelsAsPaletteSet,  0x4, indexMBAACCSprites_SionEltnamAtlasia },
    { L"ries.pal",              L"Riesbyfe Stridberg",          65540, MBAACCPaletteNodes, GCBUPF_UseButtonLabelsAsPaletteSet,  0x4, indexMBAACCSprites_RiesbyfeStridberg },
    { L"V_sion.pal",            L"Sion Tatari",					65540, MBAACCPaletteNodes, GCBUPF_UseButtonLabelsAsPaletteSet,  0x4, indexMBAACCSprites_SionTATARI },
    { L"warakia.pal",           L"Warachia",					65540, MBAACCPaletteNodes, GCBUPF_UseButtonLabelsAsPaletteSet,  0x4, indexMBAACCSprites_Warachia },
    { L"roa.pal",               L"Micheal Roa Valdamjong",		65540, MBAACCPaletteNodes, GCBUPF_UseButtonLabelsAsPaletteSet,  0x4, indexMBAACCSprites_Roa },
    //Name = HISUI_AND_KOHAKU // "Maids" share palette data with their solo counterparts, unlike the other tag style characters 
    { L"hisui.pal",             L"Hisui (Solo & Maids)",        65540, MBAACCPaletteNodes, GCBUPF_UseButtonLabelsAsPaletteSet,  0x4, indexMBAACCSprites_Hisui },
    { L"kohaku.pal",            L"Kohaku (Solo & Maids)",       65540, MBAACCPaletteNodes, GCBUPF_UseButtonLabelsAsPaletteSet,  0x4, indexMBAACCSprites_Kohaku },
    { L"akiha.pal",             L"Tohno Akiha",                 65540, MBAACCPaletteNodes, GCBUPF_UseButtonLabelsAsPaletteSet,  0x4, indexMBAACCSprites_AkihaTohno },
    { L"arc.pal",               L"Arcueid=Brunestud",           65540, MBAACCPaletteNodes, GCBUPF_UseButtonLabelsAsPaletteSet,  0x4, indexMBAACCSprites_ArcueidBrunestud },
    { L"p_ciel.pal",            L"Powerd Ciel",					65540, MBAACCPaletteNodes, GCBUPF_UseButtonLabelsAsPaletteSet,  0x4, indexMBAACCSprites_PowerdCiel },
    { L"warc.pal",              L"Red Arcueid",					65540, MBAACCPaletteNodes, GCBUPF_UseButtonLabelsAsPaletteSet,  0x4, indexMBAACCSprites_RedArcueid },
    { L"akaakiha.pal",          L"Akiha Vermillion",			65540, MBAACCPaletteNodes, GCBUPF_UseButtonLabelsAsPaletteSet,  0x4, indexMBAACCSprites_AkihaVermillion },
    { L"m_hisui.pal",           L"Mech-Hisui (Solo)",			65540, MBAACCPaletteNodes, GCBUPF_UseButtonLabelsAsPaletteSet,  0x4, indexMBAACCSprites_MechHisui },
    { L"s_akiha.pal",           L"Tohno Akiha (Seifuku)",       65540, MBAACCPaletteNodes, GCBUPF_UseButtonLabelsAsPaletteSet,  0x4, indexMBAACCSprites_AkihaTohnoSeifuku },
    { L"satsuki.pal",           L"Yumizuka Satsuki",            65540, MBAACCPaletteNodes, GCBUPF_UseButtonLabelsAsPaletteSet,  0x4, indexMBAACCSprites_SatsukiYumiduka },
    { L"len.pal",               L"Len",                         65540, MBAACCPaletteNodes, GCBUPF_UseButtonLabelsAsPaletteSet,  0x4, indexMBAACCSprites_Len },
    { L"ryougi.pal",            L"Ryougi Shiki",                65540, MBAACCPaletteNodes, GCBUPF_UseButtonLabelsAsPaletteSet,  0x4, indexMBAACCSprites_ShikiRyougi },
    { L"wlen.pal",              L"White Len",                   65540, MBAACCPaletteNodes, GCBUPF_UseButtonLabelsAsPaletteSet,  0x4, indexMBAACCSprites_WhiteLen },
    { L"nero.pal",              L"Nrvnqsr Chaos",				65540, MBAACCPaletteNodes, GCBUPF_UseButtonLabelsAsPaletteSet,  0x4, indexMBAACCSprites_NeroChaos },
    { L"nechaos.pal",           L"Neco-Arc Chaos",              65540, MBAACCPaletteNodes, GCBUPF_UseButtonLabelsAsPaletteSet,  0x4, indexMBAACCSprites_NecoArcChaos },
    //Name = MECH_AND_KOHAKU (koha and mech swapped positions from the og ver of this file)
    { L"kohaku_m.pal",          L"Kohaku (Kohaku & Mech)",		65540, MBAACCPaletteNodes, GCBUPF_UseButtonLabelsAsPaletteSet,  0x4, indexMBAACCSprites_KohaMechKohaku },
    { L"m_hisui_p.pal",         L"Mech-Hisui (Kohaku & Mech)",	65540, MBAACCPaletteNodes, GCBUPF_UseButtonLabelsAsPaletteSet,  0x4, indexMBAACCSprites_MechHisui },
    { L"neco.pal",              L"Neco-Arc",                    65540, MBAACCPaletteNodes, GCBUPF_UseButtonLabelsAsPaletteSet,  0x4, indexMBAACCSprites_NecoArc },
    //Name = MECH_AND_NECO
    { L"m_hisui_m.pal",         L"Mech-Hisui (Neco-Arc & Mech)",65540, MBAACCPaletteNodes, GCBUPF_UseButtonLabelsAsPaletteSet,  0x4, indexMBAACCSprites_MechHisui },
    { L"neco_p.pal",            L"Neco-Arc (Neco-Arc & Mech)",	65540, MBAACCPaletteNodes, GCBUPF_UseButtonLabelsAsPaletteSet,  0x4, indexMBAACCSprites_NecoArc },
    //end of css

    { L"hermes.pal",            L"Dust of Osiris",				65540, MBAACCPaletteNodes, GCBUPF_UseButtonLabelsAsPaletteSet,  0x4, indexMBAACCSprites_DustOfOsiris },
    { L"damien.pal",			L"(Unused) Damien Armies",		65540, MBAACCPaletteNodes, GCBUPF_UseButtonLabelsAsPaletteSet,  0x4, indexMBAACCSprites_NecoArcChaos },
    //G_CHAOS, NECO CHAOS BLACK G666 is mentioned in code but doesnt seem to have a .pal file, will leave here for now

//BOSS CHARACTER SECTION, these were all meant to appear in the cut Boss Rush gamemode
    { L"b_akiha.pal",			L"(Unused) Boss Tohno Akiha",					65540, MBAACCPaletteNodes, GCBUPF_UseButtonLabelsAsPaletteSet,  0x4, indexMBAACCSprites_AkihaTohno },
    { L"b_miyako.pal",			L"(Unused) Boss Arima Miyako",			        65540, MBAACCPaletteNodes, GCBUPF_UseButtonLabelsAsPaletteSet,  0x4, indexMBAACCSprites_MiyakoArima },
    { L"b_warakia.pal",			L"(Unused) Boss Warachia",	                    65540, MBAACCPaletteNodes, GCBUPF_UseButtonLabelsAsPaletteSet,  0x4, indexMBAACCSprites_Warachia },
    { L"b_aoko.pal",			L"(Unused) Boss Aozaki Aoko",			        65540, MBAACCPaletteNodes, GCBUPF_UseButtonLabelsAsPaletteSet,  0x4, indexMBAACCSprites_AokoAozaki },
    { L"b_wlen.pal",			L"(Unused) Boss White Len",				        65540, MBAACCPaletteNodes, GCBUPF_UseButtonLabelsAsPaletteSet,  0x4, indexMBAACCSprites_WhiteLen },
    { L"b_ryougi.pal",			L"(Unused) Boss Ryougi Shiki",                  65540, MBAACCPaletteNodes, GCBUPF_UseButtonLabelsAsPaletteSet,  0x4, indexMBAACCSprites_ShikiRyougi },
    { L"b_kohaku_m.pal",		L"(Unused) Boss Kohaku (Kohaku & Mech)",        65540, MBAACCPaletteNodes, GCBUPF_UseButtonLabelsAsPaletteSet,  0x4, indexMBAACCSprites_KohaMechKohaku },
    { L"b_m_hisui_p.pal",		L"(Unused) Boss Mech-Hisui (Kohaku & Mech)",    65540, MBAACCPaletteNodes, GCBUPF_UseButtonLabelsAsPaletteSet,  0x4, indexMBAACCSprites_MechHisui },
    { L"b_arc.pal",				L"(Unused) MBAA Boss Arcueid",			        65540, MBAACCPaletteNodes, GCBUPF_UseButtonLabelsAsPaletteSet,  0x4, indexMBAACCSprites_ArcueidBrunestud },
    //It is unclear if B.Arc fills pos 51 or pos 101 due to conflicting evidence
};

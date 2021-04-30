#pragma once

const UINT16 MBAACC_S_IMG_UNITS[] =
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
};

const LPCWSTR MBAACCNormalPalettes[] =
{
    L"Palette 1",
    L"Palette 2",
    L"Palette 3",
    L"Palette 4",
    L"Palette 5",
    L"Palette 6",
    L"Palette 7",
    L"Palette 8",
    L"Palette 9",
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

struct MBAACCFileData
{
    LPCWSTR pszFileName = nullptr;
    LPCWSTR pszCharacter = nullptr;
    UINT32 nExpectedFileSize = 0;
    const LPCWSTR* ppszPaletteList = nullptr;
    UINT32 nPaletteListSize = 0;
    UINT32 nInitialLocation = 0;
    UINT32 nSpriteIndex = -1;
};

MBAACCFileData MBAACCCharacterData[] =
{
    //Following the order found in 0004.p/charaselect.txt
    { L"sion.pal",	    L"Sion Eltnam Atlasia",			65540, MBAACCNormalPalettes, ARRAYSIZE(MBAACCNormalPalettes), 0x4, indexMBAACCSprites_SionEltnamAtlasia },
    { L"arc.pal",   	L"Arcueid Brunestud",			65540, MBAACCNormalPalettes, ARRAYSIZE(MBAACCNormalPalettes), 0x4, indexMBAACCSprites_ArcueidBrunestud },
    { L"ciel.pal",	    L"Ciel",						65540, MBAACCNormalPalettes, ARRAYSIZE(MBAACCNormalPalettes), 0x4, indexMBAACCSprites_Ciel },
    { L"akiha.pal", 	L"Akiha Tohno",					65540, MBAACCNormalPalettes, ARRAYSIZE(MBAACCNormalPalettes), 0x4, indexMBAACCSprites_AkihaTohno },
    { L"hisui.pal", 	L"Hisui",						65540, MBAACCNormalPalettes, ARRAYSIZE(MBAACCNormalPalettes), 0x4, indexMBAACCSprites_Hisui },
    { L"kohaku.pal",	L"Kohaku",						65540, MBAACCNormalPalettes, ARRAYSIZE(MBAACCNormalPalettes), 0x4, indexMBAACCSprites_Kohaku },

    //Name = HISUI_AND_KOHAKU // "Maids" share palette data with their solo counterparts, unlike the other tag style characters 

    { L"shiki.pal",	    L"Shiki Tohno",					65540, MBAACCNormalPalettes, ARRAYSIZE(MBAACCNormalPalettes), 0x4, indexMBAACCSprites_ShikiTohno },
    { L"miyako.pal",	L"Miyako Arima",				65540, MBAACCNormalPalettes, ARRAYSIZE(MBAACCNormalPalettes), 0x4, indexMBAACCSprites_MiyakoArima },
    { L"warakia.pal",	L"Warachia",					65540, MBAACCNormalPalettes, ARRAYSIZE(MBAACCNormalPalettes), 0x4, indexMBAACCSprites_Warachia },
    { L"nero.pal",	    L"Nero Chaos",					65540, MBAACCNormalPalettes, ARRAYSIZE(MBAACCNormalPalettes), 0x4, indexMBAACCSprites_NeroChaos },
    { L"V_sion.pal",	L"Sion TATARI",					65540, MBAACCNormalPalettes, ARRAYSIZE(MBAACCNormalPalettes), 0x4, indexMBAACCSprites_SionTATARI },
    { L"warc.pal",	    L"Red Arcueid",					65540, MBAACCNormalPalettes, ARRAYSIZE(MBAACCNormalPalettes), 0x4, indexMBAACCSprites_RedArcueid },
    { L"akaakiha.pal",	L"Akiha Vermillion",			65540, MBAACCNormalPalettes, ARRAYSIZE(MBAACCNormalPalettes), 0x4, indexMBAACCSprites_AkihaVermillion },
    { L"m_hisui.pal",	L"Mech-Hisui",					65540, MBAACCNormalPalettes, ARRAYSIZE(MBAACCNormalPalettes), 0x4, indexMBAACCSprites_MechHisui },
    { L"nanaya.pal",	L"Shiki Nanaya",				65540, MBAACCNormalPalettes, ARRAYSIZE(MBAACCNormalPalettes), 0x4, indexMBAACCSprites_ShikiNanaya },
    { L"satsuki.pal",	L"Satsuki Yumiduka",			65540, MBAACCNormalPalettes, ARRAYSIZE(MBAACCNormalPalettes), 0x4, indexMBAACCSprites_SatsukiYumiduka },
    { L"len.pal",	    L"Len",							65540, MBAACCNormalPalettes, ARRAYSIZE(MBAACCNormalPalettes), 0x4, indexMBAACCSprites_Len },
    { L"p_ciel.pal",	L"Powerd Ciel",					65540, MBAACCNormalPalettes, ARRAYSIZE(MBAACCNormalPalettes), 0x4, indexMBAACCSprites_PowerdCiel },
    { L"neco.pal",  	L"Neco-Arc",					65540, MBAACCNormalPalettes, ARRAYSIZE(MBAACCNormalPalettes), 0x4, indexMBAACCSprites_NecoArc },
    { L"aoko.pal",  	L"Aoko Aozaki",					65540, MBAACCNormalPalettes, ARRAYSIZE(MBAACCNormalPalettes), 0x4, indexMBAACCSprites_AokoAozaki },
    { L"wlen.pal",	    L"White Len",					65540, MBAACCNormalPalettes, ARRAYSIZE(MBAACCNormalPalettes), 0x4, indexMBAACCSprites_WhiteLen },
    { L"nechaos.pal",	L"Neco-Arc Chaos",				65540, MBAACCNormalPalettes, ARRAYSIZE(MBAACCNormalPalettes), 0x4, indexMBAACCSprites_NecoArcChaos },
    //G_CHAOS, NECO CHAOS BLACK G666 is mentioned in code but doesnt seem to have a .pal file, will leave here for now
    { L"kishima.pal",	L"Kouma Kishima",				65540, MBAACCNormalPalettes, ARRAYSIZE(MBAACCNormalPalettes), 0x4, indexMBAACCSprites_KoumaKishima },
    { L"s_akiha.pal",	L"Akiha Tohno (Seifuku)",		65540, MBAACCNormalPalettes, ARRAYSIZE(MBAACCNormalPalettes), 0x4, indexMBAACCSprites_AkihaTohnoSeifuku },
    { L"ries.pal",  	L"Riesbyfe Stridberg",			65540, MBAACCNormalPalettes, ARRAYSIZE(MBAACCNormalPalettes), 0x4, indexMBAACCSprites_RiesbyfeStridberg },
    { L"roa.pal",	    L"Roa",							65540, MBAACCNormalPalettes, ARRAYSIZE(MBAACCNormalPalettes), 0x4, indexMBAACCSprites_Roa },

    //Name = MECH_AND_NECO
    { L"m_hisui_m.pal",	L"Mech-Hisui (Master)",			65540, MBAACCNormalPalettes, ARRAYSIZE(MBAACCNormalPalettes), 0x4, indexMBAACCSprites_MechHisui },
    { L"neco_p.pal",	L"Neco-Arc (Puppt)",			65540, MBAACCNormalPalettes, ARRAYSIZE(MBAACCNormalPalettes), 0x4, indexMBAACCSprites_NecoArc },

    //Name = MECH_AND_KOHAKU
    { L"kohaku_m.pal",	L"Kohaku (Master)",				65540, MBAACCNormalPalettes, ARRAYSIZE(MBAACCNormalPalettes), 0x4, indexMBAACCSprites_Kohaku },
    { L"m_hisui_p.pal",	L"Mech_Hisui (Puppt)",			65540, MBAACCNormalPalettes, ARRAYSIZE(MBAACCNormalPalettes), 0x4, indexMBAACCSprites_MechHisui },

    { L"ryougi.pal",	L"Shiki Ryougi",				65540, MBAACCNormalPalettes, ARRAYSIZE(MBAACCNormalPalettes), 0x4, indexMBAACCSprites_ShikiRyougi },
    //Hime 1/3 arent used, Hime (2) is used
    //{ L"b_arc.pal",   L"Archetype: Earth (Hime)1",    65540, MBAACCNormalPalltes, ARRAYSIZE(MBAACCNormalPalltes), 0x4, indexMBAACCSprites_Hime },
    { L"p_arc.pal",	    L"Archetype: Earth (Hime)",	    65540, MBAACCNormalPalettes, ARRAYSIZE(MBAACCNormalPalettes), 0x4, indexMBAACCSprites_Hime },
    //{ L"p_arc_D.pal",	L"Archetype: Earth (Hime)3",	65540, MBAACCNormalPalltes, ARRAYSIZE(MBAACCNormalPalltes), 0x4, indexMBAACCSprites_Hime },
    { L"damien.pal",	L"Damien (Unused)",				65540, MBAACCNormalPalettes, ARRAYSIZE(MBAACCNormalPalettes), 0x4, indexMBAACCSprites_NecoArcChaos },
    { L"hermes.pal",	L"Dust of Osiris (Unused?)",	65540, MBAACCNormalPalettes, ARRAYSIZE(MBAACCNormalPalettes), 0x4, indexMBAACCSprites_DustOfOsiris },
};

#pragma once

// These groups contain the sprites relevant to that particular set of games

enum eIMGDat_Sections
{
    IMGDAT_SECTION_ARCANA,  // Fuck Arcana Heart
    IMGDAT_SECTION_ARCSYS,  // Persona
    IMGDAT_SECTION_BREAKREV,
    IMGDAT_SECTION_CPS2,    // Used for MVC2, MVC, SFA3, XMVSF, MSH, MSHVSF, etc CPS2 games
    IMGDAT_SECTION_CVS2,    // CVS2: has both Capcom and SNK images
    IMGDAT_SECTION_DS,      // Nintendo DS
    IMGDAT_SECTION_FRENCHBREAD, // Used for DBFCI, UNICLR
    IMGDAT_SECTION_GAROU,
    IMGDAT_SECTION_GUILTYGEAR,
    IMGDAT_SECTION_JOJOS,
    IMGDAT_SECTION_KARNOVSR,
    IMGDAT_SECTION_KOF,     // KOF games, Last Blade, etc
    IMGDAT_SECTION_MATRIM,  // Matrimelee
    IMGDAT_SECTION_NEOGEO,  // generic set for NeoGeo games
    IMGDAT_SECTION_PGM,     // PolyGame Master
    IMGDAT_SECTION_REDEARTH,
    IMGDAT_SECTION_SAMSHO,  // Samurai Shodown games
    IMGDAT_SECTION_SEGA,
    IMGDAT_SECTION_SF2,      // Used for ST
    IMGDAT_SECTION_SF3,
    IMGDAT_SECTION_SNES,
    IMGDAT_SECTION_TAITO,   // DanKuGa
    IMGDAT_SECTION_WAKUWAKU7,
    IMGDAT_SECTION_WINDJAMMERS,
    IMGDAT_SECTION_LAST,    // for comparing to the imgdat we try to load
};

// These numbers refer to the indexes within the appropriate IMGDAT sections

enum CHARACTERS_CPS2
{
    indexCPS2Sprites_Ryu,          // 0x00
    indexCPS2Sprites_Zangief,      // 0x01
    indexCPS2Sprites_Guile,        // 0x02
    indexCPS2Sprites_Morrigan,     // 0x03
    indexCPS2Sprites_Anakaris,     // 0x04
    indexCPS2Sprites_Strider,      // 0x05
    indexCPS2Sprites_Cyclops,      // 0x06
    indexCPS2Sprites_Wolverine,    // 0x07
    indexCPS2Sprites_Psylocke,     // 0x08
    indexCPS2Sprites_Iceman,       // 0x09
    indexCPS2Sprites_Rogue,        // 0x0A
    indexCPS2Sprites_CapAm,        // 0x0B, // Captain America
    indexCPS2Sprites_Spidey,       // 0x0C, // Spider-Man
    indexCPS2Sprites_Hulk,         // 0x0D
    indexCPS2Sprites_Venom,        // 0x0E
    indexCPS2Sprites_DrDoom,       // 0x0F
    indexCPS2Sprites_Tron,         // 0x10, // Tron Bonne
    indexCPS2Sprites_Jill,         // 0x11
    indexCPS2Sprites_Hayato,       // 0x12
    indexCPS2Sprites_Ruby,         // 0x13
    indexCPS2Sprites_SonSon,       // 0x14
    indexCPS2Sprites_Amingo,       // 0x15
    indexCPS2Sprites_Marrow,       // 0x16
    indexCPS2Sprites_Cable,        // 0x17
    indexCPS2Sprites_Abyss1,       // 0x18
    indexCPS2Sprites_Abyss2,       // 0x19
    indexCPS2Sprites_Abyss3,       // 0x1A
    indexCPS2Sprites_ChunLi,       // 0x1B
    indexCPS2Sprites_Megaman,      // 0x1C
    indexCPS2Sprites_Roll,         // 0x1D
    indexCPS2Sprites_Akuma,        // 0x1E, // Gouki
    indexCPS2Sprites_BBHood,       // 0x1F
    indexCPS2Sprites_Felicia,      // 0x20
    indexCPS2Sprites_Charlie,      // 0x21, // Charlie/Nash/Shadow
    indexCPS2Sprites_Sakura,       // 0x22
    indexCPS2Sprites_Dan,          // 0x23
    indexCPS2Sprites_Cammy,        // 0x24
    indexCPS2Sprites_Dhalsim,      // 0x25
    indexCPS2Sprites_Bison,        // 0x26
    indexCPS2Sprites_Ken,          // 0x27
    indexCPS2Sprites_Gambit,       // 0x28
    indexCPS2Sprites_Juggy,        // 0x29, // Juggernaut
    indexCPS2Sprites_Storm,        // 0x2A
    indexCPS2Sprites_Sabretooth,   // 0x2B
    indexCPS2Sprites_Magneto,      // 0x2C
    indexCPS2Sprites_Shuma,        // 0x2D
    indexCPS2Sprites_WarMachine,   // 0x2E
    indexCPS2Sprites_SilverSamurai, // 0x2F
    indexCPS2Sprites_OmegaRed,     // 0x30
    indexCPS2Sprites_Spiral,       // 0x31
    indexCPS2Sprites_Colossus,     // 0x32
    indexCPS2Sprites_IronMan,      // 0x33
    indexCPS2Sprites_Sentinel,     // 0x34
    indexCPS2Sprites_Blackheart,   // 0x35
    indexCPS2Sprites_Thanos,       // 0x36
    indexCPS2Sprites_Jin,          // 0x37
    indexCPS2Sprites_CapCom,       // 0x38, // Captain Commando
    indexCPS2Sprites_Bonerine,     // 0x39
    indexCPS2Sprites_Kobun,        // 0x3A

    indexCPS2Sprites_Onslaught,    // 0x3B
    indexCPS2Sprites_MVCAssets,    // 0x3C
    indexCPS2Sprites_Adon,         // 0x3D
    indexCPS2Sprites_Sodom,        // 0x3E
    indexCPS2Sprites_Guy,          // 0x3F
    indexCPS2Sprites_Birdie,       // 0x40
    indexCPS2Sprites_Rose,         // 0x41
    indexCPS2Sprites_Sagat,        // 0x42
    indexCPS2Sprites_Rolento,      // 0x43
    indexCPS2Sprites_Gen,          // 0x44
    indexCPS2Sprites_Balrog,       // 0x45
    indexCPS2Sprites_EHonda,       // 0x46, // E.Honda
    indexCPS2Sprites_Blanka,       // 0x47
    indexCPS2Sprites_RMika,        // 0x48, // R.Mika
    indexCPS2Sprites_Cody,         // 0x49
    indexCPS2Sprites_Vega,         // 0x4A
    indexCPS2Sprites_Karin,        // 0x4B
    indexCPS2Sprites_Juni,         // 0x4C
    indexCPS2Sprites_Juli,         // 0x4D
    indexCPS2Sprites_SFA3Assets,   // 0x4e - SFA3 HUD, stages
    indexCPS2Sprites_Apocalypse,   // 0x4f
    indexCPS2Sprites_XMVSFAssets,  // 0x50 - XMVSF HUD, stages
    indexCPS2Sprites_Anita,        // 0x51
    indexCPS2Sprites_MSHAssets,    // 0x52 - MSH HUD, stages
    indexCPS2Sprites_Norimaro,     // 0x53
    indexCPS2Sprites_CyberAkuma,   // 0x54 - Cyber Gouki
    indexCPS2Sprites_MSHVSFAssets, // 0x55 - HUD, stages
    indexCPS2Sprites_COTAAssets,   // 0x56 - HUD, stages, etc
    indexCPS2Sprites_STAkuma,      // 0x57 - ST Akuma
    indexCPS2Sprites_SFA2Portraits, // 0x58

    indexCPS2Sprites_SPF_Ryu,      // 0x59
    indexCPS2Sprites_SPF_Ken,      // 0x5a
    indexCPS2Sprites_SPF_ChunLi,   // 0x5b
    indexCPS2Sprites_SPF_Sakura,   // 0x5c
    indexCPS2Sprites_SPF_Morrigan, // 0x5d
    indexCPS2Sprites_SPF_HsienKo,  // 0x5e
    indexCPS2Sprites_SPF_Felicia,  // 0x5f
    indexCPS2Sprites_SPF_Tessa,    // 0x60
    indexCPS2Sprites_SPF_Ibuki,    // 0x61
    indexCPS2Sprites_SPF_Zangief,  // 0x62
    indexCPS2Sprites_SPF_Dan,      // 0x63
    indexCPS2Sprites_SPF_Akuma,    // 0x64

    indexCPS2Sprites_SFA1_Portraits, // 0x65
    indexCPS2Sprites_SFA3_Portraits, // 0x66

    indexCPS2Sprites_Vamp_Aulbath,   // 0x67
    indexCPS2Sprites_Vamp_Bishamon,  // 0x68
    indexCPS2Sprites_Vamp_Dee,       // 0x69
    indexCPS2Sprites_Vamp_Demitri,   // 0x6A
    indexCPS2Sprites_Vamp_Donovan,   // 0x6B
    indexCPS2Sprites_Vamp_Gallon,    // 0x6C
    indexCPS2Sprites_Vamp_Jedah,     // 0x6D
    indexCPS2Sprites_Vamp_LeiLei,    // 0x6E
    indexCPS2Sprites_Vamp_Lilith,    // 0x6F
    indexCPS2Sprites_Vamp_Marionette, // 0x70
    indexCPS2Sprites_Vamp_Phobos,    // 0x71
    indexCPS2Sprites_Vamp_Pyron,     // 0x72
    indexCPS2Sprites_Vamp_QBee,      // 0x73
    indexCPS2Sprites_Vamp_Sasquatch, // 0x74
    indexCPS2Sprites_Vamp_Shadow,    // 0x75
    indexCPS2Sprites_Vamp_Victor,    // 0x76
    indexCPS2Sprites_Vamp_Zabel,     // 0x77
    indexCPS2Sprites_VSAV1_WinPortraits, // 0x78
    indexCPS2Sprites_VSAV1_MidnightBliss, // 0x79

    indexCPS2Sprites_Vamp_DarkGallon,    // 0x7a
    indexCPS2Sprites_Vamp_OboroBishamon, // 0x7b
    indexCPS2Sprites_VSAV1_Bonus,  // 0x7c

    indexCPS2Sprites_SPF_Bonus,    // 0x7d
    indexCPS2Sprites_SPF_Stages,   // 0x7e
    indexCPS2Sprites_SFA2_Bonus,   // 0x7f
    indexCPS2Sprites_SFA2_Stages,  // 0x80
    indexCPS2Sprites_VSAV1_Stages, // 0x81

    indexSM2Sprites_Biff,       // 0x82
    indexSM2Sprites_Grater,     // 0x83
    indexSM2Sprites_Gunloc,     // 0x84
    indexSM2Sprites_Haggar,     // 0x85
    indexSM2Sprites_Jumbo,      // 0x86
    indexSM2Sprites_Oni,        // 0x87
    indexSM2Sprites_Ortega,     // 0x88
    indexSM2Sprites_Rasta,      // 0x89
    indexSM2Sprites_Rip,        // 0x8a
    indexSM2Sprites_Scorpion,   // 0x8b
    indexSM2Sprites_Stingray,   // 0x8c
    indexSM2Sprites_Tim,        // 0x8d
    indexSM2Sprites_Widow,      // 0x8e
    indexSM2Sprites_Wraith,     // 0x8f
    indexSM2Sprites_Bonus,      // 0x90
    indexSM2Sprites_Stages,     // 0x91

    indexCPS2Sprites_DeeJay,           // 0x92
    indexCPS2Sprites_Eagle,            // 0x93
    indexCPS2Sprites_FeiLong,          // 0x94
    indexCPS2Sprites_THawk,            // 0x95

    indexPuzzleFighter_Akuma,       // 0x96
    indexPuzzleFighter_Anita,       // 0x97
    indexPuzzleFighter_ChunLi,      // 0x98
    indexPuzzleFighter_Dan,         // 0x99
    indexPuzzleFighter_Devilotte,   // 0x9A
    indexPuzzleFighter_Donovan,     // 0x9B
    indexPuzzleFighter_Felicia,     // 0x9C
    indexPuzzleFighter_HsienKo,     // 0x9D
    indexPuzzleFighter_Ken,         // 0x9E
    indexPuzzleFighter_LeiLei,      // 0x9F
    indexPuzzleFighter_Morrigan,    // 0xA0
    indexPuzzleFighter_Ryu,         // 0xA1
    indexPuzzleFighter_Sakura,      // 0xA2
    indexPuzzleFighter_Bonus,       // 0xA3 
};

enum CHARACTERS_3S_CPS3
{
    index3SSprites_Alex,      // 0x00
    index3SSprites_Ryu,       // 0x01
    index3SSprites_Yun,       // 0x02
    index3SSprites_Dudley,    // 0x03
    index3SSprites_Necro,     // 0x04
    index3SSprites_Hugo,      // 0x05
    index3SSprites_Ibuki,     // 0x06
    index3SSprites_Elena,     // 0x07
    index3SSprites_Oro,       // 0x08
    index3SSprites_Yang,      // 0x09
    index3SSprites_Ken,       // 0x0a
    index3SSprites_Sean,      // 0x0b
    index3SSprites_Urien,     // 0x0c
    index3SSprites_Gouki,     // 0x0d
    index3SSprites_ShinGouki, // 0x0e
    index3SSprites_ChunLi,    // 0x0f
    index3SSprites_Makoto,    // 0x10
    index3SSprites_Q,         // 0x11
    index3SSprites_Twelve,    // 0x12
    index3SSprites_Remy,      // 0x13
    index3SSprites_Bonus,     // 0x14
    index3SSprites_Stages,    // 0x15
    index3SSprites_Gill,      // 0x16
    indexSF2ISprites_Bonus,   // 0x17
    indexSFNGSprites_Bonus,   // 0x18
};

enum SF2Sprites
{
    indexSF2Sprites_Ryu = 0,
    indexSF2Sprites_EHonda, // 0x01
    indexSF2Sprites_Blanka, // 0x02
    indexSF2Sprites_Guile,  // 0x03
    indexSF2Sprites_Ken,    // 0x04
    indexSF2Sprites_ChunLi, // 0x05
    indexSF2Sprites_Zangief, // 0x06
    indexSF2Sprites_Dhalsim, // 0x07
    indexSF2Sprites_Bison,  // 0x08
    indexSF2Sprites_Sagat,  // 0x09
    indexSF2Sprites_Balrog, // 0x0a
    indexSF2Sprites_Vega,   // 0x0b
    indexSF2Sprites_Cammy,  // 0x0c
    indexSF2Sprites_THawk,  // 0x0d
    indexSF2Sprites_FeiLong, // 0x0e
    indexSF2Sprites_DeeJay, // 0x0f
    indexSF2Sprites_Gouki,  // 0x10
    indexSF2Sprites_Bonus,  // 0x11
    indexSF2Sprites_Stages, // 0x12

    indexSF2GBASprites_Ryu = 0x20,
    indexSF2GBASprites_EHonda,
    indexSF2GBASprites_Blanka,
    indexSF2GBASprites_Guile,
    indexSF2GBASprites_Ken,
    indexSF2GBASprites_ChunLi,
    indexSF2GBASprites_Zangief,
    indexSF2GBASprites_Dhalsim,
    indexSF2GBASprites_Bison,
    indexSF2GBASprites_Sagat,
    indexSF2GBASprites_Balrog,
    indexSF2GBASprites_Vega,
    indexSF2GBASprites_Cammy,
    indexSF2GBASprites_THawk,
    indexSF2GBASprites_FeiLong,
    indexSF2GBASprites_DeeJay,
    indexSF2GBASprites_Gouki,
    indexSF2GBASprites_ShinGouki,
    indexSF2GBASprites_Bonus,       // 0x32, // GBA_Bonus
    indexSF2GBASprites_Stages,      // 0x33, // GBA_Stages
};

enum SPECIFIC_GAME_SPRITESETS
{
    indexMSHVSF_CSI = 0x30,
    indexMSHVSF_SSP,
    indexMSHVSF_VSP,
    indexCPS2Images_COTA_CSPs, // = 0x33,
    indexCSP2Images_COTA_CSIs, // = 0x34,
    indexCSP2Images_MSH_CSPs = 0x36,
    indexCSP2Images_MSH_VSPs = 0x90,
};

enum JOJOS_51_CHARACTERS
{
    indexJojos51Jotaro = 0,
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
    indexJojos50HUDPortraits, // 0x1C
    indexJojos51GrayFly,
    indexJojos51TarotCards,
    indexJojos51StoryMode,
};

enum JOJOS_51_CHARACTER_PALETTES
{
    indexJojos51Character_Main = 0,
    // 1 and 2 are reserved for character specific nonsense
    indexJojos51Character_VsSuper = 3,
    indexJojos51Character_Challenger, // 4
    indexJojos51Character_SelectWin1,
    indexJojos51Character_SelectWin2,
    indexJojos51Character_BurnZap,
};

enum SupportedGarou_A_PaletteListIndex
{
    indexGarouARockHoward,  // 0x00
    indexGarouATerryBogard, // 0x01
    indexGarouAKhushnood,   // 0x02
    indexGarouADong,        // 0x03
    indexGarouAJae,         // 0x04
    indexGarouAHotaru,      // 0x05
    indexGarouAGato,        // 0x06
    indexGarouAKevin,       // 0x07
    indexGarouAGrant,       // 0x08
    indexGarouABJenet,      // 0x09
    indexGarouAHokutomaru,  // 0x0a
    indexGarouAFreeman,     // 0x0b
    indexGarouATizoc,       // 0x0c
    indexGarouAKain,        // 0x0d
    indexGarouAPortraits,   // 0x0e
    indexGarouABonus,       // 0x0f
};

enum KOFSpriteList
{
    indexKOF98Sprites_Kyo,
    indexKOF98Sprites_Benimaru,
    indexKOF98Sprites_Daimon,
    indexKOF98Sprites_Terry,
    indexKOF98Sprites_Andy,
    indexKOF98Sprites_Joe,
    indexKOF98Sprites_Ryo,
    indexKOF98Sprites_Robert,
    indexKOF98Sprites_Yuri,
    indexKOF98Sprites_Leona,
    indexKOF98Sprites_Ralf,
    indexKOF98Sprites_Clark,
    indexKOF98Sprites_Athena,
    indexKOF98Sprites_Kensou,
    indexKOF98Sprites_Chin,
    indexKOF98Sprites_Chizuru,
    indexKOF98Sprites_Mai,
    indexKOF98Sprites_King,
    indexKOF98Sprites_Kim,
    indexKOF98Sprites_Chang,
    indexKOF98Sprites_Choi,
    indexKOF98Sprites_Yashiro,
    indexKOF98Sprites_Shermie,
    indexKOF98Sprites_Chris,
    indexKOF98Sprites_Yamazaki,
    indexKOF98Sprites_BlueMary,
    indexKOF98Sprites_Billy,
    indexKOF98Sprites_Iori,
    indexKOF98Sprites_Mature,
    indexKOF98Sprites_Vice,
    indexKOF98Sprites_Heidern,
    indexKOF98Sprites_Takuma,
    indexKOF98Sprites_Saisyu,
    indexKOF98Sprites_HeavyD,
    indexKOF98Sprites_Lucky,
    indexKOF98Sprites_Brian,
    indexKOF98Sprites_Rugal,
    indexKOF98Sprites_Shingo, // 25

    indexKOF02Sprites_Angel,    // 0x26
    indexKOF02Sprites_Athena,   // 0x27
    indexKOF02Sprites_Clark,    // 0x28
    indexKOF02Sprites_K,        // 0x29
    indexKOF02Sprites_Kula,     // 0x2a
    indexKOF02Sprites_Kyo,      // 0x2b
    indexKOF02Sprites_Maxima,   // 0x2c
    indexKOF02Sprites_MayLee,   // 0x2d
    indexKOF02Sprites_Ralf,     // 0x2e
    indexKOF02Sprites_Ramon,    // 0x2f
    indexKOF02Sprites_Seth,     // 0x30
    indexKOF02Sprites_Vanessa,  // 0x31
    indexKOF02Sprites_Whip,     // 0x32
    indexKOF02Sprites_Lin,      // 0x33
    indexKOF02Sprites_Nameless, // 0x34
    indexKOF02Sprites_King,     // 0x35
    indexKOF02Sprites_Xiangfei, // 0x36
    indexKOF02Sprites_Goenitz,  // 0x37

    indexKOF02Sprites_Bao,      // 38
    indexKOF02Sprites_Foxy,     // 39
    indexKOF02Sprites_Geese,    // 3a
    indexKOF02Sprites_Hinako,   // 3b
    indexKOF02Sprites_Igniz,    // 3c
    indexKOF02Sprites_Jhun,     // 3d
    indexKOF02Sprites_Kasumi,   // 3e
    indexKOF02Sprites_Krizalid, // 3f
    indexKOF02Sprites_OZero,    // 40
    indexKOF02Sprites_NGeese,   // unused currently

    indexKOF99Sprites_Krizalid, // 42
    indexKOF02UMSprites_OrochiIori, // 43
    indexKOF00Sprites_Kasumi_ForKOF98AE,   // 44
    indexKOF02Sprites_OrochiIori,   // 45
    indexKOF02Sprites_Shingo,   // 46
    indexKOF01Sprites_Xiangfei, // 47
    indexKOF02Sprites_Andy,     // 48
    indexKOF02Sprites_Chin,     // 49 
    indexKOF02Sprites_Kusanagi, // 4a
    indexKOF02Sprites_Robert,   // 4b
    indexKOF02Sprites_Yuri,     // 4c
    
    indexKOF02Sprites_K9999,    // 4d

    indexKOF02UMSprites_Extras, // 4e - portraits and such

    indexSVCSprites_Kyo,        // 4f
    indexSVCSprites_Iori,       // 50
    indexSVCSprites_Ryo,        // 51
    indexSVCSprites_Terry,      // 52
    indexSVCSprites_Mai,        // 53
    indexSVCSprites_Kasumi,     // 54
    indexSVCSprites_Kim,        // 55
    indexSVCSprites_MrKarate,   // 56
    indexSVCSprites_Choi,       // 57
    indexSVCSprites_Earthquake, // 58
    indexSVCSprites_Genjuro,    // 59
    indexSVCSprites_Shiki,      // 5a
    indexSVCSprites_GeeseHoward, // 5b
    indexSVCSprites_MarsPeople, // 5c
    indexSVCSprites_Goenitz,    // 5d
    indexSVCSprites_GoddessAthena, // 5e
    indexSVCSprites_Ryu,        // 5f
    indexSVCSprites_Ken,        // 60
    indexSVCSprites_ChunLi,     // 61
    indexSVCSprites_Guile,      // 62
    indexSVCSprites_Dhalsim,    // 63
    indexSVCSprites_Boxer,      // 64
    indexSVCSprites_Claw,       // 65
    indexSVCSprites_Sagat,      // 66
    indexSVCSprites_Dictator,   // 67
    indexSVCSprites_Akuma,      // 68
    indexSVCSprites_Hugo,       // 69
    indexSVCSprites_Poison,     // 6a
    indexSVCSprites_Tessa,      // 6b
    indexSVCSprites_Zero,       // 6c
    indexSVCSprites_Ciel,       // 6d
    indexSVCSprites_Demitri,    // 6e
    indexSVCSprites_Dan,        // 6f
    indexSVCSprites_RedArremer, // 70
    indexSVCSprites_OrochiIori, // 71
    indexSVCSprites_SeriousMrKarate, // 72
    indexSVCSprites_ViolentKen, // 73
    indexSVCSprites_ShinAkuma,  // 74

    indexKOF02Sprites_Extras,   // 75
    indexKOF98Sprites_OrderSelect, // 76
    indexKOF98Sprites_Lifebar,  // 77
    indexKOF98Sprites_WinPortrait, // 78

    indexKOF02UMSprites_Andy,      // 0x79
    indexKOF02UMSprites_Angel,     // 0x7A
    indexKOF02UMSprites_Athena,    // 0x7B
    indexKOF02UMSprites_Bao,       // 0x7C
    indexKOF02UMSprites_Benimaru,  // 0x7D
    indexKOF02UMSprites_Billy,     // 0x7E
    indexKOF02UMSprites_BlueMary,  // 0x7F
    indexKOF02UMSprites_Chang,     // 0x80
    indexKOF02UMSprites_Chin,      // 0x81
    indexKOF02UMSprites_Choi,      // 0x82
    indexKOF02UMSprites_Chris,     // 0x83
    indexKOF02UMSprites_ChrisOChi, // 0x84
    indexKOF02UMSprites_Clark,     // 0x85
    indexKOF02UMSprites_CloneZero, // 0x86
    indexKOF02UMSprites_Daimon,    // 0x87 aka Goro
    indexKOF02UMSprites_Foxy,      // 0x88
    indexKOF02UMSprites_Geese,     // 0x89
    indexKOF02UMSprites_GeeseNM,   // 0x8A
    indexKOF02UMSprites_Goenitz,   // 0x8B
    indexKOF02UMSprites_Heidern,   // 0x8C
    indexKOF02UMSprites_Hinako,    // 0x8D
    indexKOF02UMSprites_Igniz,     // 0x8E
    indexKOF02UMSprites_Iori,      // 0x8F
    indexKOF02UMSprites_Jhun,      // 0x90
    indexKOF02UMSprites_Joe,       // 0x91
    indexKOF02UMSprites_K,         // 0x92
    indexKOF02UMSprites_K9999,     // 0x93
    indexKOF02UMSprites_Kasumi,    // 0x94
    indexKOF02UMSprites_Kensou,    // 0x95
    indexKOF02UMSprites_KensouEX,  // 0x96
    indexKOF02UMSprites_Kim,       // 0x97
    indexKOF02UMSprites_King,      // 0x98
    indexKOF02UMSprites_Krizalid,  // 0x99
    indexKOF02UMSprites_Kula,      // 0x9a
    indexKOF02UMSprites_Kusanagi,  // 0x9b
    indexKOF02UMSprites_KyoKusa,   // 0x9c
    indexKOF02UMSprites_Kyo1,      // 0x9d
    indexKOF02UMSprites_Kyo2,      // 0x9e
    indexKOF02UMSprites_Leona,     // 0x9f
    indexKOF02UMSprites_Lin,       // 0xa0
    indexKOF02UMSprites_Mai,       // 0xA1
    indexKOF02UMSprites_Mature,    // 0xA2
    indexKOF02UMSprites_Maxima,    // 0xA3
    indexKOF02UMSprites_MayLee,    // 0xA4
    indexKOF02UMSprites_Nameless,  // 0xA5
    indexKOF02UMSprites_OmegaRugal, // 0xA6
    indexKOF02UMSprites_Ralf,      // 0xA7
    indexKOF02UMSprites_Ramon,     // 0xa8
    indexKOF02UMSprites_Robert,    // 0xA9
    indexKOF02UMSprites_RobertEX,  // 0xAa
    indexKOF02UMSprites_Ryo,       // 0xAb
    indexKOF02UMSprites_Seth,      // 0xAc
    indexKOF02UMSprites_Shermie,   // 0xAd
    indexKOF02UMSprites_ShermieOChi, // 0xAe
    indexKOF02UMSprites_Shingo,    // 0xAf
    indexKOF02UMSprites_Takuma,    // 0xb0
    indexKOF02UMSprites_TakumaEX,  // 0xB1
    indexKOF02UMSprites_Terry,     // 0xB2
    indexKOF02UMSprites_Vanessa,   // 0xB3
    indexKOF02UMSprites_Vice,      // 0xB4
    indexKOF02UMSprites_Whip,      // 0xB5
    indexKOF02UMSprites_Xiangfei,  // 0xB6
    indexKOF02UMSprites_Yamazaki,  // 0xB7
    indexKOF02UMSprites_Yashiro,   // 0xB8
    indexKOF02UMSprites_YashiroOChi, // 0xB9
    indexKOF02UMSprites_Yuri,      // 0xBa
    indexKOF02UMSprites_ZeroOG,    // 0xBb

    indexNGBCSprites_Ai,        // 0xbc
    indexNGBCSprites_Akari,     // 0xbd
    indexNGBCSprites_Asura,     // 0xbe
    indexNGBCSprites_Chonrei,   // 0xbf
    indexNGBCSprites_Chonshu,   // 0xc0
    indexNGBCSprites_CyberWoo,  // 0xc1
    indexNGBCSprites_Fuuma,     // 0xc2
    indexNGBCSprites_Geese,     // 0xc3
    indexNGBCSprites_Genjuro,   // 0xc4
    indexNGBCSprites_GoddessAthena, // 0xc5
    indexNGBCSprites_Goodman,   // 0xc6
    indexNGBCSprites_Hanzo,     // 0xc7
    indexNGBCSprites_Haohmaru,  // 0xc8
    indexNGBCSprites_Hotaru,    // 0xc9
    indexNGBCSprites_Iori,      // 0xca
    indexNGBCSprites_K,         // 0xcb
    indexNGBCSprites_Kaede,     // 0xcc
    indexNGBCSprites_Keiichiro, // 0xcd
    indexNGBCSprites_Kim,       // 0xce
    indexNGBCSprites_KingLion,  // 0xcf
    indexNGBCSprites_Kisarah,   // 0xd0
    indexNGBCSprites_Kyo,       // 0xd1
    indexNGBCSprites_LeePaiLong, // 0xd2
    indexNGBCSprites_Mai,       // 0xd3
    indexNGBCSprites_Marco,     // 0xd4
    indexNGBCSprites_MarsPeople, // 0xd5
    indexNGBCSprites_Mizuchi,   // 0xd6
    indexNGBCSprites_Moriya,    // 0xd7
    indexNGBCSprites_MrBig,     // 0xd8
    indexNGBCSprites_MrKarate,  // 0xd9
    indexNGBCSprites_Mudman,    // 0xda
    indexNGBCSprites_Nakoruru,  // 0xdb
    indexNGBCSprites_NeoDio,    // 0xdc
    indexNGBCSprites_Robert,    // 0xdd
    indexNGBCSprites_Rock,      // 0xde
    indexNGBCSprites_Shermie,   // 0xdf
    indexNGBCSprites_Shiki,     // 0xe0
    indexNGBCSprites_Terry,     // 0xe1
    indexNGBCSprites_TungFuRue, // 0xe2
    indexNGBCSprites_Yuuki,     // 0xe3

    indexKOF03Sprites_Adelheid,     // 0xe4
    indexKOF03Sprites_Ash,          // 0xe5
    indexKOF03Sprites_Athena,       // 0xe6
    indexKOF03Sprites_Benimaru,     // 0xe7
    indexKOF03Sprites_Billy,        // 0xe8
    indexKOF03Sprites_BlueMary,     // 0xe9
    indexKOF03Sprites_Chang,        // 0xea
    indexKOF03Sprites_Chizuru,      // 0xeb
    indexKOF03Sprites_Clark,        // 0xec
    indexKOF03Sprites_Duo,          // 0xed
    indexKOF03Sprites_Gato,         // 0xee
    indexKOF03Sprites_GoroDaimon,   // 0xef
    indexKOF03Sprites_Hinako,       // 0xf0
    indexKOF03Sprites_Iori,         // 0xf1
    indexKOF03Sprites_JhunHoon,     // 0xf2
    indexKOF03Sprites_Joe,          // 0xf3
    indexKOF03Sprites_K,            // 0xf4
    indexKOF03Sprites_Kim,          // 0xf5
    indexKOF03Sprites_King,         // 0xf6
    indexKOF03Sprites_KUSANAGI,     // 0xf7
    indexKOF03Sprites_Kyo,          // 0xf8
    indexKOF03Sprites_Leona,        // 0xf9
    indexKOF03Sprites_Mai,          // 0xfa
    indexKOF03Sprites_Maki,         // 0xfb
    indexKOF03Sprites_Malin,        // 0xfc
    indexKOF03Sprites_Maxima,       // 0xfd
    indexKOF03Sprites_Mukai,        // 0xfe
    indexKOF03Sprites_Ralf,         // 0xff
    indexKOF03Sprites_Robert,       // 0x100 :o
    indexKOF03Sprites_Ryo,          // 0x101
    indexKOF03Sprites_Shen,         // 0x102
    indexKOF03Sprites_Shingo,       // 0x103
    indexKOF03Sprites_Terry,        // 0x104
    indexKOF03Sprites_Tizoc,        // 0x105
    indexKOF03Sprites_Whip,         // 0x106
    indexKOF03Sprites_Yamazaki,     // 0x107
    indexKOF03Sprites_Yuri,         // 0x108
    indexKOF03Sprites_TeamBackgrounds, // 0x109
    indexKOF03Sprites_Portraits,    // 0x10a

    indexKOFXISprites_Adelheid,     // 0x10b
    indexKOFXISprites_Ash,          // 0x10c
    indexKOFXISprites_Athena,       // 0x10d
    indexKOFXISprites_Benimaru,     // 0x10e
    indexKOFXISprites_BJenet,       // 0x10f
    indexKOFXISprites_BlueMary,     // 0x110
    indexKOFXISprites_Clark,        // 0x111
    indexKOFXISprites_DuckKing,     // 0x112
    indexKOFXISprites_Duo,          // 0x113
    indexKOFXISprites_Eiji,         // 0x114
    indexKOFXISprites_Elizabeth,    // 0x115
    indexKOFXISprites_Gai,          // 0x116
    indexKOFXISprites_Gato,         // 0x117
    indexKOFXISprites_Iori,         // 0x118
    indexKOFXISprites_Jyazu,        // 0x119
    indexKOFXISprites_K,            // 0x11a
    indexKOFXISprites_Kasumi,       // 0x11b
    indexKOFXISprites_Kensou,       // 0x11c
    indexKOFXISprites_Kim,          // 0x11d
    indexKOFXISprites_King,         // 0x11e
    indexKOFXISprites_Kula,         // 0x11f
    indexKOFXISprites_Kyo,          // 0x120
    indexKOFXISprites_Magaki,       // 0x121
    indexKOFXISprites_Malin,        // 0x122
    indexKOFXISprites_Maxima,       // 0x123
    indexKOFXISprites_Momoko,       // 0x124
    indexKOFXISprites_Oswald,       // 0x125
    indexKOFXISprites_Ralf,         // 0x126
    indexKOFXISprites_Ramon,        // 0x127
    indexKOFXISprites_Ryo,          // 0x128
    indexKOFXISprites_Shen,         // 0x129
    indexKOFXISprites_Shingo,       // 0x12a
    indexKOFXISprites_Shion,        // 0x12b
    indexKOFXISprites_Sho,          // 0x12c
    indexKOFXISprites_Silber,       // 0x12d
    indexKOFXISprites_Terry,        // 0x12e
    indexKOFXISprites_Tizoc,        // 0x12f
    indexKOFXISprites_Vanessa,      // 0x130
    indexKOFXISprites_Whip,         // 0x131
    indexKOFXISprites_Yuri,         // 0x132

    indexRBFFSSprites_Andy,         // 0x133
    indexRBFFSSprites_Billy,        // 0x134
    indexRBFFSSprites_BlueMary,     // 0x135
    indexRBFFSSprites_Bob,          // 0x136
    indexRBFFSSprites_Cheng,        // 0x137
    indexRBFFSSprites_Chonrei,      // 0x138
    indexRBFFSSprites_Chonshu,      // 0x139
    indexRBFFSSprites_DuckKing,     // 0x13a
    indexRBFFSSprites_Franco,       // 0x13b
    indexRBFFSSprites_Geese,        // 0x13c
    indexRBFFSSprites_Hon,          // 0x13d
    indexRBFFSSprites_Joe,          // 0x13e
    indexRBFFSSprites_Kim,          // 0x13f
    indexRBFFSSprites_Krauser,      // 0x140
    indexRBFFSSprites_Laurence,     // 0x141
    indexRBFFSSprites_Mai,          // 0x142
    indexRBFFSSprites_Sokaku,       // 0x143
    indexRBFFSSprites_Terry,        // 0x144
    indexRBFFSSprites_Tung,         // 0x145
    indexRBFFSSprites_Yamazaki,     // 0x146
    indexKOF01Sprites_Athena,       // 0x147
    indexKOF01Sprites_Bao,          // 0x148
    indexKOF01Sprites_Foxy,         // 0x149

    indexKOF02Sprites_ChrisOrochi,  // 0x14a
    indexKOF02Sprites_Benimaru,     // 0x14b
    indexKOF02Sprites_Billy,        // 0x14c
    indexKOF02Sprites_BlueMary,     // 0x14d
    indexKOF02Sprites_Chang,        // 0x14e
    indexKOF02Sprites_Choi,         // 0x14f
    indexKOF02Sprites_Chris,        // 0x150
    indexKOF02Sprites_Daimon,       // 0x151
    indexKOF02Sprites_Iori,         // 0x152
    indexKOF02Sprites_Joe,          // 0x153
    indexKOF02Sprites_Kensou,       // 0x154
    indexKOF02Sprites_Kim,          // 0x155
    indexKOF02Sprites_KUSANAGI,     // 0x156
    indexKOF02Sprites_Leona,        // 0x157
    indexKOF02Sprites_Mai,          // 0x158
    indexKOF02Sprites_Mature,       // 0x159
    indexKOF02Sprites_OmegaRugal,   // 0x15A
    indexKOF02Sprites_Ryo,          // 0x15B
    indexKOF02Sprites_Shermie,      // 0x15C
    indexKOF02Sprites_ShermieOrochi, // 0x15D
    indexKOF02Sprites_Takuma,       // 0x15E
    indexKOF02Sprites_Terry,        // 0x15F
    indexKOF02Sprites_Vice,         // 0x160
    indexKOF02Sprites_Yamazaki,     // 0x161
    indexKOF02Sprites_Yashiro,      // 0x162
    indexKOF02Sprites_YashiroOrochi, // 0x163

    indexKOF94Sprites_Andy,         // 0x164
    indexKOF94Sprites_Athena,       // 0x165
    indexKOF94Sprites_Benimaru,     // 0x166
    indexKOF94Sprites_Brian,        // 0x167
    indexKOF94Sprites_Chang,        // 0x168
    indexKOF94Sprites_Chin,         // 0x169
    indexKOF94Sprites_Choi,         // 0x16a
    indexKOF94Sprites_Clark,        // 0x16b
    indexKOF94Sprites_Daimon,       // 0x16c
    indexKOF94Sprites_HeavyD,       // 0x16d
    indexKOF94Sprites_Heidern,      // 0x16e
    indexKOF94Sprites_Joe,          // 0x16f
    indexKOF94Sprites_Kensou,       // 0x170
    indexKOF94Sprites_Kim,          // 0x171
    indexKOF94Sprites_King,         // 0x172
    indexKOF94Sprites_Kyo,          // 0x173
    indexKOF94Sprites_Lucky,        // 0x174
    indexKOF94Sprites_Mai,          // 0x175
    indexKOF94Sprites_Ralf,         // 0x176
    indexKOF94Sprites_Robert,       // 0x177
    indexKOF94Sprites_Rugal,        // 0x178
    indexKOF94Sprites_Ryo,          // 0x179
    indexKOF94Sprites_Takuma,       // 0x17a
    indexKOF94Sprites_Terry,        // 0x17b
    indexKOF94Sprites_Yuri,         // 0x17c
    indexKOF94Sprites_Stages,       // 0x17d
    indexKOF94Sprites_Bonus,        // 0x17e

    indexKOF99Sprites_Andy,         // 0x17f
    indexKOF99Sprites_Athena,       // 0x180
    indexKOF99Sprites_Bao,          // 0x181
    indexKOF99Sprites_Benimaru,     // 0x182
    indexKOF99Sprites_BlueMary,     // 0x183
    indexKOF99Sprites_BossKrizalid, // 0x184
    indexKOF99Sprites_Chang,        // 0x185
    indexKOF99Sprites_Chin,         // 0x186
    indexKOF99Sprites_Choi,         // 0x187
    indexKOF99Sprites_Clark,        // 0x188
    indexKOF99Sprites_Iori,         // 0x189
    indexKOF99Sprites_JacketKrizalid, // 0x18a
    indexKOF99Sprites_Jhun,         // 0x18b
    indexKOF99Sprites_Joe,          // 0x18c
    indexKOF99Sprites_K,            // 0x18d
    indexKOF99Sprites_Kasumi,       // 0x18e
    indexKOF99Sprites_Kensou,       // 0x18f
    indexKOF99Sprites_Kim,          // 0x190
    indexKOF99Sprites_King,         // 0x191
    indexKOF99Sprites_Kyo1,         // 0x192
    indexKOF99Sprites_Kyo2,         // 0x193
    indexKOF99Sprites_Kyo,          // 0x194
    indexKOF99Sprites_Leona,        // 0x195
    indexKOF99Sprites_Mai,          // 0x196
    indexKOF99Sprites_Maxima,       // 0x197
    indexKOF99Sprites_Ralf,         // 0x198
    indexKOF99Sprites_Robert,       // 0x199
    indexKOF99Sprites_Ryo,          // 0x19a
    indexKOF99Sprites_Shingo,       // 0x19b
    indexKOF99Sprites_Takuma,       // 0x19c
    indexKOF99Sprites_Terry,        // 0x19d
    indexKOF99Sprites_Whip,         // 0x19e
    indexKOF99Sprites_Xiangfei,     // 0x19f
    indexKOF99Sprites_Yuri,         // 0x1a0
    indexKOF99Sprites_Stages,       // 0x1a1
    indexKOF99Sprites_Bonus,        // 0x1a2

    indexAoF3Sprites_Jin,           // 0x1A3
    indexAoF3Sprites_Karman,        // 0x1A4
    indexAoF3Sprites_Kasumi,        // 0x1A5
    indexAoF3Sprites_Lenny,         // 0x1A6
    indexAoF3Sprites_Robert,        // 0x1A7
    indexAoF3Sprites_Rody,          // 0x1A8
    indexAoF3Sprites_Ryo,           // 0x1A9
    indexAoF3Sprites_Sinclair,      // 0x1AA
    indexAoF3Sprites_Wang,          // 0x1AB
    indexAoF3Sprites_Wyler,         // 0x1AC
    indexAoF3Sprites_Bonus,         // 0x1AD
    indexAoF3Sprites_Stages,        // 0x1AE

    indexKOF01Sprites_Andy,         // 0x1af
    indexKOF01Sprites_Angel,        // 0x1b0
    // indexKOF01Sprites_Athena,    // 0x147
    // indexKOF01Sprites_Bao,       // 0x148
    indexKOF01Sprites_Benimaru,     // 0x1b1
    indexKOF01Sprites_Mary,         // 0x1b2 Blue Mary
    indexKOF01Sprites_Chang,        // 0x1b3
    indexKOF01Sprites_Chin,         // 0x1b4
    indexKOF01Sprites_Choi,         // 0x1b5
    indexKOF01Sprites_Clark,        // 0x1b6
    // indexKOF01Sprites_Foxy,      // 0x149
    indexKOF01Sprites_Goro,         // 0x1b7 Goro Daimon
    indexKOF01Sprites_Heidern,      // 0x1b8
    indexKOF01Sprites_Hinako,       // 0x1b9
    indexKOF01Sprites_Igniz,        // 0x1ba
    indexKOF01Sprites_Iori,         // 0x1bb
    indexKOF01Sprites_Joe,          // 0x1bc
    indexKOF01Sprites_K,            // 0x1bd
    indexKOF01Sprites_K9999,        // 0x1be
    indexKOF01Sprites_Kensou,       // 0x1bf
    indexKOF01Sprites_Kim,          // 0x1c0
    indexKOF01Sprites_King,         // 0x1c1
    indexKOF01Sprites_Kula,         // 0x1c2
    indexKOF01Sprites_Kyo,          // 0x1c3
    indexKOF01Sprites_Leona,        // 0x1c4
    indexKOF01Sprites_Lin,          // 0x1c5
    indexKOF01Sprites_Mai,          // 0x1c6
    indexKOF01Sprites_Maxima,       // 0x1c7
    indexKOF01Sprites_MayLee,       // 0x1c8
    indexKOF01Sprites_Ralf,         // 0x1c9
    indexKOF01Sprites_Ramon,        // 0x1ca
    indexKOF01Sprites_Robert,       // 0x1cb
    indexKOF01Sprites_Ryo,          // 0x1cc
    indexKOF01Sprites_Seth,         // 0x1cd
    indexKOF01Sprites_Shingo,       // 0x1ce
    indexKOF01Sprites_Takuma,       // 0x1cf
    indexKOF01Sprites_Terry,        // 0x1d0
    indexKOF01Sprites_Vanessa,      // 0x1d1
    // indexKOF01Sprites_Xiangfei,  // 47
    indexKOF01Sprites_Whip,         // 0x1d2
    indexKOF01Sprites_Yuri,         // 0x1d3
    indexKOF01Sprites_Zero,         // 0x1d4

    indexKOFSprites_01_Bonus,       // 0x1d5
    indexKOFSprites_01_Stages,      // 0x1d6
    indexKOF02UMSprites_Bonus,     // 0x1d7
    indexKOF02UMSprites_Stages,    // 0x1d8

    indexLastBlade2_Akari,          // 0x1D9
    indexLastBlade2_GenbuOkina,     // 0x1DA 
    indexLastBlade2_Hibiki,         // 0x1DB
    indexLastBlade2_HyoAmano,       // 0x1DC
    indexLastBlade2_Juzoh,          // 0x1DD
    indexLastBlade2_Kaede,          // 0x1DE
    indexLastBlade2_Keiichiro,      // 0x1DF Washizuka
    indexLastBlade2_KojirohKaori,   // 0x1E0
    indexLastBlade2_Kouryu,         // 0x1E1
    indexLastBlade2_LeeRekka,       // 0x1E2
    indexLastBlade2_Moriya,         // 0x1E3
    indexLastBlade2_Mukuro,         // 0x1E4
    indexLastBlade2_Setsuna,        // 0x1E5
    indexLastBlade2_Shigen,         // 0x1E6
    indexLastBlade2_Shinnosuke,     // 0x1E7
    indexLastBlade2_Yuki,           // 0x1E8
    indexLastBlade2_Zantetsu,       // 0x1E9
    indexLastBlade2_Bonus,          // 0x1EA
    indexLastBlade2_Stages,         // 0x1EB

    indexKOF97Sprites_Andy,         // 0x1ec
    indexKOF97Sprites_Athena,       // 0x1ed
    indexKOF97Sprites_Benimaru,     // 0x1ee
    indexKOF97Sprites_Orochi,       // 0x1ef
    indexKOF97Sprites_Bonus,        // 0x1f0
    indexKOF97Sprites_Stages,       // 0x1f1

    indexRBFF2Sprites_Alfred,       // 0x1f2
    indexRBFF2Sprites_Rick,         // 0x1f3
    indexRBFF2Sprites_Xiangfei,     // 0x1f4
    indexRBFF2Sprites_Bonus,        // 0x1f5
    indexRBFF2Sprites_Stages,       // 0x1f6

    indexKOF97Sprites_IoriOrochi,   // 0x1F7
    indexKOF97Sprites_LeonaOrochi,  // 0x1F8

    indexAoF1Sprites_Ryo,           // 0x1F9
    indexAoF1Sprites_RobertGarcia,  // 0x1FA
    indexAoF1Sprites_RyuhakuTodoh,  // 0x1FB
    indexAoF1Sprites_JackTurner,    // 0x1FC
    indexAoF1Sprites_King,          // 0x1FD
    indexAoF1Sprites_LeePaiLong,    // 0x1FE
    indexAoF1Sprites_MickeyRogers,  // 0x1FF
    indexAoF1Sprites_JohnCrawley,   // 0x200
    indexAoF1Sprites_MrBig,         // 0x201
    indexAoF1Sprites_TakumaMrKarate, // 0x202
    indexAoF1Sprites_Bonus,         // 0x203
    indexAoF1Sprites_Stages,        // 0x204

    indexRBFF2Sprites_Terry,        // 0x205

    indexKOF00Sprites_Andy,         // 0x206
    indexKOF00Sprites_Athena,       // 0x207
    indexKOF00Sprites_Bao,          // 0x208
    indexKOF00Sprites_Benimaru,     // 0x209
    indexKOF00Sprites_BlueMary,     // 0x20a
    indexKOF00Sprites_Chang,        // 0x20b
    indexKOF00Sprites_Chin,         // 0x20c
    indexKOF00Sprites_Choi,         // 0x20d
    indexKOF00Sprites_Clark,        // 0x20e
    indexKOF00Sprites_CloneZero,    // 0x20f
    indexKOF00Sprites_Hinako,       // 0x210
    indexKOF00Sprites_Iori,         // 0x211
    indexKOF00Sprites_JhunHoon,     // 0x212
    indexKOF00Sprites_Joe,          // 0x213
    indexKOF00Sprites_K,            // 0x214
    indexKOF00Sprites_Kasumi,       // 0x215
    indexKOF00Sprites_Kensou,       // 0x216
    indexKOF00Sprites_Kim,          // 0x217
    indexKOF00Sprites_King,         // 0x218
    indexKOF00Sprites_Kula,         // 0x219
    indexKOF00Sprites_Kyo,          // 0x21a
    indexKOF00Sprites_Leona,        // 0x21b
    indexKOF00Sprites_Lin,          // 0x21c
    indexKOF00Sprites_Mai,          // 0x21d
    indexKOF00Sprites_Maxima,       // 0x21e
    indexKOF00Sprites_Ralf,         // 0x21f
    indexKOF00Sprites_Ramon,        // 0x220
    indexKOF00Sprites_Robert,       // 0x221
    indexKOF00Sprites_Ryo,          // 0x222
    indexKOF00Sprites_Seth,         // 0x223
    indexKOF00Sprites_Shingo,       // 0x224
    indexKOF00Sprites_Takuma,       // 0x225
    indexKOF00Sprites_Terry,        // 0x226
    indexKOF00Sprites_Vanessa,      // 0x227
    indexKOF00Sprites_Whip,         // 0x228
    indexKOF00Sprites_Yuri,         // 0x229
    indexKOF00Sprites_Bonus,        // 0x22a
    indexKOF00Sprites_Stages,       // 0x22b

    indexSVCSprites_Bonus,          // 0x22c

    indexKOF95Sprites_Andy,         // 0x22D
    indexKOF95Sprites_Athena,       // 0x22E
    indexKOF95Sprites_Benimaru,     // 0x22F
    indexKOF95Sprites_Billy,        // 0x230
    indexKOF95Sprites_Chang,        // 0x231
    indexKOF95Sprites_Chin,         // 0x232
    indexKOF95Sprites_Choi,         // 0x233
    indexKOF95Sprites_Clark,        // 0x234
    indexKOF95Sprites_Daimon,       // 0x235
    indexKOF95Sprites_Eiji,         // 0x236
    indexKOF95Sprites_Heidern,      // 0x237
    indexKOF95Sprites_Iori,         // 0x238
    indexKOF95Sprites_Joe,          // 0x239
    indexKOF95Sprites_Kensou,       // 0x23A
    indexKOF95Sprites_Kim,          // 0x23B
    indexKOF95Sprites_King,         // 0x23C
    indexKOF95Sprites_Kyo,          // 0x23D
    indexKOF95Sprites_Mai,          // 0x23E
    indexKOF95Sprites_OmegaRugal,   // 0x23F
    indexKOF95Sprites_Ralf,         // 0x240
    indexKOF95Sprites_Robert,       // 0x241
    indexKOF95Sprites_Ryo,          // 0x242
    indexKOF95Sprites_Saisyu,       // 0x243
    indexKOF95Sprites_Takuma,       // 0x244
    indexKOF95Sprites_Terry,        // 0x245
    indexKOF95Sprites_Bonus,        // 0x246

    indexKOF96Sprites_Andy,         // 0x247
    indexKOF96Sprites_Athena,       // 0x248
    indexKOF96Sprites_Benimaru,     // 0x249
    indexKOF96Sprites_Chang,        // 0x24A
    indexKOF96Sprites_Chin,         // 0x24B
    indexKOF96Sprites_Chizuru,      // 0x24C
    indexKOF96Sprites_Choi,         // 0x24D
    indexKOF96Sprites_Clark,        // 0x24E
    indexKOF96Sprites_Daimon,       // 0x24F
    indexKOF96Sprites_Geese,        // 0x250
    indexKOF96Sprites_Goenitz,      // 0x251
    indexKOF96Sprites_Iori,         // 0x252
    indexKOF96Sprites_Joe,          // 0x253
    indexKOF96Sprites_Kasumi,       // 0x254
    indexKOF96Sprites_Kensou,       // 0x255
    indexKOF96Sprites_Kim,          // 0x256
    indexKOF96Sprites_King,         // 0x257
    indexKOF96Sprites_Krauser,      // 0x258
    indexKOF96Sprites_Kyo,          // 0x259
    indexKOF96Sprites_Leona,        // 0x25A
    indexKOF96Sprites_Mai,          // 0x25B
    indexKOF96Sprites_Mature,       // 0x25C
    indexKOF96Sprites_MrBig,        // 0x25D
    indexKOF96Sprites_Ralf,         // 0x25E
    indexKOF96Sprites_Robert,       // 0x25F
    indexKOF96Sprites_Ryo,          // 0x260
    indexKOF96Sprites_Terry,        // 0x261
    indexKOF96Sprites_Vice,         // 0x262
    indexKOF96Sprites_Yuri,         // 0x263
    indexKOF96Sprites_Bonus,        // 0x264	

    indexLastBladeSprites_Akari,    // 0x265
    indexLastBladeSprites_Amano,    // 0x266
    indexLastBladeSprites_Juzoh,    // 0x267
    indexLastBladeSprites_Kaede,    // 0x268
    indexLastBladeSprites_KaedeO,   // 0x269
    indexLastBladeSprites_Kagami,   // 0x26A
    indexLastBladeSprites_Lee,      // 0x26B
    indexLastBladeSprites_Moriya,   // 0x26C
    indexLastBladeSprites_Mukuro,   // 0x26D
    indexLastBladeSprites_Musashi,  // 0x26E
    indexLastBladeSprites_Okina,    // 0x26F Genbu
    indexLastBladeSprites_Shigen,   // 0x270
    indexLastBladeSprites_Washizuka, // 0x271
    indexLastBladeSprites_Yuki,     // 0x272
    indexLastBladeSprites_Zantetsu, // 0x273
    indexLastBladeSprites_Bonus,    // 0x274

    indexLastBlade2Sprites_KaedeO,  // 0x275

    indexRBFF2Sprites_Andy,         // 0x276
    indexRBFF2Sprites_Billy,        // 0x277
    indexRBFF2Sprites_BlueMary,     // 0x278
    indexRBFF2Sprites_Bob,          // 0x279
    indexRBFF2Sprites_Cheng,        // 0x27A
    indexRBFF2Sprites_Chonrei,      // 0x27B
    indexRBFF2Sprites_Chonshu,      // 0x27C
    indexRBFF2Sprites_DuckKing,     // 0x27D
    indexRBFF2Sprites_Franco,       // 0x27E
    indexRBFF2Sprites_Geese,        // 0x27F
    indexRBFF2Sprites_HonFu,        // 0x280
    indexRBFF2Sprites_Joe,          // 0x281
    indexRBFF2Sprites_Kim,          // 0x282
    indexRBFF2Sprites_Krauser,      // 0x283
    indexRBFF2Sprites_Laurence,     // 0x284
    indexRBFF2Sprites_Mai,          // 0x285
    indexRBFF2Sprites_Sokaku,       // 0x286
    indexRBFF2Sprites_Tung,         // 0x287
    indexRBFF2Sprites_Yamazaki,     // 0x288

    indexFF1Sprites_AndyBogard,     // 0x289
    indexFF1Sprites_BillyKane,      // 0x28a
    indexFF1Sprites_DrunkHwaJai,    // 0x28b
    indexFF1Sprites_DuckKing,       // 0x28c
    indexFF1Sprites_GeeseHoward,    // 0x28d
    indexFF1Sprites_HwaJai,         // 0x28e
    indexFF1Sprites_JoeHigashi,     // 0x28f
    indexFF1Sprites_MichaelMax,     // 0x290
    indexFF1Sprites_Raiden,         // 0x291
    indexFF1Sprites_RichardMeyer,   // 0x292
    indexFF1Sprites_TerryBogard,    // 0x293
    indexFF1Sprites_TungFuRue,      // 0x294
    indexFF1Sprites_Bonus,          // 0x295
    indexFF1Sprites_Stages,         // 0x296

    indexKOF02Sprites_Bonus,        // 0x297
    indexKOF02Sprites_Stages,       // 0x298

    // indexKOF97Sprites_Andy,          // 0x1EC
    // indexKOF97Sprites_Athena,        // 0x1ED
    // indexKOF97Sprites_Benimaru,      // 0x1EE
    indexKOF97Sprites_Billy,            // 0x299
    indexKOF97Sprites_BlueMary,         // 0x29A
    indexKOF97Sprites_Chang,            // 0x29B
    indexKOF97Sprites_Chin,             // 0x29C
    indexKOF97Sprites_Chizuru,          // 0x29D
    indexKOF97Sprites_Choi,             // 0x29E
    indexKOF97Sprites_Chris,            // 0x29F
    indexKOF97Sprites_ChrisOrochi,      // 0x2A0
    indexKOF97Sprites_Clark,            // 0x2A1
    indexKOF97Sprites_Daimon,           // 0x2A2
    indexKOF97Sprites_Iori,             // 0x2A3
    // indexKOF97Sprites_IoriOrochi,    // 0x1F7
    indexKOF97Sprites_Joe,              // 0x2A4
    indexKOF97Sprites_Kensou,           // 0x2A5
    indexKOF97Sprites_Kim,              // 0x2A6
    indexKOF97Sprites_King,             // 0x2A7
    indexKOF97Sprites_Kyo,              // 0x2A8
    indexKOF97Sprites_Leona,            // 0x2A9
    // indexKOF97Sprites_LeonaOrochi,   // 0x1F8
    indexKOF97Sprites_Mai,              // 0x2AA
    // indexKOF97Sprites_Orochi,        // 0x1EF
    indexKOF97Sprites_Ralf,             // 0x2AB
    indexKOF97Sprites_Robert,           // 0x2AC
    indexKOF97Sprites_Ryo,              // 0x2AD
    indexKOF97Sprites_Shermie,          // 0x2AE
    indexKOF97Sprites_ShermieOrochi,    // 0x2AF
    indexKOF97Sprites_Shingo,           // 0x2B0
    indexKOF97Sprites_Terry,            // 0x2B1
    indexKOF97Sprites_Yamazaki,         // 0x2B2
    indexKOF97Sprites_Yashiro,          // 0x2B3
    indexKOF97Sprites_YashiroOrochi,    // 0x2B4
    indexKOF97Sprites_Yuri,             // 0x2B5
    // indexKOF97Sprites_Bonus,         // 0x1F0
    // indexKOF97Sprites_Stages,        // 0x1F1
};

// This is used for portrait references within the 02UMExtras unit
enum SupportedKOF02UM_S_PaletteListIndex
{
    indexKOF02UM_S_Andy,        // 0
    indexKOF02UM_S_Angel,       // 1
    indexKOF02UM_S_Athena,      // 2
    indexKOF02UM_S_Bao,         // 3
    indexKOF02UM_S_Benimaru,    // 4
    indexKOF02UM_S_Billy,       // 5
    indexKOF02UM_S_BlueMary,    // 6
    indexKOF02UM_S_Chang,       // 7
    indexKOF02UM_S_Chin,        // 8
    indexKOF02UM_S_Choi,        // 9
    indexKOF02UM_S_Chris,       // a
    indexKOF02UM_S_Clark,       // b
    indexKOF02UM_S_CloneZero,   // c

    indexKOF02UM_S_Daimon,      // d
    indexKOF02UM_S_EXKensou,    // e
    indexKOF02UM_S_EXRobert,    // f
    indexKOF02UM_S_EXTakuma,    // 10
    indexKOF02UM_S_Foxy,        // 11
    indexKOF02UM_S_Geese,       // 12
    indexKOF02UM_S_Goenitz,     // 13
    indexKOF02UM_S_Heidern,     // 14
    indexKOF02UM_S_Hinako,      // 16
    indexKOF02UM_S_Igniz,       // 16
    indexKOF02UM_S_Iori,        // 17
    indexKOF02UM_S_Jhun,        // 18
    indexKOF02UM_S_Joe,         // 19
    indexKOF02UM_S_K,           // 1a
    indexKOF02UM_S_Kasumi,      // 1b
    indexKOF02UM_S_Kensou,      // 1c
    indexKOF02UM_S_Kim,         // 1d
    indexKOF02UM_S_King,        // 1e
    indexKOF02UM_S_Krizalid,    // 1f
    indexKOF02UM_S_Kula,        // 20
    indexKOF02UM_S_Kusanagi,    // 21
    indexKOF02UM_S_Kyo,         // 22
    indexKOF02UM_S_Kyo1,        // 23
    indexKOF02UM_S_Kyo2,        // 24
    indexKOF02UM_S_Leona,       // 25
    indexKOF02UM_S_Lin,         // 26
    indexKOF02UM_S_Mai,         // 27
    indexKOF02UM_S_Mature,      // 28
    indexKOF02UM_S_Maxima,      // 29
    indexKOF02UM_S_MayLee,      // 2a
    indexKOF02UM_S_Nameless,    // 2b
    indexKOF02UM_S_NGeese,      // 2c
    indexKOF02UM_S_OChris,      // 2d
    indexKOF02UM_S_OShermie,    // 2e
    indexKOF02UM_S_OYashiro,    // 2f
    indexKOF02UM_S_OmegaRugal,  // 30
    indexKOF02UM_S_OZero,       // 31
    indexKOF02UM_S_Ralf,        // 32
    indexKOF02UM_S_Ramon,       // 33
    indexKOF02UM_S_Robert,
    indexKOF02UM_S_Ryo,
    indexKOF02UM_S_Seth,
    indexKOF02UM_S_Shermie,
    indexKOF02UM_S_Shingo,
    indexKOF02UM_S_Takuma,
    indexKOF02UM_S_Terry,
    indexKOF02UM_S_Vanessa,
    indexKOF02UM_S_Vice,
    indexKOF02UM_S_Whip,
    indexKOF02UM_S_Xiangfei,
    indexKOF02UM_S_Yamazaki,
    indexKOF02UM_S_Yashiro,
    indexKOF02UM_S_Yuri,

    indexKOF02UM_S_Bonus,
};

enum SupportedBreakersSprites
{
    indexBreakersSprites_AlsionIII, // 0x00
    indexBreakersSprites_BaiHu,     // 0x01
    indexBreakersSprites_Condor,    // 0x02
    indexBreakersSprites_DaoLong,   // 0x03
    indexBreakersSprites_Maherl,    // 0x04
    indexBreakersSprites_Pielle,    // 0x05
    indexBreakersSprites_Rila,      // 0x06
    indexBreakersSprites_Saizo,     // 0x07
    indexBreakersSprites_Sho,       // 0x08
    indexBreakersSprites_Tia,       // 0x09
    indexBreakersSprites_Bonus,     // 0x0A
};

enum CVS2SpriteList
{
    indexCVS2Sprites_Akuma = 0,
    indexCVS2Sprites_Athena,
    indexCVS2Sprites_Balrog,
    indexCVS2Sprites_Benimaru,
    indexCVS2Sprites_Blanka,
    indexCVS2Sprites_Cammy,
    indexCVS2Sprites_Chang,
    indexCVS2Sprites_ChunLi,
    indexCVS2Sprites_Dan,
    indexCVS2Sprites_Dhalsim,
    indexCVS2Sprites_EHonda,
    indexCVS2Sprites_Eagle,
    indexCVS2Sprites_EvilRyu,
    indexCVS2Sprites_Geese,
    indexCVS2Sprites_GodRugal,
    indexCVS2Sprites_Guile,
    indexCVS2Sprites_Haohmaru,
    indexCVS2Sprites_Hibiki,
    indexCVS2Sprites_Iori,
    indexCVS2Sprites_Joe,
    indexCVS2Sprites_Ken,
    indexCVS2Sprites_Kim,
    indexCVS2Sprites_King,
    indexCVS2Sprites_Kyo,
    indexCVS2Sprites_Kyosuke,
    indexCVS2Sprites_MBison,
    indexCVS2Sprites_Mai,
    indexCVS2Sprites_Maki,
    indexCVS2Sprites_Morrigan,
    indexCVS2Sprites_Nakoruru,
    indexCVS2Sprites_OrochiIori,
    indexCVS2Sprites_Raiden,
    indexCVS2Sprites_Rock,
    indexCVS2Sprites_Rolento,
    indexCVS2Sprites_Rugal,
    indexCVS2Sprites_Ryo,
    indexCVS2Sprites_Ryu,
    indexCVS2Sprites_RyuhakuTodoh,
    indexCVS2Sprites_RyujiYamazaki,
    indexCVS2Sprites_Sagat,
    indexCVS2Sprites_Sakura,
    indexCVS2Sprites_ShinAkuma,
    indexCVS2Sprites_Terry,
    indexCVS2Sprites_Vega,
    indexCVS2Sprites_Vice,
    indexCVS2Sprites_Yun,
    indexCVS2Sprites_Yuri,
    indexCVS2Sprites_Zangief,
    indexCVS2Sprites_Bonus,     // 0x30
}; // max 47 characters

enum SamuraiShodownSpriteList
{
    indexSamSho5Sprites_Amakusa = 0,
    indexSamSho5Sprites_Basara,     // 1
    indexSamSho5Sprites_Charlotte,  // 2
    indexSamSho5Sprites_Enja,       // 3
    indexSamSho5Sprites_Gaira,      // 4
    indexSamSho5Sprites_Galford,    // 5
    indexSamSho5Sprites_Gaoh,       // 6
    indexSamSho5Sprites_Genjuro,    // 7
    indexSamSho5Sprites_Hanzo,      // 8
    indexSamSho5Sprites_Haohmaru,   // 9
    indexSamSho5Sprites_Jubei,      // a
    indexSamSho5Sprites_Kazuki,     // b
    indexSamSho5Sprites_Kusaregedo, // c
    indexSamSho5Sprites_Kyoshiro,   // d
    indexSamSho5Sprites_Mina,       // e
    indexSamSho5Sprites_Mizuki,     // f
    indexSamSho5Sprites_Nakoruru,   // 10
    indexSamSho5Sprites_Rasetsumaru, // 11
    indexSamSho5Sprites_Rera,       // 12
    indexSamSho5Sprites_Rimururu,   // 13
    indexSamSho5Sprites_Shizumaru,  // 14
    indexSamSho5Sprites_Sogetsu,    // 15
    indexSamSho5Sprites_Suija,      // 16
    indexSamSho5Sprites_TamTam,     // 17
    indexSamSho5Sprites_Ukyo,       // 18
    indexSamSho5Sprites_Yoshitora,  // 19
    indexSamSho5Sprites_Yunfei,     // 1a
    indexSamSho5Sprites_Zankuro,    // 1b
    indexSamSho5Sprites_Portrait,   // 1c
    indexSamSho5Sprites_Bonus,      // 1d
    indexSamSho5Sprites_Stages,     // 1e

    indexSamSho3Sprites_Amakusa,    // 1F
    indexSamSho3Sprites_Basara,     // 20
    indexSamSho3Sprites_Gaira,      // 21
    indexSamSho3Sprites_Galford,    // 22
    indexSamSho3Sprites_Genjuro,    // 23
    indexSamSho3Sprites_Hanzo,      // 24
    indexSamSho3Sprites_Haohmaru,   // 25
    indexSamSho3Sprites_Jubei,      // 26
    indexSamSho3Sprites_KimUngChe,  // 27
    indexSamSho3Sprites_Kuroko,     // 28
    indexSamSho3Sprites_Kyoshiro,   // 29
    indexSamSho3Sprites_Nakoruru,   // 2A
    indexSamSho3Sprites_Rimururu,   // 2B
    indexSamSho3Sprites_Shizumaru,  // 2C
    indexSamSho3Sprites_Ukyo,       // 2D
    indexSamSho3Sprites_Zankuro,    // 2E
    indexSamSho3Sprites_Bonus,      // 2F
    indexSamSho3Sprites_Stages,     // 30

    indexSS5_Basara,        // 0x31
    indexSS5_Charlotte,     // 0x32
    indexSS5_Enja,          // 0x33
    indexSS5_Gaira,         // 0x34
    indexSS5_Galford,       // 0x35
    indexSS5_Gaoh,          // 0x36
    indexSS5_Genjuro,       // 0x37
    indexSS5_Hanzo,         // 0x38
    indexSS5_Haohmaru,      // 0x39
    indexSS5_Jubei,         // 0x3A
    indexSS5_Kazuki,        // 0x3B
    indexSS5_Kusaregedo,    // 0x3C
    indexSS5_Kyoshiro,      // 0x3D
    indexSS5_Mina,          // 0x3E
    indexSS5_Nakoruru,      // 0x3F
    indexSS5_Rasetsumaru,   // 0x40
    indexSS5_Rera,          // 0x41
    indexSS5_Rimururu,      // 0x42
    indexSS5_Sankuro,       // 0x43
    indexSS5_Shizumaru,     // 0x44
    indexSS5_Sogetsu,       // 0x45
    indexSS5_Suija,         // 0x46
    indexSS5_TamTam,        // 0x47
    indexSS5_Ukyo,          // 0x48
    indexSS5_Yoshitora,     // 0x49
    indexSS5_Yumeji,        // 0x4A
    indexSS5_Yunfei,        // 0x4B
    indexSS5_Bonus,         // 0x4c
    indexSS5_Stages,        // 0x4d

    indexSamSho2Sprites_ChamCham,   // 0x4E
    indexSamSho2Sprites_Charlotte,  // 0x4F
    indexSamSho2Sprites_Earthquake, // 0x50
    indexSamSho2Sprites_Galford,    // 0x51
    indexSamSho2Sprites_Genan,      // 0x52
    indexSamSho2Sprites_Genjuro,    // 0x53
    indexSamSho2Sprites_Haohmaru,   // 0x54
    indexSamSho2Sprites_Hanzo,      // 0x55
    indexSamSho2Sprites_Jubei,      // 0x56
    indexSamSho2Sprites_Kuroko,     // 0x57
    indexSamSho2Sprites_Kyoshiro,   // 0x58
    indexSamSho2Sprites_Mizuki,     // 0x59
    indexSamSho2Sprites_Nakoruru,   // 0x5A
    indexSamSho2Sprites_Nicotine,   // 0x5B
    indexSamSho2Sprites_Sieger,     // 0x5C
    indexSamSho2Sprites_Ukyo,       // 0x5D
    indexSamSho2Sprites_WanFu,      // 0x5E
    indexSamSho2Sprites_Bonus,      // 0x5F

    indexSamSho1Sprites_Amakusa,    // 0x60
    indexSamSho1Sprites_Charlotte,  // 0x61
    indexSamSho1Sprites_Earthquake, // 0x62
    indexSamSho1Sprites_Galford,    // 0x63
    indexSamSho1Sprites_Genan,      // 0x64
    indexSamSho1Sprites_Error,  
    indexSamSho1Sprites_Hanzo,      // 0x66
    indexSamSho1Sprites_Haohmaru,   // 0x67
    indexSamSho1Sprites_Jubei,      // 0x68
    indexSamSho1Sprites_Kyoshiro,   // 0x69
    indexSamSho1Sprites_Nakoruru,   // 0x6a
    indexSamSho1Sprites_TamTam,     // 0x6b
    indexSamSho1Sprites_Ukyo,       // 0x6c
    indexSamSho1Sprites_Wanfu,      // 0x6d
    indexSamSho1Sprites_Bonus,      // 0x6e
    indexSamSho1Sprites_Stages,     // 0x6f
};

enum SupportedKarnovsR_A_PaletteListIndex
{
    indexKarnovsRSprites_Clown,         // 0x00
    indexKarnovsRSprites_Felin,         // 0x01
    indexKarnovsRSprites_Jean,          // 0x02
    indexKarnovsRSprites_Karnov,        // 0x03
    indexKarnovsRSprites_Lee,           // 0x04
    indexKarnovsRSprites_Marstorius,    // 0x05
    indexKarnovsRSprites_Matlok,        // 0x06
    indexKarnovsRSprites_Mizoguchi,     // 0x07
    indexKarnovsRSprites_Ray,           // 0x08
    indexKarnovsRSprites_Ryoko,         // 0x09
    indexKarnovsRSprites_Samchay,       // 0x0a
    indexKarnovsRSprites_Yungmie,       // 0x0b
    indexKarnovsRSprites_Zazie,         // 0x0c
    indexKarnovsRSprites_Bonus,         // 0x0d
    indexKarnovsRSprites_Stages,        // 0x0e
};

enum SupportedRedEarth_A_PaletteListIndex
{
    indexRedEarthSprites_Blade,     // 0x00
    indexRedEarthSprites_GiGi,      // 0x01
    indexRedEarthSprites_Hauzer,    // 0x02
    indexRedEarthSprites_Hydron,    // 0x03
    indexRedEarthSprites_Kenji,     // 0x04
    indexRedEarthSprites_Kongou,    // 0x05
    indexRedEarthSprites_Lavia,     // 0x06
    indexRedEarthSprites_Leo,       // 0x07
    indexRedEarthSprites_MaiLing,   // 0x08
    indexRedEarthSprites_Ravange,   // 0x09
    indexRedEarthSprites_Scion,     // 0x0a
    indexRedEarthSprites_Tessa,     // 0x0b
    indexRedEarthSprites_Bonus,     // 0x0c
    indexRedEarthSprites_Stages,    // 0x0d
};

enum SupportedWakuWaku7_PaletteList
{
    indexWakuWaku7Sprites_Arina,        // 0x00
    indexWakuWaku7Sprites_DandyJ,       // 0x01
    indexWakuWaku7Sprites_BonusKun,     // 0x02
    indexWakuWaku7Sprites_Fernandeath,  // 0x03
    indexWakuWaku7Sprites_Mauru,        // 0x04
    indexWakuWaku7Sprites_Politank,     // 0x05
    indexWakuWaku7Sprites_Rai,          // 0x06
    indexWakuWaku7Sprites_Slash,        // 0x07
    indexWakuWaku7Sprites_Tesse,        // 0x08
};

enum SupportedWindjammers_A_PaletteListIndex
{
    indexWindjammersSprites_Germany,
    indexWindjammersSprites_Italy,
    indexWindjammersSprites_Japan,
    indexWindjammersSprites_Spain,
    indexWindjammersSprites_UK_Korea,
    indexWindjammersSprites_USA,
    indexWindjammersSprites_Bonus,
};

enum SupportedSega_PaletteListIndex
{
    indexTopF2k5Sprites_Ali,            // 0x00
    indexTopF2k5Sprites_Cycl,           // 0x01
    indexTopF2k5Sprites_GeesHoward,     // 0x02
    indexTopF2k5Sprites_Goku,           // 0x03
    indexTopF2k5Sprites_Kyo,            // 0x04
    indexTopF2k5Sprites_MichaelJoden,   // 0x05
    indexTopF2k5Sprites_Ryo,            // 0x06
    indexTopF2k5Sprites_Ryu,            // 0x07
};

enum SupportedSNES_PaletteListIndex
{
    indexMMPRSprites_Goldar,        // 0x00
    indexMMPRSprites_IvanOoze,      // 0x01
    indexMMPRSprites_LipSyncer,     // 0x02
    indexMMPRSprites_LordZedd,      // 0x03
    indexMMPRSprites_MegaTigerzord, // 0x04
    indexMMPRSprites_NinjaMegazord, // 0x05
    indexMMPRSprites_ShogunMegazord, // 0x06
    indexMMPRSprites_SilverHorns,   // 0x07
    indexMMPRSprites_ThunderMegazord, // 0x08

    indexMMPRSprites_Bonus,         // 0x09
    indexMMPRSprites_Stages,        // 0x0a

    indexGundamSprites_DeathScythe, // 0x0b
    indexGundamSprites_Epyon,       // 0x0c
    indexGundamSprites_HeavyArms,   // 0x0d
    indexGundamSprites_Mercurius,   // 0x0e
    indexGundamSprites_SandRock,    // 0x0f
    indexGundamSprites_ShenLong,    // 0x10
    indexGundamSprites_Tallgeese,   // 0x11
    indexGundamSprites_Vayaeae,     // 0x12
    indexGundamSprites_Wing,        // 0x13
    indexGundamSprites_WingZero,    // 0x14
    indexGundamSprites_Bonus,       // 0x15
    indexGundamSprites_Stages,      // 0x16

    indexCFTESprites_BadMrFrosty,   // 0x17
    indexCFTESprites_BlueSuedeGoo,  // 0x18
    indexCFTESprites_Bonker,        // 0x19
    indexCFTESprites_Helga,         // 0x1a
    indexCFTESprites_IckyBodClay,   // 0x1b
    indexCFTESprites_Taffy,         // 0x1c
    indexCFTESprites_TheBlob,       // 0x1d
    indexCFTESprites_Tiny,          // 0x1e
    indexCFTESprites_Bonus,         // 0x1f
    indexCFTESprites_Stages,        // 0x20

    indexMSHWOTGSprites_SpiderMan,      // 0x21
    indexMSHWOTGSprites_CapAmerica,     // 0x22
    indexMSHWOTGSprites_IronMan,        // 0x23
    indexMSHWOTGSprites_Hulk,           // 0x24
    indexMSHWOTGSprites_Wolverine,      // 0x25

    indexMSHWOTGSprites_AdamWarlock,    // 0x26
    indexMSHWOTGSprites_DrStrange,      // 0x27
    indexMSHWOTGSprites_DrDoom,         // 0x28
    indexMSHWOTGSprites_Magus,          // 0x29
    indexMSHWOTGSprites_Blackheart,     // 0x2A
    indexMSHWOTGSprites_Nebula,         // 0x2B
    indexMSHWOTGSprites_Thanos,         // 0x2C

    indexMSHWOTGSprites_Puck,           // 0x2D
    indexMSHWOTGSprites_Evilverine,     // 0x2E
    indexMSHWOTGSprites_EvilHulk,       // 0x2F
    indexMSHWOTGSprites_EvilIronMan,    // 0x30
    indexMSHWOTGSprites_Daredevil,      // 0x31
    indexMSHWOTGSprites_Vision,         // 0x32
    indexMSHWOTGSprites_SheHulk,        // 0x33
    indexMSHWOTGSprites_Hawkeye,        // 0x34
    indexMSHWOTGSprites_SilverSurfer,   // 0x35
    indexMSHWOTGSprites_Sasquatch,      // 0x36
    indexMSHWOTGSprites_TheThing,       // 0x37
    indexMSHWOTGSprites_Bonus,          // 0x38

    indexTMNTTFSprites_Armaggon,        // 0x39
    indexTMNTTFSprites_Aska,            // 0x3A
    indexTMNTTFSprites_ChromeDome,      // 0x3B
    indexTMNTTFSprites_CyberShredder,   // 0x3C
    indexTMNTTFSprites_Donatello,       // 0x3D
    indexTMNTTFSprites_FakeBrother,     // 0x3E
    indexTMNTTFSprites_Karai,           // 0x3F
    indexTMNTTFSprites_Leonardo,        // 0x40
    indexTMNTTFSprites_Michelangelo,    // 0x41
    indexTMNTTFSprites_Raphael,         // 0x42
    indexTMNTTFSprites_RatKing,         // 0x43
    indexTMNTTFSprites_War,             // 0x44
    indexTMNTTFSprites_Wingnut,         // 0x45
    indexTMNTTFSprites_Bonus,           // 0x46
    indexTMNTTFSprites_Stages,          // 0x47

    indexXMMASprites_Apocalypse,        // 0x48
    indexXMMASprites_Beast,             // 0x49
    indexXMMASprites_Cyclops,           // 0x4A
    indexXMMASprites_Exodus,            // 0x4B
    indexXMMASprites_Gambit,            // 0x4C
    indexXMMASprites_Juggernaut,        // 0x4D
    indexXMMASprites_Magneto,           // 0x4E
    indexXMMASprites_OmegaRed,          // 0x4F
    indexXMMASprites_ProfessorX,        // 0x50
    indexXMMASprites_Psylocke,          // 0x51
    indexXMMASprites_Sentinel,          // 0x52
    indexXMMASprites_Tusk,              // 0x53
    indexXMMASprites_Wolverine,         // 0x54
    indexXMMASprites_Bonus,             // 0x55

    indexMSHWOTGSprites_Enemies,        // 0x56

    indexRanmaHB1Sprites_Akane,         // 0x57
    indexRanmaHB1Sprites_Genma,         // 0x58
    indexRanmaHB1Sprites_Gosunkugi,     // 0x59
    indexRanmaHB1Sprites_King,          // 0x5A
    indexRanmaHB1Sprites_Mousse,        // 0x5B
    indexRanmaHB1Sprites_Pantyhose,     // 0x5C
    indexRanmaHB1Sprites_PantyhoseT,    // 0x5D
    indexRanmaHB1Sprites_RanmaF,        // 0x5E
    indexRanmaHB1Sprites_RanmaM,        // 0x5F
    indexRanmaHB1Sprites_Ryoga,         // 0x60
    indexRanmaHB1Sprites_Shampoo,       // 0x61
    indexRanmaHB1Sprites_Ukyo,          // 0x62
    indexRanmaHB1Sprites_Bonus,         // 0x63

    indexSVGSprites_Ayako,              // 0x64
    indexSVGSprites_Chiho,              // 0x65
    indexSVGSprites_Erina,              // 0x66
    indexSVGSprites_Jun,                // 0x67
    indexSVGSprites_Kaori,              // 0x68
    indexSVGSprites_Manami,             // 0x69
    indexSVGSprites_Reimi,              // 0x6A
    indexSVGSprites_Satomi,             // 0x6B
    indexSVGSprites_Yuka,               // 0x6C
    indexSVGSprites_Bonus,              // 0x6D

    indexKISprites_Cinder,              // 0x6E
    indexKISprites_Eyedol,              // 0x6F
    indexKISprites_Fulgore,             // 0x70
    indexKISprites_Glacius,             // 0x71
    indexKISprites_Jago,                // 0x72
    indexKISprites_Orchid,              // 0x73
    indexKISprites_Riptor,              // 0x74
    indexKISprites_Sabrewulf,           // 0x75
    indexKISprites_Spinal,              // 0x76
    indexKISprites_Thunder,             // 0x77
    indexKISprites_TJCombo,             // 0x78
    indexKISprites_Bonus,               // 0x79

    indexRanmaCRHSprites_Akane,         // 0x7a
    indexRanmaCRHSprites_Genma,         // 0x7b
    indexRanmaCRHSprites_Hinako,        // 0x7c
    indexRanmaCRHSprites_Kodachi,       // 0x7d
    indexRanmaCRHSprites_Kuno,          // 0x7e
    indexRanmaCRHSprites_Mariko,        // 0x7f
    indexRanmaCRHSprites_Mousse,        // 0x80
    indexRanmaCRHSprites_RanmaFemale,   // 0x81
    indexRanmaCRHSprites_RanmaMale,     // 0x82
    indexRanmaCRHSprites_Ryoga,         // 0x83
    indexRanmaCRHSprites_Shampoo,       // 0x84
    indexRanmaCRHSprites_Ukyo,          // 0x85
    indexRanmaCRHSprites_Bonus,         // 0x86

    indexBMKNST_Altia,                  // 0x87
    indexBMKNST_Body,                   // 0x88
    indexBMKNST_Chan,                   // 0x89
    indexBMKNST_Jian,                   // 0x8A
    indexBMKNST_Ranmaru,                // 0x8B
    indexBMKNST_Syoh,                   // 0x8C
    indexBMKNST_Watts,                  // 0x8D
    indexBMKNST_Wolvan,                 // 0x8E
    indexBMKNST_Zeno,                   // 0x8F
    indexBMKNST_Bonus,                  // 0x90

    indexBSSMSJRSprites_ChibiMoon,      // 0x91
    indexBSSMSJRSprites_Jupiter,        // 0x92
    indexBSSMSJRSprites_Mars,           // 0x93
    indexBSSMSJRSprites_Mercury,        // 0x94
    indexBSSMSJRSprites_Neptune,        // 0x95
    indexBSSMSJRSprites_Pluto,          // 0x96
    indexBSSMSJRSprites_SailorMoon,     // 0x97
    indexBSSMSJRSprites_Uranus,         // 0x98
    indexBSSMSJRSprites_Venus,          // 0x99
    indexBSSMSJRSprites_Bonus,          // 0x9a

    indexDBZHDSprites_Cell,             // 0x9B
    indexDBZHDSprites_Frieza,           // 0x9C
    indexDBZHDSprites_Gohan,            // 0x9D
    indexDBZHDSprites_Goku,             // 0x9E
    indexDBZHDSprites_Gotenks,          // 0x9F
    indexDBZHDSprites_KidBuu,           // 0xA0
    indexDBZHDSprites_MajinBuu,         // 0xA1
    indexDBZHDSprites_Piccolo,          // 0xA2
    indexDBZHDSprites_Vegeta,           // 0xA3
    indexDBZHDSprites_Vegito,           // 0xA4
    indexDBZHDSprites_Bonus,            // 0xA5

    // JoJo RPG on SNES
    indexJoJoRPGSprites_Enemies,         // 0xA6
    indexJoJoRPGSprites_Heroes,          // 0xA7
    indexJoJoRPGSprites_NPCs,            // 0xA8
    indexJoJoRPGSprites_Bonus,           // 0xA9
};

enum SupportedNEOGEO_PaletteListIndex
{
    indexNeoBombermanSprites_AtomicBomber,  // 0x00
    indexNeoBombermanSprites_Baketama,      // 0x01
    indexNeoBombermanSprites_Bomberman,     // 0x02
    indexNeoBombermanSprites_CatBomber,     // 0x03
    indexNeoBombermanSprites_Charge,        // 0x04
    indexNeoBombermanSprites_Dachon,        // 0x05
    indexNeoBombermanSprites_Dokyuun,       // 0x06
    indexNeoBombermanSprites_FakeBomber,    // 0x07
    indexNeoBombermanSprites_Gaikottsu,     // 0x08
    indexNeoBombermanSprites_GoldenBomber,  // 0x09
    indexNeoBombermanSprites_HayateBomber,  // 0x0A
    indexNeoBombermanSprites_Honey,         // 0x0B
    indexNeoBombermanSprites_Kotetsu,       // 0x0C
    indexNeoBombermanSprites_MrBird,        // 0x0D
    indexNeoBombermanSprites_Nucha,         // 0x0E
    indexNeoBombermanSprites_Onbu,          // 0x0F
    indexNeoBombermanSprites_RidgeRazor,    // 0x10
    indexNeoBombermanSprites_RubberBomber,  // 0x11
    indexNeoBombermanSprites_Tamagon,       // 0x12
    indexNeoBombermanSprites_Bonus,         // 0x13

    indexNinjaMastersSprites_Goemon,        // 0x14
    indexNinjaMastersSprites_Houoh,         // 0x15
    indexNinjaMastersSprites_Kamui,         // 0x16
    indexNinjaMastersSprites_Karasu,        // 0x17
    indexNinjaMastersSprites_Kasumi,        // 0x18
    indexNinjaMastersSprites_Nobunaga,      // 0x19
    indexNinjaMastersSprites_Natsume,       // 0x1a
    indexNinjaMastersSprites_Sasuke,        // 0x1b
    indexNinjaMastersSprites_Raiga,         // 0x1c
    indexNinjaMastersSprites_Ranmaru,       // 0x1d
    indexNinjaMastersSprites_Tenho,         // 0x1e
    indexNinjaMastersSprites_Unzen,         // 0x1f
    indexNinjaMastersSprites_Bonus,         // 0x20
    indexNinjaMastersSprites_Stages,        // 0x21

    indexDDragonSprites_Abobo,              // 0x22
    indexDDragonSprites_Amon,               // 0x23
    indexDDragonSprites_Billy,              // 0x24
    indexDDragonSprites_Burnov,             // 0x25
    indexDDragonSprites_ChengFu,            // 0x26
    indexDDragonSprites_Duke,               // 0x27
    indexDDragonSprites_Dulton,             // 0x28
    indexDDragonSprites_Eddie,              // 0x29
    indexDDragonSprites_Jimmy,              // 0x2A
    indexDDragonSprites_Marian,             // 0x2B
    indexDDragonSprites_Rebecca,            // 0x2C
    indexDDragonSprites_Shuko,              // 0x2D
    indexDDragonSprites_Bonus,              // 0x2E

    indexRotDSprites_Abubo,                 // 0x2F
    indexRotDSprites_Alice,                 // 0x30
    indexRotDSprites_Annie,                 // 0x31
    indexRotDSprites_Billy,                 // 0x32
    indexRotDSprites_Cassandra,             // 0x33
    indexRotDSprites_Elias,                 // 0x34
    indexRotDSprites_JaeMo,                 // 0x35
    indexRotDSprites_Jimmy,                 // 0x36
    indexRotDSprites_Johann,                // 0x37
    indexRotDSprites_Johnny,                // 0x38
    indexRotDSprites_Lynn,                  // 0x39
    indexRotDSprites_Oni,                   // 0x3A
    indexRotDSprites_Pepe,                  // 0x3B
    indexRotDSprites_Pupa,                  // 0x3C
    indexRotDSprites_Radel,                 // 0x3D
    indexRotDSprites_Sonia,                 // 0x3E
    indexRotDSprites_Bonus,                 // 0x3F

    indexKotMSprites_AstroGuy,              // 0x40
    indexKotMSprites_BeetleMania,           // 0x41
    indexKotMSprites_Geon,                  // 0x42
    indexKotMSprites_PoisonGhost,           // 0x43
    indexKotMSprites_Rocky,                 // 0x44
    indexKotMSprites_Woo,                   // 0x45
    indexKotMSprites_Bonus,                 // 0x46

    indexSavReign_CarolStanzack,            // 0x47
    indexSavReign_ChungPaifu,               // 0x48
    indexSavReign_GordonBowman,             // 0x49
    indexSavReign_Gozu,                     // 0x4A
    indexSavReign_Joker,                    // 0x4B
    indexSavReign_KingLeo,                  // 0x4C
    indexSavReign_KingLion,                 // 0x4D
    indexSavReign_MaxEagle,                 // 0x4E
    indexSavReign_Mezu,                     // 0x4F
    indexSavReign_NicolaZaza,               // 0x50
    indexSavReign_ShoHayate,                // 0x51
    indexSavReign_Bonus,                    // 0x52

    indexMagDrop3Sprites_BlkPierrot,    // 0x53
    indexMagDrop3Sprites_Chariot,       // 0x54
    indexMagDrop3Sprites_Death,         // 0x55
    indexMagDrop3Sprites_Devil,         // 0x56
    indexMagDrop3Sprites_Emperor,       // 0x57
    indexMagDrop3Sprites_Empress,       // 0x58
    indexMagDrop3Sprites_Fool,          // 0x59
    indexMagDrop3Sprites_Fortune,       // 0x5A
    indexMagDrop3Sprites_HangedMan,     // 0x5B
    indexMagDrop3Sprites_Hermit,        // 0x5C
    indexMagDrop3Sprites_Hierophant,    // 0x5D
    indexMagDrop3Sprites_HighPriestess, // 0x5E
    indexMagDrop3Sprites_Judgement,     // 0x5F
    indexMagDrop3Sprites_Justice,       // 0x60
    indexMagDrop3Sprites_Lovers,        // 0x61
    indexMagDrop3Sprites_Magician,      // 0x62
    indexMagDrop3Sprites_Moon,          // 0x63
    indexMagDrop3Sprites_Star,          // 0x64
    indexMagDrop3Sprites_Strength,      // 0x65
    indexMagDrop3Sprites_StrFather,     // 0x66
    indexMagDrop3Sprites_Sun,           // 0x67
    indexMagDrop3Sprites_Temperance,    // 0x68
    indexMagDrop3Sprites_Tower,         // 0x69
    indexMagDrop3Sprites_World,         // 0x6A
    indexMagDrop3Sprites_Bonus,         // 0x6B

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

enum SupportedGGXX_PaletteListIndex
{
    indexGGXXSprites_ACR_ABA,               // 0x00
    indexGGXXSprites_ACR_Anji,              // 0x01
    indexGGXXSprites_ACR_Axl,               // 0x02
    indexGGXXSprites_ACR_Baiken,            // 0x03
    indexGGXXSprites_ACR_Bridget,           // 0x04
    indexGGXXSprites_ACR_Chipp,             // 0x05
    indexGGXXSprites_ACR_Dizzy,             // 0x06
    indexGGXXSprites_ACR_Eddie,             // 0x07
    indexGGXXSprites_ACR_Faust,             // 0x08
    indexGGXXSprites_ACR_Ino,               // 0x09
    indexGGXXSprites_ACR_Jam,               // 0x0a
    indexGGXXSprites_ACR_Johnny,            // 0x0b
    indexGGXXSprites_ACR_Justice,           // 0x0c
    indexGGXXSprites_ACR_Kliff,             // 0x0d
    indexGGXXSprites_ACR_Ky,                // 0x0e
    indexGGXXSprites_ACR_May,               // 0x0f
    indexGGXXSprites_ACR_Millia,            // 0x10
    indexGGXXSprites_ACR_OrderSol,          // 0x11
    indexGGXXSprites_ACR_Potemkin,          // 0x12
    indexGGXXSprites_ACR_RoboKy,            // 0x13
    indexGGXXSprites_ACR_Slayer,            // 0x14
    indexGGXXSprites_ACR_Sol,               // 0x15
    indexGGXXSprites_ACR_Testament,         // 0x16
    indexGGXXSprites_ACR_Venom,             // 0x17
    indexGGXXSprites_ACR_Zappa,             // 0x18
    indexGGXXSprites_ACR_Bonus,             // 0x19
};

enum SupportedFrenchBread_PaletteListIndex
{
    indexFrenchBreadSprites_DBFCI_Akira,        // 0x00
    indexFrenchBreadSprites_DBFCI_Ako,          // 0x01
    indexFrenchBreadSprites_DBFCI_Asuna,        // 0x02
    indexFrenchBreadSprites_DBFCI_Emi,          // 0x03
    indexFrenchBreadSprites_DBFCI_Kirino,       // 0x04
    indexFrenchBreadSprites_DBFCI_Kirito,       // 0x05
    indexFrenchBreadSprites_DBFCI_Kuroko,       // 0x06
    indexFrenchBreadSprites_DBFCI_Kuroyukihime, // 0x07
    indexFrenchBreadSprites_DBFCI_Mikoto,       // 0x08
    indexFrenchBreadSprites_DBFCI_Miyuki,       // 0x09
    indexFrenchBreadSprites_DBFCI_Quenser,      // 0x0A
    indexFrenchBreadSprites_DBFCI_Rentaro,      // 0x0B
    indexFrenchBreadSprites_DBFCI_Selvaria,     // 0x0C
    indexFrenchBreadSprites_DBFCI_Shana,        // 0x0D
    indexFrenchBreadSprites_DBFCI_Shizuo,       // 0x0E
    indexFrenchBreadSprites_DBFCI_Taiga,        // 0x0F
    indexFrenchBreadSprites_DBFCI_Tatsuya,      // 0x10
    indexFrenchBreadSprites_DBFCI_Tomoka,       // 0x11
    indexFrenchBreadSprites_DBFCI_Yukina,       // 0x12
    indexFrenchBreadSprites_DBFCI_Yuuki,        // 0x13
    indexFrenchBreadSprites_DBFCI_AcceleratorLastOrder, // 0x14
    indexFrenchBreadSprites_DBFCI_Alicia,        // 0x15
    indexFrenchBreadSprites_DBFCI_Arita,         // 0x16
    indexFrenchBreadSprites_DBFCI_Boogiepop,     // 0x17
    indexFrenchBreadSprites_DBFCI_Celty,         // 0x18
    indexFrenchBreadSprites_DBFCI_DokuroChan,    // 0x19
    indexFrenchBreadSprites_DBFCI_Enju,          // 0x1A
    indexFrenchBreadSprites_DBFCI_Erio,          // 0x1B
    indexFrenchBreadSprites_DBFCI_Frolaytia,     // 0x1C
    indexFrenchBreadSprites_DBFCI_Holo,          // 0x1D
    indexFrenchBreadSprites_DBFCI_InnocentCharm, // 0x1E
    indexFrenchBreadSprites_DBFCI_Izaya,         // 0x1F
    indexFrenchBreadSprites_DBFCI_Kana,          // 0x20
    indexFrenchBreadSprites_DBFCI_Kazari,        // 0x21
    indexFrenchBreadSprites_DBFCI_Kino,          // 0x22
    indexFrenchBreadSprites_DBFCI_Kojou,         // 0x23
    indexFrenchBreadSprites_DBFCI_Kokou,         // 0x24
    indexFrenchBreadSprites_DBFCI_Kuroneko,      // 0x25
    indexFrenchBreadSprites_DBFCI_Leafa,         // 0x26
    indexFrenchBreadSprites_DBFCI_Llenn,         // 0x27
    indexFrenchBreadSprites_DBFCI_Mashiro,       // 0x28
    indexFrenchBreadSprites_DBFCI_MiyukiAssist,  // 0x29
    indexFrenchBreadSprites_DBFCI_PaiChan,       // 0x2A
    indexFrenchBreadSprites_DBFCI_Rusian,        // 0x2B
    indexFrenchBreadSprites_DBFCI_Ryuji,         // 0x2C
    indexFrenchBreadSprites_DBFCI_Sadao,         // 0x2D
    indexFrenchBreadSprites_DBFCI_TatsuyaAssist, // 0x2E
    indexFrenchBreadSprites_DBFCI_Tomo,          // 0x2F
    indexFrenchBreadSprites_DBFCI_Touma,         // 0x30
    indexFrenchBreadSprites_DBFCI_Wilhelmina,    // 0x31
    indexFrenchBreadSprites_DBFCI_Zero,          // 0x32
	indexFrenchBreadSprites_DBFCI_Bonus,         // 0x33
    indexFrenchBreadSprites_UNICLR_Akat,    // 0x34
    indexFrenchBreadSprites_UNICLR_Byak,    // 0x35
    indexFrenchBreadSprites_UNICLR_Carm,    // 0x36
    indexFrenchBreadSprites_UNICLR_Chao,    // 0x37
    indexFrenchBreadSprites_UNICLR_Eltn,    // 0x38
    indexFrenchBreadSprites_UNICLR_Enki,    // 0x39
    indexFrenchBreadSprites_UNICLR_Gord,    // 0x3A
    indexFrenchBreadSprites_UNICLR_Hild,    // 0x3B
    indexFrenchBreadSprites_UNICLR_Hyde,    // 0x3C
    indexFrenchBreadSprites_UNICLR_Linn,    // 0x3D
    indexFrenchBreadSprites_UNICLR_Lond,    // 0x3E
    indexFrenchBreadSprites_UNICLR_Merk,    // 0x3F
    indexFrenchBreadSprites_UNICLR_Mika,    // 0x40
    indexFrenchBreadSprites_UNICLR_Nana,    // 0x41
    indexFrenchBreadSprites_UNICLR_Orie,    // 0x42
    indexFrenchBreadSprites_UNICLR_Phon,    // 0x43
    indexFrenchBreadSprites_UNICLR_Seth,    // 0x44
    indexFrenchBreadSprites_UNICLR_Vati,    // 0x45
    indexFrenchBreadSprites_UNICLR_Wagn,    // 0x46
    indexFrenchBreadSprites_UNICLR_Wald,    // 0x47
    indexFrenchBreadSprites_UNICLR_Yuzu,    // 0x48
    indexFrenchBreadSprites_UNICLR_Bonus,   // 0x49

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

enum SupportedTaito_PaletteListIndex
{
    indexDanKuGa_Azteca,            // 0x00
    indexDanKuGa_Barts,             // 0x01
    indexDanKuGa_Boggy,             // 0x02
    indexDanKuGa_Gekkou,            // 0x03
    indexDanKuGa_Gonzales,          // 0x04
    indexDanKuGa_JMcCoy,            // 0x05
    indexDanKuGa_Kazuya,            // 0x06
    indexDanKuGa_Lihua,             // 0x07
    indexDanKuGa_Liza,              // 0x08
    indexDanKuGa_Marco,             // 0x09
    indexDanKuGa_Wulong,            // 0x0A
    indexDanKuGa_Bonus,             // 0x0B
};

enum SupportedNintendoDS_PaletteListIndex
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
};

enum SupportedPGM_SpriteListIndex
{
    indexMartialMastersSprites_Crane,           // 0x00
    indexMartialMastersSprites_DrunkMaster,     // 0x01
    indexMartialMastersSprites_GhostKick,       // 0x02
    indexMartialMastersSprites_LotusMaster,     // 0x03
    indexMartialMastersSprites_MasterHuang,     // 0x04
    indexMartialMastersSprites_Monk,            // 0x05
    indexMartialMastersSprites_MonkeyBoy,       // 0x06
    indexMartialMastersSprites_RedSnake,        // 0x07
    indexMartialMastersSprites_Reika,           // 0x08
    indexMartialMastersSprites_Saojin,          // 0x09
    indexMartialMastersSprites_Scorpion,        // 0x0A
    indexMartialMastersSprites_Tiger,           // 0x0B
    indexMartialMastersSprites_TrueLotusMaster, // 0x0C
    indexMartialMastersSprites_Bonus,           // 0x0D
};

enum SupportedArcana_SpriteListIndex
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

#pragma once

//A = Arcade
//X = XBox
//D = Dreamcast
//P = Playstation 2

//Game Definitions

constexpr auto MVC2_D = 0;
constexpr auto SFIII3_A = 1;
constexpr auto MVC2_P = 2;
constexpr auto SSF2T_A = 3;
constexpr auto SFA3_A = 4;
constexpr auto XMVSF_A = 5;
constexpr auto MVC_A = 6;
constexpr auto SFIII3_D = 7;
constexpr auto JOJOS_A = 8;
constexpr auto MSH_A = 9;
constexpr auto MSHVSF_A = 10;
constexpr auto COTA_A = 11;
constexpr auto NUM_GAMES = 12;

const CHAR g_GameFriendlyName[NUM_GAMES][32] =
{
    "MvC2 (Dreamcast)",
    "SFIII3 (Arcade)",
    "MVC2 (Playstation)",
    "SSF2T (Arcade)",
    "SFA3 (Arcade)",
    "XVSF (Arcade)",
    "MVC (Arcade)",
    "SFIII3 (Dreamcast)",
    "Jojo's",
    "MSH (Arcade)",
    "MSHVSF (Arcade)",
    "X-Men (Arcade)"
};

constexpr auto MVC2_D_NUMUNIT = 59;
constexpr auto SFIII3_A_NUMUNIT = 20;   

constexpr auto MVC_A_UNIQUE_IMG_UNITS = 2;   // Onslaught[3B] + Unique Assets(HUD, Stages, Assists)[3C]
constexpr auto SFA3_A_UNIQUE_IMG_UNITS = 18; // Unique 17 Characters[3D - 4D] + Unique Assets(HUD, Stages)[4E]
constexpr auto XMVSF_A_UNIQUE_IMG_UNITS = 2; // Apocalypse[4F] + Unique Assets(HUD, Stages)[50]
constexpr auto MSH_A_UNIQUE_IMG_UNITS = 2;   // Anita[51] + Unique Assets(HUD, Stages)[52]
constexpr auto MSHVSF_A_UNIQUE_IMG_UNITS = 3; // Norimaro[53] + Cyber-Akuma[54] + Unique Assets(HUD, Stages)[55]
constexpr auto COTA_A_UNIQUE_IMG_UNITS = 2; // Unique Assets(HUD, Stages)[56] + ST Akuma[57]

constexpr auto MVC_A_IMGSTART = MVC2_D_NUMUNIT; // MVC2, then MVC1
constexpr auto SFA3_A_IMGSTART = MVC_A_IMGSTART + MVC_A_UNIQUE_IMG_UNITS;  // MVC1, then SFA3
constexpr auto XMVSF_A_IMGSTART = SFA3_A_IMGSTART + SFA3_A_UNIQUE_IMG_UNITS; // SFA3, then XMVSF
constexpr auto MSH_A_IMGSTART = XMVSF_A_IMGSTART + XMVSF_A_UNIQUE_IMG_UNITS; // XMVSF, then MSH
constexpr auto MSHVSF_A_IMGSTART = MSH_A_IMGSTART + MSH_A_UNIQUE_IMG_UNITS;  // MSH, then MSHVSF

//Images
constexpr auto MVC2_D_NUM_IMG_UNITS = 59;
constexpr auto SSF2T_A_NUM_IMG_UNITS = 17;
constexpr auto SFIII3_A_NUM_IMG_UNITS = 20;
constexpr auto SFA3_A_NUM_IMG_UNITS = 28;
constexpr auto MVC_A_NUM_IMG_UNITS = 32;

//Display types (used for image out)
enum eDispType
{
    DISP_DEF,
    DISP_ALT
};

//Basic button labels
#define BUTTON6 6
#define BUTTON7 7

// BUGBUG: Those should be legacy.
// In the new world order, these probably should be done via node primary names(?)
// If you add button labels, be sure to update imgoutdlg and imgdumpbmp as well.
const CHAR DEF_BUTTONLABEL_2[2][16] =
{
    "P1", "P2"
};

const CHAR DEF_BUTTONLABEL_JOJOS_5[5][16] =
{
    "A", "B", "C", "S", "Start"
};

const CHAR DEF_BUTTONLABEL6[6][16] =
{
    "LP", "MP", "HP", "LK", "MK", "HK"
};

const CHAR DEF_BUTTONLABEL_ISMS[6][16] =
{
    "X-Ism 1", "X-Ism 2", "A-Ism 1", "A-Ism 2", "V-Ism 1", "V-Ism 2"
};

const CHAR DEF_BUTTONLABEL6_MVC2[6][16] = 
{
    "LP", "LK", "HP", "HK", "A1", "A2"
};

const CHAR DEF_BUTTONLABEL7[7][16] = 
{
    "LP", "MP", "HP", "LK", "MK", "HK", "EX"
};

const CHAR DEF_BUTTONLABEL_ST10[10][16] =
{
    "Jab", "Strong", "Fierce", "Short", "Forward", "RH", "Start", "Hold", "Old 1P", "Old 2P"
};

const CHAR DEF_NOBUTTONS[1][16] =
{
    "Special"
};

struct stExtraDef
{
    UINT16 uUnitN = INVALID_UNIT_VALUE;
    CHAR szDesc[MAX_DESCRIPTION_LENGTH] = "uninit";
    UINT32 uOffset = 0;
    UINT16 cbPaletteSize = 0;
    bool isInvisible = false;
};

struct sGame_PaletteDataset
{
    LPCSTR szPaletteName = "uninit";
    int nPaletteOffset = 0;
    int nPaletteOffsetEnd = 0;
    UINT16 indexImgToUse = INVALID_UNIT_VALUE; // the major character/collection index
    UINT16 indexOffsetToUse = 0x0; // subsprites within that collection
    bool isJoinedPalette = false;
};

const UINT8 MVC2_IMG_UNITS[MVC2_D_NUM_IMG_UNITS] =
{
    0x00, // Ryu
    0x01, // Zangief
    0x02, // Guile
    0x03, // Morrigan
    0x04, // Anakaris
    0x05, // Strider Hiryu
    0x06, // Cyclops
    0x07, // Wolverine
    0x08, // Psylocke
    0x09, // Iceman
    0x0A, // Rogue
    0x0B, // Captain America
    0x0C, // Spider-Man
    0x0D, // Hulk,
    0x0E, // Venom
    0x0F, // Dr. Doom
    0x10, // Tron Bonne
    0x11, // Jill Valentine
    0x12, // Hayato
    0x13, // Ruby Heart
    0x14, // SonSon
    0x15, // Amingo
    0x16, // Marrow
    0x17, // Cable
    0x18, // Abyss (Form 1)
    0x19, // Abyss (Form 2)
    0x1A, // Abyss (Form 3)
    0x1B, // Chun-Li
    0x1C, // Megaman
    0x1D, // Roll
    0x1E, // Gouki
    0x1F, // B.B. Hood
    0x20, // Felicia
    0x21, // Charlie
    0x22, // Sakura
    0x23, // Dan
    0x24, // Cammy
    0x25, // Dhalsim
    0x26, // M.Bison
    0x27, // Ken
    0x28, // Gambit
    0x29, // Juggernaut
    0x2A, // Storm
    0x2B, // Sabretooth
    0x2C, // Magneto
    0x2D, // Shuma-Gorath
    0x2E, // War Machine
    0x2F, // Silver Samurai
    0x30, // Omega Red
    0x31, // Spiral
    0x32, // Colossus
    0x33, // Iron Man
    0x34, // Sentinel
    0x35, // Blackheart
    0x36, // Thanos
    0x37, // Jin
    0x38, // Captain Commando
    0x39, // Bonerine
    0x3A  // Kobun
};

const UINT8 SFIII3_A_IMG_UNITS[SFIII3_A_NUM_IMG_UNITS] =
{
    0x00, // Alex
    0x01, // Ryu
    0x02, // Yun
    0x03, // Dudley
    0x04, // Necro
    0x05, // Hugo
    0x06, // Ibuki
    0x07, // Elena
    0x08, // Oro
    0x09, // Yang
    0x0A, // Ken
    0x0B, // Sean
    0x0C, // Urien
    0x0D, // Gouki
    0x0E, // Shin-Gouki
    0x0F, // Chun-Li
    0x10, // Makoto
    0x11, // Q
    0x12, // Twelve
    0x13  // Remy
};

const UINT8 SFIII3_D_IMG_UNITS[SFIII3_A_NUM_IMG_UNITS - 0x01] =
{
    0x00, // Alex
    0x01, // Ryu
    0x02, // Yun
    0x03, // Dudley
    0x04, // Necro
    0x05, // Hugo
    0x06, // Ibuki
    0x07, // Elena
    0x08, // Oro
    0x09, // Yang
    0x0A, // Ken
    0x0B, // Sean
    0x0C, // Urien
    0x0D, // Gouki
    0x0F, // Chun-Li
    0x10, // Makoto
    0x11, // Q
    0x12, // Twelve
    0x13  // Remy
};

const UINT8 SSF2T_A_IMG_UNITS[SSF2T_A_NUM_IMG_UNITS] =
{
    0x00, // Ryu
    0x01, // E-Honda
    0x02, // Blanka
    0x03, // Guile
    0x04, // Ken
    0x05, // Chun-Li
    0x06, // Zangief
    0x07, // Dhalsim
    0x08, // M.Bison
    0x09, // Sagat
    0x0A, // Balrog
    0x0B, // Vega
    0x0C, // Cammy
    0x0D, // T-Hawk
    0x0E, // Fei Long
    0x0F, // Dee Jay
    0x10  // Gouki
};

const UINT8 SFA3_A_IMG_UNITS[SFA3_A_NUM_IMG_UNITS] =
{
    // MVC2 Assets
    0x00, // Ryu
    0x01, // Zangief
    0x1B, // Chun-Li
    0x1E, // Gouki
    0x21, // Charlie
    0x22, // Sakura
    0x23, // Dan
    0x24, // Cammy
    0x25, // Dhalsim
    0x26, // M.Bison
    0x27, // Ken
    // SFA3 Unique
    0x3D, // Adon
    0x3E, // Sodom
    0x3F, // Guy
    0x40, // Birdie
    0x41, // Rose
    0x42, // Sagat
    0x43, // Rolento
    0x44, // Gen
    0x45, // Balrog
    0x46, // E.Honda
    0x47, // Blanka
    0x48, // R.Mika
    0x49, // Cody
    0x4A, // Vega
    0x4B, // Karin
    0x4C, // Juni
    0x4D  // Juli
};

const UINT8 XMVSF_A_IMG_UNITS[] =
{
    0x00, // Ryu
    0x01, // Zangief
    0x06, // Cyclops
    0x07, // Wolverine
    0x0A, // Rogue
    0x1B, // Chun-Li
    0x1E, // Gouki
    0x21, // Charlie
    0x24, // Cammy
    0x25, // Dhalsim
    0x26, // M.Bison
    0x27, // Ken
    0x28, // Gambit
    0x29, // Juggernaut
    0x2A, // Storm
    0x2B, // Sabretooth
    0x2C, // Magneto
    0x4F  // Apocalypse
};

constexpr auto XMVSF_A_NUM_IMG_UNITS = ARRAYSIZE(XMVSF_A_IMG_UNITS);

const UINT8 MVC_A_IMG_UNITS[MVC_A_NUM_IMG_UNITS] =
{
    // Main Roster
    0x00, // Ryu
    0x01, // Zangief
    0x03, // Morrigan
    0x05, // Strider Hiryu
    0x07, // Wolverine
    0x0B, // Captain America
    0x0C, // Spider-Man
    0x0D, // Hulk,
    0x0E, // Venom
    0x1B, // Chun-Li
    0x1D, // Roll
    0x1C, // Megaman
    0x28, // Gambit
    0x2E, // War Machine
    0x37, // Jin
    0x38, // Captain Commando
    // MvC1 Unique
    0x3B, // Onslaught
    0x3C, // MvC1 Unique Assets
    // Hidden
    0x1E, // Gouki
    0x27, // Ken
    // Assists
    0x06, // Cyclops
    0x08, // Psylocke
    0x09, // Iceman
    0x0A, // Rogue
    0x21, // Charlie
    0x29, // Juggernaut
    0x2A, // Storm
    0x2C, // Magneto
    0x32, // Colossus
    0x34, // Sentinel
    0x33, // Iron Man
    0x51, // Anita
};

enum CHARACTERS_CPS2
{
    indexCPS2_Ryu, // 0x00, // Ryu
    indexCPS2_Zangief, // 0x01, // Zangief
    indexCPS2_Guile, // 0x02, // Guile
    indexCPS2_Morrigan, // 0x03, // Morrigan
    indexCPS2_Anakaris, // 0x04, // Anakaris
    indexCPS2_Strider, // 0x05, // Strider Hiryu
    indexCPS2_Cyclops, // 0x06, // Cyclops
    indexCPS2_Wolverine, // 0x07, // Wolverine
    indexCPS2_Psylocke, // 0x08, // Psylocke
    indexCPS2_Iceman, // 0x09, // Iceman
    indexCPS2_Rogue, // 0x0A, // Rogue
    indexCPS2_CapAm, // 0x0B, // Captain America
    indexCPS2_Spidey, // 0x0C, // Spider-Man
    indexCPS2_Hulk, // 0x0D, // Hulk,
    indexCPS2_Venom, // 0x0E, // Venom
    indexCPS2_DrDoom, // 0x0F, // Dr. Doom
    indexCPS2_Tron, // 0x10, // Tron Bonne
    indexCPS2_Jill, // 0x11, // Jill Valentine
    indexCPS2_Hayato, // 0x12, // Hayato
    indexCPS2_Ruby, // 0x13, // Ruby Heart
    indexCPS2_SonSon, // 0x14, // SonSon
    indexCPS2_Amingo, // 0x15, // Amingo
    indexCPS2_Marrow, // 0x16, // Marrow
    indexCPS2_Cable, // 0x17, // Cable
    indexCPS2_Abyss1, // 0x18, // Abyss (Form 1)
    indexCPS2_Abyss2, // 0x19, // Abyss (Form 2)
    indexCPS2_Abyss3, // 0x1A, // Abyss (Form 3)
    indexCPS2_ChunLi, // 0x1B, // Chun-Li
    indexCPS2_Megaman, // 0x1C, // Megaman
    indexCPS2_Roll, // 0x1D, // Roll
    indexCPS2_Akuma, // 0x1E, // Gouki
    indexCPS2_BBHood, // 0x1F, // B.B. Hood
    indexCPS2_Felicia, // 0x20, // Felicia
    indexCPS2_Charlie, // 0x21, // Charlie
    indexCPS2_Sakura, // 0x22, // Sakura
    indexCPS2_Dan, // 0x23, // Dan
    indexCPS2_Cammy, // 0x24, // Cammy
    indexCPS2_Dhalsim, // 0x25, // Dhalsim
    indexCPS2_Bison, // 0x26, // M.Bison
    indexCPS2_Ken, // 0x27, // Ken
    indexCPS2_Gambit, // 0x28, // Gambit
    indexCPS2_Juggy, // 0x29, // Juggernaut
    indexCPS2_Storm, // 0x2A, // Storm
    indexCPS2_Sabretooth, // 0x2B, // Sabretooth
    indexCPS2_Magneto, // 0x2C, // Magneto
    indexCPS2_Shuma, // 0x2D, // Shuma-Gorath
    indexCPS2_WarMachine, // 0x2E, // War Machine
    indexCPS2_SilverSamurai, // 0x2F, // Silver Samurai
    indexCPS2_OmegaRed, // 0x30, // Omega Red
    indexCPS2_Spiral, // 0x31, // Spiral
    indexCPS2_Colossus, // 0x32, // Colossus
    indexCPS2_IronMan, // 0x33, // Iron Man
    indexCPS2_Sentinel, // 0x34, // Sentinel
    indexCPS2_Blackheart, // 0x35, // Blackheart
    indexCPS2_Thanos, // 0x36, // Thanos
    indexCPS2_Jin, // 0x37, // Jin
    indexCPS2_CapCom, // 0x38, // Captain Commando
    indexCPS2_Bonerine, // 0x39, // Bonerine
    indexCPS2_Kobun, // 0x3A  // Kobun
    indexCPS2_Onslaught, // 0x3B
    indexCPS2_MVCAssets, // 0x3C
    indexCPS2_Adon, // 0x3D, // Adon
    indexCPS2_Sodom, // 0x3E, // Sodom
    indexCPS2_Guy, // 0x3F, // Guy
    indexCPS2_Birdie, // 0x40, // Birdie
    indexCPS2_Rose, // 0x41, // Rose
    indexCPS2_Sagat, // 0x42, // Sagat
    indexCPS2_Rolento, // 0x43, // Rolento
    indexCPS2_Gen, // 0x44, // Gen
    indexCPS2_Balrog, // 0x45, // Balrog
    indexCPS2_EHonda, // 0x46, // E.Honda
    indexCPS2_Blanka, // 0x47, // Blanka
    indexCPS2_RMika, // 0x48, // R.Mika
    indexCPS2_Cody, // 0x49, // Cody
    indexCPS2_Vega, // 0x4A, // Vega
    indexCPS2_Karin, // 0x4B, // Karin
    indexCPS2_Juni, // 0x4C, // Juni
    indexCPS2_Juli, // 0x4D  // Juli
    indexCPS2_SFA3Assets, // x4e - SFA3 HUD, stages
    indexCPS2_Apocalypse, // x4f Apocalypse
    indexCPS2_XMVSFAssets, // x50 - XMVSF HUD, stages
    indexCPS2_Anita , // x51 - Anita
    indexCPS2_MSHAssets, // x52 - MSH HUD, stages
    indexCPS2_Norimaro, // x53 - Norimaro
    indexCPS2_CyberAkuma, // x54 - Cyber Gouki
    indexCPS2_MSHVSFAssets, // x55 - HUD, stages
    indexCPS2_COTAAssets, // x56 - HUD, stages, etc
    indexCPS2_STAkuma, // 0x57 - ST Akuma
};

const UINT8 MSH_A_IMG_UNITS[] =
{
    indexCPS2_Wolverine,
    indexCPS2_Psylocke,
    indexCPS2_CapAm,
    indexCPS2_Spidey,
    indexCPS2_Hulk,
    indexCPS2_DrDoom,
    indexCPS2_Juggy,
    indexCPS2_Magneto,
    indexCPS2_Shuma,
    indexCPS2_IronMan,
    indexCPS2_Blackheart,
    indexCPS2_Thanos,
    //indexMSHAnita = 0,
    indexCPS2_MSHAssets
};

constexpr auto MSH_A_NUM_IMG_UNITS = ARRAYSIZE(MSH_A_IMG_UNITS);

const UINT8 MSHVSF_A_IMG_UNITS[] =
{
    indexCPS2_Ryu,
    indexCPS2_Zangief,
    indexCPS2_Cyclops,
    indexCPS2_Wolverine,
    indexCPS2_CapAm,
    indexCPS2_Spidey,
    indexCPS2_Hulk,
    indexCPS2_Akuma,
    indexCPS2_ChunLi,
    indexCPS2_Charlie,
    indexCPS2_Sakura,
    indexCPS2_Dan,
    indexCPS2_Dhalsim,
    indexCPS2_Bison,
    indexCPS2_Ken,
    indexCPS2_Shuma,
    indexCPS2_OmegaRed,
    indexCPS2_Blackheart,
    indexCPS2_Apocalypse,
    indexCPS2_CyberAkuma,
    indexCPS2_Norimaro,
    indexCPS2_MSHVSFAssets,
};

constexpr auto MSHVSF_A_NUM_IMG_UNITS = ARRAYSIZE(MSHVSF_A_IMG_UNITS);

enum SPECIFIC_GAME_SPRITESETS
{
    indexMSHVSF_CSI = 0x30,
    indexMSHVSF_SSP,
    indexMSHVSF_VSP,
    indexCPS2Images_COTA_CSPs, // = 0x33,
    indexCSP2Images_COTA_CSIs, // = 0x34,
};

const UINT8 COTA_A_IMG_UNITS[] =
{
    indexCPS2_Cyclops,
    indexCPS2_Wolverine,
    indexCPS2_Psylocke,
    indexCPS2_Iceman,
    indexCPS2_Akuma,
    indexCPS2_Juggy,
    indexCPS2_Storm,
    indexCPS2_Sabretooth,
    indexCPS2_Magneto,
    indexCPS2_SilverSamurai,
    indexCPS2_OmegaRed,
    indexCPS2_Spiral,
    indexCPS2_Colossus,
    indexCPS2_Sentinel,
    indexCPS2_STAkuma, 
    indexCPS2_COTAAssets,
};

const int COTA_A_NUM_IMG_UNITS = ARRAYSIZE(COTA_A_IMG_UNITS);

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

const UINT8 JOJOS_A_IMG_UNITS[] =
{
    indexJojos51Jotaro,
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
};

const int JOJOS_A_NUM_IMG_UNITS = ARRAYSIZE(JOJOS_A_IMG_UNITS);

enum eIMGDat_Sections
{
    IMGDAT_SECTION_JOJOS = 0,
    IMG4,              //Image Game Flag.  Used for MVC2, MVC, SFA3, XMVSF, MSH, MSHVSF 
    IMGDAT_SECTION_3S, //Image Game Flag.  Used for SFIII3.  And Jojo's but -- we have nothing there yet.
    IMGDAT_SECTION_ST  //Image Game Flag.  Used for ST.
};

// IMG4 ranges:
//  * MVC2: 0x3b character units
//  * SFA3: 0x11 character units
//  * XMVSF: 0x1 character unit (Apocalypse)
//  * MvC: 0x1 character unit (Onslaught)

//  * SSF2T: 0x11 character units

// Aggregate count of image units per game flag
const int IMGAMT[4] =
{
    JOJOS_A_NUM_IMG_UNITS,
    MVC2_D_NUM_IMG_UNITS + MVC_A_UNIQUE_IMG_UNITS + SFA3_A_NUM_IMG_UNITS + XMVSF_A_UNIQUE_IMG_UNITS + MSH_A_UNIQUE_IMG_UNITS + MSHVSF_A_UNIQUE_IMG_UNITS,
    SFIII3_A_NUM_IMG_UNITS,
    SSF2T_A_NUM_IMG_UNITS
};

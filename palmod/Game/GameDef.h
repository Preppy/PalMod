#pragma once

//A = Arcade
//X = XBox
//D = Dreamcast
//P = Playstation 2

//Game Definitions

enum SupportedGamesList
{
    MVC2_D = 0,
    SFIII3_A,
    MVC2_P,
    SSF2T_A,
    SFA3_A,
    XMVSF_A,
    MVC_A,
    SFIII3_D,
    JOJOS_A,
    MSH_A,
    MSHVSF_A,
    COTA_A,
    MVC2_A,
    Garou_A,
    NEOGEO_A,
    KOF98_A,
    KOF02UM_A,
    CVS2_A,
    Garou_S,
    NUM_GAMES
};

// If you're adding a new game you also need to update 
//    CGameLoad::SetGame
//    CGameLoad::CreateGame
//    CPalModDlg::OnFileOpen
//    CImgDat::PrepImageBuffer
// And potentially update:
//    CPalModDlg::OnEditCopy
// 

const TCHAR g_GameFriendlyName[NUM_GAMES][32] =
{
   _T("MvC2 (Dreamcast)"),
   _T("SFIII3 (Arcade)"),
   _T("MVC2 (Playstation)"),
   _T("SSF2T (Arcade)"),
   _T("SFA3 (Arcade)"),
   _T("XVSF (Arcade)"),
   _T("MVC (Arcade)"),
   _T("SFIII3 (Dreamcast)"),
   _T("Jojo's"),
   _T("MSH (Arcade)"),
   _T("MSHVSF (Arcade)"),
   _T("X-Men (Arcade)"),
   _T("MVC2 2 (Arcade)"),
   _T("Garou: MotW (Arcade)"),
   _T("Unknown NEO•GEO (Arcade)"),
   _T("KOF: 98 (Arcade)"),
   _T("KOF: 02UM (Steam)"),
   _T("CVS2 (Arcade)"),
   _T("Garou: MotW (Steam)")
};

constexpr auto MVC2_D_NUMUNIT = 59;
constexpr auto MVC2_D_NUMUNIT_WITH_TEAMVIEW = MVC2_D_NUMUNIT + 1;
constexpr auto SFIII3_A_NUMUNIT = 20;   

constexpr auto MVC_A_UNIQUE_IMG_UNITS = 2;    // Onslaught[3B] + Unique Assets(HUD, Stages, Assists)[3C]
constexpr auto SFA3_A_UNIQUE_IMG_UNITS = 18;  // Unique 17 Characters[3D - 4D] + Unique Assets(HUD, Stages)[4E]
constexpr auto XMVSF_A_UNIQUE_IMG_UNITS = 2;  // Apocalypse[4F] + Unique Assets(HUD, Stages)[50]
constexpr auto MSH_A_UNIQUE_IMG_UNITS = 2;    // Anita[51] + Unique Assets(HUD, Stages)[52]
constexpr auto MSHVSF_A_UNIQUE_IMG_UNITS = 3; // Norimaro[53] + Cyber-Akuma[54] + Unique Assets(HUD, Stages)[55]
constexpr auto COTA_A_UNIQUE_IMG_UNITS = 2;   // Unique Assets(HUD, Stages)[56] + ST Akuma[57]

//Images
constexpr auto MVC2_D_NUM_IMG_UNITS = 59;
constexpr auto SSF2T_A_NUM_IMG_UNITS = 17;
constexpr auto SFIII3_A_NUM_IMG_UNITS = 20;
constexpr auto SFA3_A_NUM_IMG_UNITS = 29;

//Display types (used for image out)
enum eDispType
{
    DISP_DEF,
    DISP_ALT
};

//Basic button labels
#define BUTTON6 6
#define BUTTON7 7

// In the new world order, these could be the node labels, but we want the short names here
// since they fit into the imgdump UI better.
// If you add button labels, be sure to update CImgOutDlg::OnInitDialog and CImgDumpBmp::GetImagesPerLine as well.
const TCHAR DEF_BUTTONLABEL_2[2][16] =
{
    _T("P1"), _T("P2")
};

const TCHAR DEF_BUTTONLABEL_NEOGEO[][16] =
{
    _T("A"), _T("B"), _T("C"), _T("D")
};

const TCHAR DEF_BUTTONLABEL_NEOGEO_FIVE[][16] =
{
   _T("A"), _T("B"), _T("C"), _T("D"), _T("Boss")
};

const TCHAR DEF_BUTTONLABEL_JOJOS_5[5][16] =
{
   _T("A"), _T("B"), _T("C"), _T("S"), _T("Start")
};

const TCHAR DEF_BUTTONLABEL6[6][16] =
{
   _T("LP"), _T("MP"), _T("HP"), _T("LK"), _T("MK"), _T("HK")
};

const TCHAR DEF_BUTTONLABEL_ISMS[6][16] =
{
   _T("X-Ism 1"), _T("X-Ism 2"), _T("A-Ism 1"), _T("A-Ism 2"), _T("V-Ism 1"), _T("V-Ism 2")
};

const TCHAR DEF_BUTTONLABEL6_MVC2[6][16] = 
{
   _T("LP"), _T("LK"), _T("HP"), _T("HK"), _T("A1"), _T("A2")
};

const TCHAR DEF_BUTTONLABEL7[7][16] = 
{
   _T("LP"), _T("MP"), _T("HP"), _T("LK"), _T("MK"), _T("HK"), _T("EX")
};

const TCHAR DEF_BUTTONLABEL_CVS2[8][16] =
{
   _T("LP"), _T("MP"), _T("HP"), _T("LK"), _T("MK"), _T("HK"), _T("3P"), _T("3K")
};

const TCHAR DEF_BUTTONLABEL_ST10[10][16] =
{
   _T("Jab"), _T("Strong"), _T("Fierce"), _T("Short"), _T("Forward"), _T("RH"), _T("Start"), _T("Hold"), _T("Old 1P"), _T("Old 2P")
};

const TCHAR DEF_NOBUTTONS[1][16] =
{
   _T("Special")
};

const TCHAR DEF_LABEL_STATUS_EFFECTS[8][16] =
{
   _T("Burn 1"), _T("Burn 2"), _T("Shock 1"), _T("Shock 2"), _T("Dark 1"), _T("Dark 2"), _T("Kinetic 1"), _T("Kinetic 2")
};

struct stExtraDef
{
    UINT16 uUnitN = INVALID_UNIT_VALUE;
    TCHAR szDesc[MAX_DESCRIPTION_LENGTH] = _T("uninit");
    UINT32 uOffset = 0;
    UINT16 cbPaletteSize = 0;
    bool isInvisible = false;
};

struct stPairedPaletteInfo
{
    int nNodeIncrementToPartner = 1;
    int nXOffs = 0;
    int nYOffs = 0;
};

struct sGame_PaletteDataset
{
    LPCTSTR szPaletteName = _T("uninit");
    UINT32 nPaletteOffset = 0;
    UINT32 nPaletteOffsetEnd = 0;
    UINT16 indexImgToUse = INVALID_UNIT_VALUE; // the major character/collection index
    UINT16 indexOffsetToUse = 0x0; // subsprites within that collection
    const stPairedPaletteInfo* pPalettePairingInfo = nullptr;
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
    0x4D,  // Juli
    0x4E, // SFA3-unique bonus assets
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

const UINT8 MVC_A_IMG_UNITS[] =
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
    0x51, // Anita
};

constexpr auto MVC_A_NUM_IMG_UNITS = ARRAYSIZE(MVC_A_IMG_UNITS);

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
    indexCSP2Images_MSH_CSPs = 0x36, // = 0x36,
};

const UINT8 COTA_A_IMG_UNITS[] =
{
    indexCPS2_Colossus,
    indexCPS2_Cyclops,
    indexCPS2_Iceman,
    indexCPS2_Juggy,
    indexCPS2_Magneto,
    indexCPS2_OmegaRed,
    indexCPS2_Psylocke,
    indexCPS2_Sentinel,
    indexCPS2_SilverSamurai,
    indexCPS2_Spiral,
    indexCPS2_Storm,
    indexCPS2_Wolverine,
    indexCPS2_Akuma,
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
    indexJojos51Timestop, 
    indexJojos51Bonus,
    indexJojos51Stages,
    indexJojos50HUDPortraits, // 0x1C

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
    indexJojos51Timestop,
    indexJojos51Bonus,
    indexJojos51Stages,
    indexJojos50HUDPortraits,
};

const int JOJOS_A_NUM_IMG_UNITS = ARRAYSIZE(JOJOS_A_IMG_UNITS);

enum SupportedGarou_A_PaletteListIndex
{
    indexGarouARockHoward,
    indexGarouATerryBogard,
    indexGarouAKhushnood,
    indexGarouADong,
    indexGarouAJae,
    indexGarouAHotaru,
    indexGarouAGato,
    indexGarouAKevin,
    indexGarouAGrant,
    indexGarouABJennet,
    indexGarouAHokutomaru,
    indexGarouAFreeman,
    indexGarouATizoc,
    indexGarouAKain,
    indexGarouAPortraits,
    indexGarouABonus,
    indexGarouALast
};

const UINT8 GAROU_A_IMG_UNITS[] =
{
    indexGarouARockHoward,
    indexGarouATerryBogard,
    indexGarouAKhushnood,
    indexGarouADong,
    indexGarouAJae,
    indexGarouAHotaru,
    indexGarouAGato,
    indexGarouAKevin,
    indexGarouAGrant,
    indexGarouABJennet,
    indexGarouAHokutomaru,
    indexGarouAFreeman,
    indexGarouATizoc,
    indexGarouAKain,
    indexGarouAPortraits,
};

const int GAROU_A_NUM_IMG_UNITS = ARRAYSIZE(GAROU_A_IMG_UNITS);
const int GAROU_S_NUM_IMG_UNITS = ARRAYSIZE(GAROU_A_IMG_UNITS);

enum SupportedNEOGEO_A_PaletteListIndex
{
    indexNEOGEO_A_Stub,
    indexNEOGEO_A_Stub2,
    indexNEOGEO_A_Last
};

enum KOFSpriteList
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
    indexKOFSprites_98Ralf,
    indexKOFSprites_98Clark,
    indexKOFSprites_98Athena,
    indexKOFSprites_98Kensou,
    indexKOFSprites_98Chin,
    indexKOFSprites_98Chizuru,
    indexKOFSprites_98Mai,
    indexKOFSprites_98King,
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
    indexKOFSprites_98Shingo, // 25
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
    indexKOFSprites_02Goenitz, // 37

    indexKOFSprites_02Bao,
    indexKOFSprites_02Foxy,
    indexKOFSprites_02Geese,
    indexKOFSprites_02Hinako,
    indexKOFSprites_02Igniz,
    indexKOFSprites_02Jhun,
    indexKOFSprites_02Kasumi,
    indexKOFSprites_02Krizalid,
    indexKOFSprites_02OZero,
    indexKOFSprites_02NGeese, // unused curently

    indexKOFSprites_99Krizalid,
    indexKOFSprites_00Bao,
    indexKOFSprites_00Kasumi,
    indexKOFSprites_00Robert,
    indexKOFSprites_00ZeroClone,
    indexKOFSprites_01Xiangfei,
    indexKOFSprites_02Andy,
    indexKOFSprites_02Chin,
    indexKOFSprites_02Kusanagi,
    indexKOFSprites_02Robert,
    indexKOFSprites_02Yuri,

    indexKOFSprites_Last,
};

enum SupportedKOF98_A_PaletteListIndex
{
    indexKOF98_A_Kyo,
    indexKOF98_A_Benimaru,
    indexKOF98_A_Daimon,
    indexKOF98_A_Terry,
    indexKOF98_A_Andy,
    indexKOF98_A_Joe,
    indexKOF98_A_Ryo,
    indexKOF98_A_Robert,
    indexKOF98_A_Yuri,
    indexKOF98_A_Leona,
    indexKOF98_A_Ralf,
    indexKOF98_A_Clark,
    indexKOF98_A_Athena,
    indexKOF98_A_Kensou,
    indexKOF98_A_Chin,
    indexKOF98_A_Chizuru,
    indexKOF98_A_Mai,
    indexKOF98_A_King,
    indexKOF98_A_Kim,
    indexKOF98_A_Chang,
    indexKOF98_A_Choi,
    indexKOF98_A_Yashiro,
    indexKOF98_A_Shermie,
    indexKOF98_A_Chris,
    indexKOF98_A_Yamazaki,
    indexKOF98_A_BlueMary,
    indexKOF98_A_Billy,
    indexKOF98_A_Iori,
    indexKOF98_A_Mature,
    indexKOF98_A_Vice,
    indexKOF98_A_Heidern,
    indexKOF98_A_Takuma,
    indexKOF98_A_Saisyu,
    indexKOF98_A_HeavyD,
    indexKOF98_A_Lucky,
    indexKOF98_A_Brian,
    indexKOF98_A_Rugal,
    indexKOF98_A_Shingo,
    indexKOF98_A_OYashiro,
    indexKOF98_A_OShermie,
    indexKOF98_A_OChris,
    indexKOF98_A_OmegaRugal,
    indexKOF98_A_Last
};

const UINT8 KOF98_A_IMG_UNITS[] =
{
    indexKOF98_A_Kyo,
    indexKOF98_A_Benimaru,
    indexKOF98_A_Daimon,
    indexKOF98_A_Terry,
    indexKOF98_A_Andy,
    indexKOF98_A_Joe,
    indexKOF98_A_Ryo,
    indexKOF98_A_Robert,
    indexKOF98_A_Yuri,
    indexKOF98_A_Leona,
    indexKOF98_A_Ralf,
    indexKOF98_A_Clark,
    indexKOF98_A_Athena,
    indexKOF98_A_Kensou,
    indexKOF98_A_Chin,
    indexKOF98_A_Chizuru,
    indexKOF98_A_Mai,
    indexKOF98_A_King,
    indexKOF98_A_Kim,
    indexKOF98_A_Chang,
    indexKOF98_A_Choi,
    indexKOF98_A_Yashiro,
    indexKOF98_A_Shermie,
    indexKOF98_A_Chris,
    indexKOF98_A_Yamazaki,
    indexKOF98_A_BlueMary,
    indexKOF98_A_Billy,
    indexKOF98_A_Iori,
    indexKOF98_A_Mature,
    indexKOF98_A_Vice,
    indexKOF98_A_Heidern,
    indexKOF98_A_Takuma,
    indexKOF98_A_Saisyu,
    indexKOF98_A_HeavyD,
    indexKOF98_A_Lucky,
    indexKOF98_A_Brian,
    indexKOF98_A_Rugal,
    indexKOF98_A_Shingo,
};

const int KOF98_A_NUM_IMG_UNITS = ARRAYSIZE(KOF98_A_IMG_UNITS);

enum SupportedKOF02UM_A_PaletteListIndex
{
    indexKOF02UM_A_Andy,
    indexKOF02UM_A_Angel,
    indexKOF02UM_A_Athena,
    indexKOF02UM_A_Bao,
    indexKOF02UM_A_Benimaru,
    indexKOF02UM_A_Billy,
    indexKOF02UM_A_BlueMary,
    indexKOF02UM_A_Chang,
    indexKOF02UM_A_Chin,
    indexKOF02UM_A_Choi,
    indexKOF02UM_A_Chris,
    indexKOF02UM_A_Clark,
    indexKOF02UM_A_CloneZero,
    indexKOF02UM_A_Daimon,
    indexKOF02UM_A_EXKensou,
    indexKOF02UM_A_EXRobert,
    indexKOF02UM_A_EXTakuma,
    indexKOF02UM_A_Foxy,
    indexKOF02UM_A_Geese,
    indexKOF02UM_A_Goenitz,
    indexKOF02UM_A_Heidern,
    indexKOF02UM_A_Hinako,
    indexKOF02UM_A_Igniz,
    indexKOF02UM_A_Iori,
    indexKOF02UM_A_Jhun,
    indexKOF02UM_A_Joe,
    indexKOF02UM_A_K,
    indexKOF02UM_A_Kasumi,
    indexKOF02UM_A_Kensou,
    indexKOF02UM_A_Kim,
    indexKOF02UM_A_King,
    indexKOF02UM_A_Krizalid,
    indexKOF02UM_A_Kula,
    indexKOF02UM_A_Kusanagi,
    indexKOF02UM_A_Kyo,
    indexKOF02UM_A_Kyo1,
    indexKOF02UM_A_Kyo2,
    indexKOF02UM_A_Leona,
    indexKOF02UM_A_Lin,
    indexKOF02UM_A_Mai,
    indexKOF02UM_A_Mature,
    indexKOF02UM_A_Maxima,
    indexKOF02UM_A_MayLee,
    indexKOF02UM_A_Nameless,
    indexKOF02UM_A_NGeese,
    indexKOF02UM_A_OChris,
    indexKOF02UM_A_OShermie,
    indexKOF02UM_A_OYashiro,
    indexKOF02UM_A_OmegaRugal,
    indexKOF02UM_A_OZero,
    indexKOF02UM_A_Ralf,
    indexKOF02UM_A_Ramon,
    indexKOF02UM_A_Robert,
    indexKOF02UM_A_Ryo,
    indexKOF02UM_A_Seth,
    indexKOF02UM_A_Shermie,
    indexKOF02UM_A_Shingo,
    indexKOF02UM_A_Takuma,
    indexKOF02UM_A_Terry,
    indexKOF02UM_A_Vanessa,
    indexKOF02UM_A_Vice,
    indexKOF02UM_A_Whip,
    indexKOF02UM_A_Xiangfei,
    indexKOF02UM_A_Yamazaki,
    indexKOF02UM_A_Yashiro,
    indexKOF02UM_A_Yuri,

    // c-zero

    indexKOF02UM_A_Last
};

const UINT8 KOF02UM_A_IMG_UNITS[] =
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
    indexKOFSprites_01Xiangfei,
    indexKOFSprites_02Andy,
    indexKOFSprites_02Chin,
    indexKOFSprites_02Kusanagi,
    indexKOFSprites_02Robert,
    indexKOFSprites_02Yuri,
};

const int KOF02UM_A_NUM_IMG_UNITS = ARRAYSIZE(KOF02UM_A_IMG_UNITS);

enum SupportedCVS2_A_PaletteListIndex
{
    indexCVS2_A_Akuma,
    indexCVS2_A_Athena,
    indexCVS2_A_Balrog,
    indexCVS2_A_Benimaru,
    indexCVS2_A_Blanka,
    indexCVS2_A_Cammy,
    indexCVS2_A_Chang,
    indexCVS2_A_ChunLi,
    indexCVS2_A_Dan,
    indexCVS2_A_Dhalsim,
    indexCVS2_A_EHonda,
    indexCVS2_A_Eagle,
    indexCVS2_A_Geese,
    indexCVS2_A_Guile,
    indexCVS2_A_Haohmaru,
    indexCVS2_A_Hibiki,
    indexCVS2_A_Iori,
    indexCVS2_A_Joe,
    indexCVS2_A_Ken,
    indexCVS2_A_Kim,
    indexCVS2_A_King,
    indexCVS2_A_Kyo,
    indexCVS2_A_Kyosuke,
    indexCVS2_A_MBison,
    indexCVS2_A_Mai,
    indexCVS2_A_Maki,
    indexCVS2_A_Morrigan,
    indexCVS2_A_Nakoruru,
    indexCVS2_A_Raiden,
    indexCVS2_A_Rock,
    indexCVS2_A_Rolento,
    indexCVS2_A_Rugal,
    indexCVS2_A_Ryo,
    indexCVS2_A_Ryu,
    indexCVS2_A_Sagat,
    indexCVS2_A_Sakura,
    indexCVS2_A_Terry,
    indexCVS2_A_RyuhakuTodoh,
    indexCVS2_A_Vega,
    indexCVS2_A_Vice,
    indexCVS2_A_RyujiYamazaki,
    indexCVS2_A_Yun,
    indexCVS2_A_Yuri,
    indexCVS2_A_Zangief,

    indexCVS2_A_EvilRyu,
    indexCVS2_A_OrochiIori,
    indexCVS2_A_GodRugal,
    indexCVS2_A_ShinAkuma,

    indexCVS2_A_Last
};

constexpr auto CVS2_A_NUMUNIT = indexCVS2_A_Last;

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
    indexCVS2Sprites_Last
}; // max 47 characters

const UINT8 CVS2_A_IMG_UNITS[] =
{
    indexCVS2Sprites_Akuma,
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
};

enum eIMGDat_Sections
{
    IMGDAT_SECTION_CVS2 = 0, // CVS2: has both Capcom and SNK images
    IMGDAT_SECTION_NEOGEO,  // NEOGEO: Garou
    IMGDAT_SECTION_JOJOS,
    IMGDAT_SECTION_KOF,     // KOF98 + KOF02UM
    IMGDAT_SECTION_CPS2,    // Used for MVC2, MVC, SFA3, XMVSF, MSH, MSHVSF 
    IMGDAT_SECTION_3S,      // Used for SFIII3.
    IMGDAT_SECTION_ST,      // Used for ST.
};

// IMGDAT_SECTION_CPS2 ranges:
//  * MVC2: 0x3b character units
//  * SFA3: 0x11 character units + bonus unit
//  * XMVSF: 0x1 character unit (Apocalypse)
//  * MvC: 0x1 character unit (Onslaught)

//  * SSF2T: 0x11 character units

// Aggregate count of image units per game flag
const int IMGAMT[] =
{
    GAROU_A_NUM_IMG_UNITS,
    JOJOS_A_NUM_IMG_UNITS,
    indexKOFSprites_Last,
    MVC2_D_NUM_IMG_UNITS + MVC_A_UNIQUE_IMG_UNITS + SFA3_A_NUM_IMG_UNITS + XMVSF_A_UNIQUE_IMG_UNITS + MSH_A_UNIQUE_IMG_UNITS + MSHVSF_A_UNIQUE_IMG_UNITS,
    SFIII3_A_NUM_IMG_UNITS,
    SSF2T_A_NUM_IMG_UNITS,
    indexCVS2Sprites_Last,
};

const stPairedPaletteInfo pairUnhandled =     { 0, 0, 0 };
const stPairedPaletteInfo pairHandledInCode = { 0, 0, 0 };

const stPairedPaletteInfo pairCaptainAmericaShield = { 1, -22, -17 };
const stPairedPaletteInfo pairCapComNinjas =  { 1, 28, 4 };
const stPairedPaletteInfo pairHayatoSword = { 1, -63, 32 };
const stPairedPaletteInfo pairTronBody = { 1, -4, -50 };
const stPairedPaletteInfo pairWolvieClaws =   { 1, 20, 4 };

// Please note that the palette sort order in PalMod differs for MM in MvC1 and MvC2
const stPairedPaletteInfo pairRushDrill =    { 30, 0, 0 };
const stPairedPaletteInfo pairHyperMegaman = { 9, 31, 12 };


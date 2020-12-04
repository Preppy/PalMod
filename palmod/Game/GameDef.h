#pragma once

//A = Arcade
//X = XBox
//D = Dreamcast
//P = Playstation 2
//S = Steam
//GBA = GameBoy

// Needed for game tables
void StrRemoveNonASCII(TCHAR* pszOutput, size_t ccSize, LPCTSTR pszInput);

//Game Definitions
// DO NOT CHANGE THE ORDER OF THIS LIST: the values are used as indexes for quick reloads
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
    KOF02UM_S,
    CVS2_A,
    Garou_S,
    KOF02_A,
    SFA2_A,
    SFIII3_A_DIR_51,
    JOJOS_A_DIR_50,
    JOJOS_A_DIR_51,
    SVCPLUSA_A,
    SAMSHO5SP_A,
    MVC2_A_DIR,
    GEMFIGHTER_A,
    REDEARTH_A,
    REDEARTH_A_DIR,
    KarnovsR_A,
    WakuWaku7_A,
    SFA1_A,
    VSAV_A,
    VSAV2_A,
    RBFFS_A,
    SAMSHO3_A,
    VHUNT2_A,
    SFIII2_A,
    SF2HF_A,
    SF2CE_A,
    SSF2T_GBA,
    MATRIMELEE_A,
    SFIII1_A,
    WINDJAMMERS_A,
    SFIII3_A_DIR_10,
    KOFXI_A,
    NGBC_A,
    BREAKERS_A,
    SFIII3_A_DIR_4,
    BLEACH_DS,
    KOF03_A,
    NUM_GAMES // This needs to be last
};

// If you're adding a new game you also must update 
//    CGameLoad::SetGame            Needed to load the game class
//    CGameLoad::CreateGame         Needed to load the game class
//    CPalModDlg::OnFileOpen        Ensures the user can open the game
//    CImgDat::PrepImageBuffer      Ensures that images can load
//    CPalModDlg::OnEditPaste       Ensures that pastes work correctly
// 

// We want to keep these short for the titlebar: they're hard-limited by
// MAX_DESCRIPTION_LENGTH (96), so 64 is probably the max we want.
// Note that the games can override these values: these are just the defaults.
const TCHAR g_GameFriendlyName[NUM_GAMES][64] =
{
   L"MvC2 (Dreamcast)",
   L"SFIII3 (Arcade)",
   L"MVC2 (Playstation)",
   L"SSF2T (Arcade)",
   L"SFA3 (Arcade)",
   L"XVSF (Arcade)",
   L"MVC (Arcade)",
   L"SFIII:3S (Dreamcast)",
   L"Jojo's (Japan)",
   L"MSH (Arcade)",
   L"MSHVSF (Arcade)",
   L"X-Men (Arcade)",
   L"MVC2 (Arcade)",
   L"Garou: MotW (Arcade)",
   L"Unknown Game",
   L"KOF: 98 (Arcade)",
   L"KOF: 02UM (Steam)",
   L"CVS2 (Arcade)",
   L"Garou: MotW (Steam)",
   L"KOF: 02 (Arcade)",
   L"SFA2 (Arcade)",
   L"SFIII:3S (Arcade Rerip)",
   L"Jojo's 50 (Japanese Arcade Rerip)",
   L"Jojo's 51 (Japanese Arcade Rerip)",
   L"SVC Plus A",
   L"Samurai Shodown V Special",
   L"MVC2 (Arcade rerip)",
   L"Super Gem Fighter Mini Mix (USA 970904)",
   L"Red Earth (Arcade)",
   L"Red Earth (Arcade Rerip)",
   L"Karnov's Revenge / Fighter's History Dynamite",
   L"Waku Waku 7",
   L"SFA1 (Arcade)",
   L"Vampire Savior (Arcade)",
   L"Vampire Savior 2 (Arcade)",
   L"Real Bout Fatal Fury Special (Arcade)",
   L"Samurai Shodown 3",
   L"Vampire Hunter 2 (Arcade)",
   L"SFIII:2I (Arcade)",
   L"SF2:HF (Arcade)",
   L"SF2:CE (Arcade)",
   L"SSF2T:Revival (GBA)",
   L"Matrimelee (Arcade)",
   L"SFIII:NG (Arcade)",
   L"Windjammers (Arcade)",
   L"SFIII:3S Gill Glow (Arcade Rerip)",
   L"KOF:XI (Atomiswave)",
   L"NGBC (Atomiswave)",
   L"Breakers Revenge (Arcade)",
   L"SFIII:4rd (Arcade)",
   L"Bleach DS (Nintendo DS)",
   L"KOF03: 2004 EX Ultra Plus",
};

enum class GamePlatform
{
    CapcomCPS12 = 0,
    CapcomCPS3,
    NEOGEO,
    Nintendo,
    SammyAtomiswave,
    SegaNAOMI,
    Steam,
    Unknown,
    Last,
};

struct sSupportedGameList
{
    int nInternalGameIndex;
    LPCTSTR szGameFriendlyName;
    LPCTSTR szGameFilterString;
    int nListedGameIndex = INVALID_UNIT_VALUE;
    GamePlatform publisherKey = GamePlatform::Unknown;
};

const int nGameLoadROMListMask = 0xf0000;
extern sSupportedGameList* pSupportedGameList;
extern int nNumberOfLoadROMOptions;

constexpr auto MVC2_D_NUMUNIT = 59;
constexpr auto MVC2_D_NUMUNIT_WITH_TEAMVIEW = MVC2_D_NUMUNIT + 1;

constexpr auto MVC_A_UNIQUE_IMG_UNITS = 2;    // Onslaught[3B] + Unique Assets(HUD, Stages, Assists)[3C]
constexpr auto SFA3_A_UNIQUE_IMG_UNITS = 18;  // Unique 17 Characters[3D - 4D] + Unique Assets(HUD, Stages)[4E]
constexpr auto XMVSF_A_UNIQUE_IMG_UNITS = 2;  // Apocalypse[4F] + Unique Assets(HUD, Stages)[50]
constexpr auto MSH_A_UNIQUE_IMG_UNITS = 2;    // Anita[51] + Unique Assets(HUD, Stages)[52]
constexpr auto MSHVSF_A_UNIQUE_IMG_UNITS = 3; // Norimaro[53] + Cyber-Akuma[54] + Unique Assets(HUD, Stages)[55]
constexpr auto COTA_A_UNIQUE_IMG_UNITS = 2;   // Unique Assets(HUD, Stages)[56] + ST Akuma[57]

//Images
constexpr auto MVC2_D_NUM_IMG_UNITS = 59;

//Image output display options
enum class eImageOutputSpriteDisplay
{
    DISPLAY_SPRITES_LEFTTORIGHT,
    DISPLAY_SPRITES_TOPTOBOTTOM
};

//Basic button labels
#define BUTTON6 6
#define BUTTON7 7

// In the new world order, these could be the node labels, but we want the short names here
// since they fit into the imgdump UI better.
// If you add button labels, be sure to update CImgOutDlg::OnInitDialog and CImgDumpBmp::GetImagesPerLine as well.
const LPCTSTR DEF_BUTTONLABEL_2[] =
{
    L"P1", L"P2"
};

const LPCTSTR DEF_BUTTONLABEL_2_PK[] =
{
    L"Punch", L"Kick"
};

const LPCTSTR DEF_BUTTONLABEL_NEOGEO[] =
{
    L"A", L"B", L"C", L"D"
};

const LPCTSTR DEF_BUTTONLABEL_SAMSHO3[] =
{
    L"S1", L"S2", L"B1", L"B2"
};

const LPCTSTR DEF_BUTTONLABEL_NEOGEO_FIVE[] =
{
   L"A", L"B", L"C", L"D", L"Boss"
};

const LPCTSTR DEF_BUTTONLABEL_WAKUWAKU7_FIVE[] =
{
   L"A", L"B", L"C", L"D", L"Dark"
};

const LPCTSTR DEF_BUTTONLABEL_JOJOS_5[] =
{
   L"A", L"B", L"C", L"S", L"Start"
};

const LPCTSTR DEF_BUTTONLABEL6[] =
{
   L"LP", L"MP", L"HP", L"LK", L"MK", L"HK"
};

const LPCTSTR DEF_BUTTONLABEL_GBA[] =
{
    L"A", L"L", L"R", L"B", L"Sel+A", L"Sel+L", L"Sel+R", L"Sel+B", L"Start"
};

const LPCTSTR DEF_BUTTONLABEL_ISMS[] =
{
   L"X-Ism P", L"X-Ism K", L"A-Ism P", L"A-Ism K", L"V-Ism P", L"V-Ism K"
};

const LPCTSTR DEF_BUTTONLABEL_SFA2[] =
{
   L"P", L"K", L"PP", L"KK", L"Auto P", L"Auto K"
};

const LPCTSTR DEF_BUTTONLABEL6_MVC2[] =
{
   L"LP", L"LK", L"HP", L"HK", L"A1", L"A2"
};

const LPCTSTR DEF_BUTTONLABEL7_SF3[] =
{
   L"LP", L"MP", L"HP", L"LK", L"MK", L"HK", L"EX"
};

const LPCTSTR DEF_BUTTONLABEL_CVS2[] =
{
   L"LP", L"MP", L"HP", L"LK", L"MK", L"HK", L"3P", L"3K"
};

const LPCTSTR DEF_BUTTONLABEL_ST10[] =
{
   L"Jab", L"Strong", L"Fierce", L"Short", L"Forward", L"RH", L"Start", L"Hold", L"Old 1P", L"Old 2P"
};

const LPCTSTR DEF_BUTTONLABEL_GEMFIGHTER[] =
{
    L"A", L"B", L"C", L"X3"
};

const LPCTSTR DEF_NOBUTTONS[] =
{
   L"Special"
};

const LPCTSTR DEF_LABEL_STATUS_EFFECTS[] =
{
   L"Burn 1", L"Burn 2", L"Shock 1", L"Shock 2", L"Dark 1", L"Dark 2", L"Kinetic 1", L"Kinetic 2"
};

const LPCTSTR DEF_BUTTONLABEL_VSAV[] =
{
   L"LP", L"MP", L"HP", L"LK", L"MK", L"HK", L"PP", L"KK", L"AP", L"AK"
};

const LPCTSTR DEF_BUTTONLABEL_KOFXI[] =
{
    L"A", L"B", L"C", L"D", L"E + A", L"E + B", L"E + C", L"E + D", L"Start + A", L"Start + B", L"Start + C", L"Start + D"
};

const LPCTSTR DEF_BUTTONLABEL_BLEACH[] =
{
    L"Palette 1", L"Palette 2", L"Palette 3", L"Palette 4", L"Palette 5", L"Palette 6", L"Palette 7", L"Palette 8"
};

struct stExtraDef
{
    UINT16 uUnitN = INVALID_UNIT_VALUE;
    TCHAR szDesc[MAX_DESCRIPTION_LENGTH] = L"uninit";
    UINT32 uOffset = 0;
    UINT16 cbPaletteSize = 0;
    bool isInvisible = false;
    UINT16 indexImgToUse = INVALID_UNIT_VALUE; // the major character/collection index
    UINT16 indexOffsetToUse = 0x0; // subsprites within that collection
};

struct stPairedPaletteInfo
{
    int nNodeIncrementToPartner = 1;
    int nXOffs = 0;
    int nYOffs = 0;
};

struct sGame_PaletteDataset
{
    LPCWSTR szPaletteName = L"uninit";
    UINT32 nPaletteOffset = 0;
    UINT32 nPaletteOffsetEnd = 0;
    UINT16 indexImgToUse = INVALID_UNIT_VALUE; // the major character/collection index
    UINT16 indexOffsetToUse = 0x0; // subsprites within that collection
    const stPairedPaletteInfo* pPalettePairingInfo = nullptr;
};

enum CHARACTERS_CPS2
{
    indexCPS2_Ryu,          // 0x00, // Ryu
    indexCPS2_Zangief,      // 0x01, // Zangief
    indexCPS2_Guile,        // 0x02, // Guile
    indexCPS2_Morrigan,     // 0x03, // Morrigan
    indexCPS2_Anakaris,     // 0x04, // Anakaris
    indexCPS2_Strider,      // 0x05, // Strider Hiryu
    indexCPS2_Cyclops,      // 0x06, // Cyclops
    indexCPS2_Wolverine,    // 0x07, // Wolverine
    indexCPS2_Psylocke,     // 0x08, // Psylocke
    indexCPS2_Iceman,       // 0x09, // Iceman
    indexCPS2_Rogue,        // 0x0A, // Rogue
    indexCPS2_CapAm,        // 0x0B, // Captain America
    indexCPS2_Spidey,       // 0x0C, // Spider-Man
    indexCPS2_Hulk,         // 0x0D, // Hulk,
    indexCPS2_Venom,        // 0x0E, // Venom
    indexCPS2_DrDoom,       // 0x0F, // Dr. Doom
    indexCPS2_Tron,         // 0x10, // Tron Bonne
    indexCPS2_Jill,         // 0x11, // Jill Valentine
    indexCPS2_Hayato,       // 0x12, // Hayato
    indexCPS2_Ruby,         // 0x13, // Ruby Heart
    indexCPS2_SonSon,       // 0x14, // SonSon
    indexCPS2_Amingo,       // 0x15, // Amingo
    indexCPS2_Marrow,       // 0x16, // Marrow
    indexCPS2_Cable,        // 0x17, // Cable
    indexCPS2_Abyss1,       // 0x18, // Abyss (Form 1)
    indexCPS2_Abyss2,       // 0x19, // Abyss (Form 2)
    indexCPS2_Abyss3,       // 0x1A, // Abyss (Form 3)
    indexCPS2_ChunLi,       // 0x1B, // Chun-Li
    indexCPS2_Megaman,      // 0x1C, // Megaman
    indexCPS2_Roll,         // 0x1D, // Roll
    indexCPS2_Akuma,        // 0x1E, // Gouki
    indexCPS2_BBHood,       // 0x1F, // B.B. Hood
    indexCPS2_Felicia,      // 0x20, // Felicia
    indexCPS2_Charlie,      // 0x21, // Charlie
    indexCPS2_Sakura,       // 0x22, // Sakura
    indexCPS2_Dan,          // 0x23, // Dan
    indexCPS2_Cammy,        // 0x24, // Cammy
    indexCPS2_Dhalsim,      // 0x25, // Dhalsim
    indexCPS2_Bison,        // 0x26, // M.Bison
    indexCPS2_Ken,          // 0x27, // Ken
    indexCPS2_Gambit,       // 0x28, // Gambit
    indexCPS2_Juggy,        // 0x29, // Juggernaut
    indexCPS2_Storm,        // 0x2A, // Storm
    indexCPS2_Sabretooth,   // 0x2B, // Sabretooth
    indexCPS2_Magneto,      // 0x2C, // Magneto
    indexCPS2_Shuma,        // 0x2D, // Shuma-Gorath
    indexCPS2_WarMachine,   // 0x2E, // War Machine
    indexCPS2_SilverSamurai, // 0x2F, // Silver Samurai
    indexCPS2_OmegaRed,     // 0x30, // Omega Red
    indexCPS2_Spiral,       // 0x31, // Spiral
    indexCPS2_Colossus,     // 0x32, // Colossus
    indexCPS2_IronMan,      // 0x33, // Iron Man
    indexCPS2_Sentinel,     // 0x34, // Sentinel
    indexCPS2_Blackheart,   // 0x35, // Blackheart
    indexCPS2_Thanos,       // 0x36, // Thanos
    indexCPS2_Jin,          // 0x37, // Jin
    indexCPS2_CapCom,       // 0x38, // Captain Commando
    indexCPS2_Bonerine,     // 0x39, // Bonerine
    indexCPS2_Kobun,        // 0x3A  // Kobun
    indexCPS2_Onslaught,    // 0x3B
    indexCPS2_MVCAssets,    // 0x3C
    indexCPS2_Adon,         // 0x3D, // Adon
    indexCPS2_Sodom,        // 0x3E, // Sodom
    indexCPS2_Guy,          // 0x3F, // Guy
    indexCPS2_Birdie,       // 0x40, // Birdie
    indexCPS2_Rose,         // 0x41, // Rose
    indexCPS2_Sagat,        // 0x42, // Sagat
    indexCPS2_Rolento,      // 0x43, // Rolento
    indexCPS2_Gen,          // 0x44, // Gen
    indexCPS2_Balrog,       // 0x45, // Balrog
    indexCPS2_EHonda,       // 0x46, // E.Honda
    indexCPS2_Blanka,       // 0x47, // Blanka
    indexCPS2_RMika,        // 0x48, // R.Mika
    indexCPS2_Cody,         // 0x49, // Cody
    indexCPS2_Vega,         // 0x4A, // Vega
    indexCPS2_Karin,        // 0x4B, // Karin
    indexCPS2_Juni,         // 0x4C, // Juni
    indexCPS2_Juli,         // 0x4D  // Juli
    indexCPS2_SFA3Assets,   // 0x4e - SFA3 HUD, stages
    indexCPS2_Apocalypse,   // 0x4f Apocalypse
    indexCPS2_XMVSFAssets,  // 0x50 - XMVSF HUD, stages
    indexCPS2_Anita,        // 0x51 - Anita
    indexCPS2_MSHAssets,    // 0x52 - MSH HUD, stages
    indexCPS2_Norimaro,     // 0x53 - Norimaro
    indexCPS2_CyberAkuma,   // 0x54 - Cyber Gouki
    indexCPS2_MSHVSFAssets, // 0x55 - HUD, stages
    indexCPS2_COTAAssets,   // 0x56 - HUD, stages, etc
    indexCPS2_STAkuma,      // 0x57 - ST Akuma
    indexCPS2_SFA2Portraits, // 0x58

    indexCPS2_SPF_Ryu,      // 0x59
    indexCPS2_SPF_Ken,      // 0x5a
    indexCPS2_SPF_ChunLi,   // 0x5b
    indexCPS2_SPF_Sakura,   // 0x5c
    indexCPS2_SPF_Morrigan, // 0x5d
    indexCPS2_SPF_HsienKo,  // 0x5e
    indexCPS2_SPF_Felicia,  // 0x5f
    indexCPS2_SPF_Tessa,    // 0x60
    indexCPS2_SPF_Ibuki,    // 0x61
    indexCPS2_SPF_Zangief,  // 0x62
    indexCPS2_SPF_Dan,      // 0x63
    indexCPS2_SPF_Akuma,    // 0x64

    indexCPS2_SFA1_Portraits, // 0x65
    indexCPS2_SFA3_Portraits, // 0x66

    indexCPS2_Vamp_Aulbath,   // 0x67
    indexCPS2_Vamp_Bishamon,  // 0x68
    indexCPS2_Vamp_Dee,       // 0x69
    indexCPS2_Vamp_Demitri,   // 0x6A
    indexCPS2_Vamp_Donovan,   // 0x6B
    indexCPS2_Vamp_Gallon,    // 0x6C
    indexCPS2_Vamp_Jedah,     // 0x6D
    indexCPS2_Vamp_LeiLei,    // 0x6E
    indexCPS2_Vamp_Lilith,    // 0x6F
    indexCPS2_Vamp_Marionette, // 0x70
    indexCPS2_Vamp_Phobos,    // 0x71
    indexCPS2_Vamp_Pyron,     // 0x72
    indexCPS2_Vamp_QBee,      // 0x73
    indexCPS2_Vamp_Sasquatch, // 0x74
    indexCPS2_Vamp_Shadow,    // 0x75
    indexCPS2_Vamp_Victor,    // 0x76
    indexCPS2_Vamp_Zabel,     // 0x77
    indexCPS2_VSAV1_WinPortraits, // 0x78
    indexCPS2_VSAV1_MidnightBliss, // 0x79

    indexCPS2_Vamp_DarkGallon,    // 0x7a
    indexCPS2_Vamp_OboroBishamon, // 0x7b
    indexCPS2_VSAV1_Bonus,  // 0x7c

};

const UINT16 MVC2_IMG_UNITS[MVC2_D_NUM_IMG_UNITS] =
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
    indexCPS2_Sentinel, // Sentinel
    0x35, // Blackheart
    0x36, // Thanos
    0x37, // Jin
    0x38, // Captain Commando
    0x39, // Bonerine
    0x3A  // Kobun
};

enum CHARACTERS_3S_CPS3
{
    index3S_CPS3_Alex,
    index3S_CPS3_Ryu,
    index3S_CPS3_Yun,
    index3S_CPS3_Dudley,
    index3S_CPS3_Necro,
    index3S_CPS3_Hugo,
    index3S_CPS3_Ibuki,
    index3S_CPS3_Elena,
    index3S_CPS3_Oro,
    index3S_CPS3_Yang,
    index3S_CPS3_Ken,
    index3S_CPS3_Sean,
    index3S_CPS3_Urien,
    index3S_CPS3_Gouki,
    index3S_CPS3_ShinGouki,
    index3S_CPS3_ChunLi,
    index3S_CPS3_Makoto,
    index3S_CPS3_Q,
    index3S_CPS3_Twelve,
    index3S_CPS3_Remy,
    index3S_CPS3_Bonus,
    index3S_CPS3_Stages,
    index3S_CPS3_Gill,
    index2i_CPS3_Bonus,
};

const UINT16 SFIII1_A_IMG_UNITS[] =
{
    index3S_CPS3_Alex,
    index3S_CPS3_Ryu,
    index3S_CPS3_Yun,
    index3S_CPS3_Dudley,
    index3S_CPS3_Necro,
    index3S_CPS3_Hugo,
    index3S_CPS3_Ibuki,
    index3S_CPS3_Elena,
    index3S_CPS3_Oro,
    index3S_CPS3_Yang,
    index3S_CPS3_Ken,
    index3S_CPS3_Sean,
    index3S_CPS3_Gill,
    index2i_CPS3_Bonus,
};

constexpr auto SFIII1_A_NUM_IMG_UNITS = ARRAYSIZE(SFIII1_A_IMG_UNITS);

const UINT16 SFIII2_A_IMG_UNITS[] =
{
    index3S_CPS3_Alex,
    index3S_CPS3_Ryu,
    index3S_CPS3_Yun,
    index3S_CPS3_Dudley,
    index3S_CPS3_Necro,
    index3S_CPS3_Hugo,
    index3S_CPS3_Ibuki,
    index3S_CPS3_Elena,
    index3S_CPS3_Oro,
    index3S_CPS3_Yang,
    index3S_CPS3_Ken,
    index3S_CPS3_Sean,
    index3S_CPS3_Urien,
    index3S_CPS3_Gouki,
    index3S_CPS3_ShinGouki,
    index3S_CPS3_Gill,
    index2i_CPS3_Bonus,
};

constexpr auto SFIII2_A_NUM_IMG_UNITS = ARRAYSIZE(SFIII2_A_IMG_UNITS);

const UINT16 SFIII3_A_IMG_UNITS[] =
{
    index3S_CPS3_Alex,
    index3S_CPS3_Ryu,
    index3S_CPS3_Yun,
    index3S_CPS3_Dudley,
    index3S_CPS3_Necro,
    index3S_CPS3_Hugo,
    index3S_CPS3_Ibuki,
    index3S_CPS3_Elena,
    index3S_CPS3_Oro,
    index3S_CPS3_Yang,
    index3S_CPS3_Ken,
    index3S_CPS3_Sean,
    index3S_CPS3_Urien,
    index3S_CPS3_Gouki,
    index3S_CPS3_ShinGouki,
    index3S_CPS3_ChunLi,
    index3S_CPS3_Makoto,
    index3S_CPS3_Q,
    index3S_CPS3_Twelve,
    index3S_CPS3_Remy,
    index3S_CPS3_Bonus,
    index3S_CPS3_Stages,
    index3S_CPS3_Gill,
};

constexpr auto SFIII3_A_NUM_IMG_UNITS = ARRAYSIZE(SFIII3_A_IMG_UNITS);

const UINT16 SFIII3_D_IMG_UNITS[SFIII3_A_NUM_IMG_UNITS - 0x01] =
{
    index3S_CPS3_Alex,
    index3S_CPS3_Ryu,
    index3S_CPS3_Yun,
    index3S_CPS3_Dudley,
    index3S_CPS3_Necro,
    index3S_CPS3_Hugo,
    index3S_CPS3_Ibuki,
    index3S_CPS3_Elena,
    index3S_CPS3_Oro,
    index3S_CPS3_Yang,
    index3S_CPS3_Ken,
    index3S_CPS3_Sean,
    index3S_CPS3_Urien,
    index3S_CPS3_Gouki,
    index3S_CPS3_ShinGouki,
    index3S_CPS3_ChunLi,
    index3S_CPS3_Makoto,
    index3S_CPS3_Q,
    index3S_CPS3_Twelve,
    index3S_CPS3_Remy,
};

constexpr auto SFIII3_D_NUM_IMG_UNITS = ARRAYSIZE(SFIII3_D_IMG_UNITS);

enum SF2Sprites
{
    indexSF2Sprites_Ryu = 0,
    indexSF2Sprites_EHonda,
    indexSF2Sprites_Blanka,
    indexSF2Sprites_Guile,
    indexSF2Sprites_Ken,
    indexSF2Sprites_ChunLi,
    indexSF2Sprites_Zangief,
    indexSF2Sprites_Dhalsim,
    indexSF2Sprites_Bison,
    indexSF2Sprites_Sagat,
    indexSF2Sprites_Balrog,
    indexSF2Sprites_Vega,
    indexSF2Sprites_Cammy,
    indexSF2Sprites_THawk,
    indexSF2Sprites_FeiLong,
    indexSF2Sprites_DeeJay,
    indexSF2Sprites_Gouki,
    indexSF2Sprites_Bonus,
    indexSF2Sprites_Stages,

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

const UINT16 SSF2T_A_IMG_UNITS[] =
{
    indexSF2Sprites_Ryu,
    indexSF2Sprites_EHonda,
    indexSF2Sprites_Blanka,
    indexSF2Sprites_Guile,
    indexSF2Sprites_Ken,
    indexSF2Sprites_ChunLi,
    indexSF2Sprites_Zangief,
    indexSF2Sprites_Dhalsim,
    indexSF2Sprites_Bison,
    indexSF2Sprites_Sagat,
    indexSF2Sprites_Balrog,
    indexSF2Sprites_Vega,
    indexSF2Sprites_Cammy,
    indexSF2Sprites_THawk,
    indexSF2Sprites_FeiLong,
    indexSF2Sprites_DeeJay,
    indexSF2Sprites_Gouki,
    indexSF2Sprites_Bonus,
    indexSF2Sprites_Stages,
};

constexpr auto SSF2T_A_NUM_IMG_UNITS = ARRAYSIZE(SSF2T_A_IMG_UNITS);

const UINT16 SSF2T_GBA_IMG_UNITS[] =
{
    indexSF2GBASprites_Ryu,
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
};

constexpr auto SSF2T_GBA_NUM_IMG_UNITS = ARRAYSIZE(SSF2T_GBA_IMG_UNITS);

const UINT16 SF2HF_A_IMG_UNITS[] =
{
    indexSF2Sprites_Ryu,
    indexSF2Sprites_EHonda,
    indexSF2Sprites_Blanka,
    indexSF2Sprites_Guile,
    indexSF2Sprites_Ken,
    indexSF2Sprites_ChunLi,
    indexSF2Sprites_Zangief,
    indexSF2Sprites_Dhalsim,
    indexSF2Sprites_Bison,
    indexSF2Sprites_Sagat,
    indexSF2Sprites_Balrog,
    indexSF2Sprites_Vega,
};

constexpr auto SF2HF_A_NUM_IMG_UNITS = ARRAYSIZE(SF2HF_A_IMG_UNITS);

const UINT16 SFA1_A_IMG_UNITS[] =
{
    indexCPS2_Ryu,              // 0x00,
    indexCPS2_Zangief,          // 0x01,
    indexCPS2_ChunLi,           // 0x1B,
    indexCPS2_Akuma,            // 0x1E,
    indexCPS2_Charlie,          // 0x21,
    indexCPS2_Sakura,           // 0x22,
    indexCPS2_Dan,              // 0x23,
    indexCPS2_Dhalsim,          // 0x25,
    indexCPS2_Bison,            // 0x26,
    indexCPS2_Ken,              // 0x27,
    indexCPS2_Adon,             // 0x3D,
    indexCPS2_Sodom,            // 0x3E,
    indexCPS2_Guy,              // 0x3F,
    indexCPS2_Birdie,           // 0x40,
    indexCPS2_Rose,             // 0x41,
    indexCPS2_Sagat,            // 0x42,
    indexCPS2_Rolento,          // 0x43,
    indexCPS2_Gen,              // 0x44,
    indexCPS2_SFA1_Portraits,   // 0x65
};

constexpr auto SFA1_A_NUM_IMG_UNITS = ARRAYSIZE(SFA1_A_IMG_UNITS);

const UINT16 SFA2_A_IMG_UNITS[] =
{
    indexCPS2_Ryu,              // 0x00,
    indexCPS2_Zangief,          // 0x01,
    indexCPS2_ChunLi,           // 0x1B,
    indexCPS2_Akuma,            // 0x1E,
    indexCPS2_Charlie,          // 0x21,
    indexCPS2_Sakura,           // 0x22,
    indexCPS2_Dan,              // 0x23,
    indexCPS2_Dhalsim,          // 0x25,
    indexCPS2_Bison,            // 0x26,
    indexCPS2_Ken,              // 0x27,
    indexCPS2_Adon,             // 0x3D,
    indexCPS2_Sodom,            // 0x3E,
    indexCPS2_Guy,              // 0x3F,
    indexCPS2_Birdie,           // 0x40,
    indexCPS2_Rose,             // 0x41,
    indexCPS2_Sagat,            // 0x42,
    indexCPS2_Rolento,          // 0x43,
    indexCPS2_Gen,              // 0x44,
    indexCPS2_SFA2Portraits,    // 0x58
};

constexpr auto SFA2_A_NUM_IMG_UNITS = ARRAYSIZE(SFA2_A_IMG_UNITS);

const UINT16 SFA3_A_IMG_UNITS[] =
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
    indexCPS2_SFA3_Portraits,
};

constexpr auto SFA3_A_NUM_IMG_UNITS = ARRAYSIZE(SFA3_A_IMG_UNITS);

const UINT16 XMVSF_A_IMG_UNITS[] =
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

const UINT16 MVC_A_IMG_UNITS[] =
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
    indexCPS2_Sentinel, // Sentinel
    0x51, // Anita
};

constexpr auto MVC_A_NUM_IMG_UNITS = ARRAYSIZE(MVC_A_IMG_UNITS);

const UINT16 MSH_A_IMG_UNITS[] =
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
    indexCPS2_Anita,
    indexCPS2_MSHAssets
};

constexpr auto MSH_A_NUM_IMG_UNITS = ARRAYSIZE(MSH_A_IMG_UNITS);

const UINT16 MSHVSF_A_IMG_UNITS[] =
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

const UINT16 COTA_A_IMG_UNITS[] =
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

const UINT16 GEMFIGHTER_A_IMG_UNITS[] =
{
    indexCPS2_SPF_Ryu,      // 0x59
    indexCPS2_SPF_Ken,      // 0x5a
    indexCPS2_SPF_ChunLi,   // 0x5b
    indexCPS2_SPF_Sakura,   // 0x5c
    indexCPS2_SPF_Morrigan, // 0x5d
    indexCPS2_SPF_HsienKo,  // 0x5e
    indexCPS2_SPF_Felicia,  // 0x5f
    indexCPS2_SPF_Tessa,    // 0x60
    indexCPS2_SPF_Ibuki,    // 0x61
    indexCPS2_SPF_Zangief,  // 0x62
    indexCPS2_SPF_Dan,      // 0x63
    indexCPS2_SPF_Akuma,    // 0x64
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
    indexJojos51Stages,
    indexJojos50HUDPortraits, // 0x1C
    indexJojos51GrayFly,
    indexJojos51TarotCards,
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

const UINT16 JOJOS_A_IMG_UNITS[] =
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
    indexJojos51GrayFly,
    indexJojos51TarotCards,
};

const int JOJOS_A_NUM_IMG_UNITS = ARRAYSIZE(JOJOS_A_IMG_UNITS);

enum SupportedGarou_A_PaletteListIndex
{
    indexGarouARockHoward,  // 0x01
    indexGarouATerryBogard, // 0x02
    indexGarouAKhushnood,   // 0x03
    indexGarouADong,        // 0x04
    indexGarouAJae,         // 0x05
    indexGarouAHotaru,      // 0x06
    indexGarouAGato,        // 0x07
    indexGarouAKevin,       // 0x08
    indexGarouAGrant,       // 0x09
    indexGarouABJennet,     // 0x0a
    indexGarouAHokutomaru,  // 0x0b
    indexGarouAFreeman,     // 0x0c
    indexGarouATizoc,       // 0x0d
    indexGarouAKain,        // 0x0e
    indexGarouAPortraits,   // 0x0f
    indexGarouABonus,       // 0x10
};

const UINT16 GAROU_A_IMG_UNITS[] =
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

enum SupportedMatriM_A_PaletteListIndex
{
    indexMatriMSprites_Anny,        // 0x00
    indexMatriMSprites_Buntaro,     // 0x01
    indexMatriMSprites_Chinnen,     // 0x02
    indexMatriMSprites_Clara,       // 0x03
    indexMatriMSprites_Elias,       // 0x04
    indexMatriMSprites_Hikaru,      // 0x05
    indexMatriMSprites_Jimmy,       // 0x06
    indexMatriMSprites_Jones,       // 0x07
    indexMatriMSprites_Kanji,       // 0x08
    indexMatriMSprites_Keith,       // 0x09
    indexMatriMSprites_Lynn,        // 0x0a
    indexMatriMSprites_Olof,        // 0x0b
    indexMatriMSprites_Poochy,      // 0x0c
    indexMatriMSprites_PrincessSissy, // 0x0d
    indexMatriMSprites_Reiji,       // 0x0e
    indexMatriMSprites_Saizo,       // 0x0f
    indexMatriMSprites_Shintaro,    // 0x10
    indexMatriMSprites_Tane,        // 0x11
    indexMatriMSprites_Ume,         // 0x12
    indexMatriMSprites_White,       // 0x13
};

const UINT16 MATRIM_A_IMG_UNITS[] =
{
    indexMatriMSprites_Anny,
    indexMatriMSprites_Buntaro,
    indexMatriMSprites_Chinnen,
    indexMatriMSprites_Clara,
    indexMatriMSprites_Elias,
    indexMatriMSprites_Hikaru,
    indexMatriMSprites_Jimmy,
    indexMatriMSprites_Jones,
    indexMatriMSprites_Kanji,
    indexMatriMSprites_Keith,
    indexMatriMSprites_Lynn,
    indexMatriMSprites_Olof,
    indexMatriMSprites_Poochy,
    indexMatriMSprites_PrincessSissy,
    indexMatriMSprites_Reiji,
    indexMatriMSprites_Saizo,
    indexMatriMSprites_Shintaro,
    indexMatriMSprites_Tane,
    indexMatriMSprites_Ume,
    indexMatriMSprites_White,
};

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

    indexKOFSprites_02Bao, // 38
    indexKOFSprites_02Foxy, // 39
    indexKOFSprites_02Geese, // 3a
    indexKOFSprites_02Hinako, // 3b
    indexKOFSprites_02Igniz, // 3c
    indexKOFSprites_02Jhun, // 3d
    indexKOFSprites_02Kasumi, // 3e
    indexKOFSprites_02Krizalid, // 3f
    indexKOFSprites_02OZero, // 40
    indexKOFSprites_02NGeese, // unused currently

    indexKOFSprites_99Krizalid, // 42
    indexKOFSprites_00Bao, // 43
    indexKOFSprites_00Kasumi, // 44
    indexKOFSprites_00Robert, // 45
    indexKOFSprites_00ZeroClone, // 46
    indexKOFSprites_01Xiangfei, // 47
    indexKOFSprites_02Andy, // 48
    indexKOFSprites_02Chin, // 49 
    indexKOFSprites_02Kusanagi, // 4a
    indexKOFSprites_02Robert, // 4b
    indexKOFSprites_02Yuri, // 4c
    
    indexKOFSprites_02K9999, // 4d

    indexKOFSprites_02UMExtras, // 4e - portraits and such

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
    indexSVCSprites_PrincessAthena, // 5e
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

    indexKOFSprites_02Extras,   // 75
    indexKOFSprites_98OrderSelect, // 76
    indexKOFSprites_98Lifebar,  // 77
    indexKOFSprites_98WinPortrait, // 78

    indexKOFSprites_02UM_Andy,    // 0x79
    indexKOFSprites_02UM_Angel,    // 0x7A
    indexKOFSprites_02UM_Athena,    // 0x7B
    indexKOFSprites_02UM_Bao,    // 0x7C
    indexKOFSprites_02UM_Benimaru,    // 0x7D
    indexKOFSprites_02UM_Billy,    // 0x7E
    indexKOFSprites_02UM_BlueMary,    // 0x7F
    indexKOFSprites_02UM_Chang,    // 0x80
    indexKOFSprites_02UM_Chin,    // 0x81
    indexKOFSprites_02UM_Choi,    // 0x82
    indexKOFSprites_02UM_Chris,    // 0x83
    indexKOFSprites_02UM_ChrisOChi,    // 0x84
    indexKOFSprites_02UM_Clark,    // 0x85
    indexKOFSprites_02UM_CloneZero,    // 0x86
    indexKOFSprites_02UM_Daimon,    // 0x87
    indexKOFSprites_02UM_Foxy,    // 0x88
    indexKOFSprites_02UM_Geese,    // 0x89
    indexKOFSprites_02UM_GeeseNM,    // 0x8A
    indexKOFSprites_02UM_Goenitz,    // 0x8B
    indexKOFSprites_02UM_Heidern,    // 0x8C
    indexKOFSprites_02UM_Hinako,    // 0x8D
    indexKOFSprites_02UM_Igniz,    // 0x8E
    indexKOFSprites_02UM_Iori,    // 0x8F
    indexKOFSprites_02UM_Jhun,    // 0x90
    indexKOFSprites_02UM_Joe,    // 0x91
    indexKOFSprites_02UM_K,    // 0x92
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
    indexKOFSprites_02UM_OmegaRugal,    // 0xA6
    indexKOFSprites_02UM_Ralf,      // 0xA7
    indexKOFSprites_02UM_Ramon,     // 0xa8
    indexKOFSprites_02UM_Robert,    // 0xA9
    indexKOFSprites_02UM_RobertEX,  // 0xAa
    indexKOFSprites_02UM_Ryo,       // 0xAb
    indexKOFSprites_02UM_Seth,      // 0xAc
    indexKOFSprites_02UM_Shermie,   // 0xAd
    indexKOFSprites_02UM_ShermieOChi,    // 0xAe
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
    indexKOFSprites_02UM_YashiroOChi,    // 0xB9
    indexKOFSprites_02UM_Yuri,      // 0xBa
    indexKOFSprites_02UM_ZeroOG,    // 0xBb

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
    indexKOF03Sprites_Goro,         // 0xef
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

    indexKOFSprites_Last,
};

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

    indexSamuraiShodownSprites_Last,
};

const UINT16 KOF98_A_IMG_UNITS[] =
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

    indexKOFSprites_98OrderSelect,
    indexKOFSprites_98Lifebar,      // 77
    indexKOFSprites_98WinPortrait,  // 78
};

const int KOF98_A_NUM_IMG_UNITS = ARRAYSIZE(KOF98_A_IMG_UNITS);

enum SupportedKOF02_A_PaletteListIndex
{
    indexKOF02_A_Andy,
    indexKOF02_A_Angel,
    indexKOF02_A_Athena,
    indexKOF02_A_Benimaru,
    indexKOF02_A_Billy,
    indexKOF02_A_BlueMary,
    indexKOF02_A_Chang,
    indexKOF02_A_Chin,
    indexKOF02_A_Choi,
    indexKOF02_A_Chris,
    indexKOF02_A_Clark,
    indexKOF02_A_Daimon,
    indexKOF02_A_Iori,
    indexKOF02_A_Joe,
    indexKOF02_A_K,
    indexKOF02_A_K9999,
    indexKOF02_A_Kensou,
    indexKOF02_A_Kim,
    indexKOF02_A_Kula,
    indexKOF02_A_Kusanagi,
    indexKOF02_A_Kyo,
    indexKOF02_A_Leona,
    indexKOF02_A_Mai,
    indexKOF02_A_Mature,
    indexKOF02_A_Maxima,
    indexKOF02_A_MayLee,
    indexKOF02_A_Ralf,
    indexKOF02_A_Ramon,
    indexKOF02_A_Robert,
    indexKOF02_A_Ryo,
    indexKOF02_A_Seth,
    indexKOF02_A_Shermie,
    indexKOF02_A_Takuma,
    indexKOF02_A_Terry,
    indexKOF02_A_Vanessa,
    indexKOF02_A_Vice,
    indexKOF02_A_Whip,
    indexKOF02_A_Yamazaki,
    indexKOF02_A_Yashiro,
    indexKOF02_A_Yuri,

    indexKOF02_A_OChris,
    indexKOF02_A_OShermie,
    indexKOF02_A_OYashiro,

    indexKOF02_A_OmegaRugal,

    indexKOF02_A_Last
};

const UINT16 KOF02_A_IMG_UNITS[] =
{
    indexKOFSprites_02UM_Andy,    // 0x79
    indexKOFSprites_02UM_Angel,    // 0x7A
    indexKOFSprites_02UM_Athena,    // 0x7B
    indexKOFSprites_02UM_Bao,    // 0x7C
    indexKOFSprites_02UM_Benimaru,    // 0x7D
    indexKOFSprites_02UM_Billy,    // 0x7E
    indexKOFSprites_02UM_BlueMary,    // 0x7F
    indexKOFSprites_02UM_Chang,    // 0x80
    indexKOFSprites_02UM_Chin,    // 0x81
    indexKOFSprites_02UM_Choi,    // 0x82
    indexKOFSprites_02UM_Chris,    // 0x83
    indexKOFSprites_02UM_ChrisOChi,    // 0x84
    indexKOFSprites_02UM_Clark,    // 0x85
    indexKOFSprites_02UM_CloneZero,    // 0x86
    indexKOFSprites_02UM_Daimon,    // 0x87
    indexKOFSprites_02UM_Foxy,    // 0x88
    indexKOFSprites_02UM_Geese,    // 0x89
    indexKOFSprites_02UM_GeeseNM,    // 0x8A
    indexKOFSprites_02UM_Goenitz,    // 0x8B
    indexKOFSprites_02UM_Heidern,    // 0x8C
    indexKOFSprites_02UM_Hinako,    // 0x8D
    indexKOFSprites_02UM_Igniz,    // 0x8E
    indexKOFSprites_02UM_Iori,    // 0x8F
    indexKOFSprites_02UM_Jhun,    // 0x90
    indexKOFSprites_02UM_Joe,    // 0x91
    indexKOFSprites_02UM_K,    // 0x92
    indexKOFSprites_02UM_Kasumi,    // 0x93
    indexKOFSprites_02UM_Kensou,    // 0x94
    indexKOFSprites_02UM_KensouEX,    // 0x95
    indexKOFSprites_02UM_Kim,    // 0x96
    indexKOFSprites_02UM_King,    // 0x97
    indexKOFSprites_02UM_Krizalid,    // 0x98
    indexKOFSprites_02UM_Kula,    // 0x99
    indexKOFSprites_02UM_Kusanagi,    // 0x9A
    indexKOFSprites_02UM_KyoKusa,    // 0x9B
    indexKOFSprites_02UM_Kyo1,    // 0x9C
    indexKOFSprites_02UM_Kyo2,    // 0x9D
    indexKOFSprites_02UM_Leona,    // 0x9E
    indexKOFSprites_02UM_Lin,    // 0x9F
    indexKOFSprites_02UM_Mai,    // 0xA0
    indexKOFSprites_02UM_Mature,    // 0xA1
    indexKOFSprites_02UM_Maxima,    // 0xA2
    indexKOFSprites_02UM_MayLee,    // 0xA3
    indexKOFSprites_02UM_Nameless,    // 0xA4
    indexKOFSprites_02UM_OmegaRugal,    // 0xA5
    indexKOFSprites_02UM_Ralf,    // 0xA6
    indexKOFSprites_02UM_Ramon,    // 0xA7
    indexKOFSprites_02UM_Robert,    // 0xA8
    indexKOFSprites_02UM_RobertEX,    // 0xA9
    indexKOFSprites_02UM_Ryo,    // 0xAA
    indexKOFSprites_02UM_Seth,    // 0xAB
    indexKOFSprites_02UM_Shermie,    // 0xAC
    indexKOFSprites_02UM_ShermieOChi,    // 0xAD
    indexKOFSprites_02UM_Shingo,    // 0xAE
    indexKOFSprites_02UM_Takuma,    // 0xAF
    indexKOFSprites_02UM_TakumaEX,    // 0xB0
    indexKOFSprites_02UM_Terry,    // 0xB1
    indexKOFSprites_02UM_Vanessa,    // 0xB2
    indexKOFSprites_02UM_Vice,    // 0xB3
    indexKOFSprites_02UM_Whip,    // 0xB4
    indexKOFSprites_02UM_Xiangfei,    // 0xB5
    indexKOFSprites_02UM_Yamazaki,    // 0xB6
    indexKOFSprites_02UM_Yashiro,    // 0xB7
    indexKOFSprites_02UM_YashiroOChi,    // 0xB8
    indexKOFSprites_02UM_Yuri,    // 0xB9
    indexKOFSprites_02UM_ZeroOG,    // 0xBA

    indexKOFSprites_02UM_K9999,

    indexKOFSprites_02Extras,
};

const int KOF02_A_NUM_IMG_UNITS = ARRAYSIZE(KOF02_A_IMG_UNITS);

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

    indexKOF02UM_S_Last
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
    indexKOFSprites_01Xiangfei,
    indexKOFSprites_02Andy,
    indexKOFSprites_02Chin,
    indexKOFSprites_02Kusanagi,
    indexKOFSprites_02Robert,
    indexKOFSprites_02Yuri,

    indexKOFSprites_02UM_Andy,    // 0x79
    indexKOFSprites_02UM_Angel,    // 0x7A
    indexKOFSprites_02UM_Athena,    // 0x7B
    indexKOFSprites_02UM_Bao,    // 0x7C
    indexKOFSprites_02UM_Benimaru,    // 0x7D
    indexKOFSprites_02UM_Billy,    // 0x7E
    indexKOFSprites_02UM_BlueMary,    // 0x7F
    indexKOFSprites_02UM_Chang,    // 0x80
    indexKOFSprites_02UM_Chin,    // 0x81
    indexKOFSprites_02UM_Choi,    // 0x82
    indexKOFSprites_02UM_Chris,    // 0x83
    indexKOFSprites_02UM_ChrisOChi,    // 0x84
    indexKOFSprites_02UM_Clark,    // 0x85
    indexKOFSprites_02UM_CloneZero,    // 0x86
    indexKOFSprites_02UM_Daimon,    // 0x87
    indexKOFSprites_02UM_Foxy,    // 0x88
    indexKOFSprites_02UM_Geese,    // 0x89
    indexKOFSprites_02UM_GeeseNM,    // 0x8A
    indexKOFSprites_02UM_Goenitz,    // 0x8B
    indexKOFSprites_02UM_Heidern,    // 0x8C
    indexKOFSprites_02UM_Hinako,    // 0x8D
    indexKOFSprites_02UM_Igniz,    // 0x8E
    indexKOFSprites_02UM_Iori,    // 0x8F
    indexKOFSprites_02UM_Jhun,    // 0x90
    indexKOFSprites_02UM_Joe,    // 0x91
    indexKOFSprites_02UM_K,    // 0x92
    indexKOFSprites_02UM_Kasumi,    // 0x93
    indexKOFSprites_02UM_Kensou,    // 0x94
    indexKOFSprites_02UM_KensouEX,    // 0x95
    indexKOFSprites_02UM_Kim,    // 0x96
    indexKOFSprites_02UM_King,    // 0x97
    indexKOFSprites_02UM_Krizalid,    // 0x98
    indexKOFSprites_02UM_Kula,    // 0x99
    indexKOFSprites_02UM_Kusanagi,    // 0x9A
    indexKOFSprites_02UM_KyoKusa,    // 0x9B
    indexKOFSprites_02UM_Kyo1,    // 0x9C
    indexKOFSprites_02UM_Kyo2,    // 0x9D
    indexKOFSprites_02UM_Leona,    // 0x9E
    indexKOFSprites_02UM_Lin,    // 0x9F
    indexKOFSprites_02UM_Mai,    // 0xA0
    indexKOFSprites_02UM_Mature,    // 0xA1
    indexKOFSprites_02UM_Maxima,    // 0xA2
    indexKOFSprites_02UM_MayLee,    // 0xA3
    indexKOFSprites_02UM_Nameless,    // 0xA4
    indexKOFSprites_02UM_OmegaRugal,    // 0xA5
    indexKOFSprites_02UM_Ralf,    // 0xA6
    indexKOFSprites_02UM_Ramon,    // 0xA7
    indexKOFSprites_02UM_Robert,    // 0xA8
    indexKOFSprites_02UM_RobertEX,    // 0xA9
    indexKOFSprites_02UM_Ryo,    // 0xAA
    indexKOFSprites_02UM_Seth,    // 0xAB
    indexKOFSprites_02UM_Shermie,    // 0xAC
    indexKOFSprites_02UM_ShermieOChi,    // 0xAD
    indexKOFSprites_02UM_Shingo,    // 0xAE
    indexKOFSprites_02UM_Takuma,    // 0xAF
    indexKOFSprites_02UM_TakumaEX,    // 0xB0
    indexKOFSprites_02UM_Terry,    // 0xB1
    indexKOFSprites_02UM_Vanessa,    // 0xB2
    indexKOFSprites_02UM_Vice,    // 0xB3
    indexKOFSprites_02UM_Whip,    // 0xB4
    indexKOFSprites_02UM_Xiangfei,    // 0xB5
    indexKOFSprites_02UM_Yamazaki,    // 0xB6
    indexKOFSprites_02UM_Yashiro,    // 0xB7
    indexKOFSprites_02UM_YashiroOChi,    // 0xB8
    indexKOFSprites_02UM_Yuri,    // 0xB9
    indexKOFSprites_02UM_ZeroOG,    // 0xBA

    indexKOFSprites_02UMExtras,
};

const int KOF02UM_S_NUM_IMG_UNITS = ARRAYSIZE(KOF02UM_S_IMG_UNITS);

const UINT16 KOF03_A_IMG_UNITS[] =
{
    indexKOFSprites_02UM_Clark,
    indexKOFSprites_02UM_Chang,     // 0x80
    indexKOFSprites_02UM_Daimon,    // 0x87
    indexKOFSprites_02UM_Iori,
    indexKOFSprites_02UM_K,         // 0x92
    indexKOFSprites_02UM_Kim,       // 0x96
    indexKOFSprites_02UM_Leona,
    indexKOFSprites_02UM_Maxima,    // 0xA2
    indexKOFSprites_02UM_Ralf,
    indexKOFSprites_02UM_Whip,

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
    indexKOF03Sprites_Goro,         // 0xef
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
};

const int KOF03_A_NUM_IMG_UNITS = ARRAYSIZE(KOF03_A_IMG_UNITS);

const UINT16 KOFXI_A_IMG_UNITS[] =
{
    indexKOFSprites_02UM_Iori,
    indexKOFSprites_02UM_K,         // 0x92
    indexKOFSprites_02UM_King,      // 0x97
    indexKOFSprites_02UM_Kula,      // 0x99
    indexKOFSprites_02UM_Maxima,    // 0xA2
    indexKOFSprites_02UM_Ramon,     // 0xA7
    indexKOFSprites_02UM_Ryo,       // 0xAA
    indexKOFSprites_02UM_Shingo,    // 0xAE
    indexKOFSprites_02UM_Vanessa,   // 0xB2

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
};

const UINT16 NGBC_A_IMG_UNITS[] =
{
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
};

enum SupportedBreakersSprites
{
    indexBreakersSprites_AlsionIII,
    indexBreakersSprites_BaiHu,
    indexBreakersSprites_Condor,
    indexBreakersSprites_DaoLong,
    indexBreakersSprites_Maherl,
    indexBreakersSprites_Pielle,
    indexBreakersSprites_Rila,
    indexBreakersSprites_Saizo,
    indexBreakersSprites_Sho,
    indexBreakersSprites_Tia,
};

const UINT16 BREAKERS_A_IMG_UNITS[] =
{
    indexBreakersSprites_AlsionIII,
    indexBreakersSprites_BaiHu,
    indexBreakersSprites_Condor,
    indexBreakersSprites_DaoLong,
    indexBreakersSprites_Maherl,
    indexBreakersSprites_Pielle,
    indexBreakersSprites_Rila,
    indexBreakersSprites_Saizo,
    indexBreakersSprites_Sho,
    indexBreakersSprites_Tia,
};

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

const UINT16 CVS2_A_IMG_UNITS[] =
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

enum SupportedSVC_A_PaletteListIndex
{
    indexSVC_A_Kyo,
    indexSVC_A_Iori,
    indexSVC_A_Ryo,
    indexSVC_A_Terry,
    indexSVC_A_Mai,
    indexSVC_A_Kasumi,
    indexSVC_A_Kim,
    indexSVC_A_MrKarate,
    indexSVC_A_Choi,
    indexSVC_A_Earthquake,
    indexSVC_A_Genjuro,
    indexSVC_A_Shiki,
    indexSVC_A_GeeseHoward,
    indexSVC_A_MarsPeople,
    indexSVC_A_Goenitz,

    indexSVC_A_OrochiIori,
    indexSVC_A_SeriousMrKarate,
    indexSVC_A_PrincessAthena,

    indexSVC_A_Ryu,
    indexSVC_A_Ken,
    indexSVC_A_ChunLi,
    indexSVC_A_Guile,
    indexSVC_A_Dhalsim,
    indexSVC_A_Boxer,
    indexSVC_A_Claw,
    indexSVC_A_Sagat,
    indexSVC_A_Dictator,
    indexSVC_A_Akuma,
    indexSVC_A_Hugo,
    indexSVC_A_Tessa,
    indexSVC_A_Zero,
    indexSVC_A_Demitri,
    indexSVC_A_Dan,

    indexSVC_A_ViolentKen,
    indexSVC_A_ShinAkuma,
    indexSVC_A_RedArremer,

    indexSVC_A_Last,
};

const UINT16 SVCPLUSA_A_IMG_UNITS[] =
{
    indexKOFSprites_98Kyo,
    indexKOFSprites_98Iori,
    indexKOFSprites_98Ryo,
    indexKOFSprites_98Terry,
    indexKOFSprites_98Mai,
    indexKOFSprites_00Kasumi,
    indexKOFSprites_98Kim,
    indexKOFSprites_98Choi,
    indexKOFSprites_02Geese,
    indexKOFSprites_02Goenitz,
    indexKOFSprites_98Iori,

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
    indexSVCSprites_PrincessAthena, // 5e
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
};

enum SupportedSamSho5SP_A_PaletteListIndex
{
    indexSamSho5_A_Amakusa = 0,
    indexSamSho5_A_Basara,
    indexSamSho5_A_Charlotte,
    indexSamSho5_A_Enja,
    indexSamSho5_A_Gaira,
    indexSamSho5_A_Galford,
    indexSamSho5_A_Gaoh,
    indexSamSho5_A_Genjuro,
    indexSamSho5_A_Hanzo,
    indexSamSho5_A_Haohmaru,
    indexSamSho5_A_Jubei,
    indexSamSho5_A_Kazuki,
    indexSamSho5_A_Kusaregedo,
    indexSamSho5_A_Kyoshiro,
    indexSamSho5_A_Mina,
    indexSamSho5_A_Mizuki,
    indexSamSho5_A_Nakoruru,
    indexSamSho5_A_Rasetsumaru,
    indexSamSho5_A_Rera,
    indexSamSho5_A_Rimururu,
    indexSamSho5_A_Shizumaru,
    indexSamSho5_A_Sogetsu,
    indexSamSho5_A_Suija,
    indexSamSho5_A_TamTam,
    indexSamSho5_A_Ukyo,
    indexSamSho5_A_Yoshitora,
    indexSamSho5_A_Yunfei,
    indexSamSho5_A_Zankuro,
    indexSamSho5_A_Bonus,

    indexSamSho5_A_Last,
};

const UINT16 SAMSHO3_A_IMG_UNITS[] =
{
    indexSamSho5Sprites_Amakusa,
    indexSamSho5Sprites_Basara,
    indexSamSho5Sprites_Gaira,
    indexSamSho5Sprites_Galford,
    indexSamSho5Sprites_Genjuro,
    indexSamSho5Sprites_Hanzo,
    indexSamSho5Sprites_Haohmaru,
    indexSamSho5Sprites_Kyoshiro,
    indexSamSho5Sprites_Nakoruru,
    indexSamSho5Sprites_Rera, // not in the game: just want the shikuru sprite for nakoruru Bust form
    indexSamSho5Sprites_Rimururu,
    indexSamSho5Sprites_Shizumaru,
    indexSamSho5Sprites_Ukyo,
    indexSamSho5Sprites_Zankuro,
};

const UINT16 SAMSHO5SP_A_IMG_UNITS[] =
{
    indexSamSho5Sprites_Amakusa,
    indexSamSho5Sprites_Basara,
    indexSamSho5Sprites_Charlotte,
    indexSamSho5Sprites_Enja,
    indexSamSho5Sprites_Gaira,
    indexSamSho5Sprites_Galford,
    indexSamSho5Sprites_Gaoh,
    indexSamSho5Sprites_Genjuro,
    indexSamSho5Sprites_Hanzo,
    indexSamSho5Sprites_Haohmaru,
    indexSamSho5Sprites_Jubei,
    indexSamSho5Sprites_Kazuki,
    indexSamSho5Sprites_Kusaregedo,
    indexSamSho5Sprites_Kyoshiro,
    indexSamSho5Sprites_Mina,
    indexSamSho5Sprites_Mizuki,
    indexSamSho5Sprites_Nakoruru,
    indexSamSho5Sprites_Rasetsumaru,
    indexSamSho5Sprites_Rera,
    indexSamSho5Sprites_Rimururu,
    indexSamSho5Sprites_Shizumaru,
    indexSamSho5Sprites_Sogetsu,
    indexSamSho5Sprites_Suija,
    indexSamSho5Sprites_TamTam,
    indexSamSho5Sprites_Ukyo,
    indexSamSho5Sprites_Yoshitora,
    indexSamSho5Sprites_Yunfei,
    indexSamSho5Sprites_Zankuro,
    indexSamSho5Sprites_Portrait,
    indexSamSho5Sprites_Bonus
};

enum SupportedKarnovsR_A_PaletteListIndex
{
    indexKarnovsRSprites_Clown,
    indexKarnovsRSprites_Felin,
    indexKarnovsRSprites_Jean,
    indexKarnovsRSprites_Karnov,
    indexKarnovsRSprites_Lee,
    indexKarnovsRSprites_Marstorius,
    indexKarnovsRSprites_Matlok,
    indexKarnovsRSprites_Mizoguchi,
    indexKarnovsRSprites_Ray,
    indexKarnovsRSprites_Ryoko,
    indexKarnovsRSprites_Samchay,
    indexKarnovsRSprites_Yungmie,
    indexKarnovsRSprites_Zazie,
};

const UINT16 KARNOVSR_A_IMG_UNITS[] =
{
    indexKarnovsRSprites_Clown,
    indexKarnovsRSprites_Felin,
    indexKarnovsRSprites_Jean,
    indexKarnovsRSprites_Karnov,
    indexKarnovsRSprites_Lee,
    indexKarnovsRSprites_Marstorius,
    indexKarnovsRSprites_Matlok,
    indexKarnovsRSprites_Mizoguchi,
    indexKarnovsRSprites_Ray,
    indexKarnovsRSprites_Ryoko,
    indexKarnovsRSprites_Samchay,
    indexKarnovsRSprites_Yungmie,
    indexKarnovsRSprites_Zazie,
};

enum SupportedRedEarth_A_PaletteListIndex
{
    indexRedEarthSprites_Blade,
    indexRedEarthSprites_GiGi,
    indexRedEarthSprites_Hauzer,
    indexRedEarthSprites_Hydron,
    indexRedEarthSprites_Kenji,
    indexRedEarthSprites_Kongou,
    indexRedEarthSprites_Lavia,
    indexRedEarthSprites_Leo,
    indexRedEarthSprites_MaiLing,
    indexRedEarthSprites_Ravange,
    indexRedEarthSprites_Scion,
    indexRedEarthSprites_Tessa,
    indexRedEarthSprites_Last
};

const UINT16 REDEARTH_A_IMG_UNITS[] =
{
    
    indexRedEarthSprites_Blade,
    indexRedEarthSprites_GiGi,
    indexRedEarthSprites_Hauzer,
    indexRedEarthSprites_Hydron,
    indexRedEarthSprites_Kenji,
    indexRedEarthSprites_Kongou,
    indexRedEarthSprites_Lavia,
    indexRedEarthSprites_Leo,
    indexRedEarthSprites_MaiLing,
    indexRedEarthSprites_Ravange,
    indexRedEarthSprites_Scion,
    indexRedEarthSprites_Tessa,
};

constexpr auto REDEARTH_A_NUM_IMG_UNITS = ARRAYSIZE(REDEARTH_A_IMG_UNITS);

const UINT16 VHUNT2_A_IMG_UNITS[] =
{
    // These are the playable characters
    indexCPS2_Anakaris,
    indexCPS2_Vamp_Bishamon,  // 0x68
    indexCPS2_Vamp_Demitri,   // 0x6A
    indexCPS2_Vamp_Donovan,   // 0x6B
    indexCPS2_Felicia,
    indexCPS2_Vamp_LeiLei,    // 0x6E aka Hsien-Ko
    indexCPS2_Vamp_Phobos,    // 0x71 aka Huitzil
    indexCPS2_Vamp_Gallon,    // 0x6C aka Jon Talbain
    indexCPS2_Vamp_Zabel,     // 0x77  aka Lord Raptor
    indexCPS2_Morrigan,
    indexCPS2_Vamp_Pyron,     // 0x72
    indexCPS2_Vamp_Aulbath,   // 0x67 aka Rikuo
    indexCPS2_Vamp_Sasquatch, // 0x74
    indexCPS2_Vamp_Victor,    // 0x76

    // these just have data in the game
    indexCPS2_Anita,
    indexCPS2_BBHood,
    indexCPS2_Vamp_Dee,       // 0x69
    indexCPS2_Vamp_Jedah,     // 0x6D
    indexCPS2_Vamp_Lilith,    // 0x6F
    indexCPS2_Vamp_Marionette, // 0x70
    indexCPS2_Vamp_QBee,      // 0x73
    indexCPS2_Vamp_Shadow,    // 0x75
    indexCPS2_VSAV1_MidnightBliss,
    indexCPS2_Vamp_DarkGallon,

};

constexpr auto VHUNT2_A_NUM_IMG_UNITS = ARRAYSIZE(VHUNT2_A_IMG_UNITS);

const UINT16 VSAV_A_IMG_UNITS[] =
{
    indexCPS2_Anakaris,
    indexCPS2_BBHood,
    indexCPS2_Felicia,
    indexCPS2_Morrigan,
    indexCPS2_Vamp_Aulbath,   // 0x67
    indexCPS2_Vamp_Bishamon,  // 0x68
    indexCPS2_Vamp_Dee,       // 0x69
    indexCPS2_Vamp_Demitri,   // 0x6A
    //indexCPS2_Vamp_Donovan,   // 0x6B   console-only
    indexCPS2_Vamp_Gallon,    // 0x6C
    indexCPS2_Vamp_Jedah,     // 0x6D
    indexCPS2_Vamp_LeiLei,    // 0x6E
    indexCPS2_Vamp_Lilith,    // 0x6F
    //indexCPS2_Vamp_Marionette, // 0x70  console-only
    //indexCPS2_Vamp_Phobos,    // 0x71   console-only
    //indexCPS2_Vamp_Pyron,     // 0x72   console-only
    indexCPS2_Vamp_QBee,      // 0x73
    indexCPS2_Vamp_Sasquatch, // 0x74
    indexCPS2_Vamp_Shadow,    // 0x75
    indexCPS2_Vamp_Victor,    // 0x76
    indexCPS2_Vamp_Zabel,     // 0x77

    indexCPS2_VSAV1_WinPortraits, // 0x78
    indexCPS2_VSAV1_MidnightBliss, // 0x79
    indexCPS2_Vamp_DarkGallon,
    indexCPS2_Anita,
    indexCPS2_VSAV1_Bonus, // 0x7c
};

constexpr auto VSAV_A_NUM_IMG_UNITS = ARRAYSIZE(VSAV_A_IMG_UNITS);

const UINT16 VSAV2_A_IMG_UNITS[] =
{
    indexCPS2_Anakaris,
    indexCPS2_Anita,
    indexCPS2_BBHood,
    indexCPS2_Felicia,
    indexCPS2_Morrigan,
    indexCPS2_Vamp_Aulbath,   // 0x67
    indexCPS2_Vamp_Bishamon,  // 0x68
    indexCPS2_Vamp_Dee,       // 0x69
    indexCPS2_Vamp_Demitri,   // 0x6A
    indexCPS2_Vamp_Donovan,   // 0x6B
    indexCPS2_Vamp_Gallon,    // 0x6C
    indexCPS2_Vamp_Jedah,     // 0x6D
    indexCPS2_Vamp_LeiLei,    // 0x6E
    indexCPS2_Vamp_Lilith,    // 0x6F
    indexCPS2_Vamp_Marionette, // 0x70
    indexCPS2_Vamp_Phobos,    // 0x71
    indexCPS2_Vamp_Pyron,     // 0x72
    indexCPS2_Vamp_QBee,      // 0x73
    indexCPS2_Vamp_Sasquatch, // 0x74
    indexCPS2_Vamp_Shadow,    // 0x75
    indexCPS2_Vamp_Victor,    // 0x76
    indexCPS2_Vamp_Zabel,     // 0x77
    indexCPS2_VSAV1_MidnightBliss,
    indexCPS2_Vamp_DarkGallon,
};

constexpr auto VSAV2_A_NUM_IMG_UNITS = ARRAYSIZE(VSAV2_A_IMG_UNITS);

const UINT16 RBFFS_A_IMG_UNITS[] =
{
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
};

const int RBFFS_A_NUM_IMG_UNITS = ARRAYSIZE(RBFFS_A_IMG_UNITS);

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

const UINT16 WAKUWAKU7_A_IMG_UNITS[] =
{
    indexWakuWaku7Sprites_Arina,
    indexWakuWaku7Sprites_DandyJ,
    indexWakuWaku7Sprites_BonusKun,
    indexWakuWaku7Sprites_Fernandeath,
    indexWakuWaku7Sprites_Mauru,
    indexWakuWaku7Sprites_Politank,
    indexWakuWaku7Sprites_Rai,
    indexWakuWaku7Sprites_Slash,
    indexWakuWaku7Sprites_Tesse,
};

constexpr auto WAKUWAKU7_A_NUM_IMG_UNITS = ARRAYSIZE(WAKUWAKU7_A_IMG_UNITS);

enum SupportedWindjammers_A_PaletteListIndex
{
    indexWindjammersSprites_Germany,
    indexWindjammersSprites_Italy,
    indexWindjammersSprites_Japan,
    indexWindjammersSprites_Spain,
    indexWindjammersSprites_UK_Korea,
    indexWindjammersSprites_USA,
    indexWindjammersSprites_Last,
};

const UINT16 WINDJAMMERS_A_IMG_UNITS[] =
{
    indexWindjammersSprites_Germany,
    indexWindjammersSprites_Italy,
    indexWindjammersSprites_Japan,
    indexWindjammersSprites_Spain,
    indexWindjammersSprites_UK_Korea,
    indexWindjammersSprites_USA,
};

constexpr auto WINDJAMMERS_A_NUM_IMG_UNITS = ARRAYSIZE(WINDJAMMERS_A_IMG_UNITS);

enum eIMGDat_Sections
{
    IMGDAT_SECTION_BREAKREV = 0,
    IMGDAT_SECTION_CVS2,    // CVS2: has both Capcom and SNK images
    IMGDAT_SECTION_GAROU,   // Garou
    IMGDAT_SECTION_JOJOS,
    IMGDAT_SECTION_KARNOVSR,
    IMGDAT_SECTION_KOF,     // KOF98 + KOF02UM
    IMGDAT_SECTION_MATRIM,  // Matrimelee
    IMGDAT_SECTION_CPS2,    // Used for MVC2, MVC, SFA3, XMVSF, MSH, MSHVSF, etc CPS2 games
    IMGDAT_SECTION_REDEARTH,
    IMGDAT_SECTION_SAMSHO,  // Samurai Shodown games
    IMGDAT_SECTION_3S,      // Used for SFIII3
    IMGDAT_SECTION_ST,      // Used for ST
    IMGDAT_SECTION_WAKUWAKU7,
    IMGDAT_SECTION_WINDJAMMERS,
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
    indexCVS2Sprites_Last,
    GAROU_A_NUM_IMG_UNITS,
    JOJOS_A_NUM_IMG_UNITS,
    indexKOFSprites_Last,
    MVC2_D_NUM_IMG_UNITS + MVC_A_UNIQUE_IMG_UNITS + SFA3_A_NUM_IMG_UNITS + XMVSF_A_UNIQUE_IMG_UNITS + MSH_A_UNIQUE_IMG_UNITS + MSHVSF_A_UNIQUE_IMG_UNITS,
    indexSamuraiShodownSprites_Last,
    SFIII3_A_NUM_IMG_UNITS,
    SSF2T_A_NUM_IMG_UNITS,
    WINDJAMMERS_A_NUM_IMG_UNITS,
};

const stPairedPaletteInfo pairUnhandled =     { 0, 0, 0 };
const stPairedPaletteInfo pairHandledInCode = { 0, 0, 0 };
const stPairedPaletteInfo pairFullyLinkedNode = { 0, 0, 0 };

const stPairedPaletteInfo pairNext = { 1, 0, 0 };
const stPairedPaletteInfo pairNextNext = { 2, 0, 0 };
const stPairedPaletteInfo pairNext3 = { 3, 0, 0 };
const stPairedPaletteInfo pairNext4 = { 4, 0, 0 };
const stPairedPaletteInfo pairNext6 = { 6, 0, 0 };
const stPairedPaletteInfo pairNext10 = { 10, 0, 0 };
const stPairedPaletteInfo pairPrevious = { -1, 0, 0 };

const stPairedPaletteInfo pairNextAndNext = { 1, 0, 0 }; // triple display... requires special handling in code

// Vs Series
const stPairedPaletteInfo pairCapComNinjas =  { 1, 28, 4 };
const stPairedPaletteInfo pairMVCDevilotNormal = { 1, 0, 0 }; // Don't use pairNext here: we manually tweak z-order
const stPairedPaletteInfo pairMVCDevilotBurnt = { 1, 7, 3 };
const stPairedPaletteInfo pairMVCLou = { 1, -80, -15 };
const stPairedPaletteInfo pairOnslaught = { 1, -24, 86 };
//const stPairedPaletteInfo pairTronBody = { 1, -4, -50 };
const stPairedPaletteInfo pairBonerineClaws = { 1, 25, 6 };

// Please note that the palette sort order in PalMod differs for MM in MvC1 and MvC2
const stPairedPaletteInfo pairMVC1RushDrill = { 9, 0, 0 };
const stPairedPaletteInfo pairMVC2RushDrill = { 30, 0, 0 };
const stPairedPaletteInfo pairHyperMegaman =  { 9, 31, 12 };

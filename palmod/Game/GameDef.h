#pragma once

//A = Arcade
//X = XBox
//D = Dreamcast
//P = Playstation 2
//S = Steam
//GBA = GameBoy
//SNES = ...

// Needed for game tables
void StrRemoveNonASCII(WCHAR* pszOutput, size_t ccSize, LPCWSTR pszInput);

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
    REDEARTH_A_DIR_31,
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
    SFIII3_A_DIR_4rd,
    BLEACH_DS,
    KOF03_A,
    MMPR_SNES,
    KOF01_A,
    NeoBomberman_A,
    GUNDAM_SNES,
    KOF94_A,
    KOF99AE_A,
    CFTE_SNES,
    FatalFuryS_SNES,
    TOPF2005_SEGA,
    SFIII3_A_DIR_EX,
    GGXXACR_A,
    AOF3_A,
    DANKUGA_A,
    SAMSHO4_A,
    RODSM2_A,
    LASTBLADE2_A,
    SAMSHO5_A,
    RBFF1_A,
    RBFF2_A,
    KIZUNA_A,
    SFZ3U_A,
    AOF1_A,
    DOUBLEDRAGON_A,
    DUMMY_RGB444_LE,
    SDODGEBALL_A,
    NINJAMASTERS_A,
    SFIII3_A_DIR_4rd_10,
    KOF97_A,
    SFIII1_A_DIR,
    SFIII2_A_DIR,
    SAVAGEREIGN_A,
    ROTD_A,
    GarouP_A,
    DBFCI_A,
    UNICLR_A,
    SPF2T_A,
    MSHWOTG_SNES,
    REDEARTH_A_DIR_30,
    KOTM_A,
    XMMA_SNES,
    TMNTTF_SNES,

    NUM_GAMES // This needs to be last
};

UINT8 GetCbForColorForGameFlag(UINT8 uGameFlag);

// If you're adding a new game you also must update 
//    CGameLoad::SetGame            Needed to load the game class
//    CGameLoad::CreateGame         Needed to load the game class
//    CPalModDlg::OnFileOpen        Ensures the user can open the game
//    CPalModDlg::OnEditPaste       Ensures that pastes work correctly
// 

// We want to keep these short for the titlebar: they're hard-limited by
// MAX_DESCRIPTION_LENGTH (96), so 64 is probably the max we want.
// Note that the games can override these values: these are just the defaults.
const WCHAR g_GameFriendlyName[NUM_GAMES][64] =
{
   L"MvC2 (Dreamcast)",
   L"SFIII3 (Arcade)",
   L"MVC2 (Playstation 2)",
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
   L"Garou: MotW (Neo-Geo)",
   L"Unknown Game",
   L"KOF: 98 (Neo-Geo)",
   L"KOF: 02UM (Steam)",
   L"CVS2 (Arcade)",
   L"Garou: MotW (Steam)",
   L"KOF: 02 (Neo-Geo)",
   L"SFA2 (Arcade)",
   L"SFIII:3S (Arcade Rerip)",
   L"Jojo's 50 (Japanese Arcade Rerip)",
   L"Jojo's 51 (Japanese Arcade Rerip)",
   L"SVC Plus A",
   L"Samurai Shodown V Special (Neo-Geo)",
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
   L"Samurai Shodown 3 (Neo-Geo)",
   L"Vampire Hunter 2 (Arcade)",
   L"SFIII:2I (Arcade)",
   L"SF2:HF (Arcade)",
   L"SF2:CE (Arcade)",
   L"SSF2T:Revival (GBA)",
   L"Matrimelee (Neo-Geo)",
   L"SFIII:NG (Arcade)",
   L"Windjammers (Neo-Geo)",
   L"SFIII:3S Gill Glow (Arcade Rerip)",
   L"KOF: XI (Atomiswave)",
   L"NGBC (Atomiswave)",
   L"Breakers Revenge (Neo-Geo)",
   L"SFIII:4rd Strike (Arcade)",
   L"Bleach DS (Nintendo DS)",
   L"KOF03: 2004 EX Ultra Plus",
   L"MMPR:TFE (SNES)",
   L"KOF01 (Neo-Geo)",
   L"Neo Bomberman (Neo-Geo)",
   L"Gundam Wing: Endless Duel (SNES)",
   L"KOF: 94 (Neo-Geo)",
   L"KOF: 99AE (Neo-Geo)",
   L"Clay Fighter: TE (SNES)",
   L"Fatal Fury Special (SNES)",
   L"Top Fighter 2005 (Sega)",
   L"SFIII:3S EX",
   L"GGXX:AC+R",
   L"Art of Fighting 3 (Neo-Geo)",
   L"Dan-Ku-Ga (Arcade)",
   L"Samurai Shodown IV (Neo-Geo)",
   L"Ring of Destruction: Slam Master's II",
   L"The Last Blade 2 (Neo-Geo)",
   L"Samurai Shodown 5 (Neo-Geo)",
   L"Real Bout Fatal Fury (Neo-Geo)",
   L"Real Bout Fatal Fury 2 (Neo-Geo)",
   L"Kizuna Encounter (Neo-Geo)",
   L"Street Fighter Zero 3 Upper (NAOMI)",
   L"Art of Fighting 1 (Neo-Geo)",
   L"Double Dragon (Neo-Geo)",
   L"Fake game ID for RGB444 little endian",
   L"Super Dodge Ball (Neo-Geo)",
   L"Ninja Masters (Neo-Geo)",
   L"SFIII:4rd Strike Gill Glow (Arcade)",
   L"KOF97 (Neo-Geo)",
   L"SFIII:New Generation (Arcade Rerip)",
   L"SFIII:2nd Impact (Arcade Rerip)",
   L"Savage Reign (Neo-Geo)",
   L"Rage of the Dragons (Neo-Geo)",
   L"Garou: MotW (Neo-Geo Prototype)",
   L"Dengeki Bunko: Fighting Climax IGNITION",
   L"Under Night In-Birth Exe:Late[cl-r]",
   L"Super Puzzle Fighter II Turbo (Arcade)",
   L"Marvel Super Heroes: War of the Gems (SNES)",
   L"Red Earth (Arcade Rerip)",
   L"King of the Monsters (Neo-Geo)",
   L"X-Men: Mutant Apocalypse (SNES)",
   L"TMNT: Tournament Fighters (SNES)",
};

enum class GamePlatform
{
    CapcomCPS12 = 0,
    CapcomCPS3,
    NEOGEO,
    Nintendo,
    SammyAtomiswave,
    SegaNAOMI,
    Sega,
    Steam,
    Unknown,
    Last,
};

struct sSupportedGameList
{
    int nInternalGameIndex = 0;
    LPCWSTR szGameFriendlyName = L"uninit";
    LPCWSTR szGameFilterString = L"uninit";
    GamePlatform publisherKey = GamePlatform::Unknown;
    int nListedGameIndex = INVALID_UNIT_VALUE;
};

const int k_nTextureLoadCommandMask = 0xff00;
const int k_nGameLoadROMListMask = 0xf0000;
extern sSupportedGameList* pSupportedGameList;
extern const int nNumberOfLoadROMOptions;

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
const LPCWSTR DEF_BUTTONLABEL_2[] =
{
    L"P1", L"P2"
};

const LPCWSTR DEF_BUTTONLABEL_2_PK[] =
{
    L"Punch", L"Kick"
};

const LPCWSTR DEF_BUTTONLABEL_2_AB[] =
{
    L"A", L"B"
};

const LPCWSTR DEF_BUTTONLABEL_2_NEOGEO[] =
{
    L"Main", L"Alt"
};

const LPCWSTR DEF_BUTTONLABEL_2_AOF3[] =
{
    L"A", L"D"
};

const LPCWSTR DEF_BUTTONLABEL_2_LEFTRIGHT[] =
{
    L"Left", L"Right"
};

const LPCWSTR DEF_BUTTONLABEL_NEOGEO[] =
{
    L"A", L"B", L"C", L"D"
};

const LPCWSTR DEF_BUTTONLABEL_KOF99AE_P3[] =
{
    L"C", L"D", L"AC", L"BD"
};

const LPCWSTR DEF_BUTTONLABEL_SAMSHO3[] =
{
    L"S1", L"S2", L"B1", L"B2"
};

const LPCWSTR DEF_BUTTONLABEL_NEOGEO_FIVE[] =
{
   L"A", L"B", L"C", L"D", L"Boss"
};

const LPCWSTR DEF_BUTTONLABEL_WAKUWAKU7_FIVE[] =
{
   L"A", L"B", L"C", L"D", L"Dark"
};

const LPCWSTR DEF_BUTTONLABEL_JOJOS_5[] =
{
   L"A", L"B", L"C", L"S", L"Start"
};

const LPCWSTR DEF_BUTTONLABEL6[] =
{
   L"LP", L"MP", L"HP", L"LK", L"MK", L"HK"
};

const LPCWSTR DEF_BUTTONLABEL_GBA[] =
{
    L"A", L"L", L"R", L"B", L"Sel+A", L"Sel+L", L"Sel+R", L"Sel+B", L"Start"
};

const LPCWSTR DEF_BUTTONLABEL_ISMS[] =
{
   L"X-Ism P", L"X-Ism K", L"A-Ism P", L"A-Ism K", L"V-Ism P", L"V-Ism K"
};

const LPCWSTR DEF_BUTTONLABEL_SFA2[] =
{
   L"P", L"K", L"PP", L"KK", L"Auto P", L"Auto K"
};

const LPCWSTR DEF_BUTTONLABEL6_MVC2[] =
{
   L"LP", L"LK", L"HP", L"HK", L"A1", L"A2"
};

const LPCWSTR DEF_BUTTONLABEL7_SF3[] =
{
   L"LP", L"MP", L"HP", L"LK", L"MK", L"HK", L"EX"
};

const LPCWSTR DEF_BUTTONLABEL_CVS2[] =
{
   L"LP", L"MP", L"HP", L"LK", L"MK", L"HK", L"3P", L"3K"
};

const LPCWSTR DEF_BUTTONLABEL_ST10[] =
{
   L"Jab", L"Strong", L"Fierce", L"Short", L"Forward", L"RH", L"Start", L"Hold", L"Old 1P", L"Old 2P"
};

const LPCWSTR DEF_BUTTONLABEL_GEMFIGHTER[] =
{
    L"A", L"B", L"C", L"X3"
};

const LPCWSTR DEF_NOBUTTONS[] =
{
   L"Special"
};

const LPCWSTR DEF_LABEL_STATUS_EFFECTS[] =
{
   L"Burn 1", L"Burn 2", L"Shock 1", L"Shock 2", L"Dark 1", L"Dark 2", L"Kinetic 1", L"Kinetic 2"
};

const LPCWSTR DEF_BUTTONLABEL_VSAV[] =
{
   L"LP", L"MP", L"HP", L"LK", L"MK", L"HK", L"PP", L"KK", L"AP", L"AK"
};

const LPCWSTR DEF_BUTTONLABEL_KOFXI[] =
{
    L"A", L"B", L"C", L"D", L"E + A", L"E + B", L"E + C", L"E + D", L"Start + A", L"Start + B", L"Start + C", L"Start + D"
};

const LPCWSTR DEF_BUTTONLABEL_BLEACH[] =
{
    L"Palette 1", L"Palette 2", L"Palette 3", L"Palette 4", L"Palette 5", L"Palette 6", L"Palette 7", L"Palette 8"
};

const LPCWSTR DEF_BUTTONLABEL_LASTBLADE2[] =
{
    L"Power A", L"Power D", L"Speed A", L"Speed D", L"EX A", L"EX D"
};

struct stExtraDef
{
    UINT16 uUnitN = INVALID_UNIT_VALUE;
    WCHAR szDesc[MAX_DESCRIPTION_LENGTH] = L"uninit";
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
    bool fPairingIsFlipped = false;
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
    indexCPS2_Ryu,          // 0x00
    indexCPS2_Zangief,      // 0x01
    indexCPS2_Guile,        // 0x02
    indexCPS2_Morrigan,     // 0x03
    indexCPS2_Anakaris,     // 0x04
    indexCPS2_Strider,      // 0x05
    indexCPS2_Cyclops,      // 0x06
    indexCPS2_Wolverine,    // 0x07
    indexCPS2_Psylocke,     // 0x08
    indexCPS2_Iceman,       // 0x09
    indexCPS2_Rogue,        // 0x0A
    indexCPS2_CapAm,        // 0x0B, // Captain America
    indexCPS2_Spidey,       // 0x0C, // Spider-Man
    indexCPS2_Hulk,         // 0x0D
    indexCPS2_Venom,        // 0x0E
    indexCPS2_DrDoom,       // 0x0F
    indexCPS2_Tron,         // 0x10, // Tron Bonne
    indexCPS2_Jill,         // 0x11
    indexCPS2_Hayato,       // 0x12
    indexCPS2_Ruby,         // 0x13
    indexCPS2_SonSon,       // 0x14
    indexCPS2_Amingo,       // 0x15
    indexCPS2_Marrow,       // 0x16
    indexCPS2_Cable,        // 0x17
    indexCPS2_Abyss1,       // 0x18
    indexCPS2_Abyss2,       // 0x19
    indexCPS2_Abyss3,       // 0x1A
    indexCPS2_ChunLi,       // 0x1B
    indexCPS2_Megaman,      // 0x1C
    indexCPS2_Roll,         // 0x1D
    indexCPS2_Akuma,        // 0x1E, // Gouki
    indexCPS2_BBHood,       // 0x1F
    indexCPS2_Felicia,      // 0x20
    indexCPS2_Charlie,      // 0x21, // Charlie/Nash/Shadow
    indexCPS2_Sakura,       // 0x22
    indexCPS2_Dan,          // 0x23
    indexCPS2_Cammy,        // 0x24
    indexCPS2_Dhalsim,      // 0x25
    indexCPS2_Bison,        // 0x26
    indexCPS2_Ken,          // 0x27
    indexCPS2_Gambit,       // 0x28
    indexCPS2_Juggy,        // 0x29, // Juggernaut
    indexCPS2_Storm,        // 0x2A
    indexCPS2_Sabretooth,   // 0x2B
    indexCPS2_Magneto,      // 0x2C
    indexCPS2_Shuma,        // 0x2D
    indexCPS2_WarMachine,   // 0x2E
    indexCPS2_SilverSamurai, // 0x2F
    indexCPS2_OmegaRed,     // 0x30
    indexCPS2_Spiral,       // 0x31
    indexCPS2_Colossus,     // 0x32
    indexCPS2_IronMan,      // 0x33
    indexCPS2_Sentinel,     // 0x34
    indexCPS2_Blackheart,   // 0x35
    indexCPS2_Thanos,       // 0x36
    indexCPS2_Jin,          // 0x37
    indexCPS2_CapCom,       // 0x38, // Captain Commando
    indexCPS2_Bonerine,     // 0x39
    indexCPS2_Kobun,        // 0x3A

    indexCPS2_Onslaught,    // 0x3B
    indexCPS2_MVCAssets,    // 0x3C
    indexCPS2_Adon,         // 0x3D
    indexCPS2_Sodom,        // 0x3E
    indexCPS2_Guy,          // 0x3F
    indexCPS2_Birdie,       // 0x40
    indexCPS2_Rose,         // 0x41
    indexCPS2_Sagat,        // 0x42
    indexCPS2_Rolento,      // 0x43
    indexCPS2_Gen,          // 0x44
    indexCPS2_Balrog,       // 0x45
    indexCPS2_EHonda,       // 0x46, // E.Honda
    indexCPS2_Blanka,       // 0x47
    indexCPS2_RMika,        // 0x48, // R.Mika
    indexCPS2_Cody,         // 0x49
    indexCPS2_Vega,         // 0x4A
    indexCPS2_Karin,        // 0x4B
    indexCPS2_Juni,         // 0x4C
    indexCPS2_Juli,         // 0x4D
    indexCPS2_SFA3Assets,   // 0x4e - SFA3 HUD, stages
    indexCPS2_Apocalypse,   // 0x4f
    indexCPS2_XMVSFAssets,  // 0x50 - XMVSF HUD, stages
    indexCPS2_Anita,        // 0x51
    indexCPS2_MSHAssets,    // 0x52 - MSH HUD, stages
    indexCPS2_Norimaro,     // 0x53
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

    indexCPS2_SPF_Bonus,    // 0x7d
    indexCPS2_SPF_Stages,   // 0x7e
    indexCPS2_SFA2_Bonus,   // 0x7f
    indexCPS2_SFA2_Stages,  // 0x80
    indexCPS2_VSAV1_Stages, // 0x81

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

    indexCPS2_DeeJay,           // 0x92
    indexCPS2_Eagle,            // 0x93
    indexCPS2_FeiLong,          // 0x94
    indexCPS2_THawk,            // 0x95

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

const UINT16 MVC2_IMG_UNITS[MVC2_D_NUM_IMG_UNITS] =
{
    indexCPS2_Ryu,          // 0x00
    indexCPS2_Zangief,      // 0x01
    indexCPS2_Guile,        // 0x02
    indexCPS2_Morrigan,     // 0x03
    indexCPS2_Anakaris,     // 0x04
    indexCPS2_Strider,      // 0x05
    indexCPS2_Cyclops,      // 0x06
    indexCPS2_Wolverine,    // 0x07
    indexCPS2_Psylocke,     // 0x08
    indexCPS2_Iceman,       // 0x09
    indexCPS2_Rogue,        // 0x0A
    indexCPS2_CapAm,        // 0x0B, // Captain America
    indexCPS2_Spidey,       // 0x0C, // Spider-Man
    indexCPS2_Hulk,         // 0x0D
    indexCPS2_Venom,        // 0x0E
    indexCPS2_DrDoom,       // 0x0F
    indexCPS2_Tron,         // 0x10, // Tron Bonne
    indexCPS2_Jill,         // 0x11
    indexCPS2_Hayato,       // 0x12
    indexCPS2_Ruby,         // 0x13
    indexCPS2_SonSon,       // 0x14
    indexCPS2_Amingo,       // 0x15
    indexCPS2_Marrow,       // 0x16
    indexCPS2_Cable,        // 0x17
    indexCPS2_Abyss1,       // 0x18
    indexCPS2_Abyss2,       // 0x19
    indexCPS2_Abyss3,       // 0x1A
    indexCPS2_ChunLi,       // 0x1B
    indexCPS2_Megaman,      // 0x1C
    indexCPS2_Roll,         // 0x1D
    indexCPS2_Akuma,        // 0x1E, // Gouki
    indexCPS2_BBHood,       // 0x1F
    indexCPS2_Felicia,      // 0x20
    indexCPS2_Charlie,      // 0x21, // Charlie/Nash/Shadow
    indexCPS2_Sakura,       // 0x22
    indexCPS2_Dan,          // 0x23
    indexCPS2_Cammy,        // 0x24
    indexCPS2_Dhalsim,      // 0x25
    indexCPS2_Bison,        // 0x26
    indexCPS2_Ken,          // 0x27
    indexCPS2_Gambit,       // 0x28
    indexCPS2_Juggy,        // 0x29, // Juggernaut
    indexCPS2_Storm,        // 0x2A
    indexCPS2_Sabretooth,   // 0x2B
    indexCPS2_Magneto,      // 0x2C
    indexCPS2_Shuma,        // 0x2D
    indexCPS2_WarMachine,   // 0x2E
    indexCPS2_SilverSamurai, // 0x2F
    indexCPS2_OmegaRed,     // 0x30
    indexCPS2_Spiral,       // 0x31
    indexCPS2_Colossus,     // 0x32
    indexCPS2_IronMan,      // 0x33
    indexCPS2_Sentinel,     // 0x34
    indexCPS2_Blackheart,   // 0x35
    indexCPS2_Thanos,       // 0x36
    indexCPS2_Jin,          // 0x37
    indexCPS2_CapCom,       // 0x38, // Captain Commando
    indexCPS2_Bonerine,     // 0x39
    indexCPS2_Kobun,        // 0x3A
};

enum CHARACTERS_3S_CPS3
{
    index3S_CPS3_Alex,      // 0x00
    index3S_CPS3_Ryu,       // 0x01
    index3S_CPS3_Yun,       // 0x02
    index3S_CPS3_Dudley,    // 0x03
    index3S_CPS3_Necro,     // 0x04
    index3S_CPS3_Hugo,      // 0x05
    index3S_CPS3_Ibuki,     // 0x06
    index3S_CPS3_Elena,     // 0x07
    index3S_CPS3_Oro,       // 0x08
    index3S_CPS3_Yang,      // 0x09
    index3S_CPS3_Ken,       // 0x0a
    index3S_CPS3_Sean,      // 0x0b
    index3S_CPS3_Urien,     // 0x0c
    index3S_CPS3_Gouki,     // 0x0d
    index3S_CPS3_ShinGouki, // 0x0e
    index3S_CPS3_ChunLi,    // 0x0f
    index3S_CPS3_Makoto,    // 0x10
    index3S_CPS3_Q,         // 0x11
    index3S_CPS3_Twelve,    // 0x12
    index3S_CPS3_Remy,      // 0x13
    index3S_CPS3_Bonus,     // 0x14
    index3S_CPS3_Stages,    // 0x15
    index3S_CPS3_Gill,      // 0x16
    index2i_CPS3_Bonus,     // 0x17
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
    indexCPS2_SFA2_Bonus,       // 0x7f
};

constexpr auto SFA2_A_NUM_IMG_UNITS = ARRAYSIZE(SFA2_A_IMG_UNITS);

const UINT16 SFA3_A_IMG_UNITS[] =
{
    // MVC2 Assets
    indexCPS2_Ryu,          // 0x00
    indexCPS2_Zangief,      // 0x01
    indexCPS2_ChunLi,       // 0x1B
    indexCPS2_Akuma,        // 0x1E
    indexCPS2_Charlie,      // 0x21
    indexCPS2_Sakura,       // 0x22
    indexCPS2_Dan,          // 0x23
    indexCPS2_Cammy,        // 0x24
    indexCPS2_Dhalsim,      // 0x25
    indexCPS2_Bison,        // 0x26
    indexCPS2_Ken,          // 0x27
    // SFA3 Unique
    indexCPS2_Adon,         // 0x3D
    indexCPS2_Sodom,        // 0x3E
    indexCPS2_Guy,          // 0x3F
    indexCPS2_Birdie,       // 0x40
    indexCPS2_Rose,         // 0x41
    indexCPS2_Sagat,        // 0x42
    indexCPS2_Rolento,      // 0x43
    indexCPS2_Gen,          // 0x44
    indexCPS2_Balrog,       // 0x45
    indexCPS2_EHonda,       // 0x46
    indexCPS2_Blanka,       // 0x47
    indexCPS2_RMika,        // 0x48
    indexCPS2_Cody,         // 0x49
    indexCPS2_Vega,         // 0x4A
    indexCPS2_Karin,        // 0x4B
    indexCPS2_Juni,         // 0x4C
    indexCPS2_Juli,         // 0x4D
    indexCPS2_SFA3Assets,   // 0x4e - SFA3 HUD, stages
    indexCPS2_SFA3_Portraits,
};

constexpr auto SFA3_A_NUM_IMG_UNITS = ARRAYSIZE(SFA3_A_IMG_UNITS);

const UINT16 XMVSF_A_IMG_UNITS[] =
{
    indexCPS2_Ryu,          // 0x00
    indexCPS2_Zangief,      // 0x01
    indexCPS2_Cyclops,      // 0x06
    indexCPS2_Wolverine,    // 0x07
    indexCPS2_Rogue,        // 0x0A
    indexCPS2_ChunLi,       // 0x1B
    indexCPS2_Akuma,        // 0x1E
    indexCPS2_Charlie,      // 0x21
    indexCPS2_Cammy,        // 0x24
    indexCPS2_Dhalsim,      // 0x25
    indexCPS2_Bison,        // 0x26
    indexCPS2_Ken,          // 0x27
    indexCPS2_Gambit,       // 0x28
    indexCPS2_Juggy,        // 0x29
    indexCPS2_Storm,        // 0x2A
    indexCPS2_Sabretooth,   // 0x2B
    indexCPS2_Magneto,      // 0x2C
    indexCPS2_Apocalypse,   // Apocalypse
};

constexpr auto XMVSF_A_NUM_IMG_UNITS = ARRAYSIZE(XMVSF_A_IMG_UNITS);

const UINT16 MVC_A_IMG_UNITS[] =
{
    // Main Roster
    indexCPS2_Ryu,          // 0x00
    indexCPS2_Zangief,      // 0x01
    indexCPS2_Morrigan,     // 0x03
    indexCPS2_Strider,      // 0x05
    indexCPS2_Wolverine,    // 0x07
    indexCPS2_CapAm,        // 0x0B, // Captain America
    indexCPS2_Spidey,       // 0x0C, // Spider-Man
    indexCPS2_Hulk,         // 0x0D
    indexCPS2_Venom,        // 0x0E
    indexCPS2_ChunLi,       // 0x1B
    indexCPS2_Megaman,      // 0x1C
    indexCPS2_Roll,         // 0x1D
    indexCPS2_Gambit,       // 0x28
    indexCPS2_WarMachine,   // 0x2E
    indexCPS2_Jin,          // 0x37
    indexCPS2_CapCom,       // 0x38, // Captain Commando
    // MvC1 Unique
    indexCPS2_Onslaught,    // 0x3B
    indexCPS2_MVCAssets,    // 0x3C
    // Transforms
    indexCPS2_Akuma,        // 0x1E, // Gouki
    indexCPS2_Ken,          // 0x27
    // Assists
    indexCPS2_Cyclops,      // 0x06
    indexCPS2_Psylocke,     // 0x08
    indexCPS2_Iceman,       // 0x09
    indexCPS2_Rogue,        // 0x0A
    indexCPS2_Charlie,      // 0x21, // Charlie/Nash/Shadow
    indexCPS2_Juggy,        // 0x29, // Juggernaut
    indexCPS2_Storm,        // 0x2A
    indexCPS2_Magneto,      // 0x2C
    indexCPS2_Colossus,     // 0x32
    indexCPS2_Sentinel, // Sentinel
    indexCPS2_Anita,        // 0x51
};

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
    indexCPS2_MSHAssets,

    indexCPS2_STAkuma,        // used by anita
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
    indexJojos51Stages,
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
    indexKOFSprites_02Goenitz,  // 37

    indexKOFSprites_02Bao,      // 38
    indexKOFSprites_02Foxy,     // 39
    indexKOFSprites_02Geese,    // 3a
    indexKOFSprites_02Hinako,   // 3b
    indexKOFSprites_02Igniz,    // 3c
    indexKOFSprites_02Jhun,     // 3d
    indexKOFSprites_02Kasumi,   // 3e
    indexKOFSprites_02Krizalid, // 3f
    indexKOFSprites_02OZero,    // 40
    indexKOFSprites_02NGeese,   // unused currently

    indexKOFSprites_99Krizalid, // 42
    indexKOFSprites_00Bao,      // 43
    indexKOFSprites_00Kasumi,   // 44
    indexKOFSprites_00Robert,   // 45
    indexKOFSprites_00ZeroClone, // 46
    indexKOF01Sprites_Xiangfei, // 47
    indexKOFSprites_02Andy,     // 48
    indexKOFSprites_02Chin,     // 49 
    indexKOFSprites_02Kusanagi, // 4a
    indexKOFSprites_02Robert,   // 4b
    indexKOFSprites_02Yuri,     // 4c
    
    indexKOFSprites_02K9999,    // 4d

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

    indexKOFSprites_02UM_Andy,      // 0x79
    indexKOFSprites_02UM_Angel,     // 0x7A
    indexKOFSprites_02UM_Athena,    // 0x7B
    indexKOFSprites_02UM_Bao,       // 0x7C
    indexKOFSprites_02UM_Benimaru,  // 0x7D
    indexKOFSprites_02UM_Billy,     // 0x7E
    indexKOFSprites_02UM_BlueMary,  // 0x7F
    indexKOFSprites_02UM_Chang,     // 0x80
    indexKOFSprites_02UM_Chin,      // 0x81
    indexKOFSprites_02UM_Choi,      // 0x82
    indexKOFSprites_02UM_Chris,     // 0x83
    indexKOFSprites_02UM_ChrisOChi, // 0x84
    indexKOFSprites_02UM_Clark,     // 0x85
    indexKOFSprites_02UM_CloneZero, // 0x86
    indexKOFSprites_02UM_Daimon,    // 0x87 aka Goro
    indexKOFSprites_02UM_Foxy,      // 0x88
    indexKOFSprites_02UM_Geese,     // 0x89
    indexKOFSprites_02UM_GeeseNM,   // 0x8A
    indexKOFSprites_02UM_Goenitz,   // 0x8B
    indexKOFSprites_02UM_Heidern,   // 0x8C
    indexKOFSprites_02UM_Hinako,    // 0x8D
    indexKOFSprites_02UM_Igniz,     // 0x8E
    indexKOFSprites_02UM_Iori,      // 0x8F
    indexKOFSprites_02UM_Jhun,      // 0x90
    indexKOFSprites_02UM_Joe,       // 0x91
    indexKOFSprites_02UM_K,         // 0x92
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
    indexKOFSprites_02UM_OmegaRugal, // 0xA6
    indexKOFSprites_02UM_Ralf,      // 0xA7
    indexKOFSprites_02UM_Ramon,     // 0xa8
    indexKOFSprites_02UM_Robert,    // 0xA9
    indexKOFSprites_02UM_RobertEX,  // 0xAa
    indexKOFSprites_02UM_Ryo,       // 0xAb
    indexKOFSprites_02UM_Seth,      // 0xAc
    indexKOFSprites_02UM_Shermie,   // 0xAd
    indexKOFSprites_02UM_ShermieOChi, // 0xAe
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
    indexKOFSprites_02UM_YashiroOChi, // 0xB9
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
    indexKOF01Sprites_Athena,       // 0x147
    indexKOF01Sprites_Bao,          // 0x148
    indexKOF01Sprites_Foxy,         // 0x149

    indexKOFSprites_02ChrisOrochi,  // 0x14a
    indexKOFSprites_02Benimaru,     // 0x14b
    indexKOFSprites_02Billy,        // 0x14c
    indexKOFSprites_02BlueMary,     // 0x14d
    indexKOFSprites_02Chang,        // 0x14e
    indexKOFSprites_02Choi,         // 0x14f
    indexKOFSprites_02Chris,        // 0x150
    indexKOFSprites_02Daimon,       // 0x151
    indexKOFSprites_02Iori,         // 0x152
    indexKOFSprites_02Joe,          // 0x153
    indexKOFSprites_02Kensou,       // 0x154
    indexKOFSprites_02Kim,          // 0x155
    indexKOFSprites_02KUSANAGI,     // 0x156
    indexKOFSprites_02Leona,        // 0x157
    indexKOFSprites_02Mai,          // 0x158
    indexKOFSprites_02Mature,       // 0x159
    indexKOFSprites_02OmegaRugal,   // 0x15A
    indexKOFSprites_02Ryo,          // 0x15B
    indexKOFSprites_02Shermie,      // 0x15C
    indexKOFSprites_02ShermieOrochi, // 0x15D
    indexKOFSprites_02Takuma,       // 0x15E
    indexKOFSprites_02Terry,        // 0x15F
    indexKOFSprites_02Vice,         // 0x160
    indexKOFSprites_02Yamazaki,     // 0x161
    indexKOFSprites_02Yashiro,      // 0x162
    indexKOFSprites_02YashiroOrochi, // 0x163

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
    indexKOF01Sprites_BlueMary,     // 0x1b2
    indexKOF01Sprites_Chang,        // 0x1b3
    indexKOF01Sprites_Chin,         // 0x1b4
    indexKOF01Sprites_Choi,         // 0x1b5
    indexKOF01Sprites_Clark,        // 0x1b6
    // indexKOF01Sprites_Foxy,      // 0x149
    indexKOF01Sprites_GoroDaimon,   // 0x1b7
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
    indexKOFSprites_02UM_Bonus,     // 0x1d7
    indexKOFSprites_02UM_Stages,    // 0x1d8

    indexLastBlade2_Akari,          // 0x1D9
    indexLastBlade2_Genbu,          // 0x1DA
    indexLastBlade2_Hibiki,         // 0x1DB
    indexLastBlade2_HyoAmano,       // 0x1DC
    indexLastBlade2_Juzoh,          // 0x1DD
    indexLastBlade2_Kaede,          // 0x1DE
    indexLastBlade2_Keiichiro,      // 0x1DF
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

    indexKOFSprites_Last,
};

const UINT16 KOF94_A_IMG_UNITS[] =
{
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

const UINT16 KOF01_A_IMG_UNITS[] =
{
    indexKOFSprites_02UM_K,
    indexKOFSprites_02UM_Maxima,
    indexKOFSprites_02UM_Whip,
    indexKOFSprites_02UM_Lin,
    indexKOFSprites_02UM_KyoKusa,
    indexKOFSprites_02UM_Benimaru,
    indexKOF03Sprites_Goro,
    indexKOFSprites_02UM_Shingo,
    indexKOFSprites_02UM_Iori,
    indexKOFSprites_02UM_Vanessa,
    indexKOFSprites_02UM_Seth,
    indexKOFSprites_02UM_Ramon,
    indexKOFSprites_02UM_Leona,
    indexKOFSprites_02UM_Ralf,
    indexKOFSprites_02UM_Clark,
    indexKOFSprites_02UM_Terry,
    indexKOFSprites_02UM_Andy,
    indexKOFSprites_02UM_Joe,
    indexKOFSprites_02UM_BlueMary,
    indexKOFSprites_02UM_Ryo,
    indexKOFSprites_02UM_Robert,
    indexKOFSprites_02UM_Yuri,
    indexKOFSprites_02UM_Takuma,
    indexKOFSprites_02UM_King,
    indexKOFSprites_02UM_Mai,
    indexKOFSprites_02UM_Hinako,
    indexKOF01Sprites_Xiangfei,
    indexKOFSprites_02UM_Kula,
    indexKOFSprites_02UM_K9999,
    indexKOFSprites_02UM_Angel,
    indexKOFSprites_02UM_Kensou,
    indexKOFSprites_02UM_Chin,
    indexKOFSprites_02UM_Kim,
    indexKOFSprites_02UM_Chang,
    indexKOFSprites_02UM_Choi,
    indexKOFSprites_02UM_MayLee,
    indexKOFSprites_02UM_CloneZero,
    indexKOFSprites_02UM_Igniz, 
    indexKOFSprites_02UM_Daimon,
    indexKOFSprites_02UM_Bao,
    indexKOFSprites_02UM_Foxy,
    indexKOFSprites_02UM_Athena,
    indexKOFSprites_02UM_ZeroOG,

    indexKOF01Sprites_Athena,       // 0x147
    indexKOF01Sprites_Bao,          // 0x148
    indexKOF01Sprites_Foxy,         // 0x149

    indexKOF01Sprites_Andy,         // 0x1af
    indexKOF01Sprites_Angel,        // 0x1b0
    // indexKOF01Sprites_Athena,    // 0x147
    // indexKOF01Sprites_Bao,       // 0x148
    indexKOF01Sprites_Benimaru,     // 0x1b1
    indexKOF01Sprites_BlueMary,     // 0x1b2
    indexKOF01Sprites_Chang,        // 0x1b3
    indexKOF01Sprites_Chin,         // 0x1b4
    indexKOF01Sprites_Choi,         // 0x1b5
    indexKOF01Sprites_Clark,        // 0x1b6
    // indexKOF01Sprites_Foxy,      // 0x149
    indexKOF01Sprites_GoroDaimon,   // 0x1b7
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
};

const UINT16 KOF02_A_IMG_UNITS[] =
{
    indexKOFSprites_02UM_Andy,      // 0x79
    indexKOFSprites_02UM_Angel,     // 0x7A
    indexKOFSprites_02UM_Athena,    // 0x7B
    indexKOFSprites_02UM_Bao,       // 0x7C
    indexKOFSprites_02UM_Benimaru,  // 0x7D
    indexKOFSprites_02UM_Billy,     // 0x7E
    indexKOFSprites_02UM_BlueMary,  // 0x7F
    indexKOFSprites_02UM_Chang,     // 0x80
    indexKOFSprites_02UM_Chin,      // 0x81
    indexKOFSprites_02UM_Choi,      // 0x82
    indexKOFSprites_02UM_Chris,     // 0x83
    indexKOFSprites_02UM_ChrisOChi, // 0x84
    indexKOFSprites_02UM_Clark,     // 0x85
    indexKOFSprites_02UM_CloneZero, // 0x86
    indexKOFSprites_02UM_Daimon,    // 0x87 aka Goro
    indexKOFSprites_02UM_Foxy,      // 0x88
    indexKOFSprites_02UM_Geese,     // 0x89
    indexKOFSprites_02UM_GeeseNM,   // 0x8A
    indexKOFSprites_02UM_Goenitz,   // 0x8B
    indexKOFSprites_02UM_Heidern,   // 0x8C
    indexKOFSprites_02UM_Hinako,    // 0x8D
    indexKOFSprites_02UM_Igniz,     // 0x8E
    indexKOFSprites_02UM_Iori,      // 0x8F
    indexKOFSprites_02UM_Jhun,      // 0x90
    indexKOFSprites_02UM_Joe,       // 0x91
    indexKOFSprites_02UM_K,         // 0x92
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
    indexKOFSprites_02UM_OmegaRugal, // 0xA6
    indexKOFSprites_02UM_Ralf,      // 0xA7
    indexKOFSprites_02UM_Ramon,     // 0xa8
    indexKOFSprites_02UM_Robert,    // 0xA9
    indexKOFSprites_02UM_RobertEX,  // 0xAa
    indexKOFSprites_02UM_Ryo,       // 0xAb
    indexKOFSprites_02UM_Seth,      // 0xAc
    indexKOFSprites_02UM_Shermie,   // 0xAd
    indexKOFSprites_02UM_ShermieOChi, // 0xAe
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
    indexKOFSprites_02UM_YashiroOChi, // 0xB9
    indexKOFSprites_02UM_Yuri,      // 0xBa
    indexKOFSprites_02UM_ZeroOG,    // 0xBb

    indexKOFSprites_02UM_K9999,
    indexKOFSprites_02K9999,

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
    indexKOFSprites_02Goenitz,  // 37

    indexKOFSprites_02Bao,      // 38
    indexKOFSprites_02Foxy,     // 39
    indexKOFSprites_02Geese,    // 3a
    indexKOFSprites_02Hinako,   // 3b
    indexKOFSprites_02Igniz,    // 3c
    indexKOFSprites_02Jhun,     // 3d
    indexKOFSprites_02Kasumi,   // 3e
    indexKOFSprites_02Krizalid, // 3f
    indexKOFSprites_02OZero,    // 40
    indexKOFSprites_02NGeese,   // unused currently

    indexKOFSprites_02Andy,     // 48
    indexKOFSprites_02Chin,     // 49 
    indexKOFSprites_02Kusanagi, // 4a
    indexKOFSprites_02Robert,   // 4b
    indexKOFSprites_02Yuri,     // 4c

    indexKOFSprites_02K9999,    // 4d

    indexKOFSprites_02ChrisOrochi,  // 0x14a
    indexKOFSprites_02Benimaru,     // 0x14b
    indexKOFSprites_02Billy,        // 0x14c
    indexKOFSprites_02BlueMary,     // 0x14d
    indexKOFSprites_02Chang,        // 0x14e
    indexKOFSprites_02Choi,         // 0x14f
    indexKOFSprites_02Chris,        // 0x150
    indexKOFSprites_02Daimon,       // 0x151
    indexKOFSprites_02Iori,         // 0x152
    indexKOFSprites_02Joe,          // 0x153
    indexKOFSprites_02Kensou,       // 0x154
    indexKOFSprites_02Kim,          // 0x155
    indexKOFSprites_02KUSANAGI,     // 0x156
    indexKOFSprites_02Leona,        // 0x157
    indexKOFSprites_02Mai,          // 0x158
    indexKOFSprites_02Mature,       // 0x159
    indexKOFSprites_02OmegaRugal,   // 0x15A
    indexKOFSprites_02Ryo,          // 0x15B
    indexKOFSprites_02Shermie,      // 0x15C
    indexKOFSprites_02ShermieOrochi, // 0x15D
    indexKOFSprites_02Takuma,       // 0x15E
    indexKOFSprites_02Terry,        // 0x15F
    indexKOFSprites_02Vice,         // 0x160
    indexKOFSprites_02Yamazaki,     // 0x161
    indexKOFSprites_02Yashiro,      // 0x162
    indexKOFSprites_02YashiroOrochi, // 0x163

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
    indexKOF01Sprites_Xiangfei,
    indexKOFSprites_02Andy,
    indexKOFSprites_02Chin,
    indexKOFSprites_02Kusanagi,
    indexKOFSprites_02Robert,
    indexKOFSprites_02Yuri,

    indexKOFSprites_02UM_Andy,      // 0x79
    indexKOFSprites_02UM_Angel,     // 0x7A
    indexKOFSprites_02UM_Athena,    // 0x7B
    indexKOFSprites_02UM_Bao,       // 0x7C
    indexKOFSprites_02UM_Benimaru,  // 0x7D
    indexKOFSprites_02UM_Billy,     // 0x7E
    indexKOFSprites_02UM_BlueMary,  // 0x7F
    indexKOFSprites_02UM_Chang,     // 0x80
    indexKOFSprites_02UM_Chin,      // 0x81
    indexKOFSprites_02UM_Choi,      // 0x82
    indexKOFSprites_02UM_Chris,     // 0x83
    indexKOFSprites_02UM_ChrisOChi, // 0x84
    indexKOFSprites_02UM_Clark,     // 0x85
    indexKOFSprites_02UM_CloneZero, // 0x86
    indexKOFSprites_02UM_Daimon,    // 0x87 aka Goro
    indexKOFSprites_02UM_Foxy,      // 0x88
    indexKOFSprites_02UM_Geese,     // 0x89
    indexKOFSprites_02UM_GeeseNM,   // 0x8A
    indexKOFSprites_02UM_Goenitz,   // 0x8B
    indexKOFSprites_02UM_Heidern,   // 0x8C
    indexKOFSprites_02UM_Hinako,    // 0x8D
    indexKOFSprites_02UM_Igniz,     // 0x8E
    indexKOFSprites_02UM_Iori,      // 0x8F
    indexKOFSprites_02UM_Jhun,      // 0x90
    indexKOFSprites_02UM_Joe,       // 0x91
    indexKOFSprites_02UM_K,         // 0x92
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
    indexKOFSprites_02UM_OmegaRugal, // 0xA6
    indexKOFSprites_02UM_Ralf,      // 0xA7
    indexKOFSprites_02UM_Ramon,     // 0xa8
    indexKOFSprites_02UM_Robert,    // 0xA9
    indexKOFSprites_02UM_RobertEX,  // 0xAa
    indexKOFSprites_02UM_Ryo,       // 0xAb
    indexKOFSprites_02UM_Seth,      // 0xAc
    indexKOFSprites_02UM_Shermie,   // 0xAd
    indexKOFSprites_02UM_ShermieOChi, // 0xAe
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
    indexKOFSprites_02UM_YashiroOChi, // 0xB9
    indexKOFSprites_02UM_Yuri,      // 0xBa
    indexKOFSprites_02UM_ZeroOG,    // 0xBb

    indexKOFSprites_02UM_Bonus,     // 0x1d7

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

    indexKOFSprites_02UM_Joe,
    indexKOFSprites_02UM_Kusanagi,
    indexKOFSprites_02UM_Mai,

    indexKOFXISprites_Adelheid,
    indexKOFXISprites_BlueMary,
    indexKOFXISprites_Kyo,
    indexKOFXISprites_Ryo,
    indexKOFXISprites_Shingo,
    indexKOFXISprites_Yuri,

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

    indexSamuraiShodownSprites_Last,
};

const UINT16 SAMSHO4_A_IMG_UNITS[] =
{
    indexSamSho5Sprites_Amakusa,
    indexSamSho5Sprites_Basara,
    indexSamSho5Sprites_Charlotte,
    indexSamSho5Sprites_Gaira,
    indexSamSho5Sprites_Galford,
    indexSamSho5Sprites_Genjuro,
    indexSamSho5Sprites_Hanzo,
    indexSamSho5Sprites_Haohmaru,
    indexSamSho5Sprites_Jubei,
    indexSamSho5Sprites_Kazuki,
    indexSamSho5Sprites_Kyoshiro,
    indexSamSho5Sprites_Nakoruru,
    indexSamSho5Sprites_Rera, // not in the game: just want the shikuru sprite for nakoruru Bust form
    indexSamSho5Sprites_Rimururu,
    indexSamSho5Sprites_Shizumaru,
    indexSamSho5Sprites_Sogetsu,
    indexSamSho5Sprites_TamTam,
    indexSamSho5Sprites_Ukyo,
    indexSamSho5Sprites_Zankuro,

    indexSamSho5Sprites_Portrait,
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

const UINT16 KARNOVSR_A_IMG_UNITS[] =
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
    indexRedEarthSprites_Last
};

const UINT16 REDEARTH_A_IMG_UNITS[] =
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

    indexRBFF2Sprites_Alfred,       // 0x1f2
    indexRBFF2Sprites_Rick,         // 0x1f3
    indexRBFF2Sprites_Xiangfei,     // 0x1f4
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
};

const UINT16 GUNDAM_A_IMG_UNITS[] =
{
    indexGundamSprites_DeathScythe,
    indexGundamSprites_Epyon,
    indexGundamSprites_HeavyArms,
    indexGundamSprites_Mercurius,
    indexGundamSprites_SandRock,
    indexGundamSprites_ShenLong,
    indexGundamSprites_Tallgeese,
    indexGundamSprites_Vayaeae,
    indexGundamSprites_Wing,
    indexGundamSprites_WingZero,
    indexGundamSprites_Bonus,
    indexGundamSprites_Stages,
};

const UINT16 CFTE_SNES_IMG_UNITS[] =
{
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
};

const UINT16 NEOBOMBERMAN_A_IMG_UNITS[] =
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
	indexFrenchBreadSprites_UNICLR_Akat,   // 0x34
    indexFrenchBreadSprites_UNICLR_Byak,   // 0x35
    indexFrenchBreadSprites_UNICLR_Carm,   // 0x36
    indexFrenchBreadSprites_UNICLR_Chao,   // 0x37
    indexFrenchBreadSprites_UNICLR_Eltn,   // 0x38
    indexFrenchBreadSprites_UNICLR_Enki,   // 0x39
    indexFrenchBreadSprites_UNICLR_Gord,   // 0x3A
    indexFrenchBreadSprites_UNICLR_Hild,   // 0x3B
    indexFrenchBreadSprites_UNICLR_Hyde,   // 0x3C
    indexFrenchBreadSprites_UNICLR_Linn,   // 0x3D
    indexFrenchBreadSprites_UNICLR_Lond,   // 0x3E
    indexFrenchBreadSprites_UNICLR_Merk,   // 0x3F
    indexFrenchBreadSprites_UNICLR_Mika,   // 0x40
    indexFrenchBreadSprites_UNICLR_Nana,   // 0x41
    indexFrenchBreadSprites_UNICLR_Orie,   // 0x42
    indexFrenchBreadSprites_UNICLR_Phon,   // 0x43
    indexFrenchBreadSprites_UNICLR_Seth,   // 0x44
    indexFrenchBreadSprites_UNICLR_Vati,   // 0x45
    indexFrenchBreadSprites_UNICLR_Wagn,   // 0x46
    indexFrenchBreadSprites_UNICLR_Wald,   // 0x47
    indexFrenchBreadSprites_UNICLR_Yuzu,   // 0x48
    indexFrenchBreadSprites_UNICLR_Bonus,  // 0x49
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

enum eIMGDat_Sections
{
    IMGDAT_SECTION_BREAKREV = 0,
    IMGDAT_SECTION_CPS2,    // Used for MVC2, MVC, SFA3, XMVSF, MSH, MSHVSF, etc CPS2 games
    IMGDAT_SECTION_CVS2,    // CVS2: has both Capcom and SNK images
    IMGDAT_SECTION_FRENCHBREAD, // Used for DBFCI, UNICLR
    IMGDAT_SECTION_GAROU,
    IMGDAT_SECTION_GUILTYGEAR,
    IMGDAT_SECTION_JOJOS,
    IMGDAT_SECTION_KARNOVSR,
    IMGDAT_SECTION_KOF,     // KOF games, Last Blade, etc
    IMGDAT_SECTION_MATRIM,  // Matrimelee
    IMGDAT_SECTION_NEOGEO,  // generic set for NeoGeo games
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

const stPairedPaletteInfo pairUnhandled =     { 0, 0, 0 };
const stPairedPaletteInfo pairHandledInCode = { 0, 0, 0 };
const stPairedPaletteInfo pairFullyLinkedNode = { 0, 0, 0 };

const stPairedPaletteInfo pairNext = { 1, 0, 0 };
const stPairedPaletteInfo pairNext2 = { 2, 0, 0 };
const stPairedPaletteInfo pairNext3 = { 3, 0, 0 };
const stPairedPaletteInfo pairNext4 = { 4, 0, 0 };
const stPairedPaletteInfo pairNext5 = { 5, 0, 0 };
const stPairedPaletteInfo pairNext6 = { 6, 0, 0 };
const stPairedPaletteInfo pairNext7 = { 7, 0, 0 };
const stPairedPaletteInfo pairNext8 = { 8, 0, 0 };
const stPairedPaletteInfo pairNext9 = { 9, 0, 0 };
const stPairedPaletteInfo pairNext10 = { 10, 0, 0 };
const stPairedPaletteInfo pairPrevious = { -1, 0, 0 };
const stPairedPaletteInfo pairPrevious2 = { -2, 0, 0 };

// Same thing as Previous, except flip the order of the joins to avoid sprite occlusion 
const stPairedPaletteInfo pairPreviousFlipped = { -1, 0, 0, true };
const stPairedPaletteInfo pairPreviousFlipped2 = { -2, 0, 0, true };

const stPairedPaletteInfo pairNextAndNext = { 1, 0, 0 }; // triple display... requires special handling in code

// Vs Series
const stPairedPaletteInfo pairCapComNinjas =  { 1, 28, 4 };
const stPairedPaletteInfo pairMVCDevilotNormal = { 1, 0, 0 }; // Don't use pairNext here: we manually tweak z-order
const stPairedPaletteInfo pairMVCDevilotBurnt = { 1, 7, 3 };
const stPairedPaletteInfo pairMVCLou = { 1, -80, -15 };
const stPairedPaletteInfo pairOnslaught = { 1, -24, 86 };
//const stPairedPaletteInfo pairTronBody = { 1, -4, -50 };

// Please note that the palette sort order in PalMod differs for MM in MvC1 and MvC2
const stPairedPaletteInfo pairMVC1RushDrill = { 9, 0, 0 };
const stPairedPaletteInfo pairMVC2RushDrill = { 30, 0, 0 };
const stPairedPaletteInfo pairHyperMegaman =  { 9, 31, 12 };

const stPairedPaletteInfo pairSFA2BisonHand = { 1, -141, -16 };

#pragma once

//A = Arcade
//X = XBox
//D = Dreamcast
//P = Playstation 2
//S = Steam
//GBA = GameBoy
//SNES = ...

// Needed for game tables
void StrRemoveNonASCII(WCHAR* pszOutput, size_t ccSize, LPCWSTR pszInput, bool fForceUpperCase = false);
void StruprRemoveNonASCII(WCHAR* pszOutput, size_t ccSize, LPCWSTR pszInput);

#include "ButtonDef.h"
#include "ImgIdDef.h"

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
    GGXXACR_S,
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
    DBZHD_SNES,
    MMX2_SNES,
    KOF00N_A,
    LASTBLADE_A,
    DUMMY_RGB888,
    DUMMY_BGR888,
    KOF95_A,
    KOF96_A,
    SAMSHO1_A,
    SAMSHO2_A,
    FatalFuryS_A,
    FatalFury1_A,
    GGXXACR_P,
    MBAACC_S,
    KOF98AE2016_A,
    MMX_SNES,
    MMX3_SNES,
    KI_SNES,
    RANMAHB_SNES,
    RANMACRH_SNES,
    SVG_SNES,
    REDEARTH_A_DIR_50,
    BMKNS_SNES,
    BSSMSJR_SNES,
    MAGICALDROPIII_A,
    KOF02PS2_A,
    MartialMasters_A,
    Gowcaizer_A,
    MAAB_A,
    JOJOSRPG_SNES,
    GGXXR_S,
    P4AU_NESICA,

    NUM_GAMES // This needs to be last
};

// If you're adding a new game you also must update 
//    CGameLoad::SetGame            Needed to load the game class
//    CGameLoad::CreateGame         Needed to load the game class
//    CPalModDlg::OnFileOpen        Ensures the user can open the game
//    CPalModDlg::OnEditPaste       Ensures that pastes work correctly
// 

// We want to keep these short for the titlebar: they're hard-limited by
// MAX_DESCRIPTION_LENGTH (96), so 64 is probably the max we want.
// Note that the games can override these values: these are just the defaults.
const WCHAR g_GameFriendlyName[][64] =
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
    L"X-Men: COTA (Arcade)",
    L"MVC2 (Arcade)",
    L"Garou: MotW (Neo-Geo)",
    L"Unknown Game",
    L"King of Fighters '98 (Neo-Geo)",
    L"King of Fighters 2002UM (Steam)",
    L"CVS2 (Arcade)",
    L"Garou: MotW (Steam)",
    L"King of Fighters 2002 (Neo-Geo)",
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
    L"Real Bout Fatal Fury Special (Neo-Geo)",
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
    L"King of Fighters XI (Atomiswave)",
    L"NGBC (Atomiswave)",
    L"Breakers Revenge (Neo-Geo)",
    L"SFIII:4rd Strike (Arcade)",
    L"Bleach DS (Nintendo DS)",
    L"King of Fighters 2003: 2004 EX Ultra Plus",
    L"MMPR:TFE (SNES)",
    L"King of Fighters 2001 (Neo-Geo)",
    L"Neo Bomberman (Neo-Geo)",
    L"Gundam Wing: Endless Duel (SNES)",
    L"King of Fighters '94 (Neo-Geo)",
    L"King of Fighters '99AE (Neo-Geo)",
    L"Clay Fighter: TE (SNES)",
    L"Fatal Fury Special (SNES)",
    L"Top Fighter 2005 (Sega)",
    L"SFIII:3S EX",
    L"GGXX:AC+R (Steam)",
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
    L"King of Fighters '97 (Neo-Geo)",
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
    L"DBZ: Hyper Dimension (SNES)",
    L"Mega Man X2 (SNES)",
    L"King of Fighters 2000n (Neo-Geo)",
    L"The Last Blade (Neo-Geo)",
    L"DUMMY_RGB888",
    L"DUMMY_BGR888",
    L"King of Fighters '95 (Neo-Geo)",
    L"King of Fighters '96 (Neo-Geo)",
    L"Samurai Shodown (Neo-Geo)",
    L"Samurai Shodown II (Neo-Geo)",
    L"Fatal Fury Special (Neo-Geo)",
    L"Fatal Fury: King of Fighters (Neo-Geo)",
    L"GGXX:AC+R (PlayStation 3)",
    L"Melty blood Actress Again Current Code",
    L"KOF98AE (2016 Romhack)",
    L"Mega Man X (SNES)",
    L"Mega Man X3 (SNES)",
    L"Killer Instinct (Rev 1 SNES)",
    L"Ranma Nibunnoichi: Hard Battle (SNES)",
    L"Ranma Nibunnoichi: Chougi Ranbu Hen (SNES)",
    L"Super Variable Geo (SNES)",
    L"Red Earth: Next (Arcade Rerip)",
    L"Battle Master: KnS (SNES)",
    L"Bishojo Senshi Sailor Moon S - JR (SNES)",
    L"Magical Drop III (Neo-Geo)",
    L"King of Fighters 2002PS2 (Neo-Geo hack)",
    L"Martial Masters (PGM)",
    L"Voltage Fighter Gowcaizer (Neo-Geo)",
    L"Million Arthur Arcana Blood (Steam)",
    L"Jojo's Bizarre Adventure (SNES)",
    L"Guilty Gear #Reload (Steam/Community Port)",
    L"Persona 4 Arena Ultimax 2.0 (NESICA)",
};

static_assert(ARRAYSIZE(g_GameFriendlyName) == NUM_GAMES, "The gameId enum and the descriptors in g_GameFriendlyName must match length.");

enum class GamePlatform
{
    CapcomCPS12 = 0,
    CapcomCPS3,
    NEOGEO,
    Nintendo,
    PGM,
    SammyAtomiswave,
    SegaNAOMI,
    Sega,
    Steam,
    Unknown,
    Last,
};

enum class GameSeries
{
    ArtOfFighting = 0,
    FatalFury,
    KOF,
    MvC,
    SamuraiShodown,
    SFA,
    SF2,
    SF3,
    VampireSavior,
    Unknown,
    Last,
};

// We use the first non-white space printable character '!' as the base for edit/paste calculations.
constexpr auto k_nASCIICharacterOffset = 33;
constexpr auto k_nASCIIMaxValue = 127;
constexpr auto k_nRawColorStringOverflowIndicator = '~' - k_nASCIICharacterOffset;
constexpr auto k_nEncodedColorStringOverflowIndicator = '~';

struct sSupportedGameList
{
    int nInternalGameIndex = 0;
    LPCWSTR szGameFriendlyName = L"uninit";
    LPCWSTR szGameFilterString = L"uninit";
    GamePlatform publisherKey = GamePlatform::Unknown;
    GameSeries seriesKey = GameSeries::Unknown;
    int nListedGameIndex = INVALID_UNIT_VALUE;
};

const int k_nTextureLoadCommandMask = 0xff00;
const int k_nGameLoadROMListMask = 0xf0000;
extern sSupportedGameList* pSupportedGameList;
extern const int nNumberOfLoadROMOptions;

//Image output display options
enum class eImageOutputSpriteDisplay
{
    DISPLAY_SPRITES_LEFTTORIGHT,
    DISPLAY_SPRITES_TOPTOBOTTOM
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
    int nPalettesToJoin = 2;
    int nOverallNodeIncrementTo2ndPartner = 2;
    int nOverallNodeIncrementTo3rdPartner = 3;
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

const stPairedPaletteInfo pairUnhandled =     { 0, 0, 0 };
const stPairedPaletteInfo pairHandledInCode = { 0, 0, 0 };
const stPairedPaletteInfo pairFullyLinkedNode = { 0, 0, 0, false, -1 };

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
const stPairedPaletteInfo pairNext11 = { 11, 0, 0 };
const stPairedPaletteInfo pairNext12 = { 12, 0, 0 };
const stPairedPaletteInfo pairNext15 = { 15, 0, 0 };
const stPairedPaletteInfo pairPrevious = { -1, 0, 0 };
const stPairedPaletteInfo pairPrevious2 = { -2, 0, 0 };
const stPairedPaletteInfo pairPrevious4 = { -4, 0, 0 };

// Same thing as Previous, except flip the order of the joins to avoid sprite occlusion 
const stPairedPaletteInfo pairPreviousFlipped = { -1, 0, 0, true };
const stPairedPaletteInfo pairPreviousFlipped2 = { -2, 0, 0, true };

const stPairedPaletteInfo pairNextAndNext =                         { 1, 0, 0, false, 3 }; // triple display... requires special handling in code
const stPairedPaletteInfo pairNextAndNextSkipped =                  { 1, 0, 0, false, 3, 3 }; // triple display... requires special handling in code

const stPairedPaletteInfo pairNextAndNext39 =                       { 1, 0, 0, false, 3, 39 }; // triple display... requires special handling in code
const stPairedPaletteInfo pairNextAndNext41 =                       { 1, 0, 0, false, 3, 41 }; // triple display... requires special handling in code
const stPairedPaletteInfo pairNextAndNext54 =                       { 1, 0, 0, false, 3, 54 }; // triple display... requires special handling in code
const stPairedPaletteInfo pairNextSkippedAndNextSkipped =           { 2, 0, 0, false, 3, 4 }; // triple display... requires special handling in code
const stPairedPaletteInfo pairNextAndNextAndNext =                  { 1, 0, 0, false, 4 };    // quad display... requires special handling in code
const stPairedPaletteInfo pairNextAndNext32AndNextSkipped =         { 1, 0, 0, false, 4, 32, 34 }; // quad display... requires special handling in code
const stPairedPaletteInfo pairNextAndNext41AndNext =                { 1, 0, 0, false, 4, 41, 42 }; // quad display... requires special handling in code
const stPairedPaletteInfo pairNextSkippedAndNextSkippedAndNext =    { 2, 0, 0, false, 4, 4, 5 }; // quad display... requires special handling in code
const stPairedPaletteInfo pairNext4AndNext =                        { 4, 0, 0, false, 3, 3 }; // triple display... requires special handling in code

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

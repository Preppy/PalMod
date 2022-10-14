#pragma once

//Legend:
//A = Arcade
//X = XBox
//D = Dreamcast
//NL = NESICAxLive
//P = Playstation 2/Playstation 3
//S = Steam
//GBA = GameBoy
//SNES = ...

// Needed for game tables
void StrRemoveNonASCII(wchar_t* pszOutput, uint32_t ccSize, LPCWSTR pszInput, bool fForceUpperCase = false);
void StruprRemoveNonASCII(wchar_t* pszOutput, uint32_t ccSize, LPCWSTR pszInput);

#include "ButtonDef.h"
#include "ImgIdDef.h"
#include "SuppProc.h"

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
    VENTURE_A,
    VENTURE_A_DIR_50,
    VENTURE_A_DIR_31,
    CYBERBOTS_A,
    DBZEB_DS,
    MBTL_A,
    KOF02UM_S_DIR_8888,
    KOF02UM_S_DIR_BGR555,
    KOF02UM_S_DIR_RGB555,
    MK1_SNES,
    MK2_SNES,
    SHAQFU_SNES,
    MVC2_D_16,
    UMK3_SNES,
    KOF97AE_A,
    KOF97GM_S,
    LASTBLADE_S,
    LASTBLADE2_S,
    SAMSHO5X_A,
    VampireNightWarriors_A,
    VampireHunter_A,
    SAMSHO5SP_S,
    JusticeLeagueTF_SNES,
    SFA2_Hack_A,
    UMK3_DS,
    P4AU_STEAM,
    BlazBlueCF_S,
    HSF2_A,
    FatalFury2_A,
    JOJOS_US_A,
    JOJOS_US_A_DIR_51,
    FotNS_P,
    BASARA_P,
    GalaxyFight_A,
    GGDS_NDS,
    MWARR_A,
    CVS1_A,
    PrimalRage_SNES,
    AvgrsGS_A,
    BtlKRoad_A,
    AsuraBuster_A,
    NBHID_S,
    FatalFury3_A,
    KabukiKlash_A,
    NBHID_NL,
    NBHID_P,
    AquaPlus_P,
    AquaPlus_NL,
    DaemonBride_NL,
    DaemonBrideAG_NL,

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
const wchar_t g_GameFriendlyName[][64] =
{
    L"MvC2 (Dreamcast)",
    L"SFIII:3S (CPS3 Arcade)",
    L"MvC2 (Playstation 2)",
    L"SSF2T (CPS2 Arcade)",
    L"SFA3 (CPS2 Arcade)",
    L"XMvSF (CPS2 Arcade)",
    L"MvC (CPS2 Arcade)",
    L"SFIII:3S (Dreamcast)",
    L"Jojo's (CPS3, Japan, Regulation: Off)",
    L"MSH (CPS2 Arcade)",
    L"MSHvSF (CPS2 Arcade)",
    L"X-Men: COTA (CPS2 Arcade)",
    L"MvC2 (NAOMI Arcade)",
    L"Garou: MotW (Neo-Geo)",
    L"Unknown Game",
    L"King of Fighters '98 (Neo-Geo)",
    L"King of Fighters 2002UM (Steam)",
    L"CvS2 (NAOMI Arcade)",
    L"Garou: MotW (Steam)",
    L"King of Fighters 2002 (Neo-Geo)",
    L"SFA2 (CPS2 Arcade)",
    L"SFIII:3S (CPS3 Arcade Rerip)",
    L"Jojo's 50 (CPS3 Japanese Arcade Rerip)",
    L"Jojo's 51 (CPS3 Japanese Arcade Rerip)",
    L"SvC Plus A",
    L"Samurai Shodown V Special (Neo-Geo)",
    L"MvC2 (NAOMI Arcade rerip)",
    L"Super Gem Fighter Mini Mix (USA 970904)",
    L"Red Earth (CPS3 Arcade, 31)",
    L"Red Earth (CPS3 Arcade Rerip, 3.x set 2)",
    L"Karnov's Revenge / Fighter's History Dynamite",
    L"Waku Waku 7",
    L"SFA1 (CPS2 Arcade)",
    L"Vampire Savior (CPS2 Arcade)",
    L"Vampire Savior 2 (CPS2 Arcade)",
    L"Real Bout Fatal Fury Special (Neo-Geo)",
    L"Samurai Shodown III (Neo-Geo)",
    L"Vampire Hunter 2 (CPS2 Arcade)",
    L"SFIII:2I (CPS3 Arcade)",
    L"SF2:HF (CPS1 Arcade)",
    L"SF2:CE (CPS1 Arcade)",
    L"SSF2T:Revival (GBA)",
    L"Matrimelee (Neo-Geo)",
    L"SFIII:NG (CPS3 Arcade)",
    L"Windjammers (Neo-Geo)",
    L"SFIII:3S Gill Glow (CPS3 Arcade Rerip)",
    L"King of Fighters XI (Atomiswave)",
    L"NGBC (Atomiswave)",
    L"Breakers Revenge (Neo-Geo)",
    L"SFIII:4rd Strike (CPS3 Arcade)",
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
    L"Dan-Ku-Ga (Taito F3 System Arcade)",
    L"Samurai Shodown IV (Neo-Geo)",
    L"Ring of Destruction: Slam Master's II",
    L"The Last Blade 2 (Neo-Geo)",
    L"Samurai Shodown V (Neo-Geo)",
    L"Real Bout Fatal Fury (Neo-Geo)",
    L"Real Bout Fatal Fury 2 (Neo-Geo)",
    L"Kizuna Encounter (Neo-Geo)",
    L"Street Fighter Zero 3 Upper (NAOMI)",
    L"Art of Fighting 1 (Neo-Geo)",
    L"Double Dragon (Neo-Geo)",
    L"Fake game ID for RGB444 little endian",
    L"Super Dodge Ball (Neo-Geo)",
    L"Ninja Masters (Neo-Geo)",
    L"SFIII:4rd Strike Gill Glow (CPS3 Arcade)",
    L"King of Fighters '97 (Neo-Geo)",
    L"SFIII:New Generation (CPS3 Arcade Rerip)",
    L"SFIII:2nd Impact (CPS3 Arcade Rerip)",
    L"Savage Reign (Neo-Geo)",
    L"Rage of the Dragons (Neo-Geo)",
    L"Garou: MotW (Neo-Geo Prototype)",
    L"Dengeki Bunko: Fighting Climax IGNITION",
    L"Under Night In-Birth Exe:Late[cl-r]",
    L"Super Puzzle Fighter II Turbo (CPS2 Arcade)",
    L"Marvel Super Heroes: War of the Gems (SNES)",
    L"Red Earth (CPS3 Arcade Rerip, 3.x set 1)",
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
    L"Melty Blood Actress Again Current Code",
    L"King of Fighters '98AE (2016 Romhack)",
    L"Mega Man X (SNES)",
    L"Mega Man X3 (SNES)",
    L"Killer Instinct (Rev 1 SNES)",
    L"Ranma Nibunnoichi: Hard Battle (SNES)",
    L"Ranma Nibunnoichi: Chougi Ranbu Hen (SNES)",
    L"Super Variable Geo (SNES)",
    L"Red Earth (CPS3 Arcade Rerip, 5.x)",
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
    L"Jojo's Venture (Japan)",
    L"Jojo's Venture (Japan Arcade, 50: Characters)",
    L"Jojo's Venture (Japan Arcade, 31: HUD Portraits)",
    L"Cyberbots: Fullmetal Madness (CPS2 Arcade)",
    L"Dragon Ball Z: Extreme Butoden (Nintendo 3DS)",
    L"Melty Blood: Type Lumina (Steam)",
    L"King of Fighters 2002UM (Steam, ARGB8888 parts)",
    L"King of Fighters 2002UM (Steam, BGR555 parts)",
    L"King of Fighters 2002UM (Steam, RGB555 parts)",
    L"Mortal Kombat (SNES)",
    L"Mortal Kombat II (SNES)",
    L"Shaq Fu (SNES)",
    L"MvC2 (Dreamcast Palette Expansion)",
    L"Ultimate Mortal Kombat 3 (USA SNES)",
    L"King of Fighters '97 Anniversary Edition (Neo-Geo)",
    L"King of Fighters '97 Global Match (Steam)",
    L"The Last Blade 1 (Steam)",
    L"The Last Blade 2 (Steam)",
    L"Samurai Shodown V (Xbox)",
    L"Vampire: The Night Warriors (CPS2)",
    L"Vampire Hunter (CPS2)",
    L"Samurai Shodown V Special (Steam)",
    L"Justice League Task Force (USA SNES)",
    L"SFA2 (CPS2 Palette Expansion)",
    L"Ultimate Mortal Kombat 3 (USA DS)",
    L"Persona 4 Arena Ultimax (Steam)",
    L"BlazBlue: Central Fiction (Steam)",
    L"Hyper Street Fighter 2",
    L"Fatal Fury 2 (Neo-Geo)",
    L"Jojo's (CPS3, USA, Regulation: On)",
    L"Jojo's 51 (CPS3 US Arcade Rerip)",
    L"Hokuto no Ken (PS2)",
    L"Sengoku BASARA X (PS2)",
    L"Galaxy Fight: Universal Warriors (Neo-Geo)",
    L"Guilty Gear: Dust Strikers (Nintendo DS)",
    L"Mighty Warriors (Elettronica Video Games)",
    L"Capcom vs SNK Millenium Fight (NAOMI)",
    L"Primal Rage (SNES)",
    L"Avengers in Galactic Storm (Data East)",
    L"Battle K-Road (Psikyo)",
    L"Asura Buster - Eternal Warriors (Fuuki)",
    L"Nitroplus Blasterz: Heroines Infinite Duel (Steam)",
    L"Fatal Fury 3 (Neo-Geo)",
    L"Kabuki Klash: Far East of Eden (Neo-Geo)",
    L"Nitroplus Blasterz: Heroines Infinite Duel (NESICAxLive)",
    L"Nitroplus Blasterz: Heroines Infinite Duel (PS3)",
    L"Aquapazza: Aquaplus Dream Match (PS3)",
    L"Aquapazza: Aquaplus Dream Match (NESICAxLive)",
    L"Daemon Bride (NESICAxLive)",
    L"Daemon Bride: Additional Gain (NESICAxLive)",
};

static_assert(ARRAYSIZE(g_GameFriendlyName) == NUM_GAMES, "The gameId enum and the descriptors in g_GameFriendlyName must match length.");

enum class GamePlatform
{
    CapcomCPS12 = 0,
    CapcomCPS3,
    NEOGEO,
    Nintendo,
    PGM,
    PS2,
    SammyAtomiswave,
    SegaNAOMI,
    Steam,
    OtherPlatform,
    DevMode,
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
    GamePlatform publisherKey = GamePlatform::DevMode;
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
    uint32_t uUnitN = INVALID_UNIT_VALUE;
    wchar_t szDesc[MAX_DESCRIPTION_LENGTH] = L"uninit";
    uint32_t uOffset = 0;
    uint16_t cbPaletteSize = 0;
    bool isInvisible = false;
    uint16_t indexImgToUse = INVALID_UNIT_VALUE; // the major character/collection index
    uint16_t indexOffsetToUse = 0x0; // subsprites within that collection
};

struct stPairedPaletteInfo
{
    int8_t nNodeIncrementToPartner = 1;
    bool fPairingIsFlipped = false;
    uint32_t nPalettesToJoin = 2;
    int8_t nOverallNodeIncrementTo2ndPartner = 2;
    int8_t nOverallNodeIncrementTo3rdPartner = 3;
    int8_t nOverallNodeIncrementTo4thPartner = 4;
    int8_t nOverallNodeIncrementTo5thPartner = 5;
    int8_t nOverallNodeIncrementTo6thPartner = 6;
    int8_t nOverallNodeIncrementTo7thPartner = 7;
};

bool ArePalettePairsEqual(const stPairedPaletteInfo* plhs, const stPairedPaletteInfo* prhs);

struct stPaletteProcessingInformation
{
    const std::vector<std::vector<uint16_t>> pProcessingSteps;
    bool fIsTarget = false;
};

struct sGame_PaletteDataset
{
    const LPCWSTR szPaletteName = L"uninit";
    const uint32_t nPaletteOffset = 0;
    const uint32_t nPaletteOffsetEnd = 0;
    const uint16_t indexImgToUse = INVALID_UNIT_VALUE; // the major character/collection index
    const uint16_t indexOffsetToUse = 0x0; // subsprites within that collection
    const stPairedPaletteInfo* pPalettePairingInfo = nullptr;
    const stPaletteProcessingInformation* pExtraProcessing = nullptr;
};

const stPairedPaletteInfo pairHandledInCode = { 0 };
const stPairedPaletteInfo pairFullyLinkedNode = { 0, false, -1 };

const stPairedPaletteInfo pairNext = { 1 };
const stPairedPaletteInfo pairNext2 = { 2 };
const stPairedPaletteInfo pairNext3 = { 3 };
const stPairedPaletteInfo pairNext4 = { 4 };
const stPairedPaletteInfo pairNext5 = { 5 };
const stPairedPaletteInfo pairNext6 = { 6 };
const stPairedPaletteInfo pairNext7 = { 7 };
const stPairedPaletteInfo pairNext8 = { 8 };
const stPairedPaletteInfo pairNext9 = { 9 };
const stPairedPaletteInfo pairNext10 = { 10 };
const stPairedPaletteInfo pairNext11 = { 11 };
const stPairedPaletteInfo pairNext12 = { 12 };
const stPairedPaletteInfo pairNext14 = { 14 };
const stPairedPaletteInfo pairNext15 = { 15 };
const stPairedPaletteInfo pairNext30 = { 30 };
const stPairedPaletteInfo pairPrevious = { -1 };
const stPairedPaletteInfo pairPrevious2 = { -2 };
const stPairedPaletteInfo pairPrevious3 = { -3 };
const stPairedPaletteInfo pairPrevious4 = { -4 };
const stPairedPaletteInfo pairPrevious5 = { -5 };
const stPairedPaletteInfo pairPrevious8 = { -8 };
const stPairedPaletteInfo pairPrevious9 = { -9 };
const stPairedPaletteInfo pairPrevious10 = { -10 };
const stPairedPaletteInfo pairPrevious14 = { -14 };

// Same thing as Previous, except flip the order of the joins to avoid sprite occlusion 
const stPairedPaletteInfo pairPreviousFlipped = { -1, true };
const stPairedPaletteInfo pairPreviousFlipped2 = { -2, true };

const stPairedPaletteInfo pairNextAndNext =                         { 1, false, 3 }; // triple display... requires special handling in code
const stPairedPaletteInfo pairNext2AndNext3 =                       { 2, false, 3, 3 }; // triple display... requires special handling in code
const stPairedPaletteInfo pairNextAndNextSkipped =                  { 1, false, 3, 3 }; // triple display... requires special handling in code
const stPairedPaletteInfo pairNextAndNext4 =                        { 1, false, 3, 4 }; // triple display... requires special handling in code
const stPairedPaletteInfo pairNextAndNext6 =                        { 1, false, 3, 6 }; // triple display... requires special handling in code
const stPairedPaletteInfo pairNextAndNext7 =                        { 1, false, 3, 7 }; // triple display... requires special handling in code
const stPairedPaletteInfo pairNextAndNext9 =                        { 1, false, 3, 9 }; // triple display... requires special handling in code
const stPairedPaletteInfo pairNextAndNext12 =                       { 1, false, 3, 12 }; // triple display... requires special handling in code

const stPairedPaletteInfo pairNextAndNext39 =                       { 1, false, 3, 39 }; // triple display... requires special handling in code
const stPairedPaletteInfo pairNextAndNext41 =                       { 1, false, 3, 41 }; // triple display... requires special handling in code
const stPairedPaletteInfo pairNextAndNext54 =                       { 1, false, 3, 54 }; // triple display... requires special handling in code
const stPairedPaletteInfo pairNextSkippedAndNextSkipped =           { 2, false, 3, 4 }; // triple display... requires special handling in code
const stPairedPaletteInfo pairNext4AndNext =                        { 4, false, 3, 3 }; // triple display... requires special handling in code

const stPairedPaletteInfo pairNext2AndNext6 =                       { 2, false, 3, 6 }; // triple display... requires special handling in code
const stPairedPaletteInfo pairNext3AndNext7 =                       { 3, false, 3, 7 }; // triple display... requires special handling in code
const stPairedPaletteInfo pairNext3AndNext8 =                       { 3, false, 3, 8 }; // triple display... requires special handling in code

const stPairedPaletteInfo pairNext3Palettes =                       { 1, false, 4 };          // quad display... requires special handling in code
const stPairedPaletteInfo pairNextAndNextSkippedPair =              { 1, false, 4, 3, 4 };    // quad display... requires special handling in code
const stPairedPaletteInfo pairNextAndNext32AndNextSkipped =         { 1, false, 4, 32, 34 };  // quad display... requires special handling in code
const stPairedPaletteInfo pairNextAndNext41AndNext =                { 1, false, 4, 41, 42 };  // quad display... requires special handling in code
const stPairedPaletteInfo pairNextSkippedAndNextSkippedAndNext =    { 2, false, 4, 4, 5 };    // quad display... requires special handling in code
const stPairedPaletteInfo pairNext4AndNextAndNext =                 { 4, false, 4, 5, 6 };    // quad display... requires special handling in code

const stPairedPaletteInfo pairNext4AndNext8AndNext9 =               { 4, false, 4, 8, 9 };    // quad display... requires special handling in code
const stPairedPaletteInfo pairNext4AndNext7AndNext8 =               { 4, false, 4, 7, 8 };    // quad display... requires special handling in code
const stPairedPaletteInfo pairNext4AndNext6AndNext7 =               { 4, false, 4, 6, 7 };    // quad display... requires special handling in code

const stPairedPaletteInfo pairNext4Palettes =                       { 1, false, 5 }; // quint-display -- specially handled
const stPairedPaletteInfo pairNextAndNextAndNextAndNext5 =          { 1, false, 5, 2, 3, 8 };     // quint display... requires special handling in code
const stPairedPaletteInfo pairNextAndNextAndNextAndNext9 =          { 1, false, 5, 2, 3, 12 };    // quint display... requires special handling in code
const stPairedPaletteInfo pairNextAndNextAndNextAndNext13 =         { 1, false, 5, 2, 3, 16 };    // quint display... requires special handling in code

const stPairedPaletteInfo pairNext5Palettes =                       { 1, false, 6 }; // six-display -- specially handled

const stPairedPaletteInfo pairNext6Palettes =                       { 1, false, 7 }; // Seven-display -- specially handled
const stPairedPaletteInfo pairNext7Palettes =                       { 1, false, 8 }; // eight-display -- specially handled
const stPairedPaletteInfo pairNext11Palettes =                      { 1, false, 12 };

constexpr auto MAXIMUM_PALETTE_PAIRS_ALLOWED = 12;

// Vs Series
const stPairedPaletteInfo pairMVCDevilotNormal =                    { 1, false, 4 }; // Don't use pairNext here: we manually tweak z-order

#pragma region SecondaryPaletteEffects

// 3S uses a blend of rgb(124,124,124) to achieve the Faded effects: these let me apply that to palettes
// everything over Skip2 is for stages
const std::vector<std::vector<uint16_t>> paletteBuddy_GreyTint_NextPalette =   { { SUPP_NODE, 0x01, 0, MOD_BLEND, 1, 0xFF, 1, 124, 124, 124 }, };
const std::vector<std::vector<uint16_t>> paletteBuddy_GreyTint_Skip1Palette =  { { SUPP_NODE, 0x02, 0, MOD_BLEND, 1, 0xFF, 1, 124, 124, 124 }, };
const std::vector<std::vector<uint16_t>> paletteBuddy_GreyTint_Skip2Palettes = { { SUPP_NODE, 0x03, 0, MOD_BLEND, 1, 0xFF, 1, 124, 124, 124 }, };
const std::vector<std::vector<uint16_t>> paletteBuddy_GreyTint_Skip3Palettes = { { SUPP_NODE, 0x04, 0, MOD_BLEND, 1, 0xFF, 1, 124, 124, 124 }, };
const std::vector<std::vector<uint16_t>> paletteBuddy_GreyTint_Skip4Palettes = { { SUPP_NODE, 0x05, 0, MOD_BLEND, 1, 0xFF, 1, 124, 124, 124 }, };
const std::vector<std::vector<uint16_t>> paletteBuddy_GreyTint_Skip5Palettes = { { SUPP_NODE, 0x06, 0, MOD_BLEND, 1, 0xFF, 1, 124, 124, 124 }, };
const std::vector<std::vector<uint16_t>> paletteBuddy_GreyTint_Skip6Palettes = { { SUPP_NODE, 0x07, 0, MOD_BLEND, 1, 0xFF, 1, 124, 124, 124 }, };
const std::vector<std::vector<uint16_t>> paletteBuddy_GreyTint_Skip7Palettes = { { SUPP_NODE, 0x08, 0, MOD_BLEND, 1, 0xFF, 1, 124, 124, 124 }, };
const std::vector<std::vector<uint16_t>> paletteBuddy_GreyTint_Skip8Palettes = { { SUPP_NODE, 0x09, 0, MOD_BLEND, 1, 0xFF, 1, 124, 124, 124 }, };
const std::vector<std::vector<uint16_t>> paletteBuddy_GreyTint_Skip9Palettes = { { SUPP_NODE, 0x0a, 0, MOD_BLEND, 1, 0xFF, 1, 124, 124, 124 }, };
const std::vector<std::vector<uint16_t>> paletteBuddy_GreyTint_Skip11Palettes = { { SUPP_NODE, 0x0c, 0, MOD_BLEND, 1, 0xFF, 1, 124, 124, 124 }, };
const std::vector<std::vector<uint16_t>> paletteBuddy_GreyTint_Skip12Palettes = { { SUPP_NODE, 0x0d, 0, MOD_BLEND, 1, 0xFF, 1, 124, 124, 124 }, };
const std::vector<std::vector<uint16_t>> paletteBuddy_GreyTint_Skip14Palettes = { { SUPP_NODE, 0x0f, 0, MOD_BLEND, 1, 0xFF, 1, 124, 124, 124 }, };
const std::vector<std::vector<uint16_t>> paletteBuddy_GreyTint_Skip15Palettes = { { SUPP_NODE, 0x10, 0, MOD_BLEND, 1, 0xFF, 1, 124, 124, 124 }, };
const std::vector<std::vector<uint16_t>> paletteBuddy_GreyTint_Skip16Palettes = { { SUPP_NODE, 0x11, 0, MOD_BLEND, 1, 0xFF, 1, 124, 124, 124 }, };
const std::vector<std::vector<uint16_t>> paletteBuddy_GreyTint_Skip18Palettes = { { SUPP_NODE, 0x13, 0, MOD_BLEND, 1, 0xFF, 1, 124, 124, 124 }, };
const std::vector<std::vector<uint16_t>> paletteBuddy_GreyTint_Skip31Palettes = { { SUPP_NODE, 0x20, 0, MOD_BLEND, 1, 0xFF, 1, 124, 124, 124 }, };

const stPaletteProcessingInformation secondaryGreyTintEffects{ paletteBuddy_GreyTint_NextPalette };
const stPaletteProcessingInformation secondaryGreyTintEffects_Skip1{ paletteBuddy_GreyTint_Skip1Palette };
const stPaletteProcessingInformation secondaryGreyTintEffects_Skip2{ paletteBuddy_GreyTint_Skip2Palettes };
const stPaletteProcessingInformation secondaryGreyTintEffects_Skip3{ paletteBuddy_GreyTint_Skip3Palettes };
const stPaletteProcessingInformation secondaryGreyTintEffects_Skip4{ paletteBuddy_GreyTint_Skip4Palettes };
const stPaletteProcessingInformation secondaryGreyTintEffects_Skip5{ paletteBuddy_GreyTint_Skip5Palettes };
const stPaletteProcessingInformation secondaryGreyTintEffects_Skip6{ paletteBuddy_GreyTint_Skip6Palettes };
const stPaletteProcessingInformation secondaryGreyTintEffects_Skip7{ paletteBuddy_GreyTint_Skip7Palettes };
const stPaletteProcessingInformation secondaryGreyTintEffects_Skip8{ paletteBuddy_GreyTint_Skip8Palettes };
const stPaletteProcessingInformation secondaryGreyTintEffects_Skip9{ paletteBuddy_GreyTint_Skip9Palettes };
const stPaletteProcessingInformation secondaryGreyTintEffects_Skip11{ paletteBuddy_GreyTint_Skip11Palettes };
const stPaletteProcessingInformation secondaryGreyTintEffects_Skip12{ paletteBuddy_GreyTint_Skip12Palettes };
const stPaletteProcessingInformation secondaryGreyTintEffects_Skip14{ paletteBuddy_GreyTint_Skip14Palettes };
const stPaletteProcessingInformation secondaryGreyTintEffects_Skip15{ paletteBuddy_GreyTint_Skip15Palettes };
const stPaletteProcessingInformation secondaryGreyTintEffects_Skip16{ paletteBuddy_GreyTint_Skip16Palettes };
const stPaletteProcessingInformation secondaryGreyTintEffects_Skip18{ paletteBuddy_GreyTint_Skip18Palettes };
const stPaletteProcessingInformation secondaryGreyTintEffects_Skip31{ paletteBuddy_GreyTint_Skip31Palettes };

#pragma endregion


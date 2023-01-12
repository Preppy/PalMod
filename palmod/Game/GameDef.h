#pragma once

//Legend:
//A = Arcade
//X = XBox
//D = Dreamcast
//NL = NESICAxLive
//P = Playstation
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
    NEOGEO_A = 0,
    DUMMY_RGB555_LE = 1,
    DUMMY_RGB444_BE = 2,
    GEMFIGHTER_A,
    WINDJAMMERS_A,
    NeoBomberman_A,
    DANKUGA_A,
    SPF2T_A,
    DUMMY_RGB888,
    DUMMY_BGR888,
    MAGICALDROPIII_A,
    MAGICALDROPII_A,
    LandMaker_A,
    LandMaker_P,
    DUMMY_RGB666_NEOGEO = 14,
    DEVMODE_DIR,
    
    DUMMY_RGB555_BE = 32,
    DUMMY_BGR555_LE = 41,
    DUMMY_RGB333 = 60,
    DUMMY_RGBA8887 = 62,
    DUMMY_RGB555_SHARP = 64,
    DUMMY_RGB444_LE = 75,
    
    DUMMY_RGBA8881 = 85,
    DUMMY_RGBA8888_LE = 86,

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
    L"Unknown Game (Neo-Geo)",
    L"DUMMY_RGB555_LE",
    L"DUMMY_RGB444_BE",
    L"Super Gem Fighter Mini Mix (USA 970904)",
    L"Windjammers (Neo-Geo)",
    L"Neo Bomberman (Neo-Geo)",
    L"Dan-Ku-Ga (Taito F3 System Arcade)",
    L"Super Puzzle Fighter II Turbo (CPS2 Arcade)",
    L"DUMMY_RGB888",
    L"DUMMY_BGR888",
    L"Magical Drop III (Neo-Geo)",
    L"Magical Drop II (Neo-Geo)",
    L"Land Maker (Taito F3 System Arcade)",
    L"Land Maker (PlayStation)",
    L"DUMMY_RGB666_NEOGEO",
    L"Unknown Game (Set of files)",
    L"",
    L"",
    L"",
    L"",
    L"",
    L"",
    L"",
    L"",
    L"",
    L"",
    L"",
    L"",
    L"",
    L"",
    L"",
    L"",
    L"DUMMY_RGB555_BE",
    L"",
    L"",
    L"",
    L"",
    L"",
    L"",
    L"",
    L"",
    L"DUMMY_BGR555_LE",
    L"",
    L"",
    L"",
    L"",
    L"",
    L"",
    L"",
    L"",
    L"",
    L"",
    L"",
    L"",
    L"",
    L"",
    L"",
    L"",
    L"",
    L"",
    L"DUMMY_RGB333",
    L"",
    L"DUMMY_RGBA8887",
    L"",
    L"DUMMY_RGB555_SHARP",
    L"",
    L"",
    L"",
    L"",
    L"",
    L"",
    L"",
    L"",
    L"",
    L"",
    L"DUMMY_RGB444_LE",
    L"",
    L"",
    L"",
    L"",
    L"",
    L"",
    L"",
    L"",
    L"",
    L"DUMMY_RGBA8881",
    L"DUMMY_RGB8888LE",
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
    NintendoDS,
    NintendoGBA,
    NintendoSNES,
    Unknown,
    Last,
};

// We use the first non-white space printable character '!' as the base for edit/paste calculations.
constexpr auto k_nASCIICharacterOffset = 33;
constexpr auto k_nASCIIMaxValue = 127;
constexpr auto k_nRawColorStringOverflowIndicator = '~' - k_nASCIICharacterOffset;
constexpr auto k_nEncodedColorStringOverflowIndicator = '~';

struct sSupportedGameToFileMap
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
extern std::vector<sSupportedGameToFileMap> g_rgGameToFileMap;

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

enum class PalettePairOptions
{
    None = 0,
    FlipDisplay         = 1 << 0,
    DisableMultiExport  = 1 << 1,
};

struct stPairedPaletteInfo
{
    int8_t nNodeIncrementToPartner = 1;
    PalettePairOptions options = PalettePairOptions::None;
    uint32_t nPalettesToJoin = 2;
    int8_t nOverallNodeIncrementTo2ndPartner = 2;
    int8_t nOverallNodeIncrementTo3rdPartner = 3;
    int8_t nOverallNodeIncrementTo4thPartner = 4;
    int8_t nOverallNodeIncrementTo5thPartner = 5;
    int8_t nOverallNodeIncrementTo6thPartner = 6;
    int8_t nOverallNodeIncrementTo7thPartner = 7;
};

constexpr bool operator&(PalettePairOptions left, PalettePairOptions right) {
    return (static_cast<uint8_t>(left) & static_cast<uint8_t>(right));
}

inline constexpr bool InvertPairingDisplay(const stPairedPaletteInfo *psPalInfo) { return psPalInfo->options & PalettePairOptions::FlipDisplay; };
inline constexpr bool DisableMultiSpriteExport(const stPairedPaletteInfo *psPalInfo) { return psPalInfo->options & PalettePairOptions::DisableMultiExport; };

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
const stPairedPaletteInfo pairFullyLinkedNode = { 0, {}, (uint32_t)-1 };

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
const stPairedPaletteInfo pairNext13 = { 13 };
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
const stPairedPaletteInfo pairPreviousFlipped = { -1, PalettePairOptions::FlipDisplay };
const stPairedPaletteInfo pairPreviousFlipped2 = { -2, PalettePairOptions::FlipDisplay };
const stPairedPaletteInfo pairPreviousFlipped3 = { -3, PalettePairOptions::FlipDisplay };
const stPairedPaletteInfo pairPreviousFlipped4 = { -4, PalettePairOptions::FlipDisplay };
const stPairedPaletteInfo pairPreviousFlipped5 = { -5, PalettePairOptions::FlipDisplay };
const stPairedPaletteInfo pairPreviousFlipped6 = { -6, PalettePairOptions::FlipDisplay };
const stPairedPaletteInfo pairPreviousFlipped7 = { -7, PalettePairOptions::FlipDisplay };

const stPairedPaletteInfo pairNextAndNext =                         { 1, {}, 3 }; // triple display... requires special handling in code
const stPairedPaletteInfo pairNext2AndNext3 =                       { 2, {}, 3, 3 }; // triple display... requires special handling in code
const stPairedPaletteInfo pairNext2AndNext4 =                       { 2, {}, 3, 4 }; // triple display... requires special handling in code
const stPairedPaletteInfo pairNextAndNextSkipped =                  { 1, {}, 3, 3 }; // triple display... requires special handling in code
const stPairedPaletteInfo pairNextAndNext4 =                        { 1, {}, 3, 4 }; // triple display... requires special handling in code
const stPairedPaletteInfo pairNextAndNext6 =                        { 1, {}, 3, 6 }; // triple display... requires special handling in code
const stPairedPaletteInfo pairNextAndNext7 =                        { 1, {}, 3, 7 }; // triple display... requires special handling in code
const stPairedPaletteInfo pairNextAndNext9 =                        { 1, {}, 3, 9 }; // triple display... requires special handling in code
const stPairedPaletteInfo pairNextAndNext12 =                       { 1, {}, 3, 12 }; // triple display... requires special handling in code
const stPairedPaletteInfo pairNextAndNext13 =                       { 1, {}, 3, 13 }; // triple display... requires special handling in code
const stPairedPaletteInfo pairPrevious2AndNext2 =                   { -2, {}, 3, 2 }; // triple display... requires special handling in code

const stPairedPaletteInfo pairNextAndNext39 =                       { 1, {}, 3, 39 }; // triple display... requires special handling in code
const stPairedPaletteInfo pairNextAndNext41 =                       { 1, {}, 3, 41 }; // triple display... requires special handling in code
const stPairedPaletteInfo pairNextAndNext54 =                       { 1, {}, 3, 54 }; // triple display... requires special handling in code
const stPairedPaletteInfo pairNextSkippedAndNextSkipped =           { 2, {}, 3, 4 }; // triple display... requires special handling in code
const stPairedPaletteInfo pairNext4AndNext =                        { 4, {}, 3, 3 }; // triple display... requires special handling in code

const stPairedPaletteInfo pairNext2AndNext6 =                       { 2, {}, 3, 6 }; // triple display... requires special handling in code
const stPairedPaletteInfo pairNext3AndNext7 =                       { 3, {}, 3, 7 }; // triple display... requires special handling in code
const stPairedPaletteInfo pairNext3AndNext8 =                       { 3, {}, 3, 8 }; // triple display... requires special handling in code

const stPairedPaletteInfo pairNext3Palettes =                       { 1, {}, 4 };          // quad display... requires special handling in code
const stPairedPaletteInfo pairNextAndNextSkippedPair =              { 1, {}, 4, 3, 4 };    // quad display... requires special handling in code
const stPairedPaletteInfo pairNextAndNext32AndNextSkipped =         { 1, {}, 4, 32, 34 };  // quad display... requires special handling in code
const stPairedPaletteInfo pairNextAndNext41AndNext =                { 1, {}, 4, 41, 42 };  // quad display... requires special handling in code
const stPairedPaletteInfo pairNextSkippedAndNextSkippedAndNext =    { 2, {}, 4, 4, 5 };    // quad display... requires special handling in code
const stPairedPaletteInfo pairNext4AndNextAndNext =                 { 4, {}, 4, 5, 6 };    // quad display... requires special handling in code

const stPairedPaletteInfo pairNext4AndNext8AndNext9 =               { 4, {}, 4, 8, 9 };    // quad display... requires special handling in code
const stPairedPaletteInfo pairNext4AndNext7AndNext8 =               { 4, {}, 4, 7, 8 };    // quad display... requires special handling in code
const stPairedPaletteInfo pairNext4AndNext6AndNext7 =               { 4, {}, 4, 6, 7 };    // quad display... requires special handling in code

const stPairedPaletteInfo pairNext4Palettes =                       { 1, {}, 5 }; // quint-display -- specially handled
const stPairedPaletteInfo pairNextAndNextAndNextAndNext5 =          { 1, {}, 5, 2, 3, 8 };     // quint display... requires special handling in code
const stPairedPaletteInfo pairNextAndNextAndNextAndNext9 =          { 1, {}, 5, 2, 3, 12 };    // quint display... requires special handling in code
const stPairedPaletteInfo pairNextAndNextAndNextAndNext13 =         { 1, {}, 5, 2, 3, 16 };    // quint display... requires special handling in code

const stPairedPaletteInfo pairNext5Palettes =                       { 1, {}, 6 }; // six-display -- specially handled

const stPairedPaletteInfo pairNext6Palettes =                       { 1, {}, 7 }; // Seven-display -- specially handled
const stPairedPaletteInfo pairNext7Palettes =                       { 1, {}, 8 }; // eight-display -- specially handled
const stPairedPaletteInfo pairNext11Palettes =                      { 1, {}, 12 };

// These must be used when you are doing the extremely fragile act of pairing cross-node.  For that type of pairing we need
// to disable multisprite export.
const stPairedPaletteInfo pairNextUnsafe = { 1, PalettePairOptions::DisableMultiExport };
const stPairedPaletteInfo pairNext2Unsafe = { 2, PalettePairOptions::DisableMultiExport };
const stPairedPaletteInfo pairNext3Unsafe = { 3, PalettePairOptions::DisableMultiExport };
const stPairedPaletteInfo pairNext4Unsafe = { 4, PalettePairOptions::DisableMultiExport };
const stPairedPaletteInfo pairNext5Unsafe = { 5, PalettePairOptions::DisableMultiExport };
const stPairedPaletteInfo pairNext6Unsafe = { 6, PalettePairOptions::DisableMultiExport };
const stPairedPaletteInfo pairNext7Unsafe = { 7, PalettePairOptions::DisableMultiExport };
const stPairedPaletteInfo pairNext8Unsafe = { 8, PalettePairOptions::DisableMultiExport };
const stPairedPaletteInfo pairNext9Unsafe = { 9, PalettePairOptions::DisableMultiExport };

constexpr auto MAXIMUM_PALETTE_PAIRS_ALLOWED = 12;

// Vs Series
const stPairedPaletteInfo pairMVCDevilotNormal = { 1, {}, 4 }; // Don't use pairNext here: we manually tweak z-order

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


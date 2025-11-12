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

#include <string>

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
    DEVMODE_A,
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
    AODK_A,
    MAGICALDROPII_A,
    SF1_A,
    DEVMODE_DIR,
    MK2_A,
    GGML_P,
    JCHAN_A,
    BattleFlipShot_A,
    SurvivalArts_A,
    UMK3_A,
    SFTM_A,
    HIppo_GBA,
    GGXXACP_Wii,
    BREAKERS_S,
    FightFever_A,
    TekkenAdvance_GBA,
    P4AU_FightClub,
    CVS2_D,
    CVS2_P,
    MVC_D,
    MVC_P,
    MSHVSF_P,
    XMVSF_P,
    TattooAsns_A,
    MK1_A,
    KOFEX2_GBA,
    CFE_P,
    KOF99_A,
    SVC_S,
    MVC2_S,
    COTA_S,
    MSH_S,
    MSHVSF_S,
    MVC_S,
    XMVSF_S,
    VampireNightWarriors_S,
    VampireHunter_S,
    VSAV_S,
    VHUNT2_S,
    VSAV2_S,
    SPF2T_S,
    GEMFIGHTER_S,
    HSF2_S,
    REDEARTH_S,
    SF1_S,
    SF2_S,
    SF2CE_S,
    SF2HF_S,
    SSF2T_S,
    SFA1_S,
    SFA2_S,
    SFA3_S,
    SFIII1_S,
    SFIII2_S,
    SFIII3_S,
    MVC2_S_DIR,
    GGXXACR_S_EXCHAR,
    GGXXACR_S_EXTRAS,
    CVS1_S,
    CVS2_S,
    SFZ3U_S,
    CFJ_S,
    SSF2T_NL,
    SF2WW_A,
    SSF2_A,
    SF2WW_S,
    SSF2_S,
    CYBERBOTS_S,
    PUNISHER_A,
    PUNISHER_S,
    SFZ3M_S,
    SFA3MAX_PSP_D,
    WorldHeroesPerfect_A,
    BnK_P,
    UNI2_S,
    AquaPlus_S,
    KIZUNA_S,
    RBFF2_S,
    TURFMASTERS_A,
    Daraku_A,
    FightersHistory_A,

    // This needs to be last and is used as a static_assert canary so you remember to update needed areas.
    NUM_GAMES
};

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
    MvCNormal,
    SamuraiShodown,
    SFA,
    SF2,
    SF3,
    VampireSavior,
    NintendoDS,
    NintendoGBA,
    NintendoSNES,
    CapcomFightCollection,
    SF30th,
    MvCSteam,
    CapcomFightCollection2,
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
    int nInternalGameIndex = NUM_GAMES;
    std::wstring strGameFriendlyName;
    std::wstring strGameFilterString;
    GamePlatform publisherKey = GamePlatform::DevMode;
    GameSeries seriesKey = GameSeries::Unknown;
    int nListedGameIndex = INVALID_UNIT_VALUE;
};

const int k_nTextureLoadCommandMask = 0xff00;
const int k_nGameLoadROMListMask = 0xf0000;

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
    BlendMode eBlendMode = BlendMode::Alpha;
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
const stPairedPaletteInfo pairFullyLinkedNode = { 0, {}, -1 };

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
const stPairedPaletteInfo pairNext21 = { 21 };
const stPairedPaletteInfo pairNext25 = { 25 };
const stPairedPaletteInfo pairNext30 = { 30 };
const stPairedPaletteInfo pairPrevious = { -1 };
const stPairedPaletteInfo pairPrevious2 = { -2 };
const stPairedPaletteInfo pairPrevious3 = { -3 };
const stPairedPaletteInfo pairPrevious4 = { -4 };
const stPairedPaletteInfo pairPrevious5 = { -5 };
const stPairedPaletteInfo pairPrevious8 = { -8 };
const stPairedPaletteInfo pairPrevious9 = { -9 };
const stPairedPaletteInfo pairPrevious10 = { -10 };
const stPairedPaletteInfo pairPrevious11 = { -11 };
const stPairedPaletteInfo pairPrevious14 = { -14 };
const stPairedPaletteInfo pairPrevious25 = { -25 };
const stPairedPaletteInfo pairPrevious35 = { -35 };

const stPairedPaletteInfo pairNextFlipped =  { 1, PalettePairOptions::FlipDisplay };
const stPairedPaletteInfo pairNextFlipped4 = { 4, PalettePairOptions::FlipDisplay };
const stPairedPaletteInfo pairNextFlipped35 = { 35, PalettePairOptions::FlipDisplay };

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
const stPairedPaletteInfo pairNext4AndNextAndNext =                 { 4, {}, 4, 5, 6 };    // quad display... requires special handling in code

const stPairedPaletteInfo pairNext4AndNext8AndNext9 =               { 4, {}, 4, 8, 9 };    // quad display... requires special handling in code
const stPairedPaletteInfo pairNext4AndNext7AndNext8 =               { 4, {}, 4, 7, 8 };    // quad display... requires special handling in code
const stPairedPaletteInfo pairNext4AndNext6AndNext7 =               { 4, {}, 4, 6, 7 };    // quad display... requires special handling in code

const stPairedPaletteInfo pairNext4Palettes =                       { 1, {}, 5 }; // quint-display -- specially handled
const stPairedPaletteInfo pairNextAndNextAndNextAndNext5 =          { 1, {}, 5, 2, 3, 8 };     // quint display... requires special handling in code
const stPairedPaletteInfo pairNextAndNextAndNextAndNext9 =          { 1, {}, 5, 2, 3, 12 };    // quint display... requires special handling in code
const stPairedPaletteInfo pairNextAndNextAndNextAndNext13 =         { 1, {}, 5, 2, 3, 16 };    // quint display... requires special handling in code
const stPairedPaletteInfo pairNext1245Palettes =                    { 1, {}, 5, 2, 4, 5 }; // quint-display -- specially handled
const stPairedPaletteInfo pairNext2346Palettes =                    { 2, {}, 5, 3, 4, 6 }; // quint-display -- specially handled

const stPairedPaletteInfo pairNext5Palettes =                       { 1, {}, 6 }; // six-display -- specially handled

const stPairedPaletteInfo pairNext6Palettes =                       { 1, {}, 7 }; // Seven-display -- specially handled
const stPairedPaletteInfo pairNext7Palettes =                       { 1, {}, 8 }; // eight-display -- specially handled
const stPairedPaletteInfo pairNext8Palettes =                       { 1, {}, 9 };
const stPairedPaletteInfo pairNext9Palettes =                       { 1, {}, 10 };
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

const stPaletteProcessingInformation effects_AdditiveBlend{ {}, BlendMode::AdditiveARGB };

#pragma endregion

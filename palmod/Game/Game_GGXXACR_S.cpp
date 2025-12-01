#include "StdAfx.h"
#include "Game_GGXXACR_S.h"
#include "..\PalMod.h"

#define GGXXACR_S_DEBUG DEFAULT_GAME_DEBUG_STATE

std::vector<sGCBUPF_BasicFileData> GGXXACR_S_ExtrasData =
{
    { L"Resource\\pr\\ver_100\\demo\\archive_jpf.bin",  L"Effects",             3041088, {}, {},   0x1806f0,        INVALID_UNIT_VALUE_16, 0, GGXXACR_S_EFFECTS_JPF },
    { L"Resource\\pr\\ver_100\\demo\\archive_jpf.bin",  L"Effects",             3041088, {}, {},   0x1806f0,        INVALID_UNIT_VALUE_16, 0, GGXXACR_S_DUSTS_JPF },
    { L"Resource\\pr\\ver_100\\demo\\archive_jpf.bin",  L"Effects",             3041088, {}, {},   0x1806f0,        INVALID_UNIT_VALUE_16, 0, GGXXACR_S_HITSPARKS_JPF },
    { L"Resource\\pr\\ver_100\\demo\\archive_jpf.bin",  L"HUD",                 3041088, {}, {},   0x2e0,           INVALID_UNIT_VALUE_16, 0, GGXXACR_S_HUDMenu },
    { L"Resource\\pr\\ver_100\\demo\\archive_jpf.bin",  L"HUD",                 3041088, {}, {},   0x1efc0,         INVALID_UNIT_VALUE_16, 0, GGXXACR_S_RoundMessages },
    { L"Resource\\pr\\ver_100\\demo\\select.bin",       L"Character Select Screen", 2960672, {}, {}, 0xe3260,       INVALID_UNIT_VALUE_16, 0, GGXXACR_S_SelectScreen },
    { L"Resource\\pr\\ver_100\\demo\\select.bin",       L"Character Select Screen", 2960672, {}, {}, 0x125b50,      INVALID_UNIT_VALUE_16, 0, GGXXACR_S_SelectScreenStages },
    { L"Resource\\pr\\ver_100\\demo\\select.bin",       L"Character Select Screen", 2960672, {}, {}, 0x2f0,         INVALID_UNIT_VALUE_16, 0, GGXXACR_S_SelectScreenPortraits },
    { L"Resource\\demo\\side_belt.bin",                 L"Sidebar",             2794128, {}, {},   0x110,           INVALID_UNIT_VALUE_16, 0, GGXXACR_S_Sidebar_Portraits_TypeA },
    { L"Resource\\demo\\side_belt.bin",                 L"Sidebar",             2794128, {}, {},   0x2D850,         INVALID_UNIT_VALUE_16, 0, GGXXACR_S_Sidebar_Portraits_TypeB },
    { L"Resource\\demo\\side_belt.bin",                 L"Sidebar",             2794128, {}, {},   0x599D0,         INVALID_UNIT_VALUE_16, 0, GGXXACR_S_Sidebar_Portraits_TypeC },
    { L"Resource\\demo\\side_belt.bin",                 L"Sidebar",             2794128, {}, {},   0xd4cf0,         INVALID_UNIT_VALUE_16, 0, GGXXACR_S_Sidebar_Portraits_TypeD },
    { L"Resource\\pr\\ver_100\\demo\\titleall.bin",     L"Bonus Palettes",      5281296, {}, {},   0x7AC70,         INVALID_UNIT_VALUE_16, 0, GGXXACR_S_Title },
    { L"Resource\\mission\\missionall.bin",             L"Bonus Palettes",      402800,  {}, {},   0x50530,         INVALID_UNIT_VALUE_16, 0, GGXXACR_S_MissionIcons },
};

std::vector<sGCBUPF_BasicFileData> GGXXACR_S_EXCharData =
{
    { L"Resource\\pr\\ver_100\\obj\\eab.bin",   L"EX A.B.A",        5912564,    GGXXACR_EXNode,     GGXXACRCorePalettesEx_S,  0x4b3ca0, indexGGXXSprites_ACR_ABA },
    { L"Resource\\pr\\ver_100\\obj\\ean.bin",   L"EX Anji Mito",    4520900,    GGXXACR_EXNode,     GGXXACRCorePalettesEx_S,  0x3eb460, indexGGXXSprites_ACR_Anji },
    { L"Resource\\pr\\ver_100\\obj\\eax.bin",   L"EX Axl Low",      4217220,    GGXXACR_EXNode,     GGXXACRCorePalettesEx_S,  0x35edf0, indexGGXXSprites_ACR_Axl },
    { L"Resource\\pr\\ver_100\\obj\\ebk.bin",   L"EX Baiken",       3601604,    GGXXACR_EXNode,     GGXXACRCorePalettesEx_S,  0x309920, indexGGXXSprites_ACR_Baiken },
    { L"Resource\\pr\\ver_100\\obj\\eyy.bin",   L"EX Bridget",      4206820,    GGXXACR_EXNode,     GGXXACRCorePalettesEx_S,  0x35d790, indexGGXXSprites_ACR_Bridget },
    { L"Resource\\pr\\ver_100\\obj\\ech.bin",   L"EX Chipp Zanuff", 3162804,    GGXXACR_EXNode,     GGXXACRCorePalettesEx_S,  0x29f630, indexGGXXSprites_ACR_Chipp },
    { L"Resource\\pr\\ver_100\\obj\\edz.bin",   L"EX Dizzy",        5594900,    GGXXACR_EXNode,     GGXXACRCorePalettesEx_S,  0x49a2c0, indexGGXXSprites_ACR_Dizzy },
    { L"Resource\\pr\\ver_100\\obj\\ezt.bin",   L"EX Eddie",        3185140,    GGXXACR_EXNode,     GGXXACRCorePalettesEx_S,  0x275d30, indexGGXXSprites_ACR_Eddie },
    { L"Resource\\pr\\ver_100\\obj\\efa.bin",   L"EX Faust",        4784260,    GGXXACR_EXNode,     GGXXACRCorePalettesEx_S,  0x3fe9f0, indexGGXXSprites_ACR_Faust },
    { L"Resource\\pr\\ver_100\\obj\\ein.bin",   L"EX I-No",         5762996,    GGXXACR_EXNode,     GGXXACRCorePalettesEx_S,  0x3f9060, indexGGXXSprites_ACR_Ino },
    { L"Resource\\pr\\ver_100\\obj\\ejm.bin",   L"EX Jam Kuradoberi",3812100,   GGXXACR_EXNode,     GGXXACRCorePalettesEx_S,  0x2c46d0, indexGGXXSprites_ACR_Jam },
    { L"Resource\\pr\\ver_100\\obj\\ejy.bin",   L"EX Johnny",       4210036,    GGXXACR_EXNode,     GGXXACRCorePalettesEx_S,  0x3b2250, indexGGXXSprites_ACR_Johnny },
    { L"Resource\\pr\\ver_100\\obj\\eky.bin",   L"EX Ky Kiske",     4859572,    GGXXACR_EXNode,     GGXXACRCorePalettesEx_S,  0x3cafd0, indexGGXXSprites_ACR_Ky },
    { L"Resource\\pr\\ver_100\\obj\\emy.bin",   L"EX May",          4675812,    GGXXACR_EXNode,     GGXXACRCorePalettesEx_S,  0x399780, indexGGXXSprites_ACR_May },
    { L"Resource\\pr\\ver_100\\obj\\eml.bin",   L"EX Millia Rage",  3003428,    GGXXACR_EXNode,     GGXXACRCorePalettesEx_S,  0x29d9c0, indexGGXXSprites_ACR_Millia },
    { L"Resource\\pr\\ver_100\\obj\\efr.bin",   L"EX Order-Sol",    5965396,    GGXXACR_EXNode,     GGXXACRCorePalettesEx_S,  0x45d9d0, indexGGXXSprites_ACR_OrderSol, 0x00, GGXXACR_S_EFR_EXTRAS },
    { L"Resource\\pr\\ver_100\\obj\\epo.bin",   L"EX Potemkin",     5313412,    GGXXACR_EXNode,     GGXXACRCorePalettesEx_S,  0x494170, indexGGXXSprites_ACR_Potemkin },
    { L"Resource\\pr\\ver_100\\obj\\erk.bin",   L"EX Robo-Ky",      4599332,    GGXXACR_EXNode,     GGXXACRCorePalettesEx_S,  0x3cfc80, indexGGXXSprites_ACR_RoboKy },
    { L"Resource\\pr\\ver_100\\obj\\esy.bin",   L"EX Slayer",       6221972,    GGXXACR_EXNode,     GGXXACRCorePalettesEx_S,  0x39ea30, indexGGXXSprites_ACR_Slayer },
    { L"Resource\\pr\\ver_100\\obj\\esl.bin",   L"EX Sol Badguy",   4679684,    GGXXACR_EXNode,     GGXXACRCorePalettesEx_S,  0x33b380, indexGGXXSprites_ACR_Sol },
    { L"Resource\\pr\\ver_100\\obj\\ets.bin",   L"EX Testament",    4775796,    GGXXACR_EXNode,     GGXXACRCorePalettesEx_S,  0x3f4780, indexGGXXSprites_ACR_Testament },
    { L"Resource\\pr\\ver_100\\obj\\eve.bin",   L"EX Venom",        2848292,    GGXXACR_EXNode,     GGXXACRCorePalettesEx_S,  0x271200, indexGGXXSprites_ACR_Venom },
    { L"Resource\\pr\\ver_100\\obj\\ezp.bin",   L"EX Zappa",        6044292,    GGXXACR_EXNode,     GGXXACRCorePalettesEx_S,  0x2a2e90, indexGGXXSprites_ACR_Zappa },
};

std::vector<sGCBUPF_BasicFileData> GGXXACR_S_CharacterData =
{
    //Alphabetical by character name, not by file name
    { L"Resource\\pr\\ver_100\\obj\\ab.bin",    L"A.B.A",           5715300,    GGXXACR_NormalNode, GGXXACRCorePalettes_S,    0x48ab50, indexGGXXSprites_ACR_ABA, 0x00, GGXXACR_S_AB_EXTRAS },
    { L"Resource\\pr\\ver_100\\obj\\an.bin",    L"Anji Mito",       4518932,    GGXXACR_NormalNode, GGXXACRCorePalettes_S,    0x3ea460, indexGGXXSprites_ACR_Anji, 0x00, GGXXACR_S_AN_EXTRAS },
    { L"Resource\\pr\\ver_100\\obj\\ax.bin",    L"Axl Low" ,        4225716,    GGXXACR_NormalNode, GGXXACRCorePalettes_S,    0x35ebe0, indexGGXXSprites_ACR_Axl },
    { L"Resource\\pr\\ver_100\\obj\\bk.bin",    L"Baiken",          3573668,    GGXXACR_NormalNode, GGXXACRCorePalettes_S,    0x308c20, indexGGXXSprites_ACR_Baiken, 0x00, GGXXACR_S_BK_EXTRAS },
    { L"Resource\\pr\\ver_100\\obj\\yy.bin",    L"Bridget",         4127716,    GGXXACR_NormalNode, GGXXACRCorePalettes_S,    0x34b210, indexGGXXSprites_ACR_Bridget, 0x00, GGXXACR_S_YY_EXTRAS },
    { L"Resource\\pr\\ver_100\\obj\\ch.bin",    L"Chipp Zanuff",    3113988,    GGXXACR_NormalNode, GGXXACRCorePalettes_S,    0x293560, indexGGXXSprites_ACR_Chipp, 0x00, GGXXACR_S_CH_EXTRAS },
    { L"Resource\\pr\\ver_100\\obj\\dz.bin",    L"Dizzy",           5352324,    GGXXACR_NormalNode, GGXXACRCorePalettes_S,    0x45d720, indexGGXXSprites_ACR_Dizzy, 0x00, GGXXACR_S_DZ_EXTRAS },
    { L"Resource\\pr\\ver_100\\obj\\zt.bin",    L"Eddie",           3289156,    GGXXACR_NormalNode, GGXXACRCorePalettes_S,    0x24e560, indexGGXXSprites_ACR_Eddie, 0x00, GGXXACR_S_ZT_EXTRAS },
    { L"Resource\\pr\\ver_100\\obj\\fa.bin",    L"Faust",           4773284,    GGXXACR_NormalNode, GGXXACRCorePalettes_S,    0x3fe9a0, indexGGXXSprites_ACR_Faust, 0x00, GGXXACR_S_FA_EXTRAS },
    { L"Resource\\pr\\ver_100\\obj\\in.bin",    L"I-No",            5609060,    GGXXACR_NormalNode, GGXXACRCorePalettes_S,    0x3e5370, indexGGXXSprites_ACR_Ino, 0x00, GGXXACR_S_IN_EXTRAS },
    { L"Resource\\pr\\ver_100\\obj\\jm.bin",    L"Jam Kuradoberi",  3827044,    GGXXACR_NormalNode, GGXXACRCorePalettes_S,    0x2c4e80, indexGGXXSprites_ACR_Jam, 0x00, GGXXACR_S_JM_EXTRAS },
    { L"Resource\\pr\\ver_100\\obj\\jy.bin",    L"Johnny",          4205892,    GGXXACR_NormalNode, GGXXACRCorePalettes_S,    0x3b0620, indexGGXXSprites_ACR_Johnny, 0x00, GGXXACR_S_JY_EXTRAS },
    { L"Resource\\pr\\ver_100\\obj\\js.bin",    L"Justice",         4556788,    GGXXACR_NormalNode, GGXXACRCorePalettes_S,    0x3789b0, indexGGXXSprites_ACR_Justice, 0x00, GGXXACR_S_JS_EXTRAS },
    { L"Resource\\pr\\ver_100\\obj\\kr.bin",    L"Kliff Undersn",   3114036,    GGXXACR_NormalNode, GGXXACRCorePalettes_S,    0x28abf0, indexGGXXSprites_ACR_Kliff, 0x00, GGXXACR_S_KR_EXTRAS },
    { L"Resource\\pr\\ver_100\\obj\\ky.bin",    L"Ky Kiske",        4571540,    GGXXACR_NormalNode, GGXXACRCorePalettes_S,    0x38bbc0, indexGGXXSprites_ACR_Ky, 0x00, GGXXACR_S_KY_EXTRAS },
    { L"Resource\\pr\\ver_100\\obj\\my.bin",    L"May",             4311684,    GGXXACR_NormalNode, GGXXACRCorePalettes_S,    0x363d50, indexGGXXSprites_ACR_May, 0x00, GGXXACR_S_MY_EXTRAS },
    { L"Resource\\pr\\ver_100\\obj\\ml.bin",    L"Millia Rage",     3034084,    GGXXACR_NormalNode, GGXXACRCorePalettes_S,    0x2a4950, indexGGXXSprites_ACR_Millia, 0x00, GGXXACR_S_ML_EXTRAS },
    { L"Resource\\pr\\ver_100\\obj\\fr.bin",    L"Order-Sol",       5772356,    GGXXACR_NormalNode, GGXXACRCorePalettes_S,    0x4377e0, indexGGXXSprites_ACR_OrderSol, 0x00, GGXXACR_S_FR_EXTRAS },
    { L"Resource\\pr\\ver_100\\obj\\po.bin",    L"Potemkin",        5277348,    GGXXACR_NormalNode, GGXXACRCorePalettes_S,    0x489c70, indexGGXXSprites_ACR_Potemkin, 0x00, GGXXACR_S_PO_EXTRAS },
    { L"Resource\\pr\\ver_100\\obj\\rk.bin",    L"Robo-Ky",         4489668,    GGXXACR_NormalNode, GGXXACRCorePalettes_S,    0x3a7450, indexGGXXSprites_ACR_RoboKy, 0x0, GGXXACR_S_RK_EXTRAS },
    { L"Resource\\pr\\ver_100\\obj\\sy.bin",    L"Slayer",          6215652,    GGXXACR_NormalNode, GGXXACRCorePalettes_S,    0x39c960, indexGGXXSprites_ACR_Slayer, 0x00, GGXXACR_S_SY_EXTRAS },
    { L"Resource\\pr\\ver_100\\obj\\sl.bin",    L"Sol Badguy",      4613188,    GGXXACR_NormalNode, GGXXACRCorePalettes_S,    0x339b60, indexGGXXSprites_ACR_Sol, 0x00, GGXXACR_S_SL_EXTRAS },
    { L"Resource\\pr\\ver_100\\obj\\ts.bin",    L"Testament",       4817508,    GGXXACR_NormalNode, GGXXACRCorePalettes_S,    0x3ee950, indexGGXXSprites_ACR_Testament, 0x00, GGXXACR_S_TS_EXTRAS },
    { L"Resource\\pr\\ver_100\\obj\\ve.bin",    L"Venom",           2787412,    GGXXACR_NormalNode, GGXXACRCorePalettes_S,    0x261c10, indexGGXXSprites_ACR_Venom, 0x00, GGXXACR_S_VE_EXTRAS },
    { L"Resource\\pr\\ver_100\\obj\\zp.bin",    L"Zappa",           6019988,    GGXXACR_NormalNode, GGXXACRCorePalettes_S,    0x2a54f0, indexGGXXSprites_ACR_Zappa, 0x00, GGXXACR_S_ZP_EXTRAS },
};

CGame_GGXXACR_S::CGame_GGXXACR_S(uint32_t nConfirmedROMSize, SupportedGamesList nGGXXACRSetToLoad)
{
    switch (nGGXXACRSetToLoad)
    {
    case GGXXACR_S_EXTRAS:
        InitializeGame(nConfirmedROMSize, m_sCoreGameData_Extras);
        return;
    case GGXXACR_S_EXCHAR:
        InitializeGame(nConfirmedROMSize, m_sCoreGameData_EXChar);
        return;
    case GGXXACR_S:
        InitializeGame(nConfirmedROMSize, m_sCoreGameData_Characters);
        return;
    };
}

void CGame_GGXXACR_S::LoadSpecificPaletteData(uint32_t nUnitId, uint32_t nPalId)
{
    CGameClassPerUnitPerFile::LoadSpecificPaletteData(nUnitId, nPalId);

    uint32_t nFileId = 0, nCharacterId = 0;
    
    GetFileIndexFromCharacterIndex(nUnitId, nPalId, nFileId, nCharacterId);
    
    if ((m_psCurrentGameLoadingData->srgLoadingData.at(nFileId).sExtrasNodeData.strExtraCollectionName == k_strSidebarPortraits_TypeA) ||
        (m_psCurrentGameLoadingData->srgLoadingData.at(nFileId).sExtrasNodeData.strExtraCollectionName == k_strSidebarPortraits_TypeB) ||
        (m_psCurrentGameLoadingData->srgLoadingData.at(nFileId).sExtrasNodeData.strExtraCollectionName == k_strSidebarPortraits_TypeC) ||
        (m_psCurrentGameLoadingData->srgLoadingData.at(nFileId).sExtrasNodeData.strExtraCollectionName == k_strSidebarPortraits_TypeD) ||
        (m_psCurrentGameLoadingData->srgLoadingData.at(nFileId).sExtrasNodeData.strExtraCollectionName == k_strTitleScreen))
    {
        m_createPalOptions.nTransparencyColorPosition = 257;
    }
    else
    {
        m_createPalOptions.nTransparencyColorPosition = 0;
    }
}

bool CGame_GGXXACR_S::IsGGXXACRFileEncrypted(CFile* LoadedFile)
{
    bool fIsEncrypted = false;
    // check the first four bytes
    const uint32_t nuint16_tsToRead = 2;
    std::array<uint16_t, nuint16_tsToRead> prgFileStart = { 0, 0 };
    std::map<std::wstring, uint64_t> decryptedFileBytes =
    {
        { L"ab.bin", 0x20000000 },
        { L"ak.bin", 0x20000000 },
        { L"an.bin", 0x20000000 },
        { L"ax.bin", 0x20000000 },
        { L"bk.bin", 0x20000000 },
        { L"ch.bin", 0x20000000 },
        { L"dz.bin", 0x20000000 },
        { L"eab.bin", 0x20000000 },
        { L"ean.bin", 0x20000000 },
        { L"eax.bin", 0x20000000 },
        { L"ebk.bin", 0x20000000 },
        { L"ech.bin", 0x20000000 },
        { L"edz.bin", 0x20000000 },
        { L"efa.bin", 0x20000000 },
        { L"efr.bin", 0x20000000 },
        { L"ein.bin", 0x20000000 },
        { L"ejm.bin", 0x30000000 },
        { L"ejy.bin", 0x20000000 },
        { L"eky.bin", 0x10000000 },
        { L"eml.bin", 0x20000000 },
        { L"emy.bin", 0x30000000 },
        { L"epo.bin", 0x20000000 },
        { L"erk.bin", 0x20000000 },
        { L"esl.bin", 0x20000000 },
        { L"esy.bin", 0x20000000 },
        { L"ets.bin", 0x20000000 },
        { L"eve.bin", 0x30000000 },
        { L"eyy.bin", 0x20000000 },
        { L"ezp.bin", 0x20000000 },
        { L"ezt.bin", 0x20000000 },
        { L"fa.bin", 0x20000000 },
        { L"fr.bin", 0x20000000 },
        { L"in.bin", 0x20000000 },
        { L"jm.bin", 0x30000000 },
        { L"js.bin", 0x20000000 },
        { L"jy.bin", 0x20000000 },
        { L"kr.bin", 0x10000000 },
        { L"ky.bin", 0x10000000 },
        { L"ml.bin", 0x20000000 },
        { L"my.bin", 0x30000000 },
        { L"po.bin", 0x20000000 },
        { L"rk.bin", 0x20000000 },
        { L"sl.bin", 0x20000000 },
        { L"sy.bin", 0x20000000 },
        { L"ts.bin", 0x20000000 },
        { L"ve.bin", 0x30000000 },
        { L"yy.bin", 0x20000000 },
        { L"zp.bin", 0x20000000 },
        { L"zt.bin", 0x20000000 }
    };

    LoadedFile->Seek(0, CFile::begin);
    LoadedFile->Read((void*)&prgFileStart[0], nuint16_tsToRead * sizeof(uint16_t));

#if GGXXACR_S_DEBUG
    CString strByteWatch;
    OutputDebugString(L"\tByte sniff for this file: ");
    for (uint16_t nIndex = 0; nIndex < nuint16_tsToRead; nIndex++)
    {
        strByteWatch.Format(L"0x%04x, ", prgFileStart[nIndex]);
        OutputDebugString(strByteWatch);
    }
#endif

    auto thisFile = decryptedFileBytes.find(LoadedFile->GetFileName().GetString());

    if (thisFile != decryptedFileBytes.end())
    {
        fIsEncrypted = ((((thisFile->second & 0xFF000000) >> 24) != prgFileStart[0]) ||
                          (((thisFile->second & 0xFF0000) >> 16) != prgFileStart[1]));
    }

#if GGXXACR_S_DEBUG
    OutputDebugString(fIsEncrypted ? L": confirmed ENCRYPTED\n" : L": confirmed decrypted\n");
#endif
    return fIsEncrypted;
}

bool CGame_GGXXACR_S::IsGGXXACRFileModified(CFile* LoadedFile)
{
    // You can customize the models using some tools: bow out of touching modified files.
    bool fIsModified = false;
    std::map<std::wstring, std::vector<byte>> standardFileBytes =
    {
        { L"archive_jpf.bin", { 0x40, 0x00, 0x00, 0x00, 0x90, 0xBC, 0x07, 0x00,
                                0x90, 0xAF, 0x08, 0x00, 0xD0, 0x8E, 0x15, 0x00,
                                0x10, 0xA1, 0x15, 0x00, 0x50, 0x01, 0x16, 0x00,
                                0xC0, 0xF7, 0x21, 0x00, 0xB0, 0x2D, 0x23, 0x00,
                                0xF0, 0xDB, 0x25, 0x00, 0x90, 0xA7, 0x27, 0x00,
                                0x60, 0xE4, 0x28, 0x00, 0x70, 0xE4, 0x28, 0x00,
                                0xB0, 0xA6, 0x2A, 0x00, 0x90, 0xA2, 0x2B, 0x00,
                                0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF } },
        { L"missionall.bin", { 0x10, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF,
                               0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
                               0xA0, 0x00, 0x00, 0x00, 0x50, 0xAE, 0x04, 0x00,
                               0x00, 0xAF, 0x04, 0x00, 0xB0, 0xAF, 0x04, 0x00,
                               0x90, 0xBF, 0x04, 0x00, 0xB0, 0xCD, 0x04, 0x00,
                               0x70, 0xDB, 0x04, 0x00, 0x50, 0xE4, 0x04, 0x00,
                               0x90, 0xEF, 0x04, 0x00, 0x40, 0xFB, 0x04, 0x00,
                               0x10, 0x05, 0x05, 0x00, 0x60, 0x0A, 0x05, 0x00,
                               0xB0, 0x0F, 0x05, 0x00, 0x20, 0x15, 0x05, 0x00,
                               0x70, 0x1A, 0x05, 0x00, 0xA0, 0x1F, 0x05, 0x00,
                               0xF0, 0x24, 0x05, 0x00, 0x60, 0x2A, 0x05, 0x00,
                               0xD0, 0x2F, 0x05, 0x00, 0x60, 0x35, 0x05, 0x00,
                               0x30, 0x3A, 0x05, 0x00, 0x50, 0x3F, 0x05, 0x00,
                               0xB0, 0x44, 0x05, 0x00, 0x00, 0x4A, 0x05, 0x00,
                               0x50, 0x4F, 0x05, 0x00, 0xB0, 0x54, 0x05, 0x00,
                               0x40, 0x5A, 0x05, 0x00, 0x80, 0x5F, 0x05, 0x00,
                               0xD0, 0x64, 0x05, 0x00, 0x40, 0x6A, 0x05, 0x00,
                               0xB0, 0x6F, 0x05, 0x00, 0x00, 0x75, 0x05, 0x00,
                               0xC0, 0x7A, 0x05, 0x00, 0x10, 0x80, 0x05, 0x00,
                               0x70, 0x85, 0x05, 0x00, 0xD0, 0x8A, 0x05, 0x00,
                               0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
                               0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF} },
        { L"side_belt.bin",  { 0x00, 0x01, 0x00, 0x00, 0xD0, 0x62, 0x01, 0x00,
                               0x40, 0xD8, 0x02, 0x00, 0x10, 0x3C, 0x04, 0x00,
                               0xC0, 0x99, 0x05, 0x00, 0xC0, 0x86, 0x06, 0x00,
                               0xC0, 0x73, 0x07, 0x00, 0xC0, 0xB8, 0x07, 0x00,
                               0xA0, 0xF4, 0x07, 0x00, 0x00, 0x2D, 0x08, 0x00,
                               0xE0, 0x65, 0x08, 0x00, 0x90, 0xA6, 0x08, 0x00,
                               0xB0, 0xDB, 0x08, 0x00, 0x40, 0x1C, 0x09, 0x00,
                               0x10, 0x61, 0x09, 0x00, 0x40, 0x9A, 0x09, 0x00,
                               0xA0, 0xD2, 0x09, 0x00, 0x50, 0x0C, 0x0A, 0x00,
                               0x80, 0x48, 0x0A, 0x00, 0x60, 0x90, 0x0A, 0x00,
                               0xE0, 0xC7, 0x0A, 0x00, 0xF0, 0x05, 0x0B, 0x00,
                               0x40, 0x43, 0x0B, 0x00, 0xE0, 0x83, 0x0B, 0x00,
                               0x10, 0xBA, 0x0B, 0x00, 0xE0, 0xF2, 0x0B, 0x00,
                               0x40, 0x25, 0x0C, 0x00, 0xB0, 0x5A, 0x0C, 0x00,
                               0xC0, 0x9A, 0x0C, 0x00, 0x10, 0xCE, 0x0C, 0x00,
                               0x30, 0x0F, 0x0D, 0x00, 0xE0, 0x4C, 0x0D, 0x00,
                               0x10, 0x76, 0x0E, 0x00, 0xB0, 0x9A, 0x0F, 0x00,
                               0xD0, 0xCE, 0x10, 0x00, 0xA0, 0xED, 0x11, 0x00,
                               0x80, 0x10, 0x13, 0x00, 0xD0, 0x27, 0x14, 0x00,
                               0xE0, 0x59, 0x15, 0x00, 0x70, 0x7E, 0x16, 0x00,
                               0x40, 0x8A, 0x17, 0x00, 0xB0, 0x9D, 0x18, 0x00,
                               0x50, 0xCB, 0x19, 0x00, 0xB0, 0x05, 0x1B, 0x00,
                               0x40, 0x2C, 0x1C, 0x00, 0x30, 0x4A, 0x1D, 0x00,
                               0x30, 0x7C, 0x1E, 0x00, 0x70, 0x9E, 0x1F, 0x00,
                               0xF0, 0xAE, 0x20, 0x00, 0xB0, 0xCC, 0x21, 0x00,
                               0x90, 0xDB, 0x22, 0x00, 0x90, 0x01, 0x24, 0x00,
                               0x90, 0x22, 0x25, 0x00, 0xB0, 0x56, 0x26, 0x00,
                               0xA0, 0x73, 0x27, 0x00, 0x00, 0xB8, 0x28, 0x00,
                               0x10, 0xC2, 0x29, 0x00, 0x80, 0x8D, 0x2A, 0x00,
                               0x60, 0x94, 0x2A, 0x00, 0x80, 0x9B, 0x2A, 0x00,
                               0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
                               0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF } },
        { L"select.bin", { 0x10, 0x00, 0x00, 0x00, 0xD0, 0xEB, 0x1B, 0x00,
                           0xC0, 0x9C, 0x2C, 0x00, 0xFF, 0xFF, 0xFF, 0xFF } },
        { L"titleall.bin", { 0x10, 0x00, 0x00, 0x00, 0xC0, 0x0E, 0x37, 0x00,
                             0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF } },
    };

    auto thisFile = standardFileBytes.find(LoadedFile->GetFileName().GetString());

    if (thisFile != standardFileBytes.end())
    {
        const size_t c_nBytesToRead = thisFile->second.size();
        std::vector<byte> prgFileStart;
        prgFileStart.resize(c_nBytesToRead);
        LoadedFile->Seek(0, CFile::begin);
        LoadedFile->Read((void*)&prgFileStart[0], static_cast<UINT>(c_nBytesToRead * sizeof(byte)));

        for (size_t nPos = 0; nPos < c_nBytesToRead; nPos++)
        {
            if (thisFile->second.at(nPos) != prgFileStart[nPos])
            {
                fIsModified = true;
            }
        }
    }

#if GGXXACR_S_DEBUG
    OutputDebugString(fIsModified ? L": confirmed MODIFIED\n" : L": confirmed unmodified\n");
#endif
    return fIsModified;
}

BOOL CGame_GGXXACR_S::LoadFile(CFile* LoadedFile, uint32_t nUnitNumber)
{
    BOOL fSuccess = TRUE;
    CString strInfo;
    
#if GGXXACR_S_DEBUG
    strInfo.Format(L"CGame_GGXXACR_S::LoadFile: Preload for file unit number %u (character %s): checking usability state\n", nUnitNumber, GGXXACR_S_CharacterData[nUnitNumber].strCharacter.c_str());
    OutputDebugString(strInfo);
#endif
    if (m_fFileIsUsable)
    {
        if (IsGGXXACRFileEncrypted(LoadedFile))
        {
            // They aren't using a decrypted file set...
            // Fail the load: warn one time
            m_fFileIsUsable = false;

            CString strWarning;
            if (strWarning.LoadString(IDS_ERROR_ENCRYPTED))
            {
                MessageBox(g_appHWnd, strWarning, GetHost()->GetAppName(), MB_ICONSTOP);
            }
        }
        else if (IsGGXXACRFileModified(LoadedFile))
        {
            CString strMessage;
            strMessage.Format(L"Error: the file %s appears to be a customized non-standard version.\n\n"
                              L"PalMod will not work correctly with this file.  If this file has been edited with Gear Studio,"
                              L" please use that for palette editing instead.", LoadedFile->GetFileName().GetString());
            MessageBox(g_appHWnd, strMessage, GetHost()->GetAppName(), MB_ICONSTOP);
            m_fFileIsUsable = false;
        }
    }
    
    if (!m_fFileIsUsable)
    {
        fSuccess = FALSE;
        OutputDebugString(L"\tThis fileset is not usable: skipping.\r\n");
    }
    else
    {
        struct sOffsetMap
        {
            std::wstring strFileName = L"";
            uint32_t nReadOffset = 0;
            uint32_t nStockOffset = 0;
        };

        static std::vector<sOffsetMap> s_dwStockOffsets =
        {
            { L"ab.bin", 0x2c, 0x48aac0 },
            { L"an.bin", 0x2c, 0x3ea3d0 },
            { L"ax.bin", 0x2c, 0x35eb50 },
            { L"bk.bin", 0x2c, 0x308b90 },
            { L"yy.bin", 0x2c, 0x34b180 },
            { L"ch.bin", 0x2c, 0x2934d0 },
            { L"dz.bin", 0x2c, 0x45d690 },
            { L"zt.bin", 0x2c, 0x24e4d0 },
            { L"fa.bin", 0x2c, 0x3fe910 },
            { L"in.bin", 0x2c, 0x3e52e0 },
            { L"jm.bin", 0x3c, 0x2c4de0},
            { L"jy.bin", 0x2c, 0x3b0590 },
            { L"js.bin", 0x2c, 0x378920 },
            { L"kr.bin", 0x1c, 0x28ab70 },
            { L"ky.bin", 0x1c, 0x38bb40 },
            { L"my.bin", 0x3c, 0x363cb0 },
            { L"ml.bin", 0x2c, 0x2a48c0 },
            { L"fr.bin", 0x2c, 0x437750 },
            { L"po.bin", 0x2c, 0x489be0 },
            { L"rk.bin", 0x2c, 0x3a73c0 },
            { L"sy.bin", 0x2c, 0x39c8d0 },
            { L"sl.bin", 0x2c, 0x339ad0 },
            { L"ts.bin", 0x2c, 0x3ee8c0 },
            { L"ve.bin", 0x3c, 0x261b70 },
            { L"zp.bin", 0x2c, 0x2a5460 },
            { L"eab.bin", 0x2c, 0x4b3c10 },
            { L"ean.bin", 0x2c, 0x3eb3d0 },
            { L"eax.bin", 0x2c, 0x35ed60 },
            { L"ebk.bin", 0x2c, 0x309890 },
            { L"eyy.bin", 0x2c, 0x35d700 },
            { L"ech.bin", 0x2c, 0x29f5a0 },
            { L"edz.bin", 0x2c, 0x49a230 },
            { L"ezt.bin", 0x2c, 0x275ca0 },
            { L"efa.bin", 0x2c, 0x3fe960 },
            { L"ein.bin", 0x2c, 0x3f8fd0 },
            { L"ejm.bin", 0x3c, 0x2c4630 },
            { L"ejy.bin", 0x2c, 0x3b21c0 },
            { L"eky.bin", 0x1c, 0x3caf50 },
            { L"emy.bin", 0x3c, 0x3996e0 },
            { L"eml.bin", 0x2c, 0x29d930 },
            { L"efr.bin", 0x2c, 0x45d940 },
            { L"epo.bin", 0x2c, 0x4940e0 },
            { L"erk.bin", 0x2c, 0x3cfbf0 },
            { L"esy.bin", 0x2c, 0x39e9a0 },
            { L"esl.bin", 0x2c, 0x33b2f0 },
            { L"ets.bin", 0x2c, 0x3f46f0 },
            { L"eve.bin", 0x3c, 0x271160 },
            { L"ezp.bin", 0x2c, 0x2a2e00 },
        };

        for (auto& offsetItem : s_dwStockOffsets)
        {
            if (_wcsicmp(offsetItem.strFileName.c_str(), LoadedFile->GetFileName().GetString()) == 0)
            {
                uint32_t nPaletteOffset = 0;

                LoadedFile->Seek(offsetItem.nReadOffset, CFile::begin);
                LoadedFile->Read(&nPaletteOffset, sizeof(nPaletteOffset));

                if (nPaletteOffset != offsetItem.nStockOffset)
                {
                    const int32_t nDelta = nPaletteOffset - offsetItem.nStockOffset;

                    switch (m_nGameFlag)
                    {
                        case GGXXACR_S_EXTRAS:
                            m_sCoreGameData_Extras.srgLoadingData.at(nUnitNumber).nRevisionSpecificAdditionalOffset = nDelta;
                            break;
                        case GGXXACR_S_EXCHAR:
                            m_sCoreGameData_EXChar.srgLoadingData.at(nUnitNumber).nRevisionSpecificAdditionalOffset = nDelta;
                            break;
                        case GGXXACR_S:
                            m_sCoreGameData_Characters.srgLoadingData.at(nUnitNumber).nRevisionSpecificAdditionalOffset = nDelta;
                            break;
                    };
                }
                break;
            }
        }

        CGameClassPerUnitPerFile::LoadFile(LoadedFile, nUnitNumber);
    }

    return fSuccess;
}

// Currently unused
std::map<uint32_t, uint8_t> mapACRSpriteIdToACRGameId =
{
    // "None",         //00
    { indexGGXXSprites_ACR_Sol,       1 },
    { indexGGXXSprites_ACR_Ky,        2 },
    { indexGGXXSprites_ACR_May,       3 },
    { indexGGXXSprites_ACR_Millia,    4 },
    { indexGGXXSprites_ACR_Axl,       5 },
    { indexGGXXSprites_ACR_Potemkin,  6 },
    { indexGGXXSprites_ACR_Chipp,     7 },
    { indexGGXXSprites_ACR_Eddie,     8 },
    { indexGGXXSprites_ACR_Baiken,    9 },
    { indexGGXXSprites_ACR_Faust,     10 },
    { indexGGXXSprites_ACR_Testament, 11 },
    { indexGGXXSprites_ACR_Jam,       12 },
    { indexGGXXSprites_ACR_Anji,      13 },
    { indexGGXXSprites_ACR_Johnny,    14 },
    { indexGGXXSprites_ACR_Venom,     15 },
    { indexGGXXSprites_ACR_Dizzy,     16 },
    { indexGGXXSprites_ACR_Slayer,    17 },
    { indexGGXXSprites_ACR_Ino,       18 },
    { indexGGXXSprites_ACR_Zappa,     19 },
    { indexGGXXSprites_ACR_Bridget,   20 },
    { indexGGXXSprites_ACR_RoboKy,    21 },
    { indexGGXXSprites_ACR_ABA,       22 },
    { indexGGXXSprites_ACR_OrderSol,  23 },
    { indexGGXXSprites_ACR_Kliff,     24 },
    { indexGGXXSprites_ACR_Justice,   25 },
};

uint8_t TranslatePalModSpriteIdToACRGameId(uint32_t nSpriteId)
{
    std::map<uint32_t, uint8_t>::iterator it;

    it = mapACRSpriteIdToACRGameId.find(nSpriteId);

    if (it != mapACRSpriteIdToACRGameId.end())
    {
        return it->second;
    }
    else
    {
        OutputDebugString(L"Error: invalid ACR ID.\r\n");
        return 0;
    }
}

uint32_t TranslateACRGameIdToPalModSpriteId(uint8_t nGameId)
{
    for (auto it = mapACRSpriteIdToACRGameId.begin(); it != mapACRSpriteIdToACRGameId.end(); it++)
    {
        if (it->second == nGameId)
        {
            return it->first;
        }
    }

    OutputDebugString(L"Error: invalid ACR ID.\r\n");
    return 0;
}

#include "StdAfx.h"
#include "Game_GGXXACR_S.h"
#include "..\PalMod.h"

#define GGXXACR_S_DEBUG DEFAULT_GAME_DEBUG_STATE

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

    { L"Resource\\pr\\ver_100\\demo\\archive_jpf.bin",  L"Bonus Palettes",  3041088, {}, {},   0x1806f0,   static_cast<uint32_t>(-1), 0, GGXXACR_S_EXTRAS_JPF },
    { L"Resource\\pr\\ver_100\\demo\\archive_jpf.bin",  L"Bonus Palettes",  3041088, {}, {},   0x2e0,      static_cast<uint32_t>(-1), 0, GGXXACR_S_HUDMenu },
    { L"Resource\\pr\\ver_100\\demo\\archive_jpf.bin",  L"Bonus Palettes",  3041088, {}, {},   0x1efc0,    static_cast<uint32_t>(-1), 0, GGXXACR_S_RoundMessages },
    { L"Resource\\demo\\side_belt.bin",                 L"Bonus Palettes",  2794128, {}, {},   0x110,      static_cast<uint32_t>(-1), 0, GGXXACR_S_Sidebar_Portraits },
    { L"Resource\\pr\\ver_100\\demo\\select.bin",       L"Bonus Palettes",  2960672, {}, {},   0xe3260,    static_cast<uint32_t>(-1), 0, GGXXACR_S_SelectScreen },
    { L"Resource\\pr\\ver_100\\demo\\select.bin",       L"Bonus Palettes",  2960672, {}, {},   0x2f0,      static_cast<uint32_t>(-1), 0, GGXXACR_S_SelectScreenPortraits },
    { L"Resource\\pr\\ver_100\\demo\\titleall.bin",     L"Bonus Palettes",  5281296, {}, {},   0x7AC70,    static_cast<uint32_t>(-1), 0, GGXXACR_S_Title },
    { L"Resource\\mission\\missionall.bin",             L"Bonus Palettes",  402800,  {}, {},   0,          static_cast<uint32_t>(-1), 0, GGXXACR_S_MissionIcons },
};

void CGame_GGXXACR_S::LoadSpecificPaletteData(uint32_t nUnitId, uint32_t nPalId)
{
    CGameClassPerUnitPerFile::LoadSpecificPaletteData(nUnitId, nPalId);

    // The sidebar portrait and title screen palettes don't actually use a transparency color: we'll use this check to handle this for now.
    if (GGXXACR_S_CharacterData[nUnitId].prgBasicPalettes.empty())
    {
        uint32_t nFileId = 0, nCharacterId = 0;

        GetFileIndexFromCharacterIndex(nUnitId, nPalId, nFileId, nCharacterId);

        if ((m_psCurrentGameLoadingData->srgLoadingData.at(nFileId).sExtrasNodeData.strExtraCollectionName == k_strSidebarPortraits) ||
            (m_psCurrentGameLoadingData->srgLoadingData.at(nFileId).sExtrasNodeData.strExtraCollectionName == k_strTitleScreen))
        {
            m_createPalOptions.nTransparencyColorPosition = 257;
        }
        else
        {
            m_createPalOptions.nTransparencyColorPosition = 0;
        }
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

BOOL CGame_GGXXACR_S::LoadFile(CFile* LoadedFile, uint32_t nUnitNumber)
{
    BOOL fSuccess = TRUE;
    CString strInfo;
    
#if GGXXACR_S_DEBUG
    strInfo.Format(L"CGame_GGXXACR_S::LoadFile: Preload for file unit number %u (character %s): checking encryption state\n", nUnitNumber, GGXXACR_S_CharacterData[nUnitNumber].strCharacter.c_str());
    OutputDebugString(strInfo);
#endif
    if (!m_fIsFileSetEncrypted)
    {
        if (IsGGXXACRFileEncrypted(LoadedFile))
        {
            // They aren't using a decrypted file set...
            // Fail the load: warn one time
            m_fIsFileSetEncrypted = true;

            CString strWarning;
            if (strWarning.LoadString(IDS_ERROR_ENCRYPTED))
            {
                MessageBox(g_appHWnd, strWarning, GetHost()->GetAppName(), MB_ICONSTOP);
            }
        }
    }
    
    if (m_fIsFileSetEncrypted)
    {
        fSuccess = FALSE;
        OutputDebugString(L"\tThis fileset is encrypted: skipping.\r\n");
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
                    int32_t nDelta = nPaletteOffset - offsetItem.nStockOffset;
                    m_sCoreGameData.srgLoadingData.at(nUnitNumber).nRevisionSpecificAdditionalOffset = nDelta;
                }
            }
        }

        CGameClassPerUnitPerFile::LoadFile(LoadedFile, nUnitNumber);
    }

    return fSuccess;
}

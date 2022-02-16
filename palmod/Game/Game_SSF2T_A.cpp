#include "StdAfx.h"
#include "Game_SSF2T_A.h"
#include "GameDef.h"
#include "..\PalMod.h"

#define SSF2T_DEBUG DEFAULT_GAME_DEBUG_STATE

stExtraDef* CGame_SSF2T_A::SSF2T_A_EXTRA_CUSTOM_3C = nullptr;
stExtraDef* CGame_SSF2T_A::SSF2T_A_EXTRA_CUSTOM_4A = nullptr;
stExtraDef* CGame_SSF2T_A::SSF2T_A_EXTRA_CUSTOM_8 = nullptr;

CDescTree CGame_SSF2T_A::MainDescTree_3C = nullptr;
CDescTree CGame_SSF2T_A::MainDescTree_4A = nullptr;
CDescTree CGame_SSF2T_A::MainDescTree_8 = nullptr;

uint32_t CGame_SSF2T_A::m_nSSF2TSelectedRom = 4;
UINT32 CGame_SSF2T_A::m_nTotalPaletteCountForSSF2T_3C = 0;
UINT32 CGame_SSF2T_A::m_nTotalPaletteCountForSSF2T_4A = 0;
UINT32 CGame_SSF2T_A::m_nTotalPaletteCountForSSF2T_8 = 0;

uint32_t CGame_SSF2T_A::rgExtraLoc_3C[SSF2T_A_NUM_IND_3C + 1] = { (uint32_t)-1 };
uint32_t CGame_SSF2T_A::rgExtraLoc_4A[SSF2T_A_NUM_IND_4A + 1] = { (uint32_t)-1 };
uint32_t CGame_SSF2T_A::rgExtraLoc_8[SSF2T_A_NUM_IND_8 + 1] = { (uint32_t)-1 };
uint32_t CGame_SSF2T_A::rgExtraCountAll_3C[SSF2T_A_NUM_IND_3C + 1] = { (uint32_t)-1 };
uint32_t CGame_SSF2T_A::rgExtraCountAll_4A[SSF2T_A_NUM_IND_4A + 1] = { (uint32_t)-1 };
uint32_t CGame_SSF2T_A::rgExtraCountAll_8[SSF2T_A_NUM_IND_8 + 1] = { (uint32_t)-1 };

UINT32 CGame_SSF2T_A::m_nExpectedGameROMSize = 0x80000; // 524288 bytes
UINT32 CGame_SSF2T_A::m_nConfirmedROMSize = -1;

void CGame_SSF2T_A::InitializeStatics()
{
    safe_delete_array(CGame_SSF2T_A::SSF2T_A_EXTRA_CUSTOM_3C);
    safe_delete_array(CGame_SSF2T_A::SSF2T_A_EXTRA_CUSTOM_4A);
    safe_delete_array(CGame_SSF2T_A::SSF2T_A_EXTRA_CUSTOM_8);

    memset(rgExtraLoc_3C, -1, sizeof(rgExtraLoc_3C));
    memset(rgExtraLoc_4A, -1, sizeof(rgExtraLoc_4A));
    memset(rgExtraLoc_8, -1, sizeof(rgExtraLoc_8));
    memset(rgExtraCountAll_3C, -1, sizeof(rgExtraCountAll_3C));
    memset(rgExtraCountAll_4A, -1, sizeof(rgExtraCountAll_4A));
    memset(rgExtraCountAll_8, -1, sizeof(rgExtraCountAll_8));

    MainDescTree_3C.SetRootTree(CGame_SSF2T_A::InitDescTree(3));
    MainDescTree_4A.SetRootTree(CGame_SSF2T_A::InitDescTree(4));
    MainDescTree_8.SetRootTree(CGame_SSF2T_A::InitDescTree(8));
}

CGame_SSF2T_A::CGame_SSF2T_A(UINT32 nConfirmedROMSize, int nSSF2TRomToLoad)
{
    createPalOptions = { NO_SPECIAL_OPTIONS, WRITE_16 };
    SetAlphaMode(AlphaMode::GameDoesNotUseAlpha);
    SetColorMode(ColMode::COLMODE_RGB444_BE);

    // We need this set before we initialize so that corrupt Extras truncate correctly.
    // Otherwise the new user inadvertently corrupts their ROM.
    m_nConfirmedROMSize = nConfirmedROMSize;
    InitializeStatics();

    m_nSSF2TSelectedRom = nSSF2TRomToLoad;

    CString strMessage;
    strMessage.Format(L"CGame_SSF2T_A::CGame_SSF2T_A: Loading for the %u ROM\n", m_nSSF2TSelectedRom);
    OutputDebugString(strMessage);

    const UINT32 nSafeCountFor3C = 322;
    const UINT32 nSafeCountFor4A = 704;
    const UINT32 nSafeCountFor8 = 69;

    switch (m_nSSF2TSelectedRom)
    {
    case 3:
        m_nTotalInternalUnits = SSF2T_A_NUM_IND_3C;
        m_nExtraUnit = SSF2T_A_EXTRALOC_3C;
        m_nSafeCountForThisRom  = nSafeCountFor3C;
        m_pszExtraFilename = EXTRA_FILENAME_SSF2T_3C;
        m_nTotalPaletteCount = m_nTotalPaletteCountForSSF2T_3C;
        m_nLowestKnownPaletteRomLocation = m_uLowestKnownPaletteROMLocation_3C;
        break;
    case 4:
    default:
        m_nTotalInternalUnits = SSF2T_A_NUM_IND_4A;
        m_nExtraUnit = SSF2T_A_EXTRALOC_4A;
        m_nSafeCountForThisRom = nSafeCountFor4A;
        m_pszExtraFilename = EXTRA_FILENAME_SSF2T_4A;
        m_nTotalPaletteCount = m_nTotalPaletteCountForSSF2T_4A;
        m_nLowestKnownPaletteRomLocation = m_uLowestKnownPaletteROMLocation_4A;
        break;
    case 8:
        m_nTotalInternalUnits = SSF2T_A_NUM_IND_8;
        m_nExtraUnit = SSF2T_A_EXTRALOC_8;
        m_nSafeCountForThisRom = nSafeCountFor8;
        m_pszExtraFilename = EXTRA_FILENAME_SSF2T_8;
        m_nTotalPaletteCount = m_nTotalPaletteCountForSSF2T_8;
        m_nLowestKnownPaletteRomLocation = m_uLowestKnownPaletteROMLocation_8;
        break;
    }

    m_nSafeCountForThisRom += GetExtraCt(m_nExtraUnit);

    nUnitAmt = m_nTotalInternalUnits + (GetExtraCt(m_nExtraUnit) ? 1 : 0);

    InitDataBuffer();

    //Set game information
    nGameFlag = SSF2T_A;
    nImgGameFlag = IMGDAT_SECTION_SF2;
    m_prgGameImageSet = SSF2T_A_IMGIDS_USED;

    nFileAmt = 1;

    //Set the image out display type
    DisplayType = eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT;
    pButtonLabelSet = DEF_BUTTONLABEL_ST10;
    
    //Create the redirect buffer
    rgUnitRedir = new uint32_t[nUnitAmt + 1];
    memset(rgUnitRedir, NULL, sizeof(uint32_t) * nUnitAmt);

    //Create the file changed flag
    PrepChangeTrackingArray();
}

CGame_SSF2T_A::~CGame_SSF2T_A(void)
{
    safe_delete_array(CGame_SSF2T_A::SSF2T_A_EXTRA_CUSTOM_3C);
    safe_delete_array(CGame_SSF2T_A::SSF2T_A_EXTRA_CUSTOM_4A);
    safe_delete_array(CGame_SSF2T_A::SSF2T_A_EXTRA_CUSTOM_8);
    ClearDataBuffer();
    //Get rid of the file changed flag
    FlushChangeTrackingArray();
}

UINT32 CGame_SSF2T_A::GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet, bool* pfNeedToValidateCRCs)
{
    static sCRC32ValueSet knownROMs[] =
    {
#ifdef MAME_NOTES
      we care about 03 and 04
GAME(1994, ssf2t,      0,        cps2, cps2_2p6b, cps2_state, init_cps2,     ROT0,   "Capcom", "Super Street Fighter II Turbo (World 940223)", MACHINE_SUPPORTS_SAVE)
    ROM_LOAD16_WORD_SWAP("sfxe.03c", 0x000000, 0x80000, CRC(2fa1f396) SHA1(2aa58309811f34901554b84396556630a22ce9bc))
    ROM_LOAD16_WORD_SWAP("sfxe.04a", 0x080000, 0x80000, CRC(d0bc29c6) SHA1(d9f89bcd79cba26db2100a00dd7bd8ee6ecb75f3))
    ROM_LOAD16_WORD_SWAP("sfxe.08",  0x280000, 0x80000, CRC(74c24062) SHA1(f3eca09e0544c6aa46b0c4bead2246ab1e9a97d9))
GAME(1994, ssf2ta,     ssf2t,    cps2, cps2_2p6b, cps2_state, init_cps2,     ROT0,   "Capcom", "Super Street Fighter II Turbo (Asia 940223)", MACHINE_SUPPORTS_SAVE)
    ROM_LOAD16_WORD_SWAP("sfxa.03c", 0x000000, 0x80000, CRC(04b9ff34) SHA1(69feb2c9c03634e6f964dae310d7b72b4c76140d))
    ROM_LOAD16_WORD_SWAP("sfxa.04a", 0x080000, 0x80000, CRC(16ea5f7a) SHA1(08404c6a79b9a36eceb06e0d3e1d747a21fac186))
    ROM_LOAD16_WORD_SWAP("sfxa.08",  0x280000, 0x80000, CRC(39be596c) SHA1(f7ab80e64cbb703535dd39b875273eefa57df489))
GAME(1994, ssf2th,     ssf2t,    cps2, cps2_2p6b, cps2_state, init_cps2,     ROT0,   "Capcom", "Super Street Fighter II Turbo (Hispanic 940223)", MACHINE_SUPPORTS_SAVE)
    ROM_LOAD16_WORD_SWAP("sfxh.03c", 0x000000, 0x80000, CRC(fbe80dfe) SHA1(b9c5f0a0f6ae7839e348c870ac87b16dbb665bd9))
    ROM_LOAD16_WORD_SWAP("sfxh.04a", 0x080000, 0x80000, CRC(ef9dd4b1) SHA1(3c5d76e6ae7db91f9287f341c32e3b7a75e256f6))
    ROM_LOAD16_WORD_SWAP("sfxh.08",  0x280000, 0x80000, CRC(c15f0424) SHA1(de9f7075f02653c4edef0e6f4a1210a9b2711d28))
GAME(1994, ssf2tu,     ssf2t,    cps2, cps2_2p6b, cps2_state, init_cps2,     ROT0,   "Capcom", "Super Street Fighter II Turbo (USA 940323)", MACHINE_SUPPORTS_SAVE)
    ROM_LOAD16_WORD_SWAP("sfxu.03e", 0x000000, 0x80000, CRC(d6ff689e) SHA1(bea1a8aafbbbe9cb0895561a57dead1579361a8e))
    ROM_LOAD16_WORD_SWAP("sfxu.04a", 0x080000, 0x80000, CRC(532b5ffd) SHA1(769a8a9d4e04e291ce7427b89e537bba2258ca82))
    ROM_LOAD16_WORD_SWAP("sfxu.08",  0x280000, 0x80000, CRC(b3c71810) SHA1(b51515f4f4aee5bbbfc8b79372d0bc6e0c140912))
GAME(1994, ssf2tur1,   ssf2t,    cps2, cps2_2p6b, cps2_state, init_cps2,     ROT0,   "Capcom", "Super Street Fighter II Turbo (USA 940223)", MACHINE_SUPPORTS_SAVE)
    ROM_LOAD16_WORD_SWAP("sfxu.03c", 0x000000, 0x80000, CRC(86e4a335) SHA1(04db3fd519973aeb7b32be62871e0fb4605946eb))
    ROM_LOAD16_WORD_SWAP("sfxu.04a", 0x080000, 0x80000, CRC(532b5ffd) SHA1(769a8a9d4e04e291ce7427b89e537bba2258ca82))
    ROM_LOAD16_WORD_SWAP("sfxu.08",  0x280000, 0x80000, CRC(b3c71810) SHA1(b51515f4f4aee5bbbfc8b79372d0bc6e0c140912))

GAME(1994, ssf2xj,     ssf2t,    cps2, cps2_2p6b, cps2_state, init_cps2,     ROT0,   "Capcom", "Super Street Fighter II X: Grand Master Challenge (Japan 940311)", MACHINE_SUPPORTS_SAVE)
    ROM_LOAD16_WORD_SWAP("sfxj.03d", 0x000000, 0x80000, CRC(50b52b37) SHA1(dc0330fcbffbc0077faa20d34a28d6a49b04639e))
    ROM_LOAD16_WORD_SWAP("sfxj.04a", 0x080000, 0x80000, CRC(af7767b4) SHA1(61e7364408bf07c01634913c112b6245acce48ab))
    ROM_LOAD16_WORD_SWAP("sfxj.08",  0x280000, 0x80000, CRC(2de76f10) SHA1(8cbe96dfeaa41306caa2819b82272ce3b0b9f926))
GAME(1994, ssf2xjr1,   ssf2t,    cps2, cps2_2p6b, cps2_state, init_cps2,     ROT0,   "Capcom", "Super Street Fighter II X: Grand Master Challenge (Japan 940223)", MACHINE_SUPPORTS_SAVE)
    ROM_LOAD16_WORD_SWAP("sfxj.03c", 0x000000, 0x80000, CRC(a7417b79) SHA1(189c3ed546bb2844e9fa9fe7e9aacef728bc8939))
    ROM_LOAD16_WORD_SWAP("sfxj.04a", 0x080000, 0x80000, CRC(af7767b4) SHA1(61e7364408bf07c01634913c112b6245acce48ab))
    ROM_LOAD16_WORD_SWAP("sfxj.08",  0x280000, 0x80000, CRC(2de76f10) SHA1(8cbe96dfeaa41306caa2819b82272ce3b0b9f926))
GAME(1994, ssf2xjr1r,  ssf2t,    cps2, cps2_2p6b, cps2_state, init_cps2,     ROT0,   "Capcom", "Super Street Fighter II X: Grand Master Challenge (Japan 940223 rent version)", MACHINE_SUPPORTS_SAVE)
    ROM_LOAD16_WORD_SWAP("sfxo.03c", 0x000000, 0x80000, CRC(2ba33dc6) SHA1(ab31046c1604eae30e55eb0e03804c98765d578e))
    ROM_LOAD16_WORD_SWAP("sfxo.04a", 0x080000, 0x80000, CRC(ba663dd7) SHA1(46baf0a48e4fd807098aa48e34625964b279a223))
    ROM_LOAD16_WORD_SWAP("sfxo.08",  0x280000, 0x80000, CRC(b60f4b58) SHA1(1db3876daef85713a22dbc42f76a26a47fa26079))

GAME(1994, ssf2tad,    ssf2t,    dead_cps2, cps2_2p6b, cps2_state, init_cps2,     ROT0,   "bootleg", "Super Street Fighter II Turbo (Asia 940223 Phoenix Edition) (bootleg)", MACHINE_SUPPORTS_SAVE)
    ROM_LOAD16_WORD_SWAP("sfxad.03c", 0x000000, 0x80000, CRC(e3c92ece) SHA1(8b0d6f632f51719c3e13add5d27701578b6ce0d6))
    ROM_LOAD16_WORD_SWAP("sfxad.04a", 0x080000, 0x80000, CRC(9bf3bb2e) SHA1(4bdc6fa585cc67d3b6695f390c95c518cba2bea6))
    ROM_LOAD16_WORD_SWAP("sfxad.08",  0x280000, 0x80000, CRC(d399c36c) SHA1(b4c4217843e5c3ef00ab04d58ca9368d2d734065))

#endif
        { L"SSF2T (CPS2 World 940223 03)", L"sfxe.03c", 0x2fa1f396, 0 },
        { L"SSF2T (CPS2 World 940223 04)", L"sfxe.04a", 0xd0bc29c6, 0 },
        { L"SSF2T (CPS2 World 940223 08)", L"sfxe.08", 0x74c24062, 0 },
        { L"SSF2T (CPS2 Asia 940223 03)", L"sfxa.03c", 0x04b9ff34, 0 },
        { L"SSF2T (CPS2 Asia 940223 04)", L"sfxa.04a", 0x16ea5f7a, 0 },
        { L"SSF2T (CPS2 Asia 940223 08)", L"sfxa.08", 0x39be596c, 0 },
        { L"SSF2T (CPS2 Hispanic 940223 03)", L"sfxh.03c", 0xfbe80dfe, 0 },
        { L"SSF2T (CPS2 Hispanic 940223 04)", L"sfxh.04a", 0xef9dd4b1, 0 },
        { L"SSF2T (CPS2 Hispanic 940223 08)", L"sfxh.08", 0xc15f0424, 0 },
        { L"SSF2T (CPS2 USA 940223 03)", L"sfxu.03e", 0xd6ff689e, 0 },
        { L"SSF2T (CPS2 USA 940223 03)", L"sfxu.03c", 0x86e4a335, 0 },
        { L"SSF2T (CPS2 USA 940223 04)", L"sfxu.04a", 0x532b5ffd, 0 },
        { L"SSF2T (CPS2 USA 940223 08)", L"sfxu.08", 0xb3c71810, 0 },

        { L"SSF2X:GMC (CPS2 Japan 03)", L"sfxj.03c", 0xa7417b79, 0 },
        { L"SSF2X:GMC (CPS2 Japan 04)", L"sfxj.04a", 0xaf7767b4, 0 },
        { L"SSF2X:GMC (CPS2 Japan 08)", L"sfxj.08", 0x2de76f10, 0 },

        { L"SSF2T (CPS2 Asia 940223 bootleg 03)", L"sfxad.03c", 0xe3c92ece, 0 },
        { L"SSF2T (CPS2 Asia 940223 bootleg 04)", L"sfxad.04a", 0x9bf3bb2e, 0 },
        { L"SSF2T (CPS2 Asia 940223 bootleg 08)", L"sfxad.08", 0xd399c36c, 0 },
    };

    if (ppKnownROMSet)
    {
        *ppKnownROMSet = knownROMs;
    }

    if (pfNeedToValidateCRCs)
    {
        // Each filename is associated with a single CRC
        *pfNeedToValidateCRCs = false;
    }

    return ARRAYSIZE(knownROMs);
}

uint32_t CGame_SSF2T_A::GetExtraLoc(uint32_t nUnitId)
{
    if (UsePaletteSetForPortraits())
    {
        return _GetExtraLocation(rgExtraLoc_3C, SSF2T_A_NUM_IND_3C, nUnitId, SSF2T_A_EXTRA_CUSTOM_3C);
    }
    else if (UsePaletteSetForStages())
    {
        return _GetExtraLocation(rgExtraLoc_8, SSF2T_A_NUM_IND_8, nUnitId, SSF2T_A_EXTRA_CUSTOM_8);
    }
    else
    {
        return _GetExtraLocation(rgExtraLoc_4A, SSF2T_A_NUM_IND_4A, nUnitId, SSF2T_A_EXTRA_CUSTOM_4A);
    }
}

uint32_t CGame_SSF2T_A::GetExtraCt(uint32_t nUnitId, BOOL fCountVisibleOnly)
{
    if (UsePaletteSetForPortraits())
    {
        return _GetExtraCount(rgExtraCountAll_3C, SSF2T_A_NUM_IND_3C, nUnitId, SSF2T_A_EXTRA_CUSTOM_3C);
    }
    else if (UsePaletteSetForStages())
    {
        return _GetExtraCount(rgExtraCountAll_8, SSF2T_A_NUM_IND_8, nUnitId, SSF2T_A_EXTRA_CUSTOM_8);
    }
    else
    {
        return _GetExtraCount(rgExtraCountAll_4A, SSF2T_A_NUM_IND_4A, nUnitId, SSF2T_A_EXTRA_CUSTOM_4A);
    }
}

CDescTree* CGame_SSF2T_A::GetMainTree()
{
    if (UsePaletteSetForPortraits())
    {
        return &CGame_SSF2T_A::MainDescTree_3C;
    }
    else if (UsePaletteSetForStages())
    {
        return &CGame_SSF2T_A::MainDescTree_8;
    }
    else
    {
        return &CGame_SSF2T_A::MainDescTree_4A;
    }    
}

sDescTreeNode* CGame_SSF2T_A::InitDescTree(int nROMPaletteSetToUse)
{
    m_nSSF2TSelectedRom = nROMPaletteSetToUse;
    UINT8 nCurrentExtraLocation;
    UINT16 nUnitCt;

    //Load extra file if we're using it
    if (UsePaletteSetForPortraits())
    {
        nCurrentExtraLocation = SSF2T_A_EXTRALOC_3C;
        nUnitCt = SSF2T_A_NUM_IND_3C;
        LoadExtraFileForGame(EXTRA_FILENAME_SSF2T_3C, &SSF2T_A_EXTRA_CUSTOM_3C, nCurrentExtraLocation, m_nConfirmedROMSize);
    }
    else if (UsePaletteSetForCharacters())
    {
        nCurrentExtraLocation = SSF2T_A_EXTRALOC_4A;
        nUnitCt = SSF2T_A_NUM_IND_4A;
        LoadExtraFileForGame(EXTRA_FILENAME_SSF2T_4A, &SSF2T_A_EXTRA_CUSTOM_4A, nCurrentExtraLocation, m_nConfirmedROMSize);
    }
    else
    {
        nCurrentExtraLocation = SSF2T_A_EXTRALOC_8;
        nUnitCt = SSF2T_A_NUM_IND_8;
        LoadExtraFileForGame(EXTRA_FILENAME_SSF2T_8, &SSF2T_A_EXTRA_CUSTOM_8, nCurrentExtraLocation, m_nConfirmedROMSize);
    }

    bool fHaveExtras = (GetExtraCt(nCurrentExtraLocation) > 0);
    nUnitCt += (fHaveExtras ? 1 : 0);

    sDescTreeNode* NewDescTree = new sDescTreeNode;

    //Create the main character tree
    _snwprintf_s(NewDescTree->szDesc, ARRAYSIZE(NewDescTree->szDesc), _TRUNCATE, L"%s", g_GameFriendlyName[SSF2T_A]);
    NewDescTree->ChildNodes = new sDescTreeNode[nUnitCt];
    NewDescTree->uChildAmt = nUnitCt;
    //All units have tree children
    NewDescTree->uChildType = DESC_NODETYPE_TREE;

    switch (m_nSSF2TSelectedRom)
    {
    case 3:
        m_nTotalPaletteCountForSSF2T_3C = _InitDescTree(NewDescTree,
            SSF2T_A_UNITS_3C,
            SSF2T_A_EXTRALOC_3C,
            SSF2T_A_NUM_IND_3C,
            rgExtraCountAll_3C,
            rgExtraLoc_3C,
            SSF2T_A_EXTRA_CUSTOM_3C
        );
        break;
    case 4:
    default:
        m_nTotalPaletteCountForSSF2T_4A = _InitDescTree(NewDescTree,
            SSF2T_A_UNITS_4A,
            SSF2T_A_EXTRALOC_4A,
            SSF2T_A_NUM_IND_4A,
            rgExtraCountAll_4A,
            rgExtraLoc_4A,
            SSF2T_A_EXTRA_CUSTOM_4A
        );
        break;
    case 8:
        m_nTotalPaletteCountForSSF2T_8 = _InitDescTree(NewDescTree,
            SSF2T_A_UNITS_8,
            SSF2T_A_EXTRALOC_8,
            SSF2T_A_NUM_IND_8,
            rgExtraCountAll_8,
            rgExtraLoc_8,
            SSF2T_A_EXTRA_CUSTOM_8
        );
        break;
    }

    return NewDescTree;
}

sFileRule CGame_SSF2T_A::GetRule(uint32_t nUnitId)
{
    sFileRule NewFileRule;

    switch (nUnitId)
    {
    case 3:
        _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, L"sfxe.03c");
        break;
    case 4:
    default:
        _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, L"sfxe.04a");
        break;
    case 8:
        _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, L"sfxe.08");
        break;
    }

    NewFileRule.uUnitId = 0;
    NewFileRule.uVerifyVar = m_nExpectedGameROMSize;

    return NewFileRule;
}

uint32_t CGame_SSF2T_A::GetCollectionCountForUnit(uint32_t nUnitId)
{
    if (UsePaletteSetForPortraits())
    {
        if (nUnitId == SSF2T_A_EXTRALOC_3C)
        {
            return GetExtraCt(nUnitId);
        }
        else
        {
            return SSF2T_A_UNITS_3C[nUnitId].uChildAmt;
        }
    }
    else if (UsePaletteSetForCharacters())
    {
        if (nUnitId == SSF2T_A_EXTRALOC_4A)
        {
            return GetExtraCt(nUnitId);
        }
        else
        {
            return SSF2T_A_UNITS_4A[nUnitId].uChildAmt;
        }
    }
    else
    {
        if (nUnitId == SSF2T_A_EXTRALOC_8)
        {
            return GetExtraCt(nUnitId);
        }
        else
        {
            return SSF2T_A_UNITS_8[nUnitId].uChildAmt;
        }
    }
}

uint32_t CGame_SSF2T_A::GetNodeCountForCollection(uint32_t nUnitId, uint32_t nCollectionId)
{
    if (UsePaletteSetForPortraits())
    {
        if (nUnitId == SSF2T_A_EXTRALOC_3C)
        {
            return GetExtraCt(nUnitId);
        }
        else
        {
            const sDescTreeNode* pCollectionNode = (const sDescTreeNode*)(SSF2T_A_UNITS_3C[nUnitId].ChildNodes);

            return pCollectionNode[nCollectionId].uChildAmt;
        }
    }
    else if (UsePaletteSetForCharacters())
    {
        if (nUnitId == SSF2T_A_EXTRALOC_4A)
        {
            return GetExtraCt(nUnitId);
        }
        else
        {
            const sDescTreeNode* pCollectionNode = (const sDescTreeNode*)(SSF2T_A_UNITS_4A[nUnitId].ChildNodes);

            return pCollectionNode[nCollectionId].uChildAmt;
        }
    }
    else
    {
        if (nUnitId == SSF2T_A_EXTRALOC_8)
        {
            return GetExtraCt(nUnitId);
        }
        else
        {
            const sDescTreeNode* pCollectionNode = (const sDescTreeNode*)(SSF2T_A_UNITS_8[nUnitId].ChildNodes);

            return pCollectionNode[nCollectionId].uChildAmt;
        }
    }
}

LPCWSTR CGame_SSF2T_A::GetDescriptionForCollection(uint32_t nUnitId, uint32_t nCollectionId)
{
    if (UsePaletteSetForPortraits())
    {
        if (nUnitId == SSF2T_A_EXTRALOC_3C)
        {
            return L"Extra Palettes";
        }
        else
        {
            const sDescTreeNode* pCollection = (const sDescTreeNode*)SSF2T_A_UNITS_3C[nUnitId].ChildNodes;
            return pCollection[nCollectionId].szDesc;
        }
    }
    else if (UsePaletteSetForCharacters())
    {
        if (nUnitId == SSF2T_A_EXTRALOC_4A)
        {
            return L"Extra Palettes";
        }
        else
        {
            const sDescTreeNode* pCollection = (const sDescTreeNode*)SSF2T_A_UNITS_4A[nUnitId].ChildNodes;
            return pCollection[nCollectionId].szDesc;
        }
    }
    else
    {
        if (nUnitId == SSF2T_A_EXTRALOC_8)
        {
            return L"Extra Palettes";
        }
        else
        {
            const sDescTreeNode* pCollection = (const sDescTreeNode*)SSF2T_A_UNITS_8[nUnitId].ChildNodes;
            return pCollection[nCollectionId].szDesc;
        }
    }
}

uint32_t CGame_SSF2T_A::GetPaletteCountForUnit(uint32_t nUnitId)
{
    if ((UsePaletteSetForPortraits() && (nUnitId == SSF2T_A_EXTRALOC_3C)) ||
        (UsePaletteSetForCharacters() && (nUnitId == SSF2T_A_EXTRALOC_4A)) ||
        (UsePaletteSetForStages() && (nUnitId == SSF2T_A_EXTRALOC_8)))
    {
        return GetExtraCt(nUnitId);
    }
    else
    {
        uint32_t nCompleteCount = 0;
        const sDescTreeNode* pCompleteROMTree = UsePaletteSetForPortraits() ? SSF2T_A_UNITS_3C : (UsePaletteSetForCharacters() ? SSF2T_A_UNITS_4A : SSF2T_A_UNITS_8);
        uint32_t nCollectionCount = pCompleteROMTree[nUnitId].uChildAmt;
        const sDescTreeNode* pCurrentCollection = (const sDescTreeNode*)(pCompleteROMTree[nUnitId].ChildNodes);

        for (uint32_t nCollectionIndex = 0; nCollectionIndex < nCollectionCount; nCollectionIndex++)
        {
            nCompleteCount += pCurrentCollection[nCollectionIndex].uChildAmt;
        }

#if SSF2T_DEBUG
        CString strMsg;
        strMsg.Format(L"CGame_SSF2T_A::GetPaletteCountForUnit: %u for unit %u which has %u collections.\n", nCompleteCount, nUnitId, nCollectionCount);
        OutputDebugString(strMsg);
#endif

        return nCompleteCount;
    }
}

const sGame_PaletteDataset* CGame_SSF2T_A::GetPaletteSet(uint32_t nUnitId, uint32_t nCollectionId)
{
    // Don't use this for Extra palettes.
    if (UsePaletteSetForPortraits())
    {
        const sDescTreeNode* pCurrentSet = (const sDescTreeNode*)SSF2T_A_UNITS_3C[nUnitId].ChildNodes;
        return ((sGame_PaletteDataset*)(pCurrentSet[nCollectionId].ChildNodes));
    }
    else if (UsePaletteSetForCharacters())
    {
        const sDescTreeNode* pCurrentSet = (const sDescTreeNode*)SSF2T_A_UNITS_4A[nUnitId].ChildNodes;
        return ((sGame_PaletteDataset*)(pCurrentSet[nCollectionId].ChildNodes));
    }
    else
    {
        const sDescTreeNode* pCurrentSet = (const sDescTreeNode*)SSF2T_A_UNITS_8[nUnitId].ChildNodes;
        return ((sGame_PaletteDataset*)(pCurrentSet[nCollectionId].ChildNodes));
    }
}

uint32_t CGame_SSF2T_A::GetNodeSizeFromPaletteId(uint32_t nUnitId, uint32_t nPaletteId)
{
    // Don't use this for Extra palettes.
    uint32_t nNodeSize = 0;
    uint32_t nTotalCollections = GetCollectionCountForUnit(nUnitId);
    const sGame_PaletteDataset* paletteSetToUse = nullptr;
    uint32_t nDistanceFromZero = nPaletteId;

    for (uint32_t nCollectionIndex = 0; nCollectionIndex < nTotalCollections; nCollectionIndex++)
    {
        const sGame_PaletteDataset* paletteSetToCheck = GetPaletteSet(nUnitId, nCollectionIndex);
        uint32_t nNodeCount = GetNodeCountForCollection(nUnitId, nCollectionIndex);

        if (nDistanceFromZero < nNodeCount)
        {
            nNodeSize = nNodeCount;
            break;
        }

        nDistanceFromZero -= nNodeCount;
    }
    
    return nNodeSize;
}

const sGame_PaletteDataset* CGame_SSF2T_A::GetSpecificPalette(uint32_t nUnitId, uint32_t nPaletteId)
{
    // Don't use this for Extra palettes.
    uint32_t nTotalCollections = GetCollectionCountForUnit(nUnitId);
    const sGame_PaletteDataset* paletteToUse = nullptr;
    uint32_t nDistanceFromZero = nPaletteId;

    for (uint32_t nCollectionIndex = 0; nCollectionIndex < nTotalCollections; nCollectionIndex++)
    {
        const sGame_PaletteDataset* paletteSetToUse = GetPaletteSet(nUnitId, nCollectionIndex);
        uint32_t nNodeCount = GetNodeCountForCollection(nUnitId, nCollectionIndex);

        if (nDistanceFromZero < nNodeCount)
        {
            paletteToUse = &paletteSetToUse[nDistanceFromZero];
            break;
        }

        nDistanceFromZero -= nNodeCount;
    }

    return paletteToUse;
}

void CGame_SSF2T_A::InitDataBuffer()
{
    m_nBufferSelectedRom = m_nSSF2TSelectedRom;
    m_pppDataBuffer = new UINT16 * *[nUnitAmt];
    memset(m_pppDataBuffer, NULL, sizeof(UINT16**) * nUnitAmt);
}

void CGame_SSF2T_A::ClearDataBuffer()
{
    int nCurrentROMMode = m_nSSF2TSelectedRom;

    m_nSSF2TSelectedRom = m_nBufferSelectedRom;

    if (m_pppDataBuffer)
    {
        for (uint32_t nUnitCtr = 0; nUnitCtr < nUnitAmt; nUnitCtr++)
        {
            if (m_pppDataBuffer[nUnitCtr])
            {
                uint32_t nPalAmt = GetPaletteCountForUnit(nUnitCtr);

                for (uint32_t nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
                {
                    safe_delete_array(m_pppDataBuffer[nUnitCtr][nPalCtr]);
                }

                safe_delete_array(m_pppDataBuffer[nUnitCtr]);
            }
        }

        safe_delete_array(m_pppDataBuffer);
    }

    m_nSSF2TSelectedRom = nCurrentROMMode;
}

void CGame_SSF2T_A::LoadSpecificPaletteData(uint32_t nUnitId, uint32_t nPalId)
{
    if ((UsePaletteSetForPortraits() && (nUnitId != SSF2T_A_EXTRALOC_3C)) ||
        (UsePaletteSetForCharacters() && (nUnitId != SSF2T_A_EXTRALOC_4A)) ||
        (UsePaletteSetForStages() && (nUnitId != SSF2T_A_EXTRALOC_8)))
    {
        int cbPaletteSizeOnDisc = 0;
        const sGame_PaletteDataset* paletteData = GetSpecificPalette(nUnitId, nPalId);

        cbPaletteSizeOnDisc = (int)max(0, (paletteData->nPaletteOffsetEnd - paletteData->nPaletteOffset));

        m_nCurrentPaletteROMLocation = paletteData->nPaletteOffset;
        m_nCurrentPaletteSizeInColors = cbPaletteSizeOnDisc / m_nSizeOfColorsInBytes;
        m_pszCurrentPaletteName = paletteData->szPaletteName;
    }
    else // SSF2T_A_EXTRALOC
    {
        // This is where we handle all the palettes added in via Extra.
        stExtraDef* pCurrDef = GetExtraDefForSSF2T(GetExtraLoc(nUnitId) + nPalId);

        m_nCurrentPaletteROMLocation = pCurrDef->uOffset;
        m_nCurrentPaletteSizeInColors = (pCurrDef->cbPaletteSize / m_nSizeOfColorsInBytes);
        m_pszCurrentPaletteName = pCurrDef->szDesc;
    }
}

BOOL CGame_SSF2T_A::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
{
    //Reset palette sources
    ClearSrcPal();

    if (Node01 == -1)
    {
        return FALSE;
    }

    sDescNode* NodeGet = GetMainTree()->GetDescNode(Node01, Node02, Node03, Node04);

    if (NodeGet == nullptr)
    {
        return FALSE;
    }

    uint32_t nCollectionCount = GetCollectionCountForUnit(NodeGet->uUnitId);

    uint32_t nSrcStart = NodeGet->uPalId;
    uint32_t nSrcAmt = 1;
    uint32_t nNodeIncrement = GetNodeSizeFromPaletteId(NodeGet->uUnitId, NodeGet->uPalId);

    //Get rid of any palettes if there are any
    BasePalGroup.FlushPalAll();

    // Make sure to reset the image id
    int nTargetImgId = 0;
    uint32_t nImgUnitId = INVALID_UNIT_VALUE;

    bool fShouldUseAlternateLoadLogic = false;

    // Only load images for internal units, since we don't currently have a methodology for associating
    // external loads to internal sprites.
    if ((UsePaletteSetForPortraits() && (NodeGet->uUnitId != SSF2T_A_EXTRALOC_3C)) ||
        (UsePaletteSetForCharacters() && (NodeGet->uUnitId != SSF2T_A_EXTRALOC_4A)) ||
        (UsePaletteSetForStages() && (NodeGet->uUnitId != SSF2T_A_EXTRALOC_8)))
    {
        const sGame_PaletteDataset* paletteDataSet = GetSpecificPalette(NodeGet->uUnitId, NodeGet->uPalId);

        if (paletteDataSet)
        {
            nImgUnitId = paletteDataSet->indexImgToUse;
            nTargetImgId = paletteDataSet->indexOffsetToUse;

            // Characters and portraits
            sDescTreeNode* charUnit = GetMainTree()->GetDescTree(Node01, -1);
            const sDescTreeNode* pCurrentNode = nullptr;
            
            if (UsePaletteSetForPortraits())
            {
                pCurrentNode = _GetNodeFromPaletteId(SSF2T_A_UNITS_3C, rgExtraCountAll_3C, SSF2T_A_NUM_IND_3C, SSF2T_A_EXTRALOC_3C, NodeGet->uUnitId, NodeGet->uPalId, SSF2T_A_EXTRA_CUSTOM_3C, true);
            }
            else if (UsePaletteSetForCharacters())
            {
                pCurrentNode = _GetNodeFromPaletteId(SSF2T_A_UNITS_4A, rgExtraCountAll_4A, SSF2T_A_NUM_IND_4A, SSF2T_A_EXTRALOC_4A, NodeGet->uUnitId, NodeGet->uPalId, SSF2T_A_EXTRA_CUSTOM_4A, true);
            }
            else
            {
                pCurrentNode = _GetNodeFromPaletteId(SSF2T_A_UNITS_8, rgExtraCountAll_8, SSF2T_A_NUM_IND_8, SSF2T_A_EXTRALOC_8, NodeGet->uUnitId, NodeGet->uPalId, SSF2T_A_EXTRA_CUSTOM_8, true);
            }

            if (wcscmp(charUnit->szDesc, k_stNameKey_Bonus) != 0) // Bonus is all unrelated, so leave those out of this logic
            {
                bool fIsCorePalette = false;

                for (uint32_t nOptionsToTest = 0; nOptionsToTest < pButtonLabelSet.size(); nOptionsToTest++)
                {
                    if (wcscmp(pCurrentNode->szDesc, pButtonLabelSet[nOptionsToTest]) == 0)
                    {
                        fIsCorePalette = true;
                        break;
                    }
                }

                if (fIsCorePalette)
                {
                    nSrcAmt = static_cast<uint32_t>(pButtonLabelSet.size());
                    nNodeIncrement = pCurrentNode->uChildAmt;

                    while (nSrcStart >= nNodeIncrement)
                    {
                        // The starting point is the absolute first palette for the sprite in question which is found in P1
                        nSrcStart -= nNodeIncrement;
                    }
                }
            }

            if (paletteDataSet->pPalettePairingInfo)
            {
                if (paletteDataSet->pPalettePairingInfo == &pairFullyLinkedNode)
                {
                    const uint32_t nStageCount = GetNodeSizeFromPaletteId(NodeGet->uUnitId, NodeGet->uPalId);

                    fShouldUseAlternateLoadLogic = true;
                    sImgTicket* pImgArray = nullptr;

                    for (uint32_t nStageIndex = 0; nStageIndex < nStageCount; nStageIndex++)
                    {
                        // The palettes get added forward, but the image tickets need to be generated in reverse order
                        const sGame_PaletteDataset* paletteDataSetToJoin = GetSpecificPalette(NodeGet->uUnitId, NodeGet->uPalId + (nStageCount - 1 - nStageIndex));
                        if (paletteDataSetToJoin)
                        {
                            pImgArray = CreateImgTicket(paletteDataSetToJoin->indexImgToUse, paletteDataSetToJoin->indexOffsetToUse, pImgArray);

                            //Set each palette
                            sDescNode* JoinedNode = GetMainTree()->GetDescNode(Node01, Node02, Node03 + nStageIndex, -1);
                            CreateDefPal(JoinedNode, nStageIndex);
                            SetSourcePal(nStageIndex, NodeGet->uUnitId, nSrcStart + nStageIndex, nSrcAmt, nNodeIncrement);
                        }
                    }

                    ClearSetImgTicket(pImgArray);
                }
                else
                {
                    INT8 nPeerPaletteDistance = paletteDataSet->pPalettePairingInfo->nNodeIncrementToPartner;

                    const sGame_PaletteDataset* paletteDataSetToJoin = GetSpecificPalette(NodeGet->uUnitId, NodeGet->uPalId + nPeerPaletteDistance);

                    if (paletteDataSetToJoin)
                    {
                        fShouldUseAlternateLoadLogic = true;

                        ClearSetImgTicket(
                            CreateImgTicket(paletteDataSet->indexImgToUse, paletteDataSet->indexOffsetToUse,
                                CreateImgTicket(paletteDataSetToJoin->indexImgToUse, paletteDataSetToJoin->indexOffsetToUse)
                            )
                        );

                        //Set each palette
                        std::vector<sDescNode*> JoinedNode = {
                            GetMainTree()->GetDescNode(Node01, Node02, Node03, -1),
                            GetMainTree()->GetDescNode(Node01, Node02, Node03 + nPeerPaletteDistance, -1)
                        };

                        //Set each palette
                        CreateDefPal(JoinedNode[0], 0);
                        CreateDefPal(JoinedNode[1], 1);

                        SetSourcePal(0, NodeGet->uUnitId, nSrcStart, nSrcAmt, nNodeIncrement);
                        SetSourcePal(1, NodeGet->uUnitId, nSrcStart + nPeerPaletteDistance, nSrcAmt, nNodeIncrement);
                    }
                }
            }
        }
    }
    else
    {
        // We don't have multisprite export for Extras.
        nNodeIncrement = 1;
    }

    if (!fShouldUseAlternateLoadLogic)
    {
        //Create the default palette
        ClearSetImgTicket(CreateImgTicket(nImgUnitId, nTargetImgId));

        CreateDefPal(NodeGet, 0);

        SetSourcePal(0, NodeGet->uUnitId, nSrcStart, nSrcAmt, nNodeIncrement);
    }

    return TRUE;
}

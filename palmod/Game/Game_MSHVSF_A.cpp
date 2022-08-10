#include "StdAfx.h"
#include "Game_MSHVSF_A.h"
#include "GameDef.h"
#include "..\PalMod.h"

stExtraDef* CGame_MSHVSF_A::MSHVSF_A_EXTRA_CUSTOM_6A = nullptr;
stExtraDef* CGame_MSHVSF_A::MSHVSF_A_EXTRA_CUSTOM_7B = nullptr;

CDescTree CGame_MSHVSF_A::MainDescTree_6A = nullptr;
CDescTree CGame_MSHVSF_A::MainDescTree_7B = nullptr;

uint32_t CGame_MSHVSF_A::m_nMSHVSFSelectedRom = 6;
uint32_t CGame_MSHVSF_A::m_nTotalPaletteCountForMSHVSF_6A = 0;
uint32_t CGame_MSHVSF_A::m_nTotalPaletteCountForMSHVSF_7B = 0;
uint32_t CGame_MSHVSF_A::m_nConfirmedROMSize = -1;

uint32_t CGame_MSHVSF_A::rgExtraLocation_6A[MSHVSF_A_NUM_IND_6A + 1] = { (uint32_t)-1 };
uint32_t CGame_MSHVSF_A::rgExtraLocation_7B[MSHVSF_A_NUM_IND_7B + 1] = { (uint32_t)-1 };
uint32_t CGame_MSHVSF_A::rgExtraCount_6A[MSHVSF_A_NUM_IND_6A + 1] = { (uint32_t)-1 };
uint32_t CGame_MSHVSF_A::rgExtraCount_7B[MSHVSF_A_NUM_IND_7B + 1] = { (uint32_t)-1 };

void CGame_MSHVSF_A::InitializeStatics()
{
    safe_delete_array(CGame_MSHVSF_A::MSHVSF_A_EXTRA_CUSTOM_6A);
    safe_delete_array(CGame_MSHVSF_A::MSHVSF_A_EXTRA_CUSTOM_7B);

    memset(rgExtraLocation_6A, -1, sizeof(rgExtraLocation_6A));
    memset(rgExtraLocation_7B, -1, sizeof(rgExtraLocation_7B));
    memset(rgExtraCount_6A, -1, sizeof(rgExtraCount_6A));
    memset(rgExtraCount_7B, -1, sizeof(rgExtraCount_7B));

    MainDescTree_6A.SetRootTree(CGame_MSHVSF_A::InitDescTree(6));
    MainDescTree_7B.SetRootTree(CGame_MSHVSF_A::InitDescTree(7));
}

CGame_MSHVSF_A::CGame_MSHVSF_A(uint32_t nConfirmedROMSize, int nMSHVSFRomToLoad)
{
    createPalOptions = { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 };
    SetAlphaMode(AlphaMode::GameDoesNotUseAlpha);
    SetColorMode(ColMode::COLMODE_RGB444_BE);

    // We need this set before we initialize so that corrupt Extras truncate correctly.
    // Otherwise the new user inadvertently corrupts their ROM.
    m_nConfirmedROMSize = nConfirmedROMSize;
    InitializeStatics();

    m_nMSHVSFSelectedRom = (nMSHVSFRomToLoad == 6) ? 6 : 7;

    CString strMessage;
    strMessage.Format(L"CGame_MSHVSF_A::CGame_MSHVSF_A: Loading for the %s ROM\n", (m_nMSHVSFSelectedRom == 6) ? L"6A" : L"7B");
    OutputDebugString(strMessage);

    m_nTotalInternalUnits = UsePaletteSetForCharacters() ? MSHVSF_A_NUM_IND_6A : MSHVSF_A_NUM_IND_7B;
    m_nExtraUnit = UsePaletteSetForCharacters() ? MSHVSF_A_EXTRALOC_6A : MSHVSF_A_EXTRALOC_7B;

    const uint32_t nSafeCountFor6A = 941;
    const uint32_t nSafeCountFor7B = 169;

    m_nSafeCountForThisRom = GetExtraCt(m_nExtraUnit) + (UsePaletteSetForCharacters() ? nSafeCountFor6A : nSafeCountFor7B);
    m_pszExtraFilename = UsePaletteSetForCharacters() ? EXTRA_FILENAME_MSHVSF_6A : EXTRA_FILENAME_MSHVSF_7B;
    m_nTotalPaletteCount = UsePaletteSetForCharacters() ? m_nTotalPaletteCountForMSHVSF_6A : m_nTotalPaletteCountForMSHVSF_7B;
    m_nLowestKnownPaletteRomLocation = UsePaletteSetForCharacters() ? m_uLowestKnownPaletteROMLocation_6A : m_uLowestKnownPaletteROMLocation_7B;

    nUnitAmt = m_nTotalInternalUnits + (GetExtraCt(m_nExtraUnit) ? 1 : 0);

    InitDataBuffer();

    //Set game information
    nGameFlag = MSHVSF_A;
    nImgGameFlag = IMGDAT_SECTION_CPS2;
    m_prgGameImageSet = MSHVSF_A_IMGIDS_USED;

    nFileAmt = 1;

    //Set the image out display type
    DisplayType = eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT;
    pButtonLabelSet = DEF_BUTTONLABEL_2;

    //Create the redirect buffer
    rgUnitRedir = new uint32_t[nUnitAmt + 1];
    memset(rgUnitRedir, NULL, sizeof(uint32_t) * nUnitAmt);

    //Create the file changed flag
    PrepChangeTrackingArray();
}

CGame_MSHVSF_A::~CGame_MSHVSF_A()
{
    safe_delete_array(CGame_MSHVSF_A::MSHVSF_A_EXTRA_CUSTOM_6A);
    safe_delete_array(CGame_MSHVSF_A::MSHVSF_A_EXTRA_CUSTOM_7B);
    ClearDataBuffer();
    //Get rid of the file changed flag
    FlushChangeTrackingArray();
}

uint32_t CGame_MSHVSF_A::GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet, bool* pfNeedToValidateCRCs)
{
    static sCRC32ValueSet knownROMs[] =
    {
#ifdef MAME_NOTES
        roms 6 and 7 are always identical
GAME(1997, mshvsf,     0,        cps2, cps2_2p6b, cps2_state, init_cps2,     ROT0,   "Capcom", "Marvel Super Heroes Vs. Street Fighter (Euro 970625)", MACHINE_SUPPORTS_SAVE)
    ROM_LOAD16_WORD_SWAP("mvs.06a",  0x180000, 0x80000, CRC(959f3030) SHA1(fbbaa915324815246738f3426232e623f039ce26))
    ROM_LOAD16_WORD_SWAP("mvs.07b",  0x200000, 0x80000, CRC(7f915bdb) SHA1(683da09c5ba55e31b59aa95a8e13c45dc574ab3c))
GAME(1997, mshvsfu,    mshvsf,   cps2, cps2_2p6b, cps2_state, init_cps2,     ROT0,   "Capcom", "Marvel Super Heroes Vs. Street Fighter (USA 970827)", MACHINE_SUPPORTS_SAVE)
    ROM_LOAD16_WORD_SWAP("mvs.06a",  0x180000, 0x80000, CRC(959f3030) SHA1(fbbaa915324815246738f3426232e623f039ce26))
    ROM_LOAD16_WORD_SWAP("mvs.07b",  0x200000, 0x80000, CRC(7f915bdb) SHA1(683da09c5ba55e31b59aa95a8e13c45dc574ab3c))
GAME(1997, mshvsfu1,   mshvsf,   cps2, cps2_2p6b, cps2_state, init_cps2,     ROT0,   "Capcom", "Marvel Super Heroes Vs. Street Fighter (USA 970625)", MACHINE_SUPPORTS_SAVE)
    ROM_LOAD16_WORD_SWAP("mvs.06a",  0x180000, 0x80000, CRC(959f3030) SHA1(fbbaa915324815246738f3426232e623f039ce26))
    ROM_LOAD16_WORD_SWAP("mvs.07b",  0x200000, 0x80000, CRC(7f915bdb) SHA1(683da09c5ba55e31b59aa95a8e13c45dc574ab3c))
GAME(1997, mshvsfj,    mshvsf,   cps2, cps2_2p6b, cps2_state, init_cps2,     ROT0,   "Capcom", "Marvel Super Heroes Vs. Street Fighter (Japan 970707)", MACHINE_SUPPORTS_SAVE)
    ROM_LOAD16_WORD_SWAP("mvs.06a",  0x180000, 0x80000, CRC(959f3030) SHA1(fbbaa915324815246738f3426232e623f039ce26))
    ROM_LOAD16_WORD_SWAP("mvs.07b",  0x200000, 0x80000, CRC(7f915bdb) SHA1(683da09c5ba55e31b59aa95a8e13c45dc574ab3c))
GAME(1997, mshvsfj1,   mshvsf,   cps2, cps2_2p6b, cps2_state, init_cps2,     ROT0,   "Capcom", "Marvel Super Heroes Vs. Street Fighter (Japan 970702)", MACHINE_SUPPORTS_SAVE)
    ROM_LOAD16_WORD_SWAP("mvs.06a",  0x180000, 0x80000, CRC(959f3030) SHA1(fbbaa915324815246738f3426232e623f039ce26))
    ROM_LOAD16_WORD_SWAP("mvs.07b",  0x200000, 0x80000, CRC(7f915bdb) SHA1(683da09c5ba55e31b59aa95a8e13c45dc574ab3c))
GAME(1997, mshvsfj2,   mshvsf,   cps2, cps2_2p6b, cps2_state, init_cps2,     ROT0,   "Capcom", "Marvel Super Heroes Vs. Street Fighter (Japan 970625)", MACHINE_SUPPORTS_SAVE)
    ROM_LOAD16_WORD_SWAP("mvs.06a",  0x180000, 0x80000, CRC(959f3030) SHA1(fbbaa915324815246738f3426232e623f039ce26))
    ROM_LOAD16_WORD_SWAP("mvs.07b",  0x200000, 0x80000, CRC(7f915bdb) SHA1(683da09c5ba55e31b59aa95a8e13c45dc574ab3c))
GAME(1997, mshvsfh,    mshvsf,   cps2, cps2_2p6b, cps2_state, init_cps2,     ROT0,   "Capcom", "Marvel Super Heroes Vs. Street Fighter (Hispanic 970625)", MACHINE_SUPPORTS_SAVE)
    ROM_LOAD16_WORD_SWAP("mvs.06a",  0x180000, 0x80000, CRC(959f3030) SHA1(fbbaa915324815246738f3426232e623f039ce26))
    ROM_LOAD16_WORD_SWAP("mvs.07b",  0x200000, 0x80000, CRC(7f915bdb) SHA1(683da09c5ba55e31b59aa95a8e13c45dc574ab3c))
GAME(1997, mshvsfa,    mshvsf,   cps2, cps2_2p6b, cps2_state, init_cps2,     ROT0,   "Capcom", "Marvel Super Heroes Vs. Street Fighter (Asia 970625)", MACHINE_SUPPORTS_SAVE)
    ROM_LOAD16_WORD_SWAP("mvs.06a",  0x180000, 0x80000, CRC(959f3030) SHA1(fbbaa915324815246738f3426232e623f039ce26))
    ROM_LOAD16_WORD_SWAP("mvs.07b",  0x200000, 0x80000, CRC(7f915bdb) SHA1(683da09c5ba55e31b59aa95a8e13c45dc574ab3c))
GAME(1997, mshvsfa1,   mshvsf,   cps2, cps2_2p6b, cps2_state, init_cps2,     ROT0,   "Capcom", "Marvel Super Heroes Vs. Street Fighter (Asia 970620)", MACHINE_SUPPORTS_SAVE)
    ROM_LOAD16_WORD_SWAP("mvs.06a", 0x180000, 0x80000, CRC(959f3030) SHA1(fbbaa915324815246738f3426232e623f039ce26))
    ROM_LOAD16_WORD_SWAP("mvs.07b", 0x200000, 0x80000, CRC(7f915bdb) SHA1(683da09c5ba55e31b59aa95a8e13c45dc574ab3c))
GAME(1997, mshvsfb,    mshvsf,   cps2, cps2_2p6b, cps2_state, init_cps2,     ROT0,   "Capcom", "Marvel Super Heroes Vs. Street Fighter (Brazil 970827)", MACHINE_SUPPORTS_SAVE)
    ROM_LOAD16_WORD_SWAP("mvs.06a",  0x180000, 0x80000, CRC(959f3030) SHA1(fbbaa915324815246738f3426232e623f039ce26))
    ROM_LOAD16_WORD_SWAP("mvs.07b",  0x200000, 0x80000, CRC(7f915bdb) SHA1(683da09c5ba55e31b59aa95a8e13c45dc574ab3c))
GAME(1997, mshvsfb1,   mshvsf,   cps2, cps2_2p6b, cps2_state, init_cps2,     ROT0,   "Capcom", "Marvel Super Heroes Vs. Street Fighter (Brazil 970625)", MACHINE_SUPPORTS_SAVE)
    ROM_LOAD16_WORD_SWAP("mvs.06a",  0x180000, 0x80000, CRC(959f3030) SHA1(fbbaa915324815246738f3426232e623f039ce26))
    ROM_LOAD16_WORD_SWAP("mvs.07b",  0x200000, 0x80000, CRC(7f915bdb) SHA1(683da09c5ba55e31b59aa95a8e13c45dc574ab3c))
GAME(1997, mshvsfu1d,  mshvsf,   dead_cps2, cps2_2p6b, cps2_state, init_cps2,     ROT0,   "bootleg", "Marvel Super Heroes Vs. Street Fighter (USA 970625 Phoenix Edition) (bootleg)", MACHINE_SUPPORTS_SAVE)
    ROM_LOAD16_WORD_SWAP("mvs.06a",    0x180000, 0x80000, CRC(959f3030) SHA1(fbbaa915324815246738f3426232e623f039ce26))
    ROM_LOAD16_WORD_SWAP("mvs.07b",    0x200000, 0x80000, CRC(7f915bdb) SHA1(683da09c5ba55e31b59aa95a8e13c45dc574ab3c))
#endif
        { L"MSHVSF (CPS2, Characters)", L"mvs.06a", 0x959f3030, 0 },
        { L"MSHVSF (CPS2, Portraits)", L"mvs.07b", 0x7f915bdb, 0 },
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

uint32_t CGame_MSHVSF_A::GetExtraLoc(uint32_t nUnitId)
{
    if (UsePaletteSetForCharacters())
    {
        return _GetExtraLocation(rgExtraLocation_6A, MSHVSF_A_NUM_IND_6A, nUnitId, MSHVSF_A_EXTRA_CUSTOM_6A);
    }
    else
    {
        return _GetExtraLocation(rgExtraLocation_7B, MSHVSF_A_NUM_IND_7B, nUnitId, MSHVSF_A_EXTRA_CUSTOM_7B);
    }
}

uint32_t CGame_MSHVSF_A::GetExtraCt(uint32_t nUnitId, BOOL fCountVisibleOnly)
{
    if (UsePaletteSetForCharacters())
    {
        return _GetExtraCount(rgExtraCount_6A, MSHVSF_A_NUM_IND_6A, nUnitId, MSHVSF_A_EXTRA_CUSTOM_6A);
    }
    else
    {
        return _GetExtraCount(rgExtraCount_7B, MSHVSF_A_NUM_IND_7B, nUnitId, MSHVSF_A_EXTRA_CUSTOM_7B);
    }
}

CDescTree* CGame_MSHVSF_A::GetMainTree()
{
    if (UsePaletteSetForCharacters())
    {
        return &CGame_MSHVSF_A::MainDescTree_6A;
    }
    else
    {
        return &CGame_MSHVSF_A::MainDescTree_7B;
    }
}

sDescTreeNode* CGame_MSHVSF_A::InitDescTree(uint32_t nROMPaletteSetToUse)
{
    m_nMSHVSFSelectedRom = nROMPaletteSetToUse;

    uint16_t nUnitCt;
    uint8_t nExtraUnitLocation;

    //Load extra file if we're using it
    if (UsePaletteSetForCharacters())
    {
        nExtraUnitLocation = MSHVSF_A_EXTRALOC_6A;
        LoadExtraFileForGame(EXTRA_FILENAME_MSHVSF_6A, &MSHVSF_A_EXTRA_CUSTOM_6A, MSHVSF_A_EXTRALOC_6A, m_nConfirmedROMSize);
        nUnitCt = (MSHVSF_A_NUM_IND_6A + (GetExtraCt(nExtraUnitLocation) ? 1 : 0));

    }
    else
    {
        nExtraUnitLocation = MSHVSF_A_EXTRALOC_7B;
        LoadExtraFileForGame(EXTRA_FILENAME_MSHVSF_7B, &MSHVSF_A_EXTRA_CUSTOM_7B, MSHVSF_A_EXTRALOC_7B, m_nConfirmedROMSize);
        nUnitCt = (MSHVSF_A_NUM_IND_7B + (GetExtraCt(nExtraUnitLocation) ? 1 : 0));
    }

    sDescTreeNode* NewDescTree = new sDescTreeNode;

    //Create the main character tree
    _snwprintf_s(NewDescTree->szDesc, ARRAYSIZE(NewDescTree->szDesc), _TRUNCATE, L"%s", g_GameFriendlyName[MSHVSF_A]);
    NewDescTree->ChildNodes = new sDescTreeNode[nUnitCt];
    NewDescTree->uChildAmt = nUnitCt;
    //All units have tree children
    NewDescTree->uChildType = DESC_NODETYPE_TREE;

    if (UsePaletteSetForCharacters())
    {
        m_nTotalPaletteCountForMSHVSF_6A = _InitDescTree(NewDescTree,
            MSHVSF_A_UNITS_6A,
            nExtraUnitLocation,
            MSHVSF_A_NUM_IND_6A,
            rgExtraCount_6A,
            rgExtraLocation_6A,
            MSHVSF_A_EXTRA_CUSTOM_6A
        );
    }
    else
    {
        m_nTotalPaletteCountForMSHVSF_7B = _InitDescTree(NewDescTree,
            MSHVSF_A_UNITS_7B,
            nExtraUnitLocation,
            MSHVSF_A_NUM_IND_7B,
            rgExtraCount_7B,
            rgExtraLocation_7B,
            MSHVSF_A_EXTRA_CUSTOM_7B
        );
    }

    return NewDescTree;
}

sFileRule CGame_MSHVSF_A::GetRule(uint32_t nUnitId)
{
    sFileRule NewFileRule;

    _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, (nUnitId == 6) ? L"mvs.06a" : L"mvs.07b");

    NewFileRule.uUnitId = 0;
    NewFileRule.uVerifyVar = m_nExpectedGameROMSize;

    return NewFileRule;
}

uint32_t CGame_MSHVSF_A::GetCollectionCountForUnit(uint32_t nUnitId)
{
    if (UsePaletteSetForCharacters())
    {
        return _GetCollectionCountForUnit(MSHVSF_A_UNITS_6A, rgExtraCount_6A, MSHVSF_A_NUM_IND_6A, MSHVSF_A_EXTRALOC_6A, nUnitId, MSHVSF_A_EXTRA_CUSTOM_6A);
    }
    else
    {
        return _GetCollectionCountForUnit(MSHVSF_A_UNITS_7B, rgExtraCount_7B, MSHVSF_A_NUM_IND_7B, MSHVSF_A_EXTRALOC_7B, nUnitId, MSHVSF_A_EXTRA_CUSTOM_7B);
    }
}

uint32_t CGame_MSHVSF_A::GetNodeCountForCollection(uint32_t nUnitId, uint32_t nCollectionId)
{
    if (UsePaletteSetForCharacters())
    {
        return _GetNodeCountForCollection(MSHVSF_A_UNITS_6A, rgExtraCount_6A, MSHVSF_A_NUM_IND_6A, MSHVSF_A_EXTRALOC_6A, nUnitId, nCollectionId, MSHVSF_A_EXTRA_CUSTOM_6A);
    }
    else
    {
        return _GetNodeCountForCollection(MSHVSF_A_UNITS_7B, rgExtraCount_7B, MSHVSF_A_NUM_IND_7B, MSHVSF_A_EXTRALOC_7B, nUnitId, nCollectionId, MSHVSF_A_EXTRA_CUSTOM_7B);
    }
}

LPCWSTR CGame_MSHVSF_A::GetDescriptionForCollection(uint32_t nUnitId, uint32_t nCollectionId)
{
    if (UsePaletteSetForCharacters())
    {
        return _GetDescriptionForCollection(MSHVSF_A_UNITS_6A, MSHVSF_A_EXTRALOC_6A, nUnitId, nCollectionId);
    }
    else
    {
        return _GetDescriptionForCollection(MSHVSF_A_UNITS_7B, MSHVSF_A_EXTRALOC_7B, nUnitId, nCollectionId);
    }
}

uint32_t CGame_MSHVSF_A::GetPaletteCountForUnit(uint32_t nUnitId)
{
    if (UsePaletteSetForCharacters())
    {
        return _GetPaletteCountForUnit(MSHVSF_A_UNITS_6A, rgExtraCount_6A, MSHVSF_A_NUM_IND_6A, MSHVSF_A_EXTRALOC_6A, nUnitId, MSHVSF_A_EXTRA_CUSTOM_6A);
    }
    else
    {
        return _GetPaletteCountForUnit(MSHVSF_A_UNITS_7B, rgExtraCount_7B, MSHVSF_A_NUM_IND_7B, MSHVSF_A_EXTRALOC_7B, nUnitId, MSHVSF_A_EXTRA_CUSTOM_7B);
    }
}

const sGame_PaletteDataset* CGame_MSHVSF_A::GetPaletteSet(uint32_t nUnitId, uint32_t nCollectionId)
{
    if (UsePaletteSetForCharacters())
    {
        return _GetPaletteSet(MSHVSF_A_UNITS_6A, nUnitId, nCollectionId);
    }
    else
    {
        return _GetPaletteSet(MSHVSF_A_UNITS_7B, nUnitId, nCollectionId);
    }
}

uint32_t CGame_MSHVSF_A::GetNodeSizeFromPaletteId(uint32_t nUnitId, uint32_t nPaletteId)
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

const sDescTreeNode* CGame_MSHVSF_A::GetNodeFromPaletteId(uint32_t nUnitId, uint32_t nPaletteId, bool fReturnBasicNodesOnly)
{
    if (UsePaletteSetForCharacters())
    {
        return _GetNodeFromPaletteId(MSHVSF_A_UNITS_6A, rgExtraCount_6A, MSHVSF_A_NUM_IND_6A, MSHVSF_A_EXTRALOC_6A, nUnitId, nPaletteId, MSHVSF_A_EXTRA_CUSTOM_6A, fReturnBasicNodesOnly);
    }
    else
    {
        return _GetNodeFromPaletteId(MSHVSF_A_UNITS_7B, rgExtraCount_7B, MSHVSF_A_NUM_IND_7B, MSHVSF_A_EXTRALOC_7B, nUnitId, nPaletteId, MSHVSF_A_EXTRA_CUSTOM_7B, fReturnBasicNodesOnly);
    }
}

const sGame_PaletteDataset* CGame_MSHVSF_A::GetSpecificPalette(uint32_t nUnitId, uint32_t nPaletteId)
{
    if (UsePaletteSetForCharacters())
    {
        return _GetSpecificPalette(MSHVSF_A_UNITS_6A, rgExtraCount_6A, MSHVSF_A_NUM_IND_6A, MSHVSF_A_EXTRALOC_6A, nUnitId, nPaletteId, MSHVSF_A_EXTRA_CUSTOM_6A);
    }
    else
    {
        return _GetSpecificPalette(MSHVSF_A_UNITS_7B, rgExtraCount_7B, MSHVSF_A_NUM_IND_7B, MSHVSF_A_EXTRALOC_7B, nUnitId, nPaletteId, MSHVSF_A_EXTRA_CUSTOM_7B);
    }
}

void CGame_MSHVSF_A::InitDataBuffer()
{
    m_nBufferSelectedRom = m_nMSHVSFSelectedRom;
    m_pppDataBuffer = new uint16_t * *[nUnitAmt];
    memset(m_pppDataBuffer, NULL, sizeof(uint16_t**) * nUnitAmt);
}

void CGame_MSHVSF_A::ClearDataBuffer()
{
    uint32_t nCurrentROMMode = m_nMSHVSFSelectedRom;

    m_nMSHVSFSelectedRom = m_nBufferSelectedRom;

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

    m_nMSHVSFSelectedRom = nCurrentROMMode;
}

void CGame_MSHVSF_A::LoadSpecificPaletteData(uint32_t nUnitId, uint32_t nPalId)
{
    if (UsePaletteSetForCharacters() ? (nUnitId != MSHVSF_A_EXTRALOC_6A) :
                                       (nUnitId != MSHVSF_A_EXTRALOC_7B))
    {
        int cbPaletteSizeOnDisc = 0;
        const sGame_PaletteDataset* paletteData = GetSpecificPalette(nUnitId, nPalId);

        cbPaletteSizeOnDisc = (int)max(0, (paletteData->nPaletteOffsetEnd - paletteData->nPaletteOffset));

        m_nCurrentPaletteROMLocation = paletteData->nPaletteOffset;
        m_nCurrentPaletteSizeInColors = cbPaletteSizeOnDisc / m_nSizeOfColorsInBytes;
        m_pszCurrentPaletteName = paletteData->szPaletteName;

        if ((m_nCurrentPaletteROMLocation == 0) && !UsePaletteSetForCharacters())
        {
            // This is a very particular override for the split-rom Captain America Part 2 sprite
            createPalOptions.nTransparencyColorPosition = 6;
        }
        else
        {
            createPalOptions.nTransparencyColorPosition = 0;
        }
    }
    else // MSHVSF_A_EXTRALOC
    {
        // This is where we handle all the palettes added in via Extra.
        stExtraDef* pCurrDef = UsePaletteSetForCharacters() ? &MSHVSF_A_EXTRA_CUSTOM_6A[GetExtraLoc(nUnitId) + nPalId] : &MSHVSF_A_EXTRA_CUSTOM_7B[GetExtraLoc(nUnitId) + nPalId];

        m_nCurrentPaletteROMLocation = pCurrDef->uOffset;
        m_nCurrentPaletteSizeInColors = (pCurrDef->cbPaletteSize / m_nSizeOfColorsInBytes);
        m_pszCurrentPaletteName = pCurrDef->szDesc;
    }
}

BOOL CGame_MSHVSF_A::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
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

    // Default values for multisprite image display for Export
    int32_t nSrcStart = NodeGet->uPalId;
    uint32_t nSrcAmt = 1;
    int8_t nNodeIncrement = 1;

    //Get rid of any palettes if there are any
    BasePalGroup.FlushPalAll();

    // Make sure to reset the image id
    int nTargetImgId = 0;
    uint32_t nImgUnitId = INVALID_UNIT_VALUE;

    bool fShouldUseAlternateLoadLogic = false;

    // Only load images for internal units, since we don't currently have a methodology for associating
    // external loads to internal sprites.
    if (UsePaletteSetForCharacters() ? (NodeGet->uUnitId != MSHVSF_A_EXTRALOC_6A) :
                                       (NodeGet->uUnitId != MSHVSF_A_EXTRALOC_7B))
    {
        const sGame_PaletteDataset* paletteDataSet = GetSpecificPalette(NodeGet->uUnitId, NodeGet->uPalId);

        if (paletteDataSet)
        {
            nImgUnitId = paletteDataSet->indexImgToUse;
            nTargetImgId = paletteDataSet->indexOffsetToUse;

            const sDescTreeNode* pCurrentNode = GetNodeFromPaletteId(NodeGet->uUnitId, NodeGet->uPalId, false);

            if (pCurrentNode) // For Basic nodes, we can allow multisprite view in the Export dialog
            {
                if ((wcsstr(pCurrentNode->szDesc, L"P1") != nullptr) || (wcsstr(pCurrentNode->szDesc, L"P2") != nullptr))
                {
                    // We show 2 sprites (P1/P2) for export for all normal VS sprites
                    nSrcAmt = static_cast<uint32_t>(pButtonLabelSet.size());
                    nNodeIncrement = pCurrentNode->uChildAmt;

                    if (NodeGet->uUnitId == index_MSHVSF_Blackheart_Mephisto)
                    {
                        constexpr int32_t nBlackheartNodeSize = ARRAYSIZE(MSHVSF_A_BLACKHEART_PALETTES_P1COLOR_PUNCH);
                        constexpr int32_t nMephistoNodeSize = ARRAYSIZE(MSHVSF_A_MEPHISTO_PALETTES_P1COLOR_PUNCH);
                        // Blackheart and Mephisto displays
                        if ((nSrcStart >= nNodeIncrement) && (nSrcStart <= (nNodeIncrement * nBlackheartNodeSize)))
                        {
                            // Blackheart
                            nSrcStart -= nNodeIncrement;
                        }
                        else // Mephisto
                        {
                            if ((uint32_t)nSrcStart > (nSrcAmt * nBlackheartNodeSize))
                            {
                                nSrcStart -= nMephistoNodeSize;
                            }
                        }
                    }
                    else
                    {
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
                        int8_t nPeerPaletteDistance = paletteDataSet->pPalettePairingInfo->nNodeIncrementToPartner;

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

void CGame_MSHVSF_A::PostSetPal(uint32_t nUnitId, uint32_t nPalId)
{
    if (UsePaletteSetForCharacters() ? (nUnitId != MSHVSF_A_EXTRALOC_6A) :
                                       (nUnitId != MSHVSF_A_EXTRALOC_7B))
    {
        CString strMessage;
        strMessage.Format(L"CGame_MSHVSF_A::PostSetPal : Checking additional change requirements for unit %u palette %u.\n", nUnitId, nPalId);
        OutputDebugString(strMessage);

        const sGame_PaletteDataset* pThisPalette = GetSpecificPalette(nUnitId, nPalId);

        if (pThisPalette && pThisPalette->pExtraProcessing && pThisPalette->pExtraProcessing->pProcessingSteps.size())
        {
            OutputDebugString(L"\tThis palette is linked to additional palettes: updating those as well now.\n");
            ProcessAdditionalPaletteChangesRequired(nUnitId, nPalId, pThisPalette->pExtraProcessing->pProcessingSteps);
        }
        else
        {
            OutputDebugString(L"\tNo further processing needed.\n");
        }
    }
}

#include "StdAfx.h"
#include "Game_VampireNightWarriors_A.h"
#include "GameDef.h"
#include "..\PalMod.h"

stExtraDef* CGame_VampireNightWarriors_A::VampireNightWarriors_A_EXTRA_CUSTOM = nullptr;

CDescTree CGame_VampireNightWarriors_A::MainDescTree = nullptr;

uint32_t CGame_VampireNightWarriors_A::rgExtraCountAll[VampireNightWarriors_A_NUMUNIT + 1] = { (uint32_t)-1 };
uint32_t CGame_VampireNightWarriors_A::rgExtraLoc[VampireNightWarriors_A_NUMUNIT + 1] = { (uint32_t)-1 };

UINT32 CGame_VampireNightWarriors_A::m_nTotalPaletteCountForVampireNightWarriors = 0;
UINT32 CGame_VampireNightWarriors_A::m_nExpectedGameROMSize = 0x80000; // 524288 bytes
UINT32 CGame_VampireNightWarriors_A::m_nConfirmedROMSize = -1;

void CGame_VampireNightWarriors_A::InitializeStatics()
{
    safe_delete_array(CGame_VampireNightWarriors_A::VampireNightWarriors_A_EXTRA_CUSTOM);

    memset(rgExtraCountAll, -1, sizeof(rgExtraCountAll));
    memset(rgExtraLoc, -1, sizeof(rgExtraLoc));

    MainDescTree.SetRootTree(CGame_VampireNightWarriors_A::InitDescTree());
}

CGame_VampireNightWarriors_A::CGame_VampireNightWarriors_A(UINT32 nConfirmedROMSize)
{
    createPalOptions = { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 };
    SetAlphaMode(AlphaMode::GameDoesNotUseAlpha);
    SetColorMode(ColMode::COLMODE_RGB444_BE);

    // We need this set before we initialize so that corrupt Extras truncate correctly.
    // Otherwise the new user inadvertently corrupts their ROM.
    m_nConfirmedROMSize = nConfirmedROMSize;
    InitializeStatics();

    //We need the proper unit amt before we init the main buffer
    nUnitAmt = VampireNightWarriors_A_NUMUNIT + (GetExtraCt(VampireNightWarriors_A_EXTRALOC) ? 1 : 0);

    m_nTotalInternalUnits = VampireNightWarriors_A_NUMUNIT;
    m_nExtraUnit = VampireNightWarriors_A_EXTRALOC;
    m_nSafeCountForThisRom = 120 + GetExtraCt(VampireNightWarriors_A_EXTRALOC);
    m_pszExtraFilename = EXTRA_FILENAME_VampireNightWarriors;
    m_nTotalPaletteCount = m_nTotalPaletteCountForVampireNightWarriors;

    // This magic number is used to warn users if their Extra file is trying to write somewhere potentially unusual
    m_nLowestKnownPaletteRomLocation = 0x1182a;

    InitDataBuffer();

    //Set game information
    nGameFlag = VampireNightWarriors_A;
    nImgGameFlag = IMGDAT_SECTION_CPS2;
    m_prgGameImageSet = VampireNightWarriors_A_IMGIDS_USED;

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

CGame_VampireNightWarriors_A::~CGame_VampireNightWarriors_A(void)
{
    safe_delete_array(CGame_VampireNightWarriors_A::VampireNightWarriors_A_EXTRA_CUSTOM);
    ClearDataBuffer();
    //Get rid of the file changed flag
    FlushChangeTrackingArray();
}

UINT32 CGame_VampireNightWarriors_A::GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet, bool* pfNeedToValidateCRCs)
{
#ifdef MAME_INFORMATION
    GAME(1994, dstlk, 0, cps2, cps2_2p6b, cps2_state, init_cps2, ROT0, "Capcom", "Darkstalkers: The Night Warriors (Euro 940705)", MACHINE_SUPPORTS_SAVE)
        ROM_LOAD16_WORD_SWAP("vame.09a", 0x300000, 0x80000, CRC(f16db74b) SHA1(7b7e31916a61e7fb35ec20849c6d22d74e169ec0))
    GAME(1994, dstlku, dstlk, cps2, cps2_2p6b, cps2_state, init_cps2, ROT0, "Capcom", "Darkstalkers: The Night Warriors (USA 940818)", MACHINE_SUPPORTS_SAVE)
        ROM_LOAD16_WORD_SWAP("vamu.09b", 0x300000, 0x80000, CRC(2d1e9ae5) SHA1(1c4aced7dd0356ee445ca1e5db2c3a2ad4ee56c6))
    GAME(1994, dstlkur1, dstlk, cps2, cps2_2p6b, cps2_state, init_cps2, ROT0, "Capcom", "Darkstalkers: The Night Warriors (USA 940705)", MACHINE_SUPPORTS_SAVE)
        ROM_LOAD16_WORD_SWAP("vamu.09a", 0x300000, 0x80000, CRC(8dd55b24) SHA1(d99c2cbc4a9899a3d187201e6e730b7b8fb13d1d))
    GAME(1994, dstlka, dstlk, cps2, cps2_2p6b, cps2_state, init_cps2, ROT0, "Capcom", "Darkstalkers: The Night Warriors (Asia 940705)", MACHINE_SUPPORTS_SAVE)
        ROM_LOAD16_WORD_SWAP("vama.09a", 0x300000, 0x80000, CRC(67fa5573) SHA1(2dab32cf0d361d2c52cce5eb41b389a0e32dd192))
    GAME(1994, dstlkh, dstlk, cps2, cps2_2p6b, cps2_state, init_cps2, ROT0, "Capcom", "Darkstalkers: The Night Warriors (Hispanic 940818)", MACHINE_SUPPORTS_SAVE)
        ROM_LOAD16_WORD_SWAP("vamh.09c", 0x300000, 0x80000, CRC(15187632) SHA1(81b7166334dc3c331673822c31581e0e7809b698))
    
    GAME(1994, vampj, dstlk, cps2, cps2_2p6b, cps2_state, init_cps2, ROT0, "Capcom", "Vampire: The Night Warriors (Japan 940705)", MACHINE_SUPPORTS_SAVE) // Partial update set? Only rom 04 is "B" revision
        ROM_LOAD16_WORD_SWAP("vamj.09a", 0x300000, 0x80000, CRC(fc0a4aac) SHA1(a2c79eb4dc838c238e182a4da3567ac8db3488d8))
    GAME(1994, vampja, dstlk, cps2, cps2_2p6b, cps2_state, init_cps2, ROT0, "Capcom", "Vampire: The Night Warriors (Japan 940705 alt)", MACHINE_SUPPORTS_SAVE)
    	ROM_LOAD16_WORD_SWAP( "vamj.09a", 0x300000, 0x80000, CRC(fc0a4aac) SHA1(a2c79eb4dc838c238e182a4da3567ac8db3488d8) )
    GAME(1994, vampjr1, dstlk, cps2, cps2_2p6b, cps2_state, init_cps2, ROT0, "Capcom", "Vampire: The Night Warriors (Japan 940630)", MACHINE_SUPPORTS_SAVE)
        ROM_LOAD16_WORD_SWAP("vamj.09", 0x300000, 0x80000, CRC(c119a827) SHA1(422864dda2a12621175350b8a130f970ed690719))
#endif

    const std::vector<ROMRevisionLookupData> VHHackROMHeader =
    {
        {
            0,
            {   0x8dd6, 0x3119, 0x8dd8, 0x2019,     0x8dea, 0x2419, 0x8d9a, 0x0019,     0x8dde, 0x0019, 0x8def, 0x0019,
                0x8e10, 0x181a, 0x0001, 0x001f,     0x0009, 0xff80, 0x0000, 0x0000,     0x0030, 0x7b56, 0x8e19, 0x1318,
                0x8df3, 0x0018, 0x8e30, 0x2318,     0x8df4, 0x1018, 0x8e00, 0x0118,}
        },
    };

    static sCRC32ValueSet knownROMs[] =
    {
        { L"Darkstalkers: The Night Warriors (Euro 940705)", L"vame.09a", 0xf16db74b, -0x2450 },
        { L"Darkstalkers: The Night Warriors (USA 940705)", L"vamu.09a", 0x8dd55b24, -0x24B6 },
        { L"Darkstalkers: The Night Warriors (USA 940818)", L"vamu.09b", 0x2d1e9ae5, -0x2196 },
        { L"Darkstalkers: The Night Warriors (Asia 940705)", L"vama.09a", 0x67fa5573, -0x24B6 },
        { L"Darkstalkers: The Night Warriors (Hispanic 940818)", L"vamh.09c", 0x15187632, -0x2196 },
        { L"Darkstalkers: The Night Warriors (USA 940705 Phoenix)", L"vamud.09a", 0x8b333a19, -0x24B6 },

        // we usually start at 0x1182a for demitri
        { L"Vampire: The Night Warriors (Japan 940630)", L"vamj.09", 0xc119a827, 0 },
        // They used the wrong filename for the Boss Hack version, so we will use the needed shift if and only if
        // we find a matching header.
        { L"Vampire: The Night Warriors (Japan 940705 Boss Hack)", L"vamj.09", 0xfc0a4aac, 0x68, VHHackROMHeader },
        { L"Vampire: The Night Warriors (Japan 940705)", L"vamj.09a", 0xfc0a4aac, 0x68 },
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

uint32_t CGame_VampireNightWarriors_A::GetExtraCt(uint32_t nUnitId, BOOL fCountVisibleOnly)
{
    return _GetExtraCount(rgExtraCountAll, VampireNightWarriors_A_NUMUNIT, nUnitId, VampireNightWarriors_A_EXTRA_CUSTOM);
}

uint32_t CGame_VampireNightWarriors_A::GetExtraLoc(uint32_t nUnitId)
{
    return _GetExtraLocation(rgExtraLoc, VampireNightWarriors_A_NUMUNIT, nUnitId, VampireNightWarriors_A_EXTRA_CUSTOM);
}

CDescTree* CGame_VampireNightWarriors_A::GetMainTree()
{
    return &CGame_VampireNightWarriors_A::MainDescTree;
}

sDescTreeNode* CGame_VampireNightWarriors_A::InitDescTree()
{
    //Load extra file if we're using it
    LoadExtraFileForGame(EXTRA_FILENAME_VampireNightWarriors, &VampireNightWarriors_A_EXTRA_CUSTOM, VampireNightWarriors_A_EXTRALOC, m_nConfirmedROMSize);

    const UINT16 nUnitCt = VampireNightWarriors_A_NUMUNIT + (GetExtraCt(VampireNightWarriors_A_EXTRALOC) ? 1 : 0);

    sDescTreeNode* NewDescTree = new sDescTreeNode;

    //Create the main character tree
    _snwprintf_s(NewDescTree->szDesc, ARRAYSIZE(NewDescTree->szDesc), _TRUNCATE, L"%s", g_GameFriendlyName[VampireNightWarriors_A]);
    NewDescTree->ChildNodes = new sDescTreeNode[nUnitCt];
    NewDescTree->uChildAmt = nUnitCt;
    //All units have tree children
    NewDescTree->uChildType = DESC_NODETYPE_TREE;

    m_nTotalPaletteCountForVampireNightWarriors = _InitDescTree(NewDescTree,
        VampireNightWarriors_A_UNITS,
        VampireNightWarriors_A_EXTRALOC,
        VampireNightWarriors_A_NUMUNIT,
        rgExtraCountAll,
        rgExtraLoc,
        VampireNightWarriors_A_EXTRA_CUSTOM
    );

    return NewDescTree;
}

sFileRule CGame_VampireNightWarriors_A::GetRule(uint32_t nUnitId)
{
    sFileRule NewFileRule;

    _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, L"vamj.09");

    NewFileRule.uUnitId = 0;
    NewFileRule.uVerifyVar = m_nExpectedGameROMSize;

    return NewFileRule;
}

uint32_t CGame_VampireNightWarriors_A::GetCollectionCountForUnit(uint32_t nUnitId)
{
    return _GetCollectionCountForUnit(VampireNightWarriors_A_UNITS, rgExtraCountAll, VampireNightWarriors_A_NUMUNIT, VampireNightWarriors_A_EXTRALOC, nUnitId, VampireNightWarriors_A_EXTRA_CUSTOM);
}

uint32_t CGame_VampireNightWarriors_A::GetNodeCountForCollection(uint32_t nUnitId, uint32_t nCollectionId)
{
    return _GetNodeCountForCollection(VampireNightWarriors_A_UNITS, rgExtraCountAll, VampireNightWarriors_A_NUMUNIT, VampireNightWarriors_A_EXTRALOC, nUnitId, nCollectionId, VampireNightWarriors_A_EXTRA_CUSTOM);
}

LPCWSTR CGame_VampireNightWarriors_A::GetDescriptionForCollection(uint32_t nUnitId, uint32_t nCollectionId)
{
    return _GetDescriptionForCollection(VampireNightWarriors_A_UNITS, VampireNightWarriors_A_EXTRALOC, nUnitId, nCollectionId);
}

uint32_t CGame_VampireNightWarriors_A::GetPaletteCountForUnit(uint32_t nUnitId)
{
    return _GetPaletteCountForUnit(VampireNightWarriors_A_UNITS, rgExtraCountAll, VampireNightWarriors_A_NUMUNIT, VampireNightWarriors_A_EXTRALOC, nUnitId, VampireNightWarriors_A_EXTRA_CUSTOM);
}

const sGame_PaletteDataset* CGame_VampireNightWarriors_A::GetPaletteSet(uint32_t nUnitId, uint32_t nCollectionId)
{
    return _GetPaletteSet(VampireNightWarriors_A_UNITS, nUnitId, nCollectionId);
}

const sDescTreeNode* CGame_VampireNightWarriors_A::GetNodeFromPaletteId(uint32_t nUnitId, uint32_t nPaletteId, bool fReturnBasicNodesOnly)
{
    return _GetNodeFromPaletteId(VampireNightWarriors_A_UNITS, rgExtraCountAll, VampireNightWarriors_A_NUMUNIT, VampireNightWarriors_A_EXTRALOC, nUnitId, nPaletteId, VampireNightWarriors_A_EXTRA_CUSTOM, fReturnBasicNodesOnly);
}

const sGame_PaletteDataset* CGame_VampireNightWarriors_A::GetSpecificPalette(uint32_t nUnitId, uint32_t nPaletteId)
{
    return _GetSpecificPalette(VampireNightWarriors_A_UNITS, rgExtraCountAll, VampireNightWarriors_A_NUMUNIT, VampireNightWarriors_A_EXTRALOC, nUnitId, nPaletteId, VampireNightWarriors_A_EXTRA_CUSTOM);
}

void CGame_VampireNightWarriors_A::LoadSpecificPaletteData(uint32_t nUnitId, uint32_t nPalId)
{
    if (nUnitId != VampireNightWarriors_A_EXTRALOC)
    {
        int cbPaletteSizeOnDisc = 0;
        const sGame_PaletteDataset* paletteData = GetSpecificPalette(nUnitId, nPalId);

        if (paletteData)
        {
            cbPaletteSizeOnDisc = (int)max(0, (paletteData->nPaletteOffsetEnd - paletteData->nPaletteOffset));

            m_nCurrentPaletteROMLocation = paletteData->nPaletteOffset;
            m_nCurrentPaletteSizeInColors = cbPaletteSizeOnDisc / m_nSizeOfColorsInBytes;
            m_pszCurrentPaletteName = paletteData->szPaletteName;
        }
        else
        {
            // A bogus palette was requested: this is unrecoverable.
            DebugBreak();
        }

        // Adjust for ROM-specific variant locations
        if (m_pCRC32SpecificData)
        {
            m_nCurrentPaletteROMLocation += m_pCRC32SpecificData->nROMSpecificOffset;

            if ((m_nCurrentPaletteROMLocation + cbPaletteSizeOnDisc ) > m_nExpectedGameROMSize)
            {
                OutputDebugString(L"Warning: invalid location referenced.  This is probably in the wrong ROM.\n");
            }
        }
    }
    else // VampireNightWarriors_A_EXTRALOC
    {
        // This is where we handle all the palettes added in via Extra.
        stExtraDef* pCurrDef = ((stExtraDef*)&VampireNightWarriors_A_EXTRA_CUSTOM[GetExtraLoc(nUnitId) + nPalId]);

        m_nCurrentPaletteROMLocation = pCurrDef->uOffset;
        m_nCurrentPaletteSizeInColors = (pCurrDef->cbPaletteSize / m_nSizeOfColorsInBytes);
        m_pszCurrentPaletteName = pCurrDef->szDesc;
    }
}

BOOL CGame_VampireNightWarriors_A::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
{
    return _UpdatePalImg(VampireNightWarriors_A_UNITS, rgExtraCountAll, VampireNightWarriors_A_NUMUNIT, VampireNightWarriors_A_EXTRALOC, VampireNightWarriors_A_EXTRA_CUSTOM, Node01, Node02, Node03, Node03);
}

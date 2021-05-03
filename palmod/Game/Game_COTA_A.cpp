#include "StdAfx.h"
#include "Game_COTA_A.h"
#include "GameDef.h"
#include "..\PalMod.h"

#define COTA_DEBUG DEFAULT_GAME_DEBUG_STATE

stExtraDef* CGame_COTA_A::COTA_A_EXTRA_CUSTOM = nullptr;

CDescTree CGame_COTA_A::MainDescTree = nullptr;
int CGame_COTA_A::rgExtraCountAll[COTA_A_NUMUNIT + 1] = { -1 };
int CGame_COTA_A::rgExtraLoc[COTA_A_NUMUNIT + 1] = { -1 };

UINT32 CGame_COTA_A::m_nTotalPaletteCountForCOTA = 0;
UINT32 CGame_COTA_A::m_nExpectedGameROMSize = 0x80000; // 524288 bytes
UINT32 CGame_COTA_A::m_nConfirmedROMSize = -1;

void CGame_COTA_A::InitializeStatics()
{
    safe_delete_array(CGame_COTA_A::COTA_A_EXTRA_CUSTOM);

    memset(rgExtraCountAll, -1, sizeof(rgExtraCountAll));
    memset(rgExtraLoc, -1, sizeof(rgExtraLoc));

    MainDescTree.SetRootTree(InitDescTree());
}

CGame_COTA_A::CGame_COTA_A(UINT32 nConfirmedROMSize)
{
    OutputDebugString(L"CGame_COTA_A::CGame_COTA_A: Loading ROM\n");

    createPalOptions = { NO_SPECIAL_OPTIONS, WRITE_16 };
    SetAlphaMode(AlphaMode::GameDoesNotUseAlpha);
    SetColorMode(ColMode::COLMODE_RGB444_BE);

    // We need this set before we initialize so that corrupt Extras truncate correctly.
    // Otherwise the new user inadvertently corrupts their ROM.
    m_nConfirmedROMSize = nConfirmedROMSize;
    InitializeStatics();

    m_nTotalInternalUnits = COTA_A_NUMUNIT;
    m_nExtraUnit = COTA_A_EXTRALOC;

    m_nSafeCountForThisRom = GetExtraCt(m_nExtraUnit) + 350;
    m_pszExtraFilename = EXTRA_FILENAME_COTA;
    m_nTotalPaletteCount = m_nTotalPaletteCountForCOTA;
    m_nLowestKnownPaletteRomLocation = 0x2600e;

    nUnitAmt = m_nTotalInternalUnits + (GetExtraCt(m_nExtraUnit) ? 1 : 0);

    InitDataBuffer();

    //Set game information
    nGameFlag = COTA_A;
    nImgGameFlag = IMGDAT_SECTION_CPS2;
    m_prgGameImageSet = COTA_A_IMG_UNITS;
    nImgUnitAmt = ARRAYSIZE(COTA_A_IMG_UNITS);

    nFileAmt = 1;

    //Set the image out display type
    DisplayType = eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT;
    pButtonLabelSet = DEF_BUTTONLABEL_2;
    m_nNumberOfColorOptions = ARRAYSIZE(DEF_BUTTONLABEL_2);

    //Create the redirect buffer
    rgUnitRedir = new UINT16[nUnitAmt + 1];
    memset(rgUnitRedir, NULL, sizeof(UINT16) * nUnitAmt);

    //Create the file changed flag
    PrepChangeTrackingArray();
}

CGame_COTA_A::~CGame_COTA_A(void)
{
    safe_delete_array(CGame_COTA_A::COTA_A_EXTRA_CUSTOM);
    ClearDataBuffer();
    //Get rid of the file changed flag
    FlushChangeTrackingArray();
}

UINT32 CGame_COTA_A::GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet, bool* pfNeedToValidateCRCs)
{
    static sCRC32ValueSet knownROMs[] =
    {
        { L"X-Men: Children of the Atom (Asia/Japan 9412--)", L"xmn.05", 0xc3ed62a2, -0x1AB8 },
        { L"X-Men: Children of the Atom (Japan Rent 940812)", L"xmno.05a", 0x0303d672, -0x35F4 },
        { L"X-Men: Children of the Atom (950105)", L"xmn.05a", 0xac0d7759, 0 },
        { L"X-Men: Children of the Atom (950331)", L"xmne.05b", 0x87b0ed0f, 0 },
        { L"X-Men: Children of the Atom (Hispanic 950331)", L"xmnh.05b", 0x87b0ed0f, 0 },
    };

    if (ppKnownROMSet != nullptr)
    {
        *ppKnownROMSet = knownROMs;
    }

    if (pfNeedToValidateCRCs)
    {
        // Each filename is associated with a single CRC
        *pfNeedToValidateCRCs = false;
    }

    return ARRAYSIZE(knownROMs);

#ifdef NOTES
        // These are the MAME values...
        xmcotar1    05/01/1995 (c) 1994 (Euro)
            ROM_LOAD16_WORD_SWAP("xmn.05a",  0x100000, 0x80000, CRC(ac0d7759) SHA1(650d4474b13f16af7910a0f721fcda2ddb2414fd))
        xmcotau     05/01/1995 (c) 1994 (USA)
            ROM_LOAD16_WORD_SWAP("xmn.05a",  0x100000, 0x80000, CRC(ac0d7759) SHA1(650d4474b13f16af7910a0f721fcda2ddb2414fd))
        xmcotahr1   05/01/1995 (c) 1994 (Hispanic)
            ROM_LOAD16_WORD_SWAP("xmn.05a",  0x100000, 0x80000, CRC(ac0d7759) SHA1(650d4474b13f16af7910a0f721fcda2ddb2414fd))
        xmcotaj     05/01/1995 (c) 1994 (Japan)
            ROM_LOAD16_WORD_SWAP("xmn.05a",  0x100000, 0x80000, CRC(ac0d7759) SHA1(650d4474b13f16af7910a0f721fcda2ddb2414fd))
        xmcotaa     05/01/1995 (c) 1994 (Asia)
            ROM_LOAD16_WORD_SWAP("xmn.05a",  0x100000, 0x80000, CRC(ac0d7759) SHA1(650d4474b13f16af7910a0f721fcda2ddb2414fd))

        xmcotaj1    22/12/1994 (c) 1994 (Japan)
            ROM_LOAD16_WORD_SWAP("xmn.05",   0x100000, 0x80000, CRC(c3ed62a2) SHA1(4e3317d7ca981e33318822103a16e59f4ce20deb))
        xmcotaj2    19/12/1994 (c) 1994 (Japan)
            ROM_LOAD16_WORD_SWAP("xmn.05",   0x100000, 0x80000, CRC(c3ed62a2) SHA1(4e3317d7ca981e33318822103a16e59f4ce20deb))
        xmcotaj3    17/12/1994 (c) 1994 (Japan)
            ROM_LOAD16_WORD_SWAP("xmn.05",   0x100000, 0x80000, CRC(c3ed62a2) SHA1(4e3317d7ca981e33318822103a16e59f4ce20deb))
        xmcotaar1   19/12/1994 (c) 1994 (Asia)
            ROM_LOAD16_WORD_SWAP("xmn.05",   0x100000, 0x80000, CRC(c3ed62a2) SHA1(4e3317d7ca981e33318822103a16e59f4ce20deb))
        xmcotaar2   17/12/1994 (c) 1994 (Asia)
            ROM_LOAD16_WORD_SWAP("xmn.05",   0x100000, 0x80000, CRC(c3ed62a2) SHA1(4e3317d7ca981e33318822103a16e59f4ce20deb))

        xmcotajr    08/12/1994 (c) 1994 (Japan Rent)
            ROM_LOAD16_WORD_SWAP("xmno.05a", 0x100000, 0x80000, CRC(0303d672) SHA1(4816b5ac6a9bf78665112d54a8f3569d590721b2))


        xmcota      31/03/1995 (c) 1994 (Euro)
            ROM_LOAD16_WORD_SWAP("xmne.05b", 0x100000, 0x80000, CRC(87b0ed0f) SHA1(f4d78fdd9fcf864e909d9a2bb351b49a5f8ec7a0))
        xmcotah     31/03/1995 (c) 1994 (Hispanic)
            ROM_LOAD16_WORD_SWAP("xmnh.05b", 0x100000, 0x80000, CRC(87b0ed0f) SHA1(f4d78fdd9fcf864e909d9a2bb351b49a5f8ec7a0))
        xmcotab     31/03/1995 (c) 1995 (Brazil)
            ROM_LOAD16_WORD_SWAP("xmne.05b", 0x100000, 0x80000, CRC(87b0ed0f) SHA1(f4d78fdd9fcf864e909d9a2bb351b49a5f8ec7a0))
#endif
}

int CGame_COTA_A::GetExtraCt(UINT16 nUnitId, BOOL bCountVisibleOnly)
{
    return _GetExtraCount(rgExtraCountAll, COTA_A_NUMUNIT, nUnitId, COTA_A_EXTRA_CUSTOM);
}

int CGame_COTA_A::GetExtraLoc(UINT16 nUnitId)
{
    return _GetExtraLocation(rgExtraLoc, COTA_A_NUMUNIT, nUnitId, COTA_A_EXTRA_CUSTOM);
}

CDescTree* CGame_COTA_A::GetMainTree()
{
    return &CGame_COTA_A::MainDescTree;
}

sDescTreeNode* CGame_COTA_A::InitDescTree()
{
    //Load extra file if we're using it
    LoadExtraFileForGame(EXTRA_FILENAME_COTA, COTA_A_EXTRA, &COTA_A_EXTRA_CUSTOM, COTA_A_EXTRALOC, m_nConfirmedROMSize);

    UINT16 nUnitCt = (COTA_A_NUMUNIT + (GetExtraCt(COTA_A_EXTRALOC) ? 1 : 0));
    
    sDescTreeNode* NewDescTree = new sDescTreeNode;

    //Create the main character tree
    _snwprintf_s(NewDescTree->szDesc, ARRAYSIZE(NewDescTree->szDesc), _TRUNCATE, L"%s", g_GameFriendlyName[COTA_A]);
    NewDescTree->ChildNodes = new sDescTreeNode[nUnitCt];
    NewDescTree->uChildAmt = nUnitCt;
    //All units have tree children
    NewDescTree->uChildType = DESC_NODETYPE_TREE;

    m_nTotalPaletteCountForCOTA = _InitDescTree(NewDescTree,
        COTA_A_UNITS,
        COTA_A_EXTRALOC,
        COTA_A_NUMUNIT,
        rgExtraCountAll,
        rgExtraLoc,
        COTA_A_EXTRA_CUSTOM
    );

    return NewDescTree;
}

sFileRule CGame_COTA_A::GetRule(UINT16 nUnitId)
{
    sFileRule NewFileRule;

    _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, L"xmn.05a");

    NewFileRule.uUnitId = 0;
    NewFileRule.uVerifyVar = m_nExpectedGameROMSize;

    return NewFileRule;
}

UINT16 CGame_COTA_A::GetCollectionCountForUnit(UINT16 nUnitId)
{
    return _GetCollectionCountForUnit(COTA_A_UNITS, rgExtraCountAll, COTA_A_NUMUNIT, COTA_A_EXTRALOC, nUnitId, COTA_A_EXTRA_CUSTOM);
}

UINT16 CGame_COTA_A::GetNodeCountForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetNodeCountForCollection(COTA_A_UNITS, rgExtraCountAll, COTA_A_NUMUNIT, COTA_A_EXTRALOC, nUnitId, nCollectionId, COTA_A_EXTRA_CUSTOM);
}

LPCWSTR CGame_COTA_A::GetDescriptionForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetDescriptionForCollection(COTA_A_UNITS, COTA_A_EXTRALOC, nUnitId, nCollectionId);
}

UINT16 CGame_COTA_A::GetPaletteCountForUnit(UINT16 nUnitId)
{
    return _GetPaletteCountForUnit(COTA_A_UNITS, rgExtraCountAll, COTA_A_NUMUNIT, COTA_A_EXTRALOC, nUnitId, COTA_A_EXTRA_CUSTOM);
}

const sGame_PaletteDataset* CGame_COTA_A::GetPaletteSet(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetPaletteSet(COTA_A_UNITS, nUnitId, nCollectionId);
}

const sDescTreeNode* CGame_COTA_A::GetNodeFromPaletteId(UINT16 nUnitId, UINT16 nPaletteId, bool fReturnBasicNodesOnly)
{
    return _GetNodeFromPaletteId(COTA_A_UNITS, rgExtraCountAll, COTA_A_NUMUNIT, COTA_A_EXTRALOC, nUnitId, nPaletteId, COTA_A_EXTRA_CUSTOM, fReturnBasicNodesOnly);
}

const sGame_PaletteDataset* CGame_COTA_A::GetSpecificPalette(UINT16 nUnitId, UINT16 nPaletteId)
{
    return _GetSpecificPalette(COTA_A_UNITS, rgExtraCountAll, COTA_A_NUMUNIT, COTA_A_EXTRALOC, nUnitId, nPaletteId, COTA_A_EXTRA_CUSTOM);
}

void CGame_COTA_A::LoadSpecificPaletteData(UINT16 nUnitId, UINT16 nPalId)
{
     if (nUnitId != COTA_A_EXTRALOC)
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
    }
    else // COTA_A_EXTRALOC
    {
        // This is where we handle all the palettes added in via Extra.
        stExtraDef* pCurrDef = GetExtraDefForCOTA(GetExtraLoc(nUnitId) + nPalId);

        m_nCurrentPaletteROMLocation = pCurrDef->uOffset;
        m_nCurrentPaletteSizeInColors = (pCurrDef->cbPaletteSize / m_nSizeOfColorsInBytes);
        m_pszCurrentPaletteName = pCurrDef->szDesc;
    }

     // Adjust for ROM-specific variant locations
     if (m_pCRC32SpecificData)
     {
         // adjust for ROM, but bound it by 0
         // We need a special offset for the Japanese rent version's higher offsets
         if ((m_pCRC32SpecificData->crcValueExpected == 0x0303d672) && // Japan rent
             (m_nCurrentPaletteROMLocation > 0x36000)) // this number is fudged
         {
             // Somewhere after characters but before portraits there's another shift: account for that
             m_nCurrentPaletteROMLocation = max(0, m_nCurrentPaletteROMLocation + -0x3654);
         }
         else
         {
             m_nCurrentPaletteROMLocation = max(0, m_nCurrentPaletteROMLocation + m_pCRC32SpecificData->nROMSpecificOffset);
         }
     }
}

BOOL CGame_COTA_A::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
{
    return _UpdatePalImg(COTA_A_UNITS, rgExtraCountAll, COTA_A_NUMUNIT, COTA_A_EXTRALOC, COTA_A_EXTRA_CUSTOM, Node01, Node02, Node03, Node03);
}

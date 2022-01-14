#include "StdAfx.h"
#include "Game_VHUNT2_A.h"
#include "GameDef.h"
#include "..\PalMod.h"

stExtraDef* CGame_VHUNT2_A::VHUNT2_A_EXTRA_CUSTOM = nullptr;

CDescTree CGame_VHUNT2_A::MainDescTree = nullptr;

size_t CGame_VHUNT2_A::rgExtraCountAll[VHUNT2_A_NUMUNIT + 1] = { (size_t)-1 };
size_t CGame_VHUNT2_A::rgExtraCountVisibleOnly[VHUNT2_A_NUMUNIT + 1] = { (size_t)-1 };
size_t CGame_VHUNT2_A::rgExtraLoc[VHUNT2_A_NUMUNIT + 1] = { (size_t)-1 };

UINT32 CGame_VHUNT2_A::m_nTotalPaletteCountForVHUNT2 = 0;
UINT32 CGame_VHUNT2_A::m_nExpectedGameROMSize = 0x80000; // 524288 bytes
UINT32 CGame_VHUNT2_A::m_nConfirmedROMSize = -1;

void CGame_VHUNT2_A::InitializeStatics()
{
    safe_delete_array(CGame_VHUNT2_A::VHUNT2_A_EXTRA_CUSTOM);

    memset(rgExtraCountAll, -1, sizeof(rgExtraCountAll));
    memset(rgExtraLoc, -1, sizeof(rgExtraLoc));
    memset(rgExtraCountVisibleOnly, -1, sizeof(rgExtraCountVisibleOnly));

    MainDescTree.SetRootTree(CGame_VHUNT2_A::InitDescTree());
}

CGame_VHUNT2_A::CGame_VHUNT2_A(UINT32 nConfirmedROMSize)
{
    createPalOptions = { NO_SPECIAL_OPTIONS, WRITE_16 };
    SetAlphaMode(AlphaMode::GameDoesNotUseAlpha);
    SetColorMode(ColMode::COLMODE_RGB444_BE);

    // We need this set before we initialize so that corrupt Extras truncate correctly.
    // Otherwise the new user inadvertently corrupts their ROM.
    m_nConfirmedROMSize = nConfirmedROMSize;
    InitializeStatics();

    //We need the proper unit amt before we init the main buffer
    nUnitAmt = VHUNT2_A_NUMUNIT + (GetExtraCt(VHUNT2_A_EXTRALOC) ? 1 : 0);

    m_nTotalInternalUnits = VHUNT2_A_NUMUNIT;
    m_nExtraUnit = VHUNT2_A_EXTRALOC;
    m_nSafeCountForThisRom = 808 + GetExtraCt(VHUNT2_A_EXTRALOC);
    m_pszExtraFilename = EXTRA_FILENAME_VHUNT2;
    m_nTotalPaletteCount = m_nTotalPaletteCountForVHUNT2;

    // This magic number is used to warn users if their Extra file is trying to write somewhere potentially unusual
    m_nLowestKnownPaletteRomLocation = 0x16c9a; // this number is shifted to simplify things

    InitDataBuffer();

    //Set game information
    nGameFlag = VHUNT2_A;
    nImgGameFlag = IMGDAT_SECTION_CPS2;
    m_prgGameImageSet = VHUNT2_A_IMGIDS_USED;

    nFileAmt = 1;

    //Set the image out display type
    DisplayType = eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT;
    pButtonLabelSet = DEF_BUTTONLABEL_VSAV;

    //Create the redirect buffer
    rgUnitRedir = new size_t[nUnitAmt + 1];
    memset(rgUnitRedir, NULL, sizeof(size_t) * nUnitAmt);

    //Create the file changed flag
    PrepChangeTrackingArray();
}

CGame_VHUNT2_A::~CGame_VHUNT2_A(void)
{
    safe_delete_array(CGame_VHUNT2_A::VHUNT2_A_EXTRA_CUSTOM);
    ClearDataBuffer();
    //Get rid of the file changed flag
    FlushChangeTrackingArray();
}

UINT32 CGame_VHUNT2_A::GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet, bool* pfNeedToValidateCRCs)
{
    static sCRC32ValueSet knownROMs[] =
    {
        { L"Vampire Hunter 2 (Japan 970929)", L"vh2j.09", 0x11730952, 0x5FFD4 },//0x4714 }, // bbhood
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

size_t CGame_VHUNT2_A::GetExtraCt(size_t nUnitId, BOOL bCountVisibleOnly)
{
    return _GetExtraCount(rgExtraCountAll, VHUNT2_A_NUMUNIT, nUnitId, VHUNT2_A_EXTRA_CUSTOM);
}

size_t CGame_VHUNT2_A::GetExtraLoc(size_t nUnitId)
{
    return _GetExtraLocation(rgExtraLoc, VHUNT2_A_NUMUNIT, nUnitId, VHUNT2_A_EXTRA_CUSTOM);
}

CDescTree* CGame_VHUNT2_A::GetMainTree()
{
    return &CGame_VHUNT2_A::MainDescTree;
}

sDescTreeNode* CGame_VHUNT2_A::InitDescTree()
{
    //Load extra file if we're using it
    LoadExtraFileForGame(EXTRA_FILENAME_VHUNT2, &VHUNT2_A_EXTRA_CUSTOM, VHUNT2_A_EXTRALOC, m_nConfirmedROMSize);

    const UINT16 nUnitCt = VHUNT2_A_NUMUNIT + (GetExtraCt(VHUNT2_A_EXTRALOC) ? 1 : 0);

    sDescTreeNode* NewDescTree = new sDescTreeNode;

    //Create the main character tree
    _snwprintf_s(NewDescTree->szDesc, ARRAYSIZE(NewDescTree->szDesc), _TRUNCATE, L"%s", g_GameFriendlyName[VHUNT2_A]);
    NewDescTree->ChildNodes = new sDescTreeNode[nUnitCt];
    NewDescTree->uChildAmt = nUnitCt;
    //All units have tree children
    NewDescTree->uChildType = DESC_NODETYPE_TREE;

    m_nTotalPaletteCountForVHUNT2 = _InitDescTree(NewDescTree,
        VHUNT2_A_UNITS,
        VHUNT2_A_EXTRALOC,
        VHUNT2_A_NUMUNIT,
        rgExtraCountAll,
        rgExtraLoc,
        VHUNT2_A_EXTRA_CUSTOM
    );

    return NewDescTree;
}

sFileRule CGame_VHUNT2_A::GetRule(size_t nUnitId)
{
    sFileRule NewFileRule;

    _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, L"vs2j.10");

    NewFileRule.uUnitId = 0;
    NewFileRule.uVerifyVar = m_nExpectedGameROMSize;

    return NewFileRule;
}

size_t CGame_VHUNT2_A::GetCollectionCountForUnit(size_t nUnitId)
{
    return _GetCollectionCountForUnit(VHUNT2_A_UNITS, rgExtraCountAll, VHUNT2_A_NUMUNIT, VHUNT2_A_EXTRALOC, nUnitId, VHUNT2_A_EXTRA_CUSTOM);
}

size_t CGame_VHUNT2_A::GetNodeCountForCollection(size_t nUnitId, size_t nCollectionId)
{
    return _GetNodeCountForCollection(VHUNT2_A_UNITS, rgExtraCountAll, VHUNT2_A_NUMUNIT, VHUNT2_A_EXTRALOC, nUnitId, nCollectionId, VHUNT2_A_EXTRA_CUSTOM);
}

LPCWSTR CGame_VHUNT2_A::GetDescriptionForCollection(size_t nUnitId, size_t nCollectionId)
{
    return _GetDescriptionForCollection(VHUNT2_A_UNITS, VHUNT2_A_EXTRALOC, nUnitId, nCollectionId);
}

size_t CGame_VHUNT2_A::GetPaletteCountForUnit(size_t nUnitId)
{
    return _GetPaletteCountForUnit(VHUNT2_A_UNITS, rgExtraCountAll, VHUNT2_A_NUMUNIT, VHUNT2_A_EXTRALOC, nUnitId, VHUNT2_A_EXTRA_CUSTOM);
}

const sGame_PaletteDataset* CGame_VHUNT2_A::GetPaletteSet(size_t nUnitId, size_t nCollectionId)
{
    return _GetPaletteSet(VHUNT2_A_UNITS, nUnitId, nCollectionId);
}

const sDescTreeNode* CGame_VHUNT2_A::GetNodeFromPaletteId(size_t nUnitId, size_t nPaletteId, bool fReturnBasicNodesOnly)
{
    return _GetNodeFromPaletteId(VHUNT2_A_UNITS, rgExtraCountAll, VHUNT2_A_NUMUNIT, VHUNT2_A_EXTRALOC, nUnitId, nPaletteId, VHUNT2_A_EXTRA_CUSTOM, fReturnBasicNodesOnly);
}

const sGame_PaletteDataset* CGame_VHUNT2_A::GetSpecificPalette(size_t nUnitId, size_t nPaletteId)
{
    return _GetSpecificPalette(VHUNT2_A_UNITS, rgExtraCountAll, VHUNT2_A_NUMUNIT, VHUNT2_A_EXTRALOC, nUnitId, nPaletteId, VHUNT2_A_EXTRA_CUSTOM);
}

void CGame_VHUNT2_A::LoadSpecificPaletteData(size_t nUnitId, size_t nPalId)
{
    if (nUnitId != VHUNT2_A_EXTRALOC)
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

            if ((m_nCurrentPaletteROMLocation + cbPaletteSizeOnDisc )> 0x80000)
            {
                OutputDebugString(L"Warning: invalid location referenced.  This is probably in the wrong ROM.\n");
            }
        }
    }
    else // VHUNT2_A_EXTRALOC
    {
        // This is where we handle all the palettes added in via Extra.
        stExtraDef* pCurrDef = GetExtraDefForVHUNT2(GetExtraLoc(nUnitId) + nPalId);

        m_nCurrentPaletteROMLocation = pCurrDef->uOffset;
        m_nCurrentPaletteSizeInColors = (pCurrDef->cbPaletteSize / m_nSizeOfColorsInBytes);
        m_pszCurrentPaletteName = pCurrDef->szDesc;
    }
}

BOOL CGame_VHUNT2_A::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
{
    return _UpdatePalImg(VHUNT2_A_UNITS, rgExtraCountAll, VHUNT2_A_NUMUNIT, VHUNT2_A_EXTRALOC, VHUNT2_A_EXTRA_CUSTOM, Node01, Node02, Node03, Node03);
}

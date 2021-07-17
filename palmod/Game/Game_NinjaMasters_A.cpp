#include "StdAfx.h"
#include "GameDef.h"
#include "Game_NINJAMASTERS_A.h"
#include "..\PalMod.h"
#include "..\RegProc.h"

#define NINJAMASTERS_A_DEBUG DEFAULT_GAME_DEBUG_STATE

stExtraDef* CGame_NINJAMASTERS_A::NINJAMASTERS_A_EXTRA_CUSTOM = nullptr;

CDescTree CGame_NINJAMASTERS_A::MainDescTree = nullptr;

int CGame_NINJAMASTERS_A::rgExtraCountAll[NINJAMASTERS_A_NUMUNIT + 1];
int CGame_NINJAMASTERS_A::rgExtraLoc[NINJAMASTERS_A_NUMUNIT + 1];

int CGame_NINJAMASTERS_A::m_nSelectedRom = 1;
UINT32 CGame_NINJAMASTERS_A::m_nTotalPaletteCountForNINJAMASTERS = 0;
UINT32 CGame_NINJAMASTERS_A::m_nExpectedGameROMSize = 0x200000;
UINT32 CGame_NINJAMASTERS_A::m_nConfirmedROMSize = -1;

void CGame_NINJAMASTERS_A::InitializeStatics()
{
    safe_delete_array(CGame_NINJAMASTERS_A::NINJAMASTERS_A_EXTRA_CUSTOM);

    memset(rgExtraCountAll, -1, sizeof(rgExtraCountAll));
    memset(rgExtraLoc, -1, sizeof(rgExtraLoc));

    MainDescTree.SetRootTree(CGame_NINJAMASTERS_A::InitDescTree());
}

CGame_NINJAMASTERS_A::CGame_NINJAMASTERS_A(UINT32 nConfirmedROMSize, int nROMToLoad /*= 1*/)
{
    OutputDebugString(L"CGame_NINJAMASTERS_A::CGame_NINJAMASTERS_A: Loading ROM...\n");

    // We need this set before we initialize so that corrupt Extras truncate correctly.
    // Otherwise the new user inadvertently corrupts their ROM.
    m_nConfirmedROMSize = nConfirmedROMSize;
    InitializeStatics();

    m_nSelectedRom = nROMToLoad;

    m_nTotalInternalUnits = NINJAMASTERS_A_NUMUNIT;
    m_nExtraUnit = NINJAMASTERS_A_EXTRALOC;

    m_nSafeCountForThisRom = GetExtraCt(m_nExtraUnit) + 444;
    m_pszExtraFilename = EXTRA_FILENAME_NINJAMASTERS_A;
    m_nTotalPaletteCount = m_nTotalPaletteCountForNINJAMASTERS;
    // This magic number is used to warn users if their Extra file is trying to write somewhere potentially unusual
    m_nLowestKnownPaletteRomLocation = 0x81404;

    nUnitAmt = m_nTotalInternalUnits + (GetExtraCt(m_nExtraUnit) ? 1 : 0);

    InitDataBuffer();

    createPalOptions = { NO_SPECIAL_OPTIONS, WRITE_16 };
    SetAlphaMode(AlphaMode::GameDoesNotUseAlpha);
    SetColorMode(ColMode::COLMODE_RGB666_NEOGEO);

    //Set game information
    nGameFlag = NINJAMASTERS_A;
    nImgGameFlag = IMGDAT_SECTION_NEOGEO;
    m_prgGameImageSet = NINJAMASTERS_A_IMGIDS_USED;
    nImgUnitAmt = ARRAYSIZE(NINJAMASTERS_A_IMGIDS_USED);

    nFileAmt = 1;

    //Set the image out display type
    DisplayType = eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT;
    // Button labels are used for the Export Image dialog
    pButtonLabelSet = DEF_BUTTONLABEL_2_AB;
    m_nNumberOfColorOptions = ARRAYSIZE(DEF_BUTTONLABEL_2_AB);

    //Create the redirect buffer
    rgUnitRedir = new UINT16[nUnitAmt + 1];
    memset(rgUnitRedir, NULL, sizeof(UINT16) * nUnitAmt);

    //Create the file changed flag
    PrepChangeTrackingArray();
}

CGame_NINJAMASTERS_A::~CGame_NINJAMASTERS_A(void)
{
    safe_delete_array(CGame_NINJAMASTERS_A::NINJAMASTERS_A_EXTRA_CUSTOM);
    ClearDataBuffer();
    //Get rid of the file changed flag
    FlushChangeTrackingArray();
}

const sDescTreeNode* CGame_NINJAMASTERS_A::GetCurrentUnitSet()
{
    return NINJAMASTERS_A_UNITS;
}

UINT16 CGame_NINJAMASTERS_A::GetCurrentExtraLoc()
{
    return NINJAMASTERS_A_EXTRALOC;
}

CDescTree* CGame_NINJAMASTERS_A::GetMainTree()
{
    return &CGame_NINJAMASTERS_A::MainDescTree;
}

stExtraDef* CGame_NINJAMASTERS_A::GetCurrentExtraDef(int nDefCtr)
{
    return (stExtraDef*)&NINJAMASTERS_A_EXTRA_CUSTOM[nDefCtr];
}

int CGame_NINJAMASTERS_A::GetExtraCt(UINT16 nUnitId, BOOL bCountVisibleOnly)
{
    return _GetExtraCount(rgExtraCountAll, NINJAMASTERS_A_NUMUNIT, nUnitId, NINJAMASTERS_A_EXTRA_CUSTOM);
}

int CGame_NINJAMASTERS_A::GetExtraLoc(UINT16 nUnitId)
{
    return _GetExtraLocation(rgExtraLoc, NINJAMASTERS_A_NUMUNIT, nUnitId, NINJAMASTERS_A_EXTRA_CUSTOM);
}

sDescTreeNode* CGame_NINJAMASTERS_A::InitDescTree()
{
    UINT32 nTotalPaletteCount = 0;

    bool fHaveExtras;
    UINT16 nUnitCt;
    UINT8 nExtraUnitLocation;

    nExtraUnitLocation = NINJAMASTERS_A_EXTRALOC;
    LoadExtraFileForGame(EXTRA_FILENAME_NINJAMASTERS_A, NINJAMASTERS_A_EXTRA, &NINJAMASTERS_A_EXTRA_CUSTOM, NINJAMASTERS_A_EXTRALOC, m_nConfirmedROMSize);
    fHaveExtras = GetExtraCt(NINJAMASTERS_A_EXTRALOC);
    nUnitCt = NINJAMASTERS_A_NUMUNIT + (fHaveExtras ? 1 : 0);

    sDescTreeNode* NewDescTree = new sDescTreeNode;

    //Create the main character tree
    _snwprintf_s(NewDescTree->szDesc, ARRAYSIZE(NewDescTree->szDesc), _TRUNCATE, L"%s", g_GameFriendlyName[NINJAMASTERS_A]);
    NewDescTree->ChildNodes = new sDescTreeNode[nUnitCt];
    NewDescTree->uChildAmt = nUnitCt;
    //All units have tree children
    NewDescTree->uChildType = DESC_NODETYPE_TREE;

    m_nTotalPaletteCountForNINJAMASTERS = _InitDescTree(NewDescTree,
        NINJAMASTERS_A_UNITS,
        NINJAMASTERS_A_EXTRALOC,
        NINJAMASTERS_A_NUMUNIT,
        rgExtraCountAll,
        rgExtraLoc,
        NINJAMASTERS_A_EXTRA_CUSTOM
    );

    return NewDescTree;
}

sFileRule CGame_NINJAMASTERS_A::GetRule(UINT16 nUnitId)
{
    sFileRule NewFileRule;

    NewFileRule.uUnitId = 0;

    // This value is only used for directory-based games
    _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, L"217-p2.sp2");
    NewFileRule.uVerifyVar = m_nExpectedGameROMSize;

    return NewFileRule;
}

UINT32 CGame_NINJAMASTERS_A::GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet, bool* pfNeedToValidateCRCs)
{
    static sCRC32ValueSet knownROMs[] =
    {
        { L"Ninja Master's (Neo-Geo)", L"217-p2.sp2", 0x191fca88, 0 },
        { L"Ninja Master's (Neo-Geo)", L"217-p2.bin", 0x191fca88, 0 },
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
}

UINT16 CGame_NINJAMASTERS_A::GetCollectionCountForUnit(UINT16 nUnitId)
{
    return _GetCollectionCountForUnit(NINJAMASTERS_A_UNITS, rgExtraCountAll, NINJAMASTERS_A_NUMUNIT, NINJAMASTERS_A_EXTRALOC, nUnitId, NINJAMASTERS_A_EXTRA_CUSTOM);
}

UINT16 CGame_NINJAMASTERS_A::GetNodeCountForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetNodeCountForCollection(NINJAMASTERS_A_UNITS, rgExtraCountAll, NINJAMASTERS_A_NUMUNIT, NINJAMASTERS_A_EXTRALOC, nUnitId, nCollectionId, NINJAMASTERS_A_EXTRA_CUSTOM);
}

LPCWSTR CGame_NINJAMASTERS_A::GetDescriptionForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetDescriptionForCollection(NINJAMASTERS_A_UNITS, NINJAMASTERS_A_EXTRALOC, nUnitId, nCollectionId);
}

UINT16 CGame_NINJAMASTERS_A::GetPaletteCountForUnit(UINT16 nUnitId)
{
    return _GetPaletteCountForUnit(NINJAMASTERS_A_UNITS, rgExtraCountAll, NINJAMASTERS_A_NUMUNIT, NINJAMASTERS_A_EXTRALOC, nUnitId, NINJAMASTERS_A_EXTRA_CUSTOM);
}

const sGame_PaletteDataset* CGame_NINJAMASTERS_A::GetPaletteSet(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetPaletteSet(NINJAMASTERS_A_UNITS, nUnitId, nCollectionId);
}

const sDescTreeNode* CGame_NINJAMASTERS_A::GetNodeFromPaletteId(UINT16 nUnitId, UINT16 nPaletteId, bool fReturnBasicNodesOnly)
{
    return _GetNodeFromPaletteId(NINJAMASTERS_A_UNITS, rgExtraCountAll, NINJAMASTERS_A_NUMUNIT, NINJAMASTERS_A_EXTRALOC, nUnitId, nPaletteId, NINJAMASTERS_A_EXTRA_CUSTOM, fReturnBasicNodesOnly);
}

const sGame_PaletteDataset* CGame_NINJAMASTERS_A::GetSpecificPalette(UINT16 nUnitId, UINT16 nPaletteId)
{
    return _GetSpecificPalette(NINJAMASTERS_A_UNITS, rgExtraCountAll, NINJAMASTERS_A_NUMUNIT, NINJAMASTERS_A_EXTRALOC, nUnitId, nPaletteId, NINJAMASTERS_A_EXTRA_CUSTOM);
}

void CGame_NINJAMASTERS_A::InitDataBuffer()
{
    m_nBufferSelectedRom = m_nSelectedRom;
    m_pppDataBuffer = new UINT16 * *[nUnitAmt];
    memset(m_pppDataBuffer, NULL, sizeof(UINT16**) * nUnitAmt);
}

void CGame_NINJAMASTERS_A::ClearDataBuffer()
{
    int nCurrentROMMode = m_nSelectedRom;

    m_nSelectedRom = m_nBufferSelectedRom;

    if (m_pppDataBuffer)
    {
        for (UINT16 nUnitCtr = 0; nUnitCtr < nUnitAmt; nUnitCtr++)
        {
            if (m_pppDataBuffer[nUnitCtr])
            {
                UINT16 nPalAmt = GetPaletteCountForUnit(nUnitCtr);

                for (UINT16 nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
                {
                    safe_delete_array(m_pppDataBuffer[nUnitCtr][nPalCtr]);
                }

                safe_delete_array(m_pppDataBuffer[nUnitCtr]);
            }
        }

        safe_delete_array(m_pppDataBuffer);
    }

    m_nSelectedRom = nCurrentROMMode;
}

void CGame_NINJAMASTERS_A::LoadSpecificPaletteData(UINT16 nUnitId, UINT16 nPalId)
{
     if (nUnitId != GetCurrentExtraLoc())
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
    else // extraloc
    {
        // This is where we handle all the palettes added in via Extra.
        stExtraDef* pCurrDef = GetCurrentExtraDef(GetExtraLoc(nUnitId) + nPalId);

        m_nCurrentPaletteROMLocation = pCurrDef->uOffset;
        m_nCurrentPaletteSizeInColors = (pCurrDef->cbPaletteSize / m_nSizeOfColorsInBytes);
        m_pszCurrentPaletteName = pCurrDef->szDesc;
    }
}

BOOL CGame_NINJAMASTERS_A::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
{
    return _UpdatePalImg(NINJAMASTERS_A_UNITS, rgExtraCountAll, NINJAMASTERS_A_NUMUNIT, NINJAMASTERS_A_EXTRALOC, NINJAMASTERS_A_EXTRA_CUSTOM, Node01, Node02, Node03, Node03);
}

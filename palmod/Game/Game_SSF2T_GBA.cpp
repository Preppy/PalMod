#include "StdAfx.h"
#include "Game_SSF2T_GBA.h"
#include "GameDef.h"
#include "..\ExtraFile.h"
#include "..\PalMod.h"
#include "..\regproc.h" // for palettepagesize

#define SSF2T_GBA_DEBUG DEFAULT_GAME_DEBUG_STATE

stExtraDef* CGame_SSF2T_GBA::SSF2T_GBA_EXTRA_CUSTOM = NULL;

int CGame_SSF2T_GBA::rgExtraCountAll[SSF2T_GBA_NUMUNIT + 1] = { -1 };
int CGame_SSF2T_GBA::rgExtraCountVisibleOnly[SSF2T_GBA_NUMUNIT + 1] = { -1 };
int CGame_SSF2T_GBA::rgExtraLoc[SSF2T_GBA_NUMUNIT + 1] = { -1 };

CDescTree CGame_SSF2T_GBA::MainDescTree = nullptr;
UINT32 CGame_SSF2T_GBA::m_nExpectedGameROMSize = 0x800000;
UINT32 CGame_SSF2T_GBA::m_nConfirmedROMSize = -1;

void CGame_SSF2T_GBA::InitializeStatics()
{
    safe_delete_array(CGame_SSF2T_GBA::SSF2T_GBA_EXTRA_CUSTOM);

    memset(rgExtraCountAll, -1, sizeof(rgExtraCountAll));
    memset(rgExtraCountVisibleOnly, -1, sizeof(rgExtraCountVisibleOnly));
    memset(rgExtraLoc, -1, sizeof(rgExtraLoc));

    MainDescTree.SetRootTree(CGame_SSF2T_GBA::InitDescTree());
}

CGame_SSF2T_GBA::CGame_SSF2T_GBA(UINT32 nConfirmedROMSize)
{
    createPalOptions = { NO_SPECIAL_OPTIONS, WRITE_MAX };
    // GBA actually has alpha values on some colors, but not all of them.  Force it everywhere for sanity.
    SetAlphaMode(AlphaMode::GameUsesChaoticAlpha);
    SetColorMode(ColMode::COLMODE_BGR555_LE);

    // We need this set before we initialize so that corrupt Extras truncate correctly.
    // Otherwise the new user inadvertently corrupts their ROM.
    m_nConfirmedROMSize = nConfirmedROMSize;

    InitializeStatics();

    m_pszExtraFilename = EXTRA_FILENAME_SSF2T_GBA;
    m_nTotalInternalUnits = SSF2T_GBA_NUMUNIT;
    m_nExtraUnit = SSF2T_GBA_EXTRALOC;

    nUnitAmt = m_nTotalInternalUnits + (GetExtraCt(m_nExtraUnit) ? 1 : 0);

    m_nSafeCountForThisRom = GetExtraCt(m_nExtraUnit) + 162;
    m_nLowestKnownPaletteRomLocation = 0x7f28e4;

    CString strInfo;
    strInfo.Format(L"CGame_SSF2T_GBA::CGame_SSF2T_GBA: Loaded SSF2T_GBA with %u Extras\n", GetExtraCt(m_nExtraUnit));
    OutputDebugString(strInfo);

    InitDataBuffer();

    //Set game information
    nGameFlag = SSF2T_GBA;
    nImgGameFlag = IMGDAT_SECTION_SF2;
    m_prgGameImageSet = SSF2T_GBA_IMGIDS_USED;
    nImgUnitAmt = ARRAYSIZE(SSF2T_GBA_IMGIDS_USED);

    nFileAmt = 1;

    //Set the image out display type
    DisplayType = eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT;
    pButtonLabelSet = DEF_BUTTONLABEL_GBA;
    m_nNumberOfColorOptions = ARRAYSIZE(DEF_BUTTONLABEL_GBA);

    //Create the redirect buffer
    rgUnitRedir = new UINT16[nUnitAmt + 1];
    memset(rgUnitRedir, NULL, sizeof(UINT16) * nUnitAmt);

    //Create the file changed flag
    PrepChangeTrackingArray();
}

CGame_SSF2T_GBA::~CGame_SSF2T_GBA(void)
{
    safe_delete_array(CGame_SSF2T_GBA::SSF2T_GBA_EXTRA_CUSTOM);
    //Get rid of the file changed flag
    ClearDataBuffer();
    FlushChangeTrackingArray();
}

UINT32 CGame_SSF2T_GBA::GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet, bool* pfNeedToValidateCRCs)
{
    // If we need further differentiation, we can bytesniff at 0xa0
    static const sCRC32ValueSet knownROMs[] =
    {
        { L"SSF2T - Revival (USA GBA)", L"Super Street Fighter II Turbo - Revival (USA).gba", 0x63045aa, 0 },
        { L"SSF2X - Revival (Japan)", L"Super Street Fighter II X - Revival (Japan).gba", 0x7a2c0d61, 0x1690 },
        { L"SSF2T - Revival (Euro GBA)", L"Super_Street_Fighter_II_Turbo_-_Revival_Europe.gba", 0x461b4590, -0x418 },
        { L"SSF2T - Revival (Euro GBA)", L"Super Street Fighter II Turbo - Revival (Europe).gba", 0x461b4590, -0x418 },
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

int CGame_SSF2T_GBA::GetExtraCt(UINT16 nUnitId, BOOL bCountVisibleOnly)
{
    return _GetExtraCount(rgExtraCountAll, SSF2T_GBA_NUMUNIT, nUnitId, SSF2T_GBA_EXTRA_CUSTOM);
}

int CGame_SSF2T_GBA::GetExtraLoc(UINT16 nUnitId)
{
    return _GetExtraLocation(rgExtraLoc, SSF2T_GBA_NUMUNIT, nUnitId, SSF2T_GBA_EXTRA_CUSTOM);
}

const sDescTreeNode* CGame_SSF2T_GBA::GetCurrentUnitSet()
{
    return SSF2T_GBA_UNITS;
}

UINT16 CGame_SSF2T_GBA::GetCurrentExtraLoc()
{
    return SSF2T_GBA_EXTRALOC;
}

CDescTree* CGame_SSF2T_GBA::GetMainTree()
{
    return &CGame_SSF2T_GBA::MainDescTree;
}

stExtraDef* CGame_SSF2T_GBA::GetCurrentExtraDef(int nDefCtr)
{
    return (stExtraDef*)&SSF2T_GBA_EXTRA_CUSTOM[nDefCtr];
}

sDescTreeNode* CGame_SSF2T_GBA::InitDescTree()
{
    UINT8 nExtraUnitLocation = SSF2T_GBA_EXTRALOC;
    LoadExtraFileForGame(EXTRA_FILENAME_SSF2T_GBA, SSF2T_GBA_EXTRA, &SSF2T_GBA_EXTRA_CUSTOM, nExtraUnitLocation, m_nConfirmedROMSize);
    bool fHaveExtras = (GetExtraCt(nExtraUnitLocation) > 0);
    UINT16 nUnitCt = SSF2T_GBA_NUMUNIT + (fHaveExtras ? 1 : 0);

    sDescTreeNode* NewDescTree = new sDescTreeNode;

    //Create the main character tree
    _snwprintf_s(NewDescTree->szDesc, ARRAYSIZE(NewDescTree->szDesc), _TRUNCATE, L"%s", g_GameFriendlyName[SSF2T_GBA]);
    NewDescTree->ChildNodes = new sDescTreeNode[nUnitCt];
    NewDescTree->uChildAmt = nUnitCt;
    //All units have tree children
    NewDescTree->uChildType = DESC_NODETYPE_TREE;

    m_nTotalPaletteCount = _InitDescTree(NewDescTree,
        SSF2T_GBA_UNITS,
        SSF2T_GBA_EXTRALOC,
        SSF2T_GBA_NUMUNIT,
        rgExtraCountAll,
        rgExtraLoc,
        SSF2T_GBA_EXTRA_CUSTOM
    );

    return NewDescTree;
}

sFileRule CGame_SSF2T_GBA::GetRule(UINT16 nUnitId)
{
    sFileRule NewFileRule;

    _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, L"s92_22b.7f");

    NewFileRule.uUnitId = 0;
    NewFileRule.uVerifyVar = m_nExpectedGameROMSize;

    return NewFileRule;
}

UINT16 CGame_SSF2T_GBA::GetCollectionCountForUnit(UINT16 nUnitId)
{
    return _GetCollectionCountForUnit(SSF2T_GBA_UNITS, rgExtraCountAll, SSF2T_GBA_NUMUNIT, SSF2T_GBA_EXTRALOC, nUnitId, SSF2T_GBA_EXTRA_CUSTOM);
}

UINT16 CGame_SSF2T_GBA::GetNodeCountForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetNodeCountForCollection(SSF2T_GBA_UNITS, rgExtraCountAll, SSF2T_GBA_NUMUNIT, SSF2T_GBA_EXTRALOC, nUnitId, nCollectionId, SSF2T_GBA_EXTRA_CUSTOM);
}

LPCWSTR CGame_SSF2T_GBA::GetDescriptionForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetDescriptionForCollection(SSF2T_GBA_UNITS, SSF2T_GBA_EXTRALOC, nUnitId, nCollectionId);
}

UINT16 CGame_SSF2T_GBA::GetPaletteCountForUnit(UINT16 nUnitId)
{
    return _GetPaletteCountForUnit(SSF2T_GBA_UNITS, rgExtraCountAll, SSF2T_GBA_NUMUNIT, SSF2T_GBA_EXTRALOC, nUnitId, SSF2T_GBA_EXTRA_CUSTOM);
}

const sGame_PaletteDataset* CGame_SSF2T_GBA::GetPaletteSet(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetPaletteSet(SSF2T_GBA_UNITS, nUnitId, nCollectionId);
}

const sGame_PaletteDataset* CGame_SSF2T_GBA::GetSpecificPalette(UINT16 nUnitId, UINT16 nPaletteId)
{
    return _GetSpecificPalette(SSF2T_GBA_UNITS, rgExtraCountAll, SSF2T_GBA_NUMUNIT, SSF2T_GBA_EXTRALOC, nUnitId, nPaletteId, SSF2T_GBA_EXTRA_CUSTOM);
}

UINT16 CGame_SSF2T_GBA::GetNodeSizeFromPaletteId(UINT16 nUnitId, UINT16 nPaletteId)
{
    // Don't use this for Extra palettes.
    UINT16 nNodeSize = 0;
    UINT16 nTotalCollections = GetCollectionCountForUnit(nUnitId);
    const sGame_PaletteDataset* paletteSetToUse = nullptr;
    int nDistanceFromZero = nPaletteId;

    for (UINT16 nCollectionIndex = 0; nCollectionIndex < nTotalCollections; nCollectionIndex++)
    {
        const sGame_PaletteDataset* paletteSetToCheck = GetPaletteSet(nUnitId, nCollectionIndex);
        UINT16 nNodeCount = GetNodeCountForCollection(nUnitId, nCollectionIndex);

        if (nDistanceFromZero < nNodeCount)
        {
            nNodeSize = nNodeCount;
            break;
        }

        nDistanceFromZero -= nNodeCount;
    }

    return nNodeSize;
}

const sDescTreeNode* CGame_SSF2T_GBA::GetNodeFromPaletteId(UINT16 nUnitId, UINT16 nPaletteId, bool fReturnBasicNodesOnly)
{
    return _GetNodeFromPaletteId(SSF2T_GBA_UNITS, rgExtraCountAll, SSF2T_GBA_NUMUNIT, SSF2T_GBA_EXTRALOC, nUnitId, nPaletteId, SSF2T_GBA_EXTRA_CUSTOM, fReturnBasicNodesOnly);
}

void CGame_SSF2T_GBA::LoadSpecificPaletteData(UINT16 nUnitId, UINT16 nPalId)
{
    if (nUnitId != GetCurrentExtraLoc())
    {
        int cbPaletteSizeOnDisc = 0;
        const sGame_PaletteDataset* paletteData = GetSpecificPalette(nUnitId, nPalId);

        cbPaletteSizeOnDisc = (int)max(0, (paletteData->nPaletteOffsetEnd - paletteData->nPaletteOffset));

        m_nCurrentPaletteROMLocation = paletteData->nPaletteOffset;

        m_nCurrentPaletteSizeInColors = cbPaletteSizeOnDisc / m_nSizeOfColorsInBytes;
        m_pszCurrentPaletteName = paletteData->szPaletteName;

        // Adjust for ROM-specific variant locations
        if (m_pCRC32SpecificData)
        {
            m_nCurrentPaletteROMLocation += m_pCRC32SpecificData->nROMSpecificOffset;
        }
    }
    else // SSF2T_GBA_EXTRALOC
    {
        // This is where we handle all the palettes added in via Extra.
        stExtraDef* pCurrDef = GetCurrentExtraDef(GetExtraLoc(nUnitId) + nPalId);

        m_nCurrentPaletteROMLocation = pCurrDef->uOffset;
        m_nCurrentPaletteSizeInColors = (pCurrDef->cbPaletteSize / m_nSizeOfColorsInBytes);
        m_pszCurrentPaletteName = pCurrDef->szDesc;
    }
}

BOOL CGame_SSF2T_GBA::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
{
    //Reset palette sources
    ClearSrcPal();

    if (Node01 == -1)
    {
        return FALSE;
    }

    sDescNode* NodeGet = GetMainTree()->GetDescNode(Node01, Node02, Node03, Node04);

    if (NodeGet == NULL)
    {
        return FALSE;
    }

    //Change the image id if we need to
    nTargetImgId = 0;
    UINT16 nImgUnitId = NodeGet->uUnitId;

    UINT16 nSrcStart = NodeGet->uPalId;
    UINT16 nSrcAmt = 1;
    UINT16 nNodeIncrement = 1;

    //Get rid of any palettes if there are any
    BasePalGroup.FlushPalAll();

    bool fShouldUseAlternateLoadLogic = false;

    //Select the image
    if (m_nExtraUnit != NodeGet->uUnitId)
    {
        const sGame_PaletteDataset* paletteDataSet = GetSpecificPalette(NodeGet->uUnitId, NodeGet->uPalId);
        const sDescTreeNode* pCurrentNode = GetNodeFromPaletteId(NodeGet->uUnitId, NodeGet->uPalId, true);

        if (pCurrentNode) // All current nodes are one block of color options
        {
            if (_wcsicmp(pCurrentNode->szDesc, L"Colors") == 0)
            {
                nSrcAmt = ARRAYSIZE(DEF_BUTTONLABEL_GBA);
                nNodeIncrement = 1;
                // The starting point is the absolute first palette for the sprite in question which is found in A
                nSrcStart = 0;
            }
            else // Extras or Extra Range
            {
                // Status effects and etc have no peer palettes
                nSrcAmt = 1;
            }
        }

        if (paletteDataSet)
        {
            nImgUnitId = paletteDataSet->indexImgToUse;
            nTargetImgId = paletteDataSet->indexOffsetToUse;
        }
    }
    else // Extra region
    {
        stExtraDef* pCurrDef = GetCurrentExtraDef(GetExtraLoc(NodeGet->uUnitId) + NodeGet->uPalId);

        if (pCurrDef->indexImgToUse != INVALID_UNIT_VALUE)
        {
            nImgUnitId = pCurrDef->indexImgToUse;
            nTargetImgId = pCurrDef->indexOffsetToUse;
        }
        else
        {
            fShouldUseAlternateLoadLogic = true;

            CreateDefPal(NodeGet, 0);

            // Only internal units get sprites
            ClearSetImgTicket(nullptr);

            SetSourcePal(0, NodeGet->uUnitId, nSrcStart, nSrcAmt, 1);
        }
    }

    if (!fShouldUseAlternateLoadLogic)
    {
        //Create the default palette
        CreateDefPal(NodeGet, 0);

        // Only internal units get sprites
        ClearSetImgTicket(CreateImgTicket(nImgUnitId, nTargetImgId));

        SetSourcePal(0, NodeGet->uUnitId, nSrcStart, nSrcAmt, nNodeIncrement);
    }

    return TRUE;
}

#include "StdAfx.h"
#include "GameDef.h"
#include "Game_NEOGEO_A.h"
#include "..\PalMod.h"
#include "..\RegProc.h"

#define NEOGEO_A_DEBUG DEFAULT_GAME_DEBUG_STATE

stExtraDef* CGame_NEOGEO_A::NEOGEO_A_EXTRA_CUSTOM = nullptr;

CDescTree CGame_NEOGEO_A::MainDescTree = nullptr;

int CGame_NEOGEO_A::rgExtraCountAll[NEOGEO_A_NUMUNIT + 1];
int CGame_NEOGEO_A::rgExtraLoc[NEOGEO_A_NUMUNIT + 1];

UINT32 CGame_NEOGEO_A::m_nTotalPaletteCountForNEOGEO = 0;
UINT32 CGame_NEOGEO_A::m_nExpectedGameROMSize = -1; // This is a stub: we can't care about size
UINT32 CGame_NEOGEO_A::m_nConfirmedROMSize = -1;

void CGame_NEOGEO_A::InitializeStatics()
{
    safe_delete_array(CGame_NEOGEO_A::NEOGEO_A_EXTRA_CUSTOM);

    memset(rgExtraCountAll, -1, sizeof(rgExtraCountAll));
    memset(rgExtraLoc, -1, sizeof(rgExtraLoc));

    MainDescTree.SetRootTree(InitDescTree());
}

CGame_NEOGEO_A::CGame_NEOGEO_A(UINT32 nConfirmedROMSize)
{
    CString strMessage;
    strMessage.Format(_T("CGame_NEOGEO_A::CGame_NEOGEO_A: Loading ROM...\n") );
    OutputDebugString(strMessage);

    // We need this set before we initialize so that corrupt Extras truncate correctly.
    // Otherwise the new user inadvertently corrupts their ROM.
    m_nConfirmedROMSize = nConfirmedROMSize;
    InitializeStatics();

    m_nTotalInternalUnits = NEOGEO_A_NUMUNIT;
    m_nExtraUnit = NEOGEO_A_EXTRALOC;

    m_nSafeCountForThisRom = GetExtraCt(m_nExtraUnit) + 2;
    m_pszExtraFilename = EXTRA_FILENAME_UNKNOWN_A;
    m_nTotalPaletteCount = m_nTotalPaletteCountForNEOGEO;
    // This magic number is used to warn users if their Extra file is trying to write somewhere potentially unusual
    m_nLowestKnownPaletteRomLocation = 0x0; // Don't worry about locations for a stubbed game...

    nUnitAmt = m_nTotalInternalUnits + (GetExtraCt(m_nExtraUnit) ? 1 : 0);

    createPalOptions = { NO_SPECIAL_OPTIONS, FORCE_ALPHA_ON_EVERY_COLOR, NO_SPECIAL_OPTIONS };

    if (GetExtraCt(m_nExtraUnit) == 0)
    {
        CString strIntro;
        strIntro = _T("Howdy!  This \"dummy\" game mode is designed to allow you to spelunk any random game ROM that PalMod does not already support. \n\n");
        strIntro += _T("PalMod will read / write specified RAM offsets as if they indicated colors for the color format specified in the Settings menu.\n\n");
        strIntro += _T("Right now, you don't have any entries in your UnknownE.txt Extras file: you will want to add entries there if you wish to use this \"dummy\" mode.\n\n");
        strIntro += _T("Please make sure to only change a copy of the ROM you're interested in: since you're directly playing around with the game ROM, weird things could happen.\n\n");
        strIntro += _T("Good luck!");
        MessageBox(g_appHWnd, strIntro, GetHost()->GetAppName(), MB_ICONINFORMATION);
    }

    InitDataBuffer();

    SetColModeInternal(CRegProc::GetColModeForUnknownGame());

    //Set game information
    nGameFlag = NEOGEO_A;
    nImgGameFlag = IMGDAT_SECTION_NEOGEO;
    nImgUnitAmt = 0; // This is a stub game.  No images will be used.

    nFileAmt = 1;

    //Set the image out display type
    DisplayType = eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT;
    // Button labels are used for the Export Image dialog: we don't need them for a game stub.
    pButtonLabelSet = DEF_NOBUTTONS;
    m_nNumberOfColorOptions = ARRAYSIZE(DEF_NOBUTTONS);

    //Create the redirect buffer
    rgUnitRedir = new UINT16[nUnitAmt + 1];
    memset(rgUnitRedir, NULL, sizeof(UINT16) * nUnitAmt);

    //Create the file changed flag
    PrepChangeTrackingArray();
}

CGame_NEOGEO_A::~CGame_NEOGEO_A(void)
{
    safe_delete_array(CGame_NEOGEO_A::NEOGEO_A_EXTRA_CUSTOM);
    ClearDataBuffer();
    //Get rid of the file changed flag
    FlushChangeTrackingArray();
}

CDescTree* CGame_NEOGEO_A::GetMainTree()
{
    return &CGame_NEOGEO_A::MainDescTree;
}

int CGame_NEOGEO_A::GetExtraCt(UINT16 nUnitId, BOOL bCountVisibleOnly)
{
    if (rgExtraCountAll[0] == -1)
    {
        int nDefCtr = 0;
        memset(rgExtraCountAll, 0, ((NEOGEO_A_NUMUNIT + 1) * sizeof(int)));

        stExtraDef* pCurrDef = GetExtraDefForNEOGEO(0);

        while (pCurrDef->uUnitN != INVALID_UNIT_VALUE)
        {
            if (!pCurrDef->isInvisible || !bCountVisibleOnly)
            {
                rgExtraCountAll[pCurrDef->uUnitN]++;
            }

            nDefCtr++;
            pCurrDef = GetExtraDefForNEOGEO(nDefCtr);
        }
    }

    return rgExtraCountAll[nUnitId];
}

BOOL CGame_NEOGEO_A::SetColModeInternal(ColMode NewMode)
{
    // stomp the setting for posterity
    CRegProc::SetColModeForUnknownGame(NewMode);

    switch (NewMode)
    {
    case ColMode::COLMODE_GBA:
        BasePalGroup.SetMode(ePalType::PALTYPE_17);
        break;
    case ColMode::COLMODE_12A:
        BasePalGroup.SetMode(ePalType::PALTYPE_17);
        break;
    case ColMode::COLMODE_15:
        BasePalGroup.SetMode(ePalType::PALTYPE_8);
        break;
    case ColMode::COLMODE_15ALT:
        BasePalGroup.SetMode(ePalType::PALTYPE_8);
        break;
    default: // Something is wrong: reset
        OutputDebugString(L"warning: unknown color mode was requested. Resetting to default\n");
    case ColMode::COLMODE_NEOGEO:
        BasePalGroup.SetMode(ePalType::PALTYPE_8);
        break;
    };

    return CGameClass::SetColMode(NewMode);
}

BOOL CGame_NEOGEO_A::SetColMode(ColMode NewMode)
{
    CString strMsg = L"Updated.  The next palette displayed will use this color format.";
    MessageBox(g_appHWnd, strMsg, GetHost()->GetAppName(), MB_ICONINFORMATION);

    return SetColModeInternal(NewMode);
}

int CGame_NEOGEO_A::GetExtraLoc(UINT16 nUnitId)
{
    if (rgExtraLoc[0] == -1)
    {
        int nDefCtr = 0;
        int nCurrUnit = UNIT_START_VALUE;
        memset(rgExtraLoc, 0, (NEOGEO_A_NUMUNIT + 1) * sizeof(int));

        stExtraDef* pCurrDef = GetExtraDefForNEOGEO(0);

        while (pCurrDef->uUnitN != INVALID_UNIT_VALUE)
        {
            if (pCurrDef->uUnitN != nCurrUnit)
            {
                rgExtraLoc[pCurrDef->uUnitN] = nDefCtr;
                nCurrUnit = pCurrDef->uUnitN;
            }

            nDefCtr++;
            pCurrDef = GetExtraDefForNEOGEO(nDefCtr);
        }
    }

    return rgExtraLoc[nUnitId];
}

sDescTreeNode* CGame_NEOGEO_A::InitDescTree()
{
    UINT32 nTotalPaletteCount = 0;

    //Load extra file if we're using it
    LoadExtraFileForGame(EXTRA_FILENAME_UNKNOWN_A, NEOGEO_A_EXTRA, &NEOGEO_A_EXTRA_CUSTOM, NEOGEO_A_EXTRALOC, m_nConfirmedROMSize);

    if (GetExtraCt(NEOGEO_A_EXTRALOC) == 0)
    {
        // Fall over to the old filename option
        safe_delete_array(NEOGEO_A_EXTRA_CUSTOM);
        memset(rgExtraCountAll, -1, sizeof(rgExtraCountAll));
        memset(rgExtraLoc, -1, sizeof(rgExtraLoc));

        LoadExtraFileForGame(EXTRA_FILENAME_NEO_GEO_A, NEOGEO_A_EXTRA, &NEOGEO_A_EXTRA_CUSTOM, NEOGEO_A_EXTRALOC, m_nConfirmedROMSize);
    }

    UINT16 nUnitCt = NEOGEO_A_NUMUNIT + (GetExtraCt(NEOGEO_A_EXTRALOC) ? 1 : 0);
    
    sDescTreeNode* NewDescTree = new sDescTreeNode;

    //Create the main character tree
    _stprintf(NewDescTree->szDesc, _T("%s"), g_GameFriendlyName[NEOGEO_A]);
    NewDescTree->ChildNodes = new sDescTreeNode[nUnitCt];
    NewDescTree->uChildAmt = nUnitCt;
    //All units have tree children
    NewDescTree->uChildType = DESC_NODETYPE_TREE;

    CString strMsg;
    bool fHaveExtras = (GetExtraCt(NEOGEO_A_EXTRALOC) > 0);
    strMsg.Format(_T("CGame_NEOGEO_A::InitDescTree: Building desc tree for NEOGEO_A %s extras...\n"), fHaveExtras ? _T("with") : _T("without"));
    OutputDebugString(strMsg);

    //Go through each character
    for (UINT16 iUnitCtr = 0; iUnitCtr < nUnitCt; iUnitCtr++)
    {
        sDescTreeNode* UnitNode = nullptr;
        sDescTreeNode* CollectionNode = nullptr;
        sDescNode* ChildNode = nullptr;

        UINT16 nExtraCt = GetExtraCt(iUnitCtr, TRUE);
        BOOL bUseExtra = (GetExtraLoc(iUnitCtr) ? 1 : 0);

        UINT16 nUnitChildCount = GetCollectionCountForUnit(iUnitCtr);

        UnitNode = &((sDescTreeNode*)NewDescTree->ChildNodes)[iUnitCtr];

        if (iUnitCtr < NEOGEO_A_EXTRALOC)
        {
            //Set each description
            _stprintf(UnitNode->szDesc, _T("%s"), NEOGEO_A_UNITS[iUnitCtr].szDesc);
            UnitNode->ChildNodes = new sDescTreeNode[nUnitChildCount];
            //All children have collection trees
            UnitNode->uChildType = DESC_NODETYPE_TREE;
            UnitNode->uChildAmt = nUnitChildCount;

#if NEOGEO_A_DEBUG
            strMsg.Format(_T("Unit: \"%s\", %u of %u (%s), %u total children\n"), UnitNode->szDesc, iUnitCtr + 1, nUnitCt, bUseExtra ? _T("with extras") : _T("no extras"), nUnitChildCount);
            OutputDebugString(strMsg);
#endif
            
            UINT16 nTotalPalettesUsedInUnit = 0;

            //Set data for each child group ("collection")
            for (UINT16 iCollectionCtr = 0; iCollectionCtr < nUnitChildCount; iCollectionCtr++)
            {
                CollectionNode = &((sDescTreeNode*)UnitNode->ChildNodes)[iCollectionCtr];

                //Set each collection data

                // Default label, since these aren't associated to collections
                _stprintf(CollectionNode->szDesc, GetDescriptionForCollection(iUnitCtr, iCollectionCtr));
                //Collection children have nodes
                UINT16 nListedChildrenCount = GetNodeCountForCollection(iUnitCtr, iCollectionCtr);
                CollectionNode->uChildType = DESC_NODETYPE_NODE;
                CollectionNode->uChildAmt = nListedChildrenCount;
                CollectionNode->ChildNodes = (sDescTreeNode*)new sDescNode[nListedChildrenCount];

#if NEOGEO_A_DEBUG
                strMsg.Format(_T("\tCollection: \"%s\", %u of %u, %u children\n"), CollectionNode->szDesc, iCollectionCtr + 1, nUnitChildCount, nListedChildrenCount);
                OutputDebugString(strMsg);
#endif

                const sGame_PaletteDataset* paletteSetToUse = GetPaletteSet(iUnitCtr, iCollectionCtr);

                //Set each collection's extra nodes: convert the sGame_PaletteDataset to sDescTreeNodes
                for (UINT16 nNodeIndex = 0; nNodeIndex < nListedChildrenCount; nNodeIndex++)
                {
                    ChildNode = &((sDescNode*)CollectionNode->ChildNodes)[nNodeIndex];

                    _sntprintf(ChildNode->szDesc, ARRAYSIZE(ChildNode->szDesc), _T("%s"), paletteSetToUse[nNodeIndex].szPaletteName);

                    ChildNode->uUnitId = iUnitCtr;
                    ChildNode->uPalId = nTotalPalettesUsedInUnit++;
                    nTotalPaletteCount++;

#if NEOGEO_A_DEBUG
                    strMsg.Format(_T("\t\tPalette: \"%s\", %u of %u"), ChildNode->szDesc, nNodeIndex + 1, nListedChildrenCount);
                    OutputDebugString(strMsg);
                    strMsg.Format(_T(", 0x%06x to 0x%06x (%u colors),"), paletteSetToUse[nNodeIndex].nPaletteOffset, paletteSetToUse[nNodeIndex].nPaletteOffsetEnd, (paletteSetToUse[nNodeIndex].nPaletteOffsetEnd - paletteSetToUse[nNodeIndex].nPaletteOffset) / 2);
                    OutputDebugString(strMsg);

                    if (paletteSetToUse[nNodeIndex].indexImgToUse != INVALID_UNIT_VALUE)
                    {
                        strMsg.Format(_T(" image unit 0x%02x image index 0x%02x.\n"), paletteSetToUse[nNodeIndex].indexImgToUse, paletteSetToUse[nNodeIndex].indexOffsetToUse);
                    }
                    else
                    {
                        strMsg.Format(_T(" no image available.\n"));
                    }
                    OutputDebugString(strMsg);
#endif
                }
            }
        }
        else
        {
            // This handles data loaded from the Extra extension file, which are treated
            // each as their own separate node with one collection with everything under that.
            _stprintf(UnitNode->szDesc, _T("Extra Palettes"));
            UnitNode->ChildNodes = new sDescTreeNode[1];
            UnitNode->uChildType = DESC_NODETYPE_TREE;
            UnitNode->uChildAmt = 1;

#if NEOGEO_A_DEBUG
            strMsg.Format(_T("Unit (Extras): %s, %u of %u, %u total children\n"), UnitNode->szDesc, iUnitCtr + 1, nUnitCt, nUnitChildCount);
            OutputDebugString(strMsg);
#endif
        }

        //Set up extra nodes
        if (bUseExtra)
        {
            int nExtraPos = GetExtraLoc(iUnitCtr);
            int nCurrExtra = 0;

            CollectionNode = &((sDescTreeNode*)UnitNode->ChildNodes)[(NEOGEO_A_EXTRALOC > iUnitCtr) ? (nUnitChildCount - 1) : 0]; //Extra node

            _stprintf(CollectionNode->szDesc, _T("Extra"));

            CollectionNode->ChildNodes = new sDescTreeNode[nExtraCt];

            CollectionNode->uChildType = DESC_NODETYPE_NODE;
            CollectionNode->uChildAmt = nExtraCt; //EX + Extra

#if NEOGEO_A_DEBUG
            strMsg.Format(_T("\tCollection: %s, %u of %u, %u children\n"), CollectionNode->szDesc, 1, nUnitChildCount, nExtraCt);
            OutputDebugString(strMsg);
#endif

            for (UINT16 nExtraCtr = 0; nExtraCtr < nExtraCt; nExtraCtr++)
            {
                ChildNode = &((sDescNode*)CollectionNode->ChildNodes)[nExtraCtr];

                stExtraDef* pCurrDef = GetExtraDefForNEOGEO(nExtraPos + nCurrExtra);

                while (pCurrDef->isInvisible)
                {
                    nCurrExtra++;

                    pCurrDef = GetExtraDefForNEOGEO(nExtraPos + nCurrExtra);
                }

                _stprintf(ChildNode->szDesc, pCurrDef->szDesc);

                ChildNode->uUnitId = iUnitCtr;
                ChildNode->uPalId = (((NEOGEO_A_EXTRALOC > iUnitCtr) ? 1 : 0) * nUnitChildCount * 2) + nCurrExtra;

#if NEOGEO_A_DEBUG
                strMsg.Format(_T("\t\tPalette: %s, %u of %u\n"), ChildNode->szDesc, nExtraCtr + 1, nExtraCt);
                OutputDebugString(strMsg);
#endif

                nCurrExtra++;
                nTotalPaletteCount++;
            }
        }
    }

    strMsg.Format(_T("CGame_NEOGEO_A::InitDescTree: Loaded %u palettes for NEOGEO\n"), nTotalPaletteCount);
    OutputDebugString(strMsg);

    m_nTotalPaletteCountForNEOGEO = nTotalPaletteCount;

    return NewDescTree;
}

sFileRule CGame_NEOGEO_A::GetRule(UINT16 nUnitId)
{
    sFileRule NewFileRule;

    // This value is only used for directory-based games
    _stprintf_s(NewFileRule.szFileName, MAX_FILENAME_LENGTH, _T("stub.stb")); // use a stub value here

    NewFileRule.uUnitId = 0;
    NewFileRule.uVerifyVar = -1; // this game is a stub only

    return NewFileRule;
}

UINT16 CGame_NEOGEO_A::GetCollectionCountForUnit(UINT16 nUnitId)
{
    if (nUnitId == NEOGEO_A_EXTRALOC)
    {
        return GetExtraCt(nUnitId);
    }
    else
    {
        return NEOGEO_A_UNITS[nUnitId].uChildAmt;
    }
}

UINT16 CGame_NEOGEO_A::GetNodeCountForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    if (nUnitId == NEOGEO_A_EXTRALOC)
    {
        return GetExtraCt(nUnitId);
    }
    else
    {
        const sDescTreeNode* pCollectionNode = (const sDescTreeNode*)(NEOGEO_A_UNITS[nUnitId].ChildNodes);

        return pCollectionNode[nCollectionId].uChildAmt;
    }
}

LPCTSTR CGame_NEOGEO_A::GetDescriptionForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    if (nUnitId == NEOGEO_A_EXTRALOC)
    {
        return _T("Extra Palettes");
    }
    else
    {
        const sDescTreeNode* pCollection = (const sDescTreeNode*)NEOGEO_A_UNITS[nUnitId].ChildNodes;
        return pCollection[nCollectionId].szDesc;
    }
}

UINT16 CGame_NEOGEO_A::GetPaletteCountForUnit(UINT16 nUnitId)
{
    if (nUnitId == NEOGEO_A_EXTRALOC)
    {
        return GetExtraCt(nUnitId);
    }
    else
    {
        UINT16 nCompleteCount = 0;
        const sDescTreeNode* pCompleteROMTree = NEOGEO_A_UNITS;
        UINT16 nCollectionCount = pCompleteROMTree[nUnitId].uChildAmt;

        const sDescTreeNode* pCurrentCollection = (const sDescTreeNode*)(pCompleteROMTree[nUnitId].ChildNodes);

        for (UINT16 nCollectionIndex = 0; nCollectionIndex < nCollectionCount; nCollectionIndex++)
        {
            nCompleteCount += pCurrentCollection[nCollectionIndex].uChildAmt;
        }

#if NEOGEO_A_DEBUG
        CString strMsg;
        strMsg.Format(_T("CGame_NEOGEO_A::GetPaletteCountForUnit: %u for unit %u which has %u collections.\n"), nCompleteCount, nUnitId, nCollectionCount);
        OutputDebugString(strMsg);
#endif

        return nCompleteCount;
    }
}

const sGame_PaletteDataset* CGame_NEOGEO_A::GetPaletteSet(UINT16 nUnitId, UINT16 nCollectionId)
{
    // Don't use this for Extra palettes.
    const sDescTreeNode* pCurrentSet = (const sDescTreeNode*)NEOGEO_A_UNITS[nUnitId].ChildNodes;
    return ((sGame_PaletteDataset*)(pCurrentSet[nCollectionId].ChildNodes));
}

const sDescTreeNode* CGame_NEOGEO_A::GetNodeFromPaletteId(UINT16 nUnitId, UINT16 nPaletteId, bool fReturnBasicNodesOnly)
{
    // Don't use this for Extra palettes.
    const sDescTreeNode* pCollectionNode = nullptr;
    UINT16 nTotalCollections = GetCollectionCountForUnit(nUnitId);
    const sGame_PaletteDataset* paletteSetToUse = nullptr;
    int nDistanceFromZero = nPaletteId;

    for (UINT16 nCollectionIndex = 0; nCollectionIndex < nTotalCollections; nCollectionIndex++)
    {
        const sGame_PaletteDataset* paletteSetToCheck = GetPaletteSet(nUnitId, nCollectionIndex);
        UINT16 nNodeCount;

        if (nUnitId == NEOGEO_A_EXTRALOC)
        {
            nNodeCount = GetExtraCt(nUnitId);

            if (nDistanceFromZero < nNodeCount)
            {
                pCollectionNode = nullptr;
                break;
            }
        }
        else
        {
            const sDescTreeNode* pCollectionNodeToCheck = (const sDescTreeNode*)(NEOGEO_A_UNITS[nUnitId].ChildNodes);
            
            nNodeCount = pCollectionNodeToCheck[nCollectionIndex].uChildAmt;

            if (nDistanceFromZero < nNodeCount)
            {
                // We know it's within this group.  Now: is it basic?
                if (!fReturnBasicNodesOnly || (nCollectionIndex < m_nNumberOfColorOptions))
                {
                    pCollectionNode = &(pCollectionNodeToCheck[nCollectionIndex]);
                }
                else
                {
                    pCollectionNode = nullptr;
                }

                break;
            }
        }

        nDistanceFromZero -= nNodeCount;
    }

    return pCollectionNode;
}

const sGame_PaletteDataset* CGame_NEOGEO_A::GetSpecificPalette(UINT16 nUnitId, UINT16 nPaletteId)
{
    // Don't use this for Extra palettes.
    UINT16 nTotalCollections = GetCollectionCountForUnit(nUnitId);
    const sGame_PaletteDataset* paletteToUse = nullptr;
    int nDistanceFromZero = nPaletteId;

    for (UINT16 nCollectionIndex = 0; nCollectionIndex < nTotalCollections; nCollectionIndex++)
    {
        const sGame_PaletteDataset* paletteSetToUse = GetPaletteSet(nUnitId, nCollectionIndex);
        UINT16 nNodeCount = GetNodeCountForCollection(nUnitId, nCollectionIndex);

        if (nDistanceFromZero < nNodeCount)
        {
            paletteToUse = &paletteSetToUse[nDistanceFromZero];
            break;
        }

        nDistanceFromZero -= nNodeCount;
    }

    return paletteToUse;
}

void CGame_NEOGEO_A::LoadSpecificPaletteData(UINT16 nUnitId, UINT16 nPalId)
{
     if (nUnitId != NEOGEO_A_EXTRALOC)
    {
        int cbPaletteSizeOnDisc = 0;
        const sGame_PaletteDataset* paletteData = GetSpecificPalette(nUnitId, nPalId);

        if (paletteData)
        {
            cbPaletteSizeOnDisc = (int)max(0, (paletteData->nPaletteOffsetEnd - paletteData->nPaletteOffset));

            m_nCurrentPaletteROMLocation = paletteData->nPaletteOffset;
            m_nCurrentPaletteSize = cbPaletteSizeOnDisc / 2;
            m_pszCurrentPaletteName = paletteData->szPaletteName;
        }
        else
        {
            // A bogus palette was requested: this is unrecoverable.
            DebugBreak();
        }
    }
    else // NEOGEO_A_EXTRALOC
    {
        // This is where we handle all the palettes added in via Extra.
        stExtraDef* pCurrDef = GetExtraDefForNEOGEO(GetExtraLoc(nUnitId) + nPalId);

        m_nCurrentPaletteROMLocation = pCurrDef->uOffset;
        m_nCurrentPaletteSize = (pCurrDef->cbPaletteSize / 2);
        m_pszCurrentPaletteName = pCurrDef->szDesc;
    }
}

BOOL CGame_NEOGEO_A::LoadFile(CFile* LoadedFile, UINT16 nUnitId)
{
    for (UINT16 nUnitCtr = 0; nUnitCtr < nUnitAmt; nUnitCtr++)
    {
        UINT16 nPalAmt = GetPaletteCountForUnit(nUnitCtr);

        m_pppDataBuffer[nUnitCtr] = new UINT16 * [nPalAmt];

        //no need to re-sort this
        rgUnitRedir[nUnitCtr] = nUnitCtr;

        for (UINT16 nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
        {
            LoadSpecificPaletteData(nUnitCtr, nPalCtr);

            m_pppDataBuffer[nUnitCtr][nPalCtr] = new UINT16[m_nCurrentPaletteSize];

            LoadedFile->Seek(m_nCurrentPaletteROMLocation, CFile::begin);

            LoadedFile->Read(m_pppDataBuffer[nUnitCtr][nPalCtr], m_nCurrentPaletteSize * 2);
        }
    }

    rgUnitRedir[nUnitAmt] = INVALID_UNIT_VALUE;
    
    CheckForErrorsInTables();

    return TRUE;
}

void CGame_NEOGEO_A::CreateDefPal(sDescNode* srcNode, UINT16 nSepId)
{
    UINT16 nUnitId = srcNode->uUnitId;
    UINT16 nPalId = srcNode->uPalId;
    static UINT16 s_nColorsPerPage = CRegProc::GetMaxPalettePageSize();

    LoadSpecificPaletteData(nUnitId, nPalId);

    const UINT8 nTotalPagesNeeded = (UINT8)ceil((double)m_nCurrentPaletteSize / (double)s_nColorsPerPage);
    const bool fCanFitWithinCurrentPageLayout = (nTotalPagesNeeded <= MAX_PALETTE_PAGES);

    if (!fCanFitWithinCurrentPageLayout)
    {
        CString strWarning;
        strWarning.Format(_T("ERROR: The UI currently only supports %u pages. \"%s\" is trying to use %u pages which will not work.\n"), MAX_PALETTE_PAGES, srcNode->szDesc, nTotalPagesNeeded);
        OutputDebugString(strWarning);
    }

    BasePalGroup.AddPal(CreatePal(nUnitId, nPalId), m_nCurrentPaletteSize, nUnitId, nPalId);

    if (fCanFitWithinCurrentPageLayout && (m_nCurrentPaletteSize > s_nColorsPerPage))
    {
        CString strPageDescription;
        INT16 nColorsRemaining = m_nCurrentPaletteSize;

        for (UINT16 nCurrentPage = 0; (nCurrentPage * s_nColorsPerPage) < m_nCurrentPaletteSize; nCurrentPage++)
        {
            strPageDescription.Format(_T("%s (%u/%u)"), srcNode->szDesc, nCurrentPage + 1, nTotalPagesNeeded);
            BasePalGroup.AddSep(nSepId, strPageDescription, nCurrentPage * s_nColorsPerPage, min(s_nColorsPerPage, (DWORD)nColorsRemaining));
            nColorsRemaining -= s_nColorsPerPage;
        }
    }
    else
    {
        BasePalGroup.AddSep(nSepId, srcNode->szDesc, 0, m_nCurrentPaletteSize);
    }
}

BOOL CGame_NEOGEO_A::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
{
    //Reset palette sources
    ClearSrcPal();

    if (Node01 == -1)
    {
        return FALSE;
    }

    sDescNode* NodeGet = MainDescTree.GetDescNode(Node01, Node02, Node03, Node04);

    if (NodeGet == nullptr)
    {
        return FALSE;
    }

    // Default values for multisprite image display for Export
    UINT16 nSrcStart = NodeGet->uPalId;
    UINT16 nSrcAmt = 1;
    UINT16 nNodeIncrement = 1;

    //Get rid of any palettes if there are any
    BasePalGroup.FlushPalAll();

    // Make sure to reset the image id
    nTargetImgId = 0;
    UINT16 nImgUnitId = INVALID_UNIT_VALUE;

    //Create the default palette
    ClearSetImgTicket(nullptr);

    CreateDefPal(NodeGet, 0);

    SetSourcePal(0, NodeGet->uUnitId, nSrcStart, nSrcAmt, nNodeIncrement);

    return TRUE;
}

void CGame_NEOGEO_A::UpdatePalData()
{
    for (UINT16 nPalCtr = 0; nPalCtr < MAX_PALETTES_DISPLAYABLE; nPalCtr++)
    {
        sPalDef* srcDef = BasePalGroup.GetPalDef(nPalCtr);

        if (srcDef->bAvail)
        {
            COLORREF* crSrc = srcDef->pPal;

            INT16 nTotalColorsRemaining = srcDef->uPalSz;
            UINT16 nCurrentTotalWrites = 0;
            const UINT16 nMaxSafeColorsToWrite = 16;
            // First color is the transparency color.  For Unknown support, allow full writing of small chunks for now.
            const UINT16 iFixedCounterPosition = (nTotalColorsRemaining >= nMaxSafeColorsToWrite) ? 0 : 0xFFFF;

            while (nTotalColorsRemaining > 0)
            {
                UINT16 nCurrentColorCountToWrite = min(nMaxSafeColorsToWrite, nTotalColorsRemaining);

                for (UINT16 nPICtr = 0; nPICtr < nCurrentColorCountToWrite; nPICtr++)
                {
                    if (nPICtr == iFixedCounterPosition)
                    {
                        continue;
                    }

                    UINT16 iCurrentArrayOffset = nPICtr + nCurrentTotalWrites;
                    m_pppDataBuffer[srcDef->uUnitId][srcDef->uPalId][iCurrentArrayOffset] = ConvCol(crSrc[iCurrentArrayOffset]);
                }

                nCurrentTotalWrites += nMaxSafeColorsToWrite;
                nTotalColorsRemaining -= nMaxSafeColorsToWrite;
            }

            MarkPaletteDirty(srcDef->uUnitId, srcDef->uPalId);
            srcDef->bChanged = FALSE;
            rgFileChanged[0] = TRUE;
        }
    }
}

#include "StdAfx.h"
#include "Game_SF2HF_A.h"
#include "GameDef.h"
#include "..\ExtraFile.h"
#include "..\PalMod.h"
#include "..\regproc.h"

#define SF2HF_A_DEBUG DEFAULT_GAME_DEBUG_STATE

stExtraDef* CGame_SF2HF_A::SF2HF_A_21_EXTRA_CUSTOM = NULL;
stExtraDef* CGame_SF2HF_A::SF2HF_A_22_EXTRA_CUSTOM = NULL;

int CGame_SF2HF_A::rgExtraCountAll_21[SF2HF_A_21_NUMUNIT + 1] = { -1 };
int CGame_SF2HF_A::rgExtraCountAll_22[SF2HF_A_22_NUMUNIT + 1] = { -1 };
int CGame_SF2HF_A::rgExtraCountVisibleOnly_21[SF2HF_A_21_NUMUNIT + 1] = { -1 };
int CGame_SF2HF_A::rgExtraCountVisibleOnly_22[SF2HF_A_22_NUMUNIT + 1] = { -1 };
int CGame_SF2HF_A::rgExtraLoc_21[SF2HF_A_21_NUMUNIT + 1] = { -1 };
int CGame_SF2HF_A::rgExtraLoc_22[SF2HF_A_22_NUMUNIT + 1] = { -1 };

CDescTree CGame_SF2HF_A::MainDescTree_21 = nullptr;
CDescTree CGame_SF2HF_A::MainDescTree_22 = nullptr;
UINT32 CGame_SF2HF_A::m_nExpectedGameROMSize = 0x80000; // 524288 bytes
UINT32 CGame_SF2HF_A::m_nConfirmedROMSize = -1;

int CGame_SF2HF_A::m_nSelectedRom = 22;
UINT32 CGame_SF2HF_A::m_nTotalPaletteCountForSF2HF_21 = 0;
UINT32 CGame_SF2HF_A::m_nTotalPaletteCountForSF2HF_22 = 0;

void CGame_SF2HF_A::InitializeStatics()
{
    safe_delete_array(CGame_SF2HF_A::SF2HF_A_21_EXTRA_CUSTOM);
    safe_delete_array(CGame_SF2HF_A::SF2HF_A_22_EXTRA_CUSTOM);

    memset(rgExtraCountAll_21, -1, sizeof(rgExtraCountAll_21));
    memset(rgExtraCountAll_22, -1, sizeof(rgExtraCountAll_22));
    memset(rgExtraCountVisibleOnly_21, -1, sizeof(rgExtraCountVisibleOnly_21));
    memset(rgExtraCountVisibleOnly_22, -1, sizeof(rgExtraCountVisibleOnly_22));
    memset(rgExtraLoc_21, -1, sizeof(rgExtraLoc_21));
    memset(rgExtraLoc_22, -1, sizeof(rgExtraLoc_22));

    MainDescTree_21.SetRootTree(CGame_SF2HF_A::InitDescTree(21));
    MainDescTree_22.SetRootTree(CGame_SF2HF_A::InitDescTree(22));
}

CGame_SF2HF_A::CGame_SF2HF_A(UINT32 nConfirmedROMSize, int nSF2HFROMToLoad)
{
    // We need this set before we initialize so that corrupt Extras truncate correctly.
    // Otherwise the new user inadvertently corrupts their ROM.
    m_nConfirmedROMSize = nConfirmedROMSize;

    InitializeStatics();

    m_nSelectedRom = nSF2HFROMToLoad;
    m_pszExtraFilename = UsePaletteSetForSelect() ? EXTRA_FILENAME_SF2HF_21 : EXTRA_FILENAME_SF2HF_22;

    //We need the proper unit amt before we init the main buffer
    m_nTotalInternalUnits = UsePaletteSetForSelect() ? SF2HF_A_21_NUMUNIT : SF2HF_A_22_NUMUNIT;
    m_nExtraUnit = UsePaletteSetForSelect() ? SF2HF_A_21_EXTRALOC : SF2HF_A_22_EXTRALOC;

    nUnitAmt = m_nTotalInternalUnits + (GetExtraCt(m_nExtraUnit) ? 1 : 0);

    m_nSafeCountForThisRom = GetExtraCt(m_nExtraUnit) + (UsePaletteSetForSelect() ? 41 : 24);
    m_nTotalPaletteCount = UsePaletteSetForSelect() ? m_nTotalPaletteCountForSF2HF_21 : m_nTotalPaletteCountForSF2HF_22;
    m_nLowestKnownPaletteRomLocation = UsePaletteSetForSelect() ? 0x9400 : 0x1e6a8;

    CString strInfo;
    strInfo.Format(_T("CGame_SF2HF_A::CGame_SF2HF_A: Loaded SF2HF_A with %u Extras\n"), GetExtraCt(m_nExtraUnit));
    OutputDebugString(strInfo);

    InitDataBuffer();

    //Set color mode
    SetColMode(ColMode::COLMODE_12A);

    //Set palette conversion mode=
    BasePalGroup.SetMode(ePalType::PALTYPE_17);

    //Set game information
    nGameFlag = SF2HF_A;
    nImgGameFlag = IMGDAT_SECTION_ST;
    nImgUnitAmt = SF2HF_A_NUM_IMG_UNITS;

    createPalOptions = { SKIP_FIRST_COLOR, FORCE_ALPHA_ON_EVERY_COLOR, FORCE_ALPHA_ON_FIRST_COLOR };

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

CGame_SF2HF_A::~CGame_SF2HF_A(void)
{
    safe_delete_array(CGame_SF2HF_A::SF2HF_A_21_EXTRA_CUSTOM);
    safe_delete_array(CGame_SF2HF_A::SF2HF_A_22_EXTRA_CUSTOM);
    //Get rid of the file changed flag
    ClearDataBuffer();
    FlushChangeTrackingArray();
}

UINT32 CGame_SF2HF_A::GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet, bool* pfNeedToValidateCRCs)
{
    static const sCRC32ValueSet knownROMs[] =
    {
        { _T("Street Fighter II' - Hyper Fighting (US 921209)"), _T("s2tu_21.6f"), 0xfd200288, 0 },
        { _T("Street Fighter II' - Hyper Fighting (US 921209)"), _T("s2tu_22.7f"), 0xaea6e035, 0 },

        { _T("Street Fighter II' - Hyper Fighting (World 921209)"), _T("s2te_21.6f"), 0xfd200288, 0 },
        { _T("Street Fighter II' - Hyper Fighting (World 921209)"), _T("s2te_22.7f"), 0xaea6e035, 0 },

        { _T("Street Fighter II' - Hyper Fighting (Japan  921209)"), _T("s2tj_21.6f"), 0xfd200288, 0 },
        { _T("Street Fighter II' - Hyper Fighting (Japan  921209)"), _T("s2tj_22.7f"), 0xaea6e035, 0 },
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

int CGame_SF2HF_A::GetExtraCt(UINT16 nUnitId, BOOL bCountVisibleOnly)
{
    if (UsePaletteSetForSelect())
    {
        int* rgExtraCt = bCountVisibleOnly ? (int*)rgExtraCountVisibleOnly_21 : (int*)rgExtraCountAll_21;

        if (rgExtraCountAll_21[0] == -1)
        {
            int nDefCtr = 0;
            memset(rgExtraCountAll_21, 0, (SF2HF_A_21_NUMUNIT + 1) * sizeof(int));
            memset(rgExtraCountVisibleOnly_21, 0, (SF2HF_A_21_NUMUNIT + 1) * sizeof(int));

            stExtraDef* pCurrDef = GetCurrentExtraDef(0);

            while (pCurrDef->uUnitN != INVALID_UNIT_VALUE)
            {
                rgExtraCountAll_21[pCurrDef->uUnitN]++;

                if (!pCurrDef->isInvisible)
                {
                    rgExtraCountVisibleOnly_21[pCurrDef->uUnitN]++;
                }

                nDefCtr++;
                pCurrDef = GetCurrentExtraDef(nDefCtr);
            }
        }

        return rgExtraCt[nUnitId];
    }
    else
    {
        int* rgExtraCt = bCountVisibleOnly ? (int*)rgExtraCountVisibleOnly_22 : (int*)rgExtraCountAll_22;

        if (rgExtraCountAll_22[0] == -1)
        {
            int nDefCtr = 0;
            memset(rgExtraCountAll_22, 0, (SF2HF_A_22_NUMUNIT + 1) * sizeof(int));
            memset(rgExtraCountVisibleOnly_22, 0, (SF2HF_A_22_NUMUNIT + 1) * sizeof(int));

            stExtraDef* pCurrDef = GetCurrentExtraDef(0);

            while (pCurrDef->uUnitN != INVALID_UNIT_VALUE)
            {
                rgExtraCountAll_22[pCurrDef->uUnitN]++;

                if (!pCurrDef->isInvisible)
                {
                    rgExtraCountVisibleOnly_22[pCurrDef->uUnitN]++;
                }

                nDefCtr++;
                pCurrDef = GetCurrentExtraDef(nDefCtr);
            }
        }

        return rgExtraCt[nUnitId];
    }
}

int CGame_SF2HF_A::GetExtraLoc(UINT16 nUnitId)
{
    if (UsePaletteSetForSelect())
    {
        if (rgExtraLoc_21[0] == -1)
        {
            int nDefCtr = 0;
            int nCurrUnit = UNIT_START_VALUE;
            memset(rgExtraLoc_21, 0, (SF2HF_A_21_NUMUNIT + 1) * sizeof(int));

            stExtraDef* pCurrDef = GetCurrentExtraDef(0);

            while (pCurrDef->uUnitN != INVALID_UNIT_VALUE)
            {
                if (pCurrDef->uUnitN != nCurrUnit)
                {
                    rgExtraLoc_21[pCurrDef->uUnitN] = nDefCtr;
                    nCurrUnit = pCurrDef->uUnitN;
                }

                nDefCtr++;
                pCurrDef = GetCurrentExtraDef(nDefCtr);
            }
        }

        return rgExtraLoc_21[nUnitId];
    }
    else
    {
        if (rgExtraLoc_22[0] == -1)
        {
            int nDefCtr = 0;
            int nCurrUnit = UNIT_START_VALUE;
            memset(rgExtraLoc_22, 0, (SF2HF_A_22_NUMUNIT + 1) * sizeof(int));

            stExtraDef* pCurrDef = GetCurrentExtraDef(0);

            while (pCurrDef->uUnitN != INVALID_UNIT_VALUE)
            {
                if (pCurrDef->uUnitN != nCurrUnit)
                {
                    rgExtraLoc_22[pCurrDef->uUnitN] = nDefCtr;
                    nCurrUnit = pCurrDef->uUnitN;
                }

                nDefCtr++;
                pCurrDef = GetCurrentExtraDef(nDefCtr);
            }
        }

        return rgExtraLoc_22[nUnitId];
    }
}

const sDescTreeNode* CGame_SF2HF_A::GetCurrentUnitSet()
{
    if (UsePaletteSetForSelect())
    {
        return SF2HF_A_21_UNITS;
    }
    else
    {
        return SF2HF_A_22_UNITS;
    }
}

UINT16 CGame_SF2HF_A::GetCurrentExtraLoc()
{
    if (UsePaletteSetForSelect())
    {
        return SF2HF_A_21_EXTRALOC;
    }
    else
    {
        return SF2HF_A_22_EXTRALOC;
    }
}

CDescTree* CGame_SF2HF_A::GetMainTree()
{
    if (UsePaletteSetForSelect())
    {
        return &CGame_SF2HF_A::MainDescTree_21;
    }
    else
    {
        return &CGame_SF2HF_A::MainDescTree_22;
    }
}

stExtraDef* CGame_SF2HF_A::GetCurrentExtraDef(int nDefCtr)
{
    if (UsePaletteSetForSelect())
    {
        return (stExtraDef*)&SF2HF_A_21_EXTRA_CUSTOM[nDefCtr];
    }
    else
    {
        return (stExtraDef*)&SF2HF_A_22_EXTRA_CUSTOM[nDefCtr];
    }
}

sDescTreeNode* CGame_SF2HF_A::InitDescTree(int nROMPaletteSetToUse)
{
    UINT32 nTotalPaletteCount = 0;
    m_nSelectedRom = nROMPaletteSetToUse;

    bool fHaveExtras;
    UINT16 nUnitCt;
    UINT8 nExtraUnitLocation;

    if (UsePaletteSetForSelect())
    {
        nExtraUnitLocation = SF2HF_A_21_EXTRALOC;
        LoadExtraFileForGame(EXTRA_FILENAME_SF2HF_21, SF2HF_A_EXTRA, &SF2HF_A_21_EXTRA_CUSTOM, nExtraUnitLocation, m_nConfirmedROMSize);
        fHaveExtras = (GetExtraCt(nExtraUnitLocation) > 0);
        nUnitCt = SF2HF_A_21_NUMUNIT + (fHaveExtras ? 1 : 0);
    }
    else
    {
        nExtraUnitLocation = SF2HF_A_22_EXTRALOC;
        //Load extra file if we're using it
        LoadExtraFileForGame(EXTRA_FILENAME_SF2HF_22, SF2HF_A_EXTRA, &SF2HF_A_22_EXTRA_CUSTOM, nExtraUnitLocation, m_nConfirmedROMSize);
        fHaveExtras = (GetExtraCt(nExtraUnitLocation) > 0);
        nUnitCt = SF2HF_A_22_NUMUNIT + (fHaveExtras ? 1 : 0);
    }

    sDescTreeNode* NewDescTree = new sDescTreeNode;

    //Create the main character tree
    _stprintf(NewDescTree->szDesc, _T("%s"), g_GameFriendlyName[SF2HF_A]);
    NewDescTree->ChildNodes = new sDescTreeNode[nUnitCt];
    NewDescTree->uChildAmt = nUnitCt;
    //All units have tree children
    NewDescTree->uChildType = DESC_NODETYPE_TREE;

    CString strMsg;
    strMsg.Format(_T("CGame_SF2HF_A::InitDescTree: Building desc tree for SF2HF_A ROM %u...\n"), m_nSelectedRom);
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

        if (iUnitCtr != nExtraUnitLocation)
        {
            //Set each description
            _stprintf(UnitNode->szDesc, _T("%s"), GetCurrentUnitSet()[iUnitCtr].szDesc);

            UnitNode->ChildNodes = new sDescTreeNode[nUnitChildCount];
            //All children have collection trees
            UnitNode->uChildType = DESC_NODETYPE_TREE;
            UnitNode->uChildAmt = nUnitChildCount;

#if SF2HF_A_DEBUG
            strMsg.Format(_T("Unit: \"%s\", %u of %u, %u total children\n"), UnitNode->szDesc, iUnitCtr + 1, nUnitCt, UnitNode->uChildAmt);
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

#if SF2HF_A_DEBUG
                strMsg.Format(_T("\tCollection: \"%s\", %u of %u, %u children\n"), CollectionNode->szDesc, iCollectionCtr + 1, nUnitChildCount, nListedChildrenCount);
                OutputDebugString(strMsg);
#endif

                const sGame_PaletteDataset* paletteSetToUse = GetPaletteSet(iUnitCtr, iCollectionCtr);

                //Set each collection's extra nodes: convert the sGame_PaletteDataset to sDescTreeNodes
                for (UINT16 nNodeIndex = 0; nNodeIndex < nListedChildrenCount; nNodeIndex++)
                {
                    ChildNode = &((sDescNode*)CollectionNode->ChildNodes)[nNodeIndex];

                    _stprintf(ChildNode->szDesc, _T("%s"), paletteSetToUse[nNodeIndex].szPaletteName);

                    ChildNode->uUnitId = iUnitCtr; // but this doesn't work in the new layout does it...?
                    ChildNode->uPalId = nTotalPalettesUsedInUnit++;
                    nTotalPaletteCount++;

#if SF2HF_A_DEBUG
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
            UnitNode->ChildNodes = new sDescTreeNode[1]; // Only 1, _T("Extra Palettes)"
            UnitNode->uChildType = DESC_NODETYPE_TREE;
            UnitNode->uChildAmt = 1;

#if SF2HF_A_DEBUG
            strMsg.Format(_T("Unit (Extras): %s, %u of %u, %u total children\n"), UnitNode->szDesc, iUnitCtr + 1, nUnitCt, nUnitChildCount);
            OutputDebugString(strMsg);
#endif

        }

        //Set up extra nodes
        if (bUseExtra)
        {
            int nExtraPos = GetExtraLoc(iUnitCtr);
            int nCurrExtra = 0;

            CollectionNode = &((sDescTreeNode*)UnitNode->ChildNodes)[(nExtraUnitLocation > iUnitCtr) ? (nUnitChildCount - 1) : 0]; //Extra node
            _stprintf(CollectionNode->szDesc, _T("Extra"));

            CollectionNode->ChildNodes = new sDescTreeNode[nExtraCt];

            CollectionNode->uChildType = DESC_NODETYPE_NODE;
            CollectionNode->uChildAmt = nExtraCt; //EX + Extra

            for (UINT16 nExtraCtr = 0; nExtraCtr < nExtraCt; nExtraCtr++)
            {
                ChildNode = &((sDescNode*)CollectionNode->ChildNodes)[nExtraCtr];

                stExtraDef* pCurrDef = GetCurrentExtraDef(nExtraPos + nCurrExtra);

                while (pCurrDef->isInvisible)
                {
                    nCurrExtra++;

                    pCurrDef = GetCurrentExtraDef(nExtraPos + nCurrExtra);
                }

                _stprintf(ChildNode->szDesc, pCurrDef->szDesc);

                ChildNode->uUnitId = iUnitCtr;
                ChildNode->uPalId = (((nExtraUnitLocation > iUnitCtr) ? 1 : 0) * nUnitChildCount * 2) + nCurrExtra;

#if SF2HF_A_DEBUG
                strMsg.Format(_T("\t\tPalette: %s, %u of %u\n"), ChildNode->szDesc, nExtraCtr + 1, nExtraCt);
                OutputDebugString(strMsg);
#endif

                nCurrExtra++;
                nTotalPaletteCount++;
            }
        }
    }

    if (UsePaletteSetForSelect())
    {
        m_nTotalPaletteCountForSF2HF_21 = nTotalPaletteCount;
    }
    else
    {
        m_nTotalPaletteCountForSF2HF_22 = nTotalPaletteCount;
    }

    strMsg.Format(_T("CGame_SF2HF_A::InitDescTree: Loaded %u palettes for SF2HF ROM %u\n"), nTotalPaletteCount, m_nSelectedRom);
    OutputDebugString(strMsg);

    return NewDescTree;
}

sFileRule CGame_SF2HF_A::GetRule(UINT16 nUnitId)
{
    sFileRule NewFileRule;

    _stprintf_s(NewFileRule.szFileName, MAX_FILENAME_LENGTH, _T("s2te_21.6f"));

    NewFileRule.uUnitId = 0;
    NewFileRule.uVerifyVar = m_nExpectedGameROMSize;

    return NewFileRule;
}

UINT16 CGame_SF2HF_A::GetCollectionCountForUnit(UINT16 nUnitId)
{
    if (nUnitId == GetCurrentExtraLoc())
    {
        return GetExtraCt(nUnitId);
    }
    else
    {
        return GetCurrentUnitSet()[nUnitId].uChildAmt;
    }
}

UINT16 CGame_SF2HF_A::GetNodeCountForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    if (nUnitId == GetCurrentExtraLoc())
    {
        return GetExtraCt(nUnitId);
    }
    else
    {
        const sDescTreeNode* pCollectionNode = (const sDescTreeNode*)(GetCurrentUnitSet()[nUnitId].ChildNodes);
        return pCollectionNode[nCollectionId].uChildAmt;
    }
}

LPCTSTR CGame_SF2HF_A::GetDescriptionForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    if (nUnitId == GetCurrentExtraLoc())
    {
        return _T("Extra Palettes");
    }
    else
    {
        const sDescTreeNode* pCollection = (const sDescTreeNode*)GetCurrentUnitSet()[nUnitId].ChildNodes;
        return pCollection[nCollectionId].szDesc;
    }
}

UINT16 CGame_SF2HF_A::GetPaletteCountForUnit(UINT16 nUnitId)
{
    if (nUnitId == GetCurrentExtraLoc())
    {
        return GetExtraCt(nUnitId);
    }
    else
    {
        UINT16 nCompleteCount = 0;
        UINT16 nCollectionCount = GetCurrentUnitSet()[nUnitId].uChildAmt;
        const sDescTreeNode* pCurrentCollection = (const sDescTreeNode*)(GetCurrentUnitSet()[nUnitId].ChildNodes);

        for (UINT16 nCollectionIndex = 0; nCollectionIndex < nCollectionCount; nCollectionIndex++)
        {
            nCompleteCount += pCurrentCollection[nCollectionIndex].uChildAmt;
        }

#if SF2HF_A_DEBUG_EXTRA
        CString strMsg;
        strMsg.Format(_T("CGame_SF2HF_A::GetPaletteCountForUnit: %u palettes for unit %u which has %u collections.\n"), nCompleteCount, nUnitId, nCollectionCount);
        OutputDebugString(strMsg);
#endif

        return nCompleteCount;
    }
}

const sGame_PaletteDataset* CGame_SF2HF_A::GetPaletteSet(UINT16 nUnitId, UINT16 nCollectionId)
{
    // Don't use this for Extra palettes.
    const sDescTreeNode* pCurrentSet = (const sDescTreeNode*)GetCurrentUnitSet()[nUnitId].ChildNodes;
    return ((sGame_PaletteDataset*)(pCurrentSet[nCollectionId].ChildNodes));
}

const sGame_PaletteDataset* CGame_SF2HF_A::GetSpecificPalette(UINT16 nUnitId, UINT16 nPaletteId)
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

UINT16 CGame_SF2HF_A::GetNodeSizeFromPaletteId(UINT16 nUnitId, UINT16 nPaletteId)
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

const sDescTreeNode* CGame_SF2HF_A::GetNodeFromPaletteId(UINT16 nUnitId, UINT16 nPaletteId, bool fReturnBasicNodesOnly)
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

        if (nUnitId == GetCurrentExtraLoc())
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
            const sDescTreeNode* pCollectionNodeToCheck = (const sDescTreeNode*)(GetCurrentUnitSet()[nUnitId].ChildNodes);

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

void CGame_SF2HF_A::InitDataBuffer()
{
    m_nBufferSelectedRom = m_nSelectedRom;
    m_pppDataBuffer = new UINT16 * *[nUnitAmt];
    memset(m_pppDataBuffer, NULL, sizeof(UINT16**) * nUnitAmt);
}

void CGame_SF2HF_A::ClearDataBuffer()
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

void CGame_SF2HF_A::LoadSpecificPaletteData(UINT16 nUnitId, UINT16 nPalId)
{
    if (nUnitId != GetCurrentExtraLoc())
    {
        int cbPaletteSizeOnDisc = 0;
        const sGame_PaletteDataset* paletteData = GetSpecificPalette(nUnitId, nPalId);

        cbPaletteSizeOnDisc = (int)max(0, (paletteData->nPaletteOffsetEnd - paletteData->nPaletteOffset));

        m_nCurrentPaletteROMLocation = paletteData->nPaletteOffset;

        m_nCurrentPaletteSize = cbPaletteSizeOnDisc / 2;
        m_pszCurrentPaletteName = paletteData->szPaletteName;
    }
    else // SF2HF_A_EXTRALOC
    {
        // This is where we handle all the palettes added in via Extra.
        stExtraDef* pCurrDef = GetCurrentExtraDef(GetExtraLoc(nUnitId) + nPalId);

        m_nCurrentPaletteROMLocation = pCurrDef->uOffset;
        m_nCurrentPaletteSize = (pCurrDef->cbPaletteSize / 2);
        m_pszCurrentPaletteName = pCurrDef->szDesc;
    }
}

BOOL CGame_SF2HF_A::LoadFile(CFile* LoadedFile, UINT16 nUnitId)
{
    for (UINT16 nUnitCtr = 0; nUnitCtr < nUnitAmt; nUnitCtr++)
    {
        UINT16 nPalAmt = GetPaletteCountForUnit(nUnitCtr);

        m_pppDataBuffer[nUnitCtr] = new UINT16 * [nPalAmt];

        // use a presorted layout
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

BOOL CGame_SF2HF_A::SaveFile(CFile* SaveFile, UINT16 nUnitId)
{
    UINT32 nTotalPalettesSaved = 0;
    bool fShownOnce = false;

    for (UINT16 nUnitCtr = 0; nUnitCtr < nUnitAmt; nUnitCtr++)
    {
        UINT16 nPalAmt = GetPaletteCountForUnit(nUnitCtr);

        for (UINT16 nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
        {
            if (IsPaletteDirty(nUnitCtr, nPalCtr))
            {
                LoadSpecificPaletteData(nUnitCtr, nPalCtr);

                if (!fShownOnce && (m_nCurrentPaletteROMLocation < GetLowestExpectedPaletteLocation())) // This magic number is the lowest known ROM location.
                {
                    CString strMsg;
                    strMsg.Format(_T("Warning: Unit %u palette %u is trying to write to ROM location 0x%06x which is lower than we usually write to."), nUnitCtr, nPalCtr, m_nCurrentPaletteROMLocation);
                    MessageBox(g_appHWnd, strMsg, GetHost()->GetAppName(), MB_ICONERROR);
                    fShownOnce = true;
                }

                SaveFile->Seek(m_nCurrentPaletteROMLocation, CFile::begin);
                SaveFile->Write(m_pppDataBuffer[nUnitCtr][nPalCtr], m_nCurrentPaletteSize * 2);
                nTotalPalettesSaved++;
            }
        }
    }

    CString strMsg;
    strMsg.Format(_T("CGameClass::SaveFile: Saved 0x%x palettes to disk for %u units\n"), nTotalPalettesSaved, nUnitAmt);
    OutputDebugString(strMsg);

    return TRUE;
}

void CGame_SF2HF_A::CreateDefPal(sDescNode* srcNode, UINT16 nSepId)
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

BOOL CGame_SF2HF_A::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
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

        if (pCurrentNode) // For Basic nodes, we can allow multisprite view in the Export dialog
        {
            if ((_tcsicmp(pCurrentNode->szDesc, DEF_BUTTONLABEL_2[0]) == 0) ||
                (_tcsicmp(pCurrentNode->szDesc, DEF_BUTTONLABEL_2[1]) == 0))
            {
                nSrcAmt = ARRAYSIZE(DEF_BUTTONLABEL_2);
                nNodeIncrement = GetNodeSizeFromPaletteId(NodeGet->uUnitId, NodeGet->uPalId);

                while (nSrcStart >= nNodeIncrement)
                {
                    // The starting point is the absolute first palette for the sprite in question which is found in P1
                    nSrcStart -= nNodeIncrement;
                }
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

void CGame_SF2HF_A::UpdatePalData()
{
    for (UINT16 nPalCtr = 0; nPalCtr < MAX_PALETTES_DISPLAYABLE; nPalCtr++)
    {
        sPalDef* srcDef = BasePalGroup.GetPalDef(nPalCtr);
        if (srcDef->bAvail)
        {
            // First color is the transparency color
            const UINT16 nIndexStart = 1;

            COLORREF* crSrc = srcDef->pPal;
            UINT16 uAmt = srcDef->uPalSz;

            for (UINT16 nPICtr = nIndexStart; nPICtr < uAmt; nPICtr++)
            {
                m_pppDataBuffer[srcDef->uUnitId][srcDef->uPalId][nPICtr - 1] = ConvCol(crSrc[nPICtr]) & 0xFFF;
            }

            MarkPaletteDirty(srcDef->uUnitId, srcDef->uPalId);
            srcDef->bChanged = FALSE;
            rgFileChanged[0] = TRUE;
        }
    }
}

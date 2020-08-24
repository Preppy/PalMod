#include "StdAfx.h"
#include "Game_SSF2T_A.h"
#include "GameDef.h"
#include "..\PalMod.h"

#define SSF2T_DEBUG DEFAULT_GAME_DEBUG_STATE

stExtraDef* CGame_SSF2T_A::SSF2T_A_EXTRA_CUSTOM_3C = nullptr;
stExtraDef* CGame_SSF2T_A::SSF2T_A_EXTRA_CUSTOM_4A = nullptr;

CDescTree CGame_SSF2T_A::MainDescTree_3C = nullptr;
CDescTree CGame_SSF2T_A::MainDescTree_4A = nullptr;

int CGame_SSF2T_A::m_nSSF2TSelectedRom = 4;
UINT32 CGame_SSF2T_A::m_nTotalPaletteCountForSSF2T_3C = 0;
UINT32 CGame_SSF2T_A::m_nTotalPaletteCountForSSF2T_4A = 0;

int CGame_SSF2T_A::rgExtraLoc_3C[SSF2T_A_NUM_IND_3C + 1] = { -1 };
int CGame_SSF2T_A::rgExtraLoc_4A[SSF2T_A_NUM_IND_4A + 1] = { -1 };
int CGame_SSF2T_A::rgExtraCountAll_3C[SSF2T_A_NUM_IND_3C + 1] = { -1 };
int CGame_SSF2T_A::rgExtraCountAll_4A[SSF2T_A_NUM_IND_4A + 1] = { -1 };

UINT32 CGame_SSF2T_A::m_nExpectedGameROMSize = 0x80000; // 524288 bytes
UINT32 CGame_SSF2T_A::m_nConfirmedROMSize = -1;

void CGame_SSF2T_A::InitializeStatics()
{
    safe_delete_array(CGame_SSF2T_A::SSF2T_A_EXTRA_CUSTOM_3C);
    safe_delete_array(CGame_SSF2T_A::SSF2T_A_EXTRA_CUSTOM_4A);

    memset(rgExtraLoc_3C, -1, sizeof(rgExtraLoc_3C));
    memset(rgExtraLoc_4A, -1, sizeof(rgExtraLoc_4A));
    memset(rgExtraCountAll_3C, -1, sizeof(rgExtraCountAll_3C));
    memset(rgExtraCountAll_4A, -1, sizeof(rgExtraCountAll_4A));

    MainDescTree_3C.SetRootTree(CGame_SSF2T_A::InitDescTree(3));
    MainDescTree_4A.SetRootTree(CGame_SSF2T_A::InitDescTree(4));
}

CGame_SSF2T_A::CGame_SSF2T_A(UINT32 nConfirmedROMSize, int nSSF2TRomToLoad)
{
    // We need this set before we initialize so that corrupt Extras truncate correctly.
    // Otherwise the new user inadvertently corrupts their ROM.
    m_nConfirmedROMSize = nConfirmedROMSize;
    InitializeStatics();

    m_nSSF2TSelectedRom = (nSSF2TRomToLoad == 3) ? 3 : 4;

    CString strMessage;
    strMessage.Format(_T("CGame_SSF2T_A::CGame_SSF2T_A: Loading for the %s ROM\n"), (m_nSSF2TSelectedRom == 3) ? _T("3C") : _T("4A"));
    OutputDebugString(strMessage);

    m_nTotalInternalUnits = UsePaletteSetForPortraits() ? SSF2T_A_NUM_IND_3C : SSF2T_A_NUM_IND_4A;
    m_nExtraUnit = UsePaletteSetForPortraits() ? SSF2T_A_EXTRALOC_3C : SSF2T_A_EXTRALOC_4A;

    const UINT32 nSafeCountFor3C = 160;
    const UINT32 nSafeCountFor4A = 708;

    m_nSafeCountForThisRom = GetExtraCt(m_nExtraUnit) + (UsePaletteSetForPortraits() ? nSafeCountFor3C : nSafeCountFor4A);
    m_pszExtraFilename = UsePaletteSetForPortraits() ? EXTRA_FILENAME_SSF2T_3C : EXTRA_FILENAME_SSF2T_4A;
    m_nTotalPaletteCount = UsePaletteSetForPortraits() ? m_nTotalPaletteCountForSSF2T_3C : m_nTotalPaletteCountForSSF2T_4A;
    m_nLowestKnownPaletteRomLocation = UsePaletteSetForPortraits() ? m_uLowestKnownPaletteROMLocation_3C : m_uLowestKnownPaletteROMLocation_4A;

    nUnitAmt = m_nTotalInternalUnits + (GetExtraCt(m_nExtraUnit) ? 1 : 0);

    createPalOptions = { 1, 0xFF000000, 0xFF000000 };

    InitDataBuffer();

    //Set color mode
    SetColMode(COLMODE_12A);

    //Set palette conversion mode
    BasePalGroup.SetMode(PALTYPE_17);

    //Set game information
    nGameFlag = SSF2T_A;
    nImgGameFlag = IMGDAT_SECTION_ST;
    nImgUnitAmt = SSF2T_A_NUM_IMG_UNITS;

    nDisplayW = 8;
    nFileAmt = 1;

    //Set the image out display type
    DisplayType = DISPLAY_SPRITES_LEFTTORIGHT;
    pButtonLabel = const_cast<TCHAR*>((TCHAR*)DEF_BUTTONLABEL_ST10);
    
    //Create the redirect buffer
    rgUnitRedir = new UINT16[nUnitAmt + 1];
    memset(rgUnitRedir, NULL, sizeof(UINT16) * nUnitAmt);

    //Create the file changed flag
    PrepChangeTrackingArray();

    nRGBIndexAmt = 15;
    nAIndexAmt = 0;

    nRGBIndexMul = 17.0f;
    nAIndexMul = 0.0f;
}

CGame_SSF2T_A::~CGame_SSF2T_A(void)
{
    safe_delete_array(CGame_SSF2T_A::SSF2T_A_EXTRA_CUSTOM_3C);
    safe_delete_array(CGame_SSF2T_A::SSF2T_A_EXTRA_CUSTOM_4A);
    ClearDataBuffer();
    //Get rid of the file changed flag
    FlushChangeTrackingArray();
}

int CGame_SSF2T_A::GetExtraLoc(UINT16 nUnitId)
{
    if (UsePaletteSetForPortraits())
    {
        if (rgExtraLoc_3C[0] == -1)
        {
            int nDefCtr = 0;
            int nCurrUnit = UNIT_START_VALUE;
            memset(rgExtraLoc_3C, 0, (SSF2T_A_NUM_IND_3C + 1) * sizeof(int));

            stExtraDef* pCurrDef = GetExtraDefForSSF2T(0);

            while (pCurrDef->uUnitN != INVALID_UNIT_VALUE)
            {
                if (pCurrDef->uUnitN != nCurrUnit)
                {
                    rgExtraLoc_3C[pCurrDef->uUnitN] = nDefCtr;
                    nCurrUnit = pCurrDef->uUnitN;
                }

                nDefCtr++;
                pCurrDef = GetExtraDefForSSF2T(nDefCtr);
            }
        }

        return rgExtraLoc_3C[nUnitId];
    }
    else
    {
        if (rgExtraLoc_4A[0] == -1)
        {
            int nDefCtr = 0;
            int nCurrUnit = UNIT_START_VALUE;
            memset(rgExtraLoc_4A, 0, (SSF2T_A_NUM_IND_4A + 1) * sizeof(int));

            stExtraDef* pCurrDef = GetExtraDefForSSF2T(0);

            while (pCurrDef->uUnitN != INVALID_UNIT_VALUE)
            {
                if (pCurrDef->uUnitN != nCurrUnit)
                {
                    rgExtraLoc_4A[pCurrDef->uUnitN] = nDefCtr;
                    nCurrUnit = pCurrDef->uUnitN;
                }

                nDefCtr++;
                pCurrDef = GetExtraDefForSSF2T(nDefCtr);
            }
        }

        return rgExtraLoc_4A[nUnitId];
    }
}

int CGame_SSF2T_A::GetExtraCt(UINT16 nUnitId, BOOL bCountVisibleOnly)
{
    int* rgExtraCt = UsePaletteSetForPortraits() ? (int*)rgExtraCountAll_3C : (int*)rgExtraCountAll_4A;

    if (rgExtraCt[0] == -1)
    {
        int nDefCtr = 0;
        memset(rgExtraCt, 0, ((UsePaletteSetForPortraits() ? SSF2T_A_NUM_IND_3C : SSF2T_A_NUM_IND_4A) + 1) * sizeof(int));

        stExtraDef* pCurrDef = GetExtraDefForSSF2T(0);

        while (pCurrDef->uUnitN != INVALID_UNIT_VALUE)
        {
            if (!pCurrDef->isInvisible || !bCountVisibleOnly)
            {
                rgExtraCt[pCurrDef->uUnitN]++;
            }

            nDefCtr++;
            pCurrDef = GetExtraDefForSSF2T(nDefCtr);
        }
    }

    return rgExtraCt[nUnitId];
}

CDescTree* CGame_SSF2T_A::GetMainTree()
{
    if (UsePaletteSetForPortraits())
    {
        return &CGame_SSF2T_A::MainDescTree_3C;
    }
    else
    {
        return &CGame_SSF2T_A::MainDescTree_4A;
    }    
}

sDescTreeNode* CGame_SSF2T_A::InitDescTree(int nROMPaletteSetToUse)
{
    UINT32 nTotalPaletteCount = 0;
    m_nSSF2TSelectedRom = nROMPaletteSetToUse;

    //Load extra file if we're using it

    if (UsePaletteSetForPortraits())
    {
        LoadExtraFileForGame(EXTRA_FILENAME_SSF2T_3C, SSF2T_A_EXTRA, &SSF2T_A_EXTRA_CUSTOM_3C, SSF2T_A_EXTRALOC_3C, m_nConfirmedROMSize);
    }
    else
    {
        LoadExtraFileForGame(EXTRA_FILENAME_SSF2T_4A, SSF2T_A_EXTRA, &SSF2T_A_EXTRA_CUSTOM_4A, SSF2T_A_EXTRALOC_4A, m_nConfirmedROMSize);
    }

    bool fHaveExtras = UsePaletteSetForPortraits() ? (GetExtraCt(SSF2T_A_EXTRALOC_3C) > 0) : (GetExtraCt(SSF2T_A_EXTRALOC_4A) > 0);
    UINT16 nUnitCt = (UsePaletteSetForPortraits() ? SSF2T_A_NUM_IND_3C : SSF2T_A_NUM_IND_4A) + (fHaveExtras ? 1 : 0);

    sDescTreeNode* NewDescTree = new sDescTreeNode;

    //Create the main character tree
    _stprintf(NewDescTree->szDesc, _T("%s"), g_GameFriendlyName[SSF2T_A]);
    NewDescTree->ChildNodes = new sDescTreeNode[nUnitCt];
    NewDescTree->uChildAmt = nUnitCt;
    //All units have tree children
    NewDescTree->uChildType = DESC_NODETYPE_TREE;

    CString strMsg;
    strMsg.Format(_T("CGame_SSF2T_A::InitDescTree: Building desc tree for SSF2T ROM %s...\n"), UsePaletteSetForPortraits() ? _T("3C") : _T("4A"));
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

        if (UsePaletteSetForPortraits() ? (iUnitCtr < SSF2T_A_EXTRALOC_3C) : (iUnitCtr < SSF2T_A_EXTRALOC_4A))
        {
            //Set each description
            _stprintf(UnitNode->szDesc, _T("%s"), UsePaletteSetForPortraits() ? SSF2T_A_UNITS_3C[iUnitCtr].szDesc : SSF2T_A_UNITS_4A[iUnitCtr].szDesc);
            UnitNode->ChildNodes = new sDescTreeNode[nUnitChildCount];
            //All children have collection trees
            UnitNode->uChildType = DESC_NODETYPE_TREE;
            UnitNode->uChildAmt = nUnitChildCount;

#if SSF2T_DEBUG
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

#if SSF2T_DEBUG
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

#if SSF2T_DEBUG
#if OUTPUT_AS_NODE
                    strMsg.Format(_T("    { \"%s\", 0x%06x, 0x%06x },\n"), ChildNode->szDesc, paletteSetToUse[nNodeIndex].nPaletteOffset, paletteSetToUse[nNodeIndex].nPaletteOffsetEnd);
                    OutputDebugString(strMsg);
#else
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

#if SSF2T_DEBUG
            strMsg.Format(_T("Unit (Extras): %s, %u of %u, %u total children\n"), UnitNode->szDesc, iUnitCtr + 1, nUnitCt, nUnitChildCount);
            OutputDebugString(strMsg);
#endif
        }

        //Set up extra nodes
        if (bUseExtra)
        {
            int nExtraPos = GetExtraLoc(iUnitCtr);
            int nCurrExtra = 0;

            if (UsePaletteSetForPortraits())
            {
                CollectionNode = &((sDescTreeNode*)UnitNode->ChildNodes)[(SSF2T_A_EXTRALOC_3C > iUnitCtr) ? (nUnitChildCount - 1) : 0]; //Extra node
            }
            else
            {
                CollectionNode = &((sDescTreeNode*)UnitNode->ChildNodes)[(SSF2T_A_EXTRALOC_4A > iUnitCtr) ? (nUnitChildCount - 1) : 0]; //Extra node
            }

            _stprintf(CollectionNode->szDesc, _T("Extra"));

            CollectionNode->ChildNodes = new sDescTreeNode[nExtraCt];

            CollectionNode->uChildType = DESC_NODETYPE_NODE;
            CollectionNode->uChildAmt = nExtraCt; //EX + Extra

#if SSF2T_DEBUG
            strMsg.Format(_T("\tCollection: %s, %u of %u, %u children\n"), CollectionNode->szDesc, 1, nUnitChildCount, nExtraCt);
            OutputDebugString(strMsg);
#endif

            for (UINT16 nExtraCtr = 0; nExtraCtr < nExtraCt; nExtraCtr++)
            {
                ChildNode = &((sDescNode*)CollectionNode->ChildNodes)[nExtraCtr];

                stExtraDef* pCurrDef = GetExtraDefForSSF2T(nExtraPos + nCurrExtra);

                while (pCurrDef->isInvisible)
                {
                    nCurrExtra++;

                    pCurrDef = GetExtraDefForSSF2T(nExtraPos + nCurrExtra);
                }

                _stprintf(ChildNode->szDesc, pCurrDef->szDesc);

                ChildNode->uUnitId = iUnitCtr;
                if (UsePaletteSetForPortraits())
                {
                    ChildNode->uPalId = (((SSF2T_A_EXTRALOC_3C > iUnitCtr) ? 1 : 0) * nUnitChildCount * 2) + nCurrExtra;
                }
                else
                {
                    ChildNode->uPalId = (((SSF2T_A_EXTRALOC_4A > iUnitCtr) ? 1 : 0) * nUnitChildCount * 2) + nCurrExtra;
                }

#if SSF2T_DEBUG
                strMsg.Format(_T("\t\tPalette: %s, %u of %u\n"), ChildNode->szDesc, nExtraCtr + 1, nExtraCt);
                OutputDebugString(strMsg);
#endif

                nCurrExtra++;
                nTotalPaletteCount++;
            }
        }
    }

    strMsg.Format(_T("CGame_SSF2T_A::InitDescTree: Loaded %u palettes for SSF2T ROM %s\n"), nTotalPaletteCount, (m_nSSF2TSelectedRom == 3) ? _T("3C") : _T("4A"));
    OutputDebugString(strMsg);

    if (UsePaletteSetForPortraits())
    {
        m_nTotalPaletteCountForSSF2T_3C = nTotalPaletteCount;
    }
    else
    {
        m_nTotalPaletteCountForSSF2T_4A = nTotalPaletteCount;
    }

    return NewDescTree;
}

sFileRule CGame_SSF2T_A::GetRule(UINT16 nUnitId)
{
    sFileRule NewFileRule;

    _stprintf_s(NewFileRule.szFileName, MAX_FILENAME_LENGTH, (nUnitId == 3) ? _T("sfxe.03c") : _T("sfxe.04a"));

    NewFileRule.uUnitId = 0;
    NewFileRule.uVerifyVar = m_nExpectedGameROMSize;

    return NewFileRule;
}

UINT16 CGame_SSF2T_A::GetCollectionCountForUnit(UINT16 nUnitId)
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
    else
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
}

UINT16 CGame_SSF2T_A::GetNodeCountForCollection(UINT16 nUnitId, UINT16 nCollectionId)
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
    else
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
}

LPCTSTR CGame_SSF2T_A::GetDescriptionForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    if (UsePaletteSetForPortraits())
    {
        if (nUnitId == SSF2T_A_EXTRALOC_3C)
        {
            return _T("Extra Palettes");
        }
        else
        {
            const sDescTreeNode* pCollection = (const sDescTreeNode*)SSF2T_A_UNITS_3C[nUnitId].ChildNodes;
            return pCollection[nCollectionId].szDesc;
        }
    }
    else
    {
        if (nUnitId == SSF2T_A_EXTRALOC_4A)
        {
            return _T("Extra Palettes");
        }
        else
        {
            const sDescTreeNode* pCollection = (const sDescTreeNode*)SSF2T_A_UNITS_4A[nUnitId].ChildNodes;
            return pCollection[nCollectionId].szDesc;
        }
    }
}

UINT16 CGame_SSF2T_A::GetPaletteCountForUnit(UINT16 nUnitId)
{
    if (UsePaletteSetForPortraits() ? (nUnitId == SSF2T_A_EXTRALOC_3C) :
                                      (nUnitId == SSF2T_A_EXTRALOC_4A))
    {
        return GetExtraCt(nUnitId);
    }
    else
    {
        UINT16 nCompleteCount = 0;
        const sDescTreeNode* pCompleteROMTree = UsePaletteSetForPortraits() ? SSF2T_A_UNITS_3C : SSF2T_A_UNITS_4A;
        UINT16 nCollectionCount = pCompleteROMTree[nUnitId].uChildAmt;
        const sDescTreeNode* pCurrentCollection = (const sDescTreeNode*)(pCompleteROMTree[nUnitId].ChildNodes);

        for (UINT16 nCollectionIndex = 0; nCollectionIndex < nCollectionCount; nCollectionIndex++)
        {
            nCompleteCount += pCurrentCollection[nCollectionIndex].uChildAmt;
        }

#if SSF2T_DEBUG
        CString strMsg;
        strMsg.Format(_T("CGame_SSF2T_A::GetPaletteCountForUnit: %u for unit %u which has %u collections.\n"), nCompleteCount, nUnitId, nCollectionCount);
        OutputDebugString(strMsg);
#endif

        return nCompleteCount;
    }
}

const sGame_PaletteDataset* CGame_SSF2T_A::GetPaletteSet(UINT16 nUnitId, UINT16 nCollectionId)
{
    // Don't use this for Extra palettes.
    if (UsePaletteSetForPortraits())
    {
        const sDescTreeNode* pCurrentSet = (const sDescTreeNode*)SSF2T_A_UNITS_3C[nUnitId].ChildNodes;
        return ((sGame_PaletteDataset*)(pCurrentSet[nCollectionId].ChildNodes));
    }
    else
    {
        const sDescTreeNode* pCurrentSet = (const sDescTreeNode*)SSF2T_A_UNITS_4A[nUnitId].ChildNodes;
        return ((sGame_PaletteDataset*)(pCurrentSet[nCollectionId].ChildNodes));
    }
}

UINT16 CGame_SSF2T_A::GetNodeSizeFromPaletteId(UINT16 nUnitId, UINT16 nPaletteId)
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

const sGame_PaletteDataset* CGame_SSF2T_A::GetSpecificPalette(UINT16 nUnitId, UINT16 nPaletteId)
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

    m_nSSF2TSelectedRom = nCurrentROMMode;
}

void CGame_SSF2T_A::LoadSpecificPaletteData(UINT16 nUnitId, UINT16 nPalId)
{
    if (UsePaletteSetForPortraits() ? (nUnitId != SSF2T_A_EXTRALOC_3C) :
                                      (nUnitId != SSF2T_A_EXTRALOC_4A))
    {
        int cbPaletteSizeOnDisc = 0;
        const sGame_PaletteDataset* paletteData = GetSpecificPalette(nUnitId, nPalId);

        cbPaletteSizeOnDisc = (int)max(0, (paletteData->nPaletteOffsetEnd - paletteData->nPaletteOffset));

        m_nCurrentPaletteROMLocation = paletteData->nPaletteOffset;
        m_nCurrentPaletteSize = cbPaletteSizeOnDisc / 2;
        m_pszCurrentPaletteName = paletteData->szPaletteName;
    }
    else // SSF2T_A_EXTRALOC
    {
        // This is where we handle all the palettes added in via Extra.
        stExtraDef* pCurrDef = GetExtraDefForSSF2T(GetExtraLoc(nUnitId) + nPalId);

        m_nCurrentPaletteROMLocation = pCurrDef->uOffset;
        m_nCurrentPaletteSize = (pCurrDef->cbPaletteSize / 2);
        m_pszCurrentPaletteName = pCurrDef->szDesc;
    }
}

BOOL CGame_SSF2T_A::LoadFile(CFile* LoadedFile, UINT16 nUnitId)
{
    for (UINT16 nUnitCtr = 0; nUnitCtr < nUnitAmt; nUnitCtr++)
    {
        UINT16 nPalAmt = GetPaletteCountForUnit(nUnitCtr);

        m_pppDataBuffer[nUnitCtr] = new UINT16 * [nPalAmt];

        rgUnitRedir[nUnitCtr] = nUnitCtr; //Fix later for unit sort

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

BOOL CGame_SSF2T_A::SaveFile(CFile* SaveFile, UINT16 nUnitId)
{
    UINT32 nTotalPalettesSaved = 0;
    bool fShownOnce = false;

    for (UINT16 nUnitCtr = 0; nUnitCtr < nUnitAmt; nUnitCtr++)
    {
        UINT16 nPalAmt = GetPaletteCountForUnit(nUnitCtr);

        for (UINT16 nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
        {
            LoadSpecificPaletteData(nUnitCtr, nPalCtr);

            if (!fShownOnce && (m_nCurrentPaletteROMLocation < m_nLowestKnownPaletteRomLocation)) // This magic number is the lowest known ROM location.
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

    CString strMsg;
    strMsg.Format(_T("CGame_SSF2T_A::SaveFile: Saved 0x%x palettes to disk for %u units\n"), nTotalPalettesSaved, nUnitAmt);
    OutputDebugString(strMsg);

    return TRUE;
}

void CGame_SSF2T_A::CreateDefPal(sDescNode* srcNode, UINT16 nSepId)
{
    UINT16 nUnitId = srcNode->uUnitId;
    UINT16 nPalId = srcNode->uPalId;

    LoadSpecificPaletteData(nUnitId, nPalId);

    BasePalGroup.AddPal(CreatePal(nUnitId, nPalId), m_nCurrentPaletteSize, nUnitId, nPalId);
    BasePalGroup.AddSep(nSepId, srcNode->szDesc, 0, m_nCurrentPaletteSize);
}

BOOL CGame_SSF2T_A::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
{
    //Reset palette sources
    ClearSrcPal();

    if (Node01 == -1)
    {
        return FALSE;
    }

    sDescNode* NodeGet = UsePaletteSetForPortraits() ? MainDescTree_3C.GetDescNode(Node01, Node02, Node03, Node04) : MainDescTree_4A.GetDescNode(Node01, Node02, Node03, Node04);

    if (NodeGet == nullptr)
    {
        return FALSE;
    }

    UINT16 nCollectionCount = GetCollectionCountForUnit(NodeGet->uUnitId);

    UINT16 nSrcStart = 0;
    UINT16 nSrcAmt = nCollectionCount;
    UINT16 nNodeIncrement = GetNodeSizeFromPaletteId(NodeGet->uUnitId, NodeGet->uPalId);

    //Get rid of any palettes if there are any
    BasePalGroup.FlushPalAll();

    // Make sure to reset the image id
    nTargetImgId = 0;
    UINT16 nImgUnitId = INVALID_UNIT_VALUE;

    bool fShouldUseAlternateLoadLogic = false;

    // Only load images for internal units, since we don't currently have a methodology for associating
    // external loads to internal sprites.
    if (UsePaletteSetForPortraits() ? (SSF2T_A_EXTRALOC_3C != NodeGet->uUnitId) :
                                      (SSF2T_A_EXTRALOC_4A != NodeGet->uUnitId))
    {
        const sGame_PaletteDataset* paletteDataSet = GetSpecificPalette(NodeGet->uUnitId, NodeGet->uPalId);

        nSrcStart = NodeGet->uPalId;

        if (paletteDataSet)
        {
            nImgUnitId = paletteDataSet->indexImgToUse;
            nTargetImgId = paletteDataSet->indexOffsetToUse;

            if (UsePaletteSetForPortraits())
            {
                // Flat set of 10: start at the first entry per set
                nSrcStart = (UINT16)(NodeGet->uPalId / 10) * 10;
                nSrcAmt = 10;
                nNodeIncrement = 1;
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
    }
    else
    {
        // We don't have multisprite export for Extras.
        nSrcAmt = 1;
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

void CGame_SSF2T_A::UpdatePalData()
{
    for (UINT16 nPalCtr = 0; nPalCtr < MAX_PALETTES_DISPLAYABLE; nPalCtr++)
    {
        sPalDef* srcDef = BasePalGroup.GetPalDef(nPalCtr);

        if (srcDef->bAvail)
        {
            COLORREF* crSrc = srcDef->pPal;

            INT16 nTotalColorsRemaining = srcDef->uPalSz;
            UINT16 nCurrentTotalWrites = 0;
            // Every 16 colors there is another counter WORD (color length) to preserve.
            const UINT16 nMaxSafeColorsToWrite = 16;
            const UINT16 iFixedCounterPosition = 0; // The lead 'color' is a counter and needs to be preserved.

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
                    m_pppDataBuffer[srcDef->uUnitId][srcDef->uPalId][iCurrentArrayOffset - 1] = (ConvCol(crSrc[iCurrentArrayOffset]) & 0x0FFF);
                }

                nCurrentTotalWrites += nMaxSafeColorsToWrite;
                nTotalColorsRemaining -= nMaxSafeColorsToWrite;
            }

            srcDef->bChanged = FALSE;
            rgFileChanged[0] = TRUE;
        }
    }
}

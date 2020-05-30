#include "StdAfx.h"
#include "Game_MSHVSF_A.h"
#include "GameDef.h"
#include "..\PalMod.h"

#define MSHVSF_DEBUG DEFAULT_GAME_DEBUG_STATE

stExtraDef* CGame_MSHVSF_A::MSHVSF_A_EXTRA_CUSTOM_6A = nullptr;
stExtraDef* CGame_MSHVSF_A::MSHVSF_A_EXTRA_CUSTOM_7B = nullptr;

CDescTree CGame_MSHVSF_A::MainDescTree_6A = CGame_MSHVSF_A::InitDescTree(6);
CDescTree CGame_MSHVSF_A::MainDescTree_7B = CGame_MSHVSF_A::InitDescTree(7);

int CGame_MSHVSF_A::m_nMSHVSFSelectedRom = 6;
UINT32 CGame_MSHVSF_A::m_nTotalPaletteCountForMSHVSF_6A = 0;
UINT32 CGame_MSHVSF_A::m_nTotalPaletteCountForMSHVSF_7B = 0;

CGame_MSHVSF_A::CGame_MSHVSF_A(int nMSHVSFRomToLoad)
{
    m_nMSHVSFSelectedRom = (nMSHVSFRomToLoad == 6) ? 6 : 7;

    CString strMessage;
    strMessage.Format("CGame_MSHVSF_A::CGame_MSHVSF_A: Loading for the %s ROM\n", (m_nMSHVSFSelectedRom == 6) ? "6A" : "7B");
    OutputDebugString(strMessage);

    m_nTotalInternalUnits = UsePaletteSetForCharacters() ? MSHVSF_A_NUM_IND_6A : MSHVSF_A_NUM_IND_7B;
    m_nExtraUnit = UsePaletteSetForCharacters() ? MSHVSF_A_EXTRALOC_6A : MSHVSF_A_EXTRALOC_7B;

    const UINT32 nSafeCountFor6A = 404;
    const UINT32 nSafeCountFor7B = 24;

    m_nSafeCountForThisRom = GetExtraCt(m_nExtraUnit) + (UsePaletteSetForCharacters() ? nSafeCountFor6A : nSafeCountFor7B);
    m_pszExtraFilename = UsePaletteSetForCharacters() ? EXTRA_FILENAME_MSHVSF_6A : EXTRA_FILENAME_MSHVSF_7B;
    m_nTotalPaletteCount = UsePaletteSetForCharacters() ? m_nTotalPaletteCountForMSHVSF_6A : m_nTotalPaletteCountForMSHVSF_7B;
    m_nLowestKnownPaletteRomLocation = UsePaletteSetForCharacters() ? m_uLowestKnownPaletteROMLocation_6A : m_uLowestKnownPaletteROMLocation_7B;

    nUnitAmt = m_nTotalInternalUnits + (GetExtraCt(m_nExtraUnit) ? 1 : 0);

    InitDataBuffer();

    //Set color mode
    SetColMode(COLMODE_12A);

    //Set palette conversion mode
    BasePalGroup.SetMode(PALTYPE_17);

    //Set game information
    nGameFlag = MSHVSF_A;
    nImgGameFlag = IMG4;
    nImgUnitAmt = MSHVSF_A_NUM_IMG_UNITS;

    nDisplayW = 8;
    nFileAmt = 1;

    //Set the image out display type
    DisplayType = DISP_DEF;
    pButtonLabel = const_cast<CHAR*>((CHAR*)DEF_BUTTONLABEL_2);

    //Create the redirect buffer
    rgUnitRedir = new UINT16[nUnitAmt + 1];
    memset(rgUnitRedir, NULL, sizeof(UINT16) * nUnitAmt);

    //Create the file changed flag
    rgFileChanged = new UINT16;

    nRGBIndexAmt = 15;
    nAIndexAmt = 0;

    nRGBIndexMul = 17.0f;
    nAIndexMul = 0.0f;
}

CGame_MSHVSF_A::~CGame_MSHVSF_A(void)
{
    ClearDataBuffer();
    //Get rid of the file changed flag
    safe_delete(rgFileChanged);
}

int CGame_MSHVSF_A::GetExtraLoc(UINT16 nUnitId)
{
    static int rgExtraCountAll_6A[MSHVSF_A_NUM_IND_6A + 1] = { -1 };
    static int rgExtraCountAll_7B[MSHVSF_A_NUM_IND_7B + 1] = { -1 };

    if (UsePaletteSetForCharacters())
    {
        if (rgExtraCountAll_6A[0] == -1)
        {
            int nDefCtr = 0;
            int nCurrUnit = UNIT_START_VALUE;
            memset(rgExtraCountAll_6A, 0, (MSHVSF_A_NUM_IND_6A + 1) * sizeof(int));

            stExtraDef* pCurrDef = GetExtraDefForMSHVSF(0);

            while (pCurrDef->uUnitN != INVALID_UNIT_VALUE)
            {
                if (pCurrDef->uUnitN != nCurrUnit)
                {
                    rgExtraCountAll_6A[pCurrDef->uUnitN] = nDefCtr;
                    nCurrUnit = pCurrDef->uUnitN;
                }

                nDefCtr++;
                pCurrDef = GetExtraDefForMSHVSF(nDefCtr);
            }
        }

        return rgExtraCountAll_6A[nUnitId];
    }
    else
    {
        if (rgExtraCountAll_7B[0] == -1)
        {
            int nDefCtr = 0;
            int nCurrUnit = UNIT_START_VALUE;
            memset(rgExtraCountAll_7B, 0, (MSHVSF_A_NUM_IND_7B + 1) * sizeof(int));

            stExtraDef* pCurrDef = GetExtraDefForMSHVSF(0);

            while (pCurrDef->uUnitN != INVALID_UNIT_VALUE)
            {
                if (pCurrDef->uUnitN != nCurrUnit)
                {
                    rgExtraCountAll_7B[pCurrDef->uUnitN] = nDefCtr;
                    nCurrUnit = pCurrDef->uUnitN;
                }

                nDefCtr++;
                pCurrDef = GetExtraDefForMSHVSF(nDefCtr);
            }
        }

        return rgExtraCountAll_7B[nUnitId];
    }
}

int CGame_MSHVSF_A::GetExtraCt(UINT16 nUnitId, BOOL bCountVisibleOnly)
{
    static int rgExtraCount_6A[MSHVSF_A_NUM_IND_6A + 1] = { -1 };
    static int rgExtraCount_7B[MSHVSF_A_NUM_IND_7B + 1] = { -1 };

    int* rgExtraCt = UsePaletteSetForCharacters() ? (int*)rgExtraCount_6A : (int*)rgExtraCount_7B;

    if (rgExtraCt[0] == -1)
    {
        int nDefCtr = 0;
        memset(rgExtraCt, 0, ((UsePaletteSetForCharacters() ? MSHVSF_A_NUM_IND_6A : MSHVSF_A_NUM_IND_7B) + 1) * sizeof(int));

        stExtraDef* pCurrDef = GetExtraDefForMSHVSF(0);

        while (pCurrDef->uUnitN != INVALID_UNIT_VALUE)
        {
            if (!pCurrDef->isInvisible || !bCountVisibleOnly)
            {
                rgExtraCt[pCurrDef->uUnitN]++;
            }

            nDefCtr++;
            pCurrDef = GetExtraDefForMSHVSF(nDefCtr);
        }
    }

    return rgExtraCt[nUnitId];
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

CDescTree CGame_MSHVSF_A::InitDescTree(int nROMPaletteSetToUse)
{
    UINT32 nTotalPaletteCount = 0;
    m_nMSHVSFSelectedRom = nROMPaletteSetToUse;

    //Load extra file if we're using it
    if (UsePaletteSetForCharacters())
    {
        LoadExtraFileForGame(EXTRA_FILENAME_MSHVSF_6A, MSHVSF_A_EXTRA, &MSHVSF_A_EXTRA_CUSTOM_6A, MSHVSF_A_EXTRALOC_6A);
    }
    else
    {
        LoadExtraFileForGame(EXTRA_FILENAME_MSHVSF_7B, MSHVSF_A_EXTRA, &MSHVSF_A_EXTRA_CUSTOM_7B, MSHVSF_A_EXTRALOC_7B);
    }

    UINT16 nUnitCt = UsePaletteSetForCharacters() ? (MSHVSF_A_NUM_IND_6A + (GetExtraCt(MSHVSF_A_EXTRALOC_6A) ? 1 : 0)) :
                                                    (MSHVSF_A_NUM_IND_7B + (GetExtraCt(MSHVSF_A_EXTRALOC_7B) ? 1 : 0));

    sDescTreeNode* NewDescTree = new sDescTreeNode;

    //Create the main character tree
    sprintf(NewDescTree->szDesc, "%s", g_GameFriendlyName[MSHVSF_A]);
    NewDescTree->ChildNodes = new sDescTreeNode[nUnitCt];
    NewDescTree->uChildAmt = nUnitCt;
    //All units have tree children
    NewDescTree->uChildType = DESC_NODETYPE_TREE;

    CString strMsg;
    bool fHaveExtras = UsePaletteSetForCharacters() ? (GetExtraCt(MSHVSF_A_EXTRALOC_6A) > 0) : (GetExtraCt(MSHVSF_A_EXTRALOC_7B) > 0);
    strMsg.Format("CGame_MSHVSF_A::InitDescTree: Building desc tree for MSHVSF ROM %s %s extras...\n",
                    UsePaletteSetForCharacters() ? "6A" : "7B",
                    fHaveExtras ? "with" : "without");
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

        if (UsePaletteSetForCharacters() ? (iUnitCtr < MSHVSF_A_EXTRALOC_6A) : (iUnitCtr < MSHVSF_A_EXTRALOC_7B))
        {
            //Set each description
            sprintf(UnitNode->szDesc, "%s", UsePaletteSetForCharacters() ? MSHVSF_A_UNITS_6A[iUnitCtr].szDesc : MSHVSF_A_UNITS_7B[iUnitCtr].szDesc);
            UnitNode->ChildNodes = new sDescTreeNode[nUnitChildCount];
            //All children have collection trees
            UnitNode->uChildType = DESC_NODETYPE_TREE;
            UnitNode->uChildAmt = nUnitChildCount;

#if MSHVSF_DEBUG
            strMsg.Format("Unit: \"%s\", %u of %u (%s), %u total children\n", UnitNode->szDesc, iUnitCtr + 1, nUnitCt, bUseExtra ? "with extras" : "no extras", nUnitChildCount);
            OutputDebugString(strMsg);
#endif

            UINT16 nTotalPalettesUsedInUnit = 0;

            //Set data for each child group ("collection")
            for (UINT16 iCollectionCtr = 0; iCollectionCtr < nUnitChildCount; iCollectionCtr++)
            {
                CollectionNode = &((sDescTreeNode*)UnitNode->ChildNodes)[iCollectionCtr];

                //Set each collection data

                // Default label, since these aren't associated to collections
                sprintf(CollectionNode->szDesc, GetDescriptionForCollection(iUnitCtr, iCollectionCtr));
                //Collection children have nodes
                UINT16 nListedChildrenCount = GetNodeCountForCollection(iUnitCtr, iCollectionCtr);
                CollectionNode->uChildType = DESC_NODETYPE_NODE;
                CollectionNode->uChildAmt = nListedChildrenCount;
                CollectionNode->ChildNodes = (sDescTreeNode*)new sDescNode[nListedChildrenCount];

#if MSHVSF_DEBUG
                strMsg.Format("\tCollection: \"%s\", %u of %u, %u children\n", CollectionNode->szDesc, iCollectionCtr + 1, nUnitChildCount, nListedChildrenCount);
                OutputDebugString(strMsg);
#endif

                const sGame_PaletteDataset* paletteSetToUse = GetPaletteSet(iUnitCtr, iCollectionCtr);

                //Set each collection's extra nodes: convert the sGame_PaletteDataset to sDescTreeNodes
                for (UINT16 nNodeIndex = 0; nNodeIndex < nListedChildrenCount; nNodeIndex++)
                {
                    ChildNode = &((sDescNode*)CollectionNode->ChildNodes)[nNodeIndex];

                    sprintf(ChildNode->szDesc, "%s", paletteSetToUse[nNodeIndex].szPaletteName);

                    ChildNode->uUnitId = iUnitCtr; // but this doesn't work in the new layout does it...?
                    ChildNode->uPalId = nTotalPalettesUsedInUnit++;
                    nTotalPaletteCount++;

#if MSHVSF_DEBUG
                    strMsg.Format("\t\tPalette: \"%s\", %u of %u", ChildNode->szDesc, nNodeIndex + 1, nListedChildrenCount);
                    OutputDebugString(strMsg);
                    strMsg.Format(", 0x%06x to 0x%06x (%u colors),", paletteSetToUse[nNodeIndex].nPaletteOffset, paletteSetToUse[nNodeIndex].nPaletteOffsetEnd, (paletteSetToUse[nNodeIndex].nPaletteOffsetEnd - paletteSetToUse[nNodeIndex].nPaletteOffset) / 2);
                    OutputDebugString(strMsg);

                    if (paletteSetToUse[nNodeIndex].indexImgToUse != INVALID_UNIT_VALUE)
                    {
                        strMsg.Format(" image unit 0x%02x image index 0x%02x.\n", paletteSetToUse[nNodeIndex].indexImgToUse, paletteSetToUse[nNodeIndex].indexOffsetToUse);
                    }
                    else
                    {
                        strMsg.Format(" no image available.\n");
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
            sprintf(UnitNode->szDesc, "Extra Palettes");
            UnitNode->ChildNodes = new sDescTreeNode[1];
            UnitNode->uChildType = DESC_NODETYPE_TREE;
            UnitNode->uChildAmt = 1;

#if MSHVSF_DEBUG
            strMsg.Format("Unit (Extras): %s, %u of %u, %u total children\n", UnitNode->szDesc, iUnitCtr + 1, nUnitCt, nUnitChildCount);
            OutputDebugString(strMsg);
#endif
        }

        //Set up extra nodes
        if (bUseExtra)
        {
            int nExtraPos = GetExtraLoc(iUnitCtr);
            int nCurrExtra = 0;

            if (UsePaletteSetForCharacters())
            {
                CollectionNode = &((sDescTreeNode*)UnitNode->ChildNodes)[(MSHVSF_A_EXTRALOC_6A > iUnitCtr) ? (nUnitChildCount - 1) : 0]; //Extra node
            }
            else
            {
                CollectionNode = &((sDescTreeNode*)UnitNode->ChildNodes)[(MSHVSF_A_EXTRALOC_7B > iUnitCtr) ? (nUnitChildCount - 1) : 0]; //Extra node
            }

            sprintf(CollectionNode->szDesc, "Extra");

            CollectionNode->ChildNodes = new sDescTreeNode[nExtraCt];

            CollectionNode->uChildType = DESC_NODETYPE_NODE;
            CollectionNode->uChildAmt = nExtraCt; //EX + Extra

#if MSHVSF_DEBUG
            strMsg.Format("\tCollection: \"%s\", %u of %u, %u children\n", CollectionNode->szDesc, 1, nUnitChildCount, nExtraCt);
            OutputDebugString(strMsg);
#endif

            for (UINT16 nExtraCtr = 0; nExtraCtr < nExtraCt; nExtraCtr++)
            {
                ChildNode = &((sDescNode*)CollectionNode->ChildNodes)[nExtraCtr];

                stExtraDef* pCurrDef = GetExtraDefForMSHVSF(nExtraPos + nCurrExtra);

                while (pCurrDef->isInvisible)
                {
                    nCurrExtra++;

                    pCurrDef = GetExtraDefForMSHVSF(nExtraPos + nCurrExtra);
                }

                sprintf(ChildNode->szDesc, pCurrDef->szDesc);

                ChildNode->uUnitId = iUnitCtr;
                if (UsePaletteSetForCharacters())
                {
                    ChildNode->uPalId = (((MSHVSF_A_EXTRALOC_6A > iUnitCtr) ? 1 : 0) * nUnitChildCount * 2) + nCurrExtra;
                }
                else
                {
                    ChildNode->uPalId = (((MSHVSF_A_EXTRALOC_7B > iUnitCtr) ? 1 : 0) * nUnitChildCount * 2) + nCurrExtra;
                }

#if MSHVSF_DEBUG
                strMsg.Format("\t\tPalette: %s, %u of %u\n", ChildNode->szDesc, nExtraCtr + 1, nExtraCt);
                OutputDebugString(strMsg);
#endif

                nCurrExtra++;
                nTotalPaletteCount++;
            }
        }
    }

    strMsg.Format("CGame_MSHVSF_A::InitDescTree: Loaded %u palettes for MSHVSF ROM %s\n", nTotalPaletteCount, UsePaletteSetForCharacters() ? "6A" : "7B");
    OutputDebugString(strMsg);

    if (UsePaletteSetForCharacters())
    {
        m_nTotalPaletteCountForMSHVSF_6A = nTotalPaletteCount;
    }
    else
    {
        m_nTotalPaletteCountForMSHVSF_7B = nTotalPaletteCount;
    }


    return NewDescTree;
}

sFileRule CGame_MSHVSF_A::GetRule(UINT16 nUnitId)
{
    sFileRule NewFileRule;

    sprintf_s(NewFileRule.szFileName, MAX_FILENAME_LENGTH, (nUnitId == 6) ? "mvs.06a" : "mvs.07b");

    NewFileRule.uUnitId = 0;
    NewFileRule.uVerifyVar = 0x80000;

    return NewFileRule;
}

UINT16 CGame_MSHVSF_A::GetCollectionCountForUnit(UINT16 nUnitId)
{
    if (UsePaletteSetForCharacters())
    {
        if (nUnitId == MSHVSF_A_EXTRALOC_6A)
        {
            return GetExtraCt(nUnitId);
        }
        else
        {
            return MSHVSF_A_UNITS_6A[nUnitId].uChildAmt;
        }
    }
    else
    {
        if (nUnitId == MSHVSF_A_EXTRALOC_7B)
        {
            return GetExtraCt(nUnitId);
        }
        else
        {
            return MSHVSF_A_UNITS_7B[nUnitId].uChildAmt;
        }
    }

}

UINT16 CGame_MSHVSF_A::GetNodeCountForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    if (UsePaletteSetForCharacters())
    {
        if (nUnitId == MSHVSF_A_EXTRALOC_6A)
        {
            return GetExtraCt(nUnitId);
        }
        else
        {
            const sDescTreeNode* pCollectionNode = (const sDescTreeNode*)(MSHVSF_A_UNITS_6A[nUnitId].ChildNodes);

            return pCollectionNode[nCollectionId].uChildAmt;
        }
    }
    else
    {
        if (nUnitId == MSHVSF_A_EXTRALOC_7B)
        {
            return GetExtraCt(nUnitId);
        }
        else
        {
            const sDescTreeNode* pCollectionNode = (const sDescTreeNode*)(MSHVSF_A_UNITS_7B[nUnitId].ChildNodes);

            return pCollectionNode[nCollectionId].uChildAmt;
        }
    }
}

LPCSTR CGame_MSHVSF_A::GetDescriptionForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    if (UsePaletteSetForCharacters())
    {
        if (nUnitId == MSHVSF_A_EXTRALOC_6A)
        {
            return "Extra Palettes";
        }
        else
        {
            const sDescTreeNode* pCollection = (const sDescTreeNode*)MSHVSF_A_UNITS_6A[nUnitId].ChildNodes;
            return pCollection[nCollectionId].szDesc;
        }
    }
    else
    {
        if (nUnitId == MSHVSF_A_EXTRALOC_7B)
        {
            return "Extra Palettes";
        }
        else
        {
            const sDescTreeNode* pCollection = (const sDescTreeNode*)MSHVSF_A_UNITS_7B[nUnitId].ChildNodes;
            return pCollection[nCollectionId].szDesc;
        }
    }
}

UINT16 CGame_MSHVSF_A::GetPaletteCountForUnit(UINT16 nUnitId)
{
    if (UsePaletteSetForCharacters() ? (nUnitId == MSHVSF_A_EXTRALOC_6A) :
                                       (nUnitId == MSHVSF_A_EXTRALOC_7B))
    {
        return GetExtraCt(nUnitId);
    }
    else
    {
        UINT16 nCompleteCount = 0;
        const sDescTreeNode* pCompleteROMTree = UsePaletteSetForCharacters() ? MSHVSF_A_UNITS_6A : MSHVSF_A_UNITS_7B;
        UINT16 nCollectionCount = pCompleteROMTree[nUnitId].uChildAmt;

        const sDescTreeNode* pCurrentCollection = (const sDescTreeNode*)(pCompleteROMTree[nUnitId].ChildNodes);

        for (UINT16 nCollectionIndex = 0; nCollectionIndex < nCollectionCount; nCollectionIndex++)
        {
            nCompleteCount += pCurrentCollection[nCollectionIndex].uChildAmt;
        }

#if MSHVSF_DEBUG
        CString strMsg;
        strMsg.Format("CGame_MSHVSF_A::GetPaletteCountForUnit: %u for unit %u which has %u collections.\n", nCompleteCount, nUnitId, nCollectionCount);
        OutputDebugString(strMsg);
#endif

        return nCompleteCount;
    }
}

const sGame_PaletteDataset* CGame_MSHVSF_A::GetPaletteSet(UINT16 nUnitId, UINT16 nCollectionId)
{
    if (UsePaletteSetForCharacters())
    {
        // Don't use this for Extra palettes.
        const sDescTreeNode* pCurrentSet = (const sDescTreeNode*)MSHVSF_A_UNITS_6A[nUnitId].ChildNodes;
        return ((sGame_PaletteDataset*)(pCurrentSet[nCollectionId].ChildNodes));
    }
    else
    {
        // Don't use this for Extra palettes.
        const sDescTreeNode* pCurrentSet = (const sDescTreeNode*)MSHVSF_A_UNITS_7B[nUnitId].ChildNodes;
        return ((sGame_PaletteDataset*)(pCurrentSet[nCollectionId].ChildNodes));
    }
}

const sDescTreeNode* CGame_MSHVSF_A::GetNodeFromPaletteId(UINT16 nUnitId, UINT16 nPaletteId, bool fReturnBasicNodesOnly)
{
    // Don't use this for Extra palettes.
    const sDescTreeNode* pCollectionNode = nullptr;
    UINT16 nTotalCollections = GetCollectionCountForUnit(nUnitId);
    const sGame_PaletteDataset* paletteSetToUse = nullptr;
    int nDistanceFromZero = nPaletteId;

    for (int nCollectionIndex = 0; nCollectionIndex < nTotalCollections; nCollectionIndex++)
    {
        const sGame_PaletteDataset* paletteSetToCheck = GetPaletteSet(nUnitId, nCollectionIndex);
        UINT16 nNodeCount;

        if (UsePaletteSetForCharacters() ? (nUnitId == MSHVSF_A_EXTRALOC_6A) :
                                           (nUnitId == MSHVSF_A_EXTRALOC_7B))
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
            const sDescTreeNode* pCollectionNodeToCheck = UsePaletteSetForCharacters() ? (const sDescTreeNode*)(MSHVSF_A_UNITS_6A[nUnitId].ChildNodes) :
                                                                                         (const sDescTreeNode*)(MSHVSF_A_UNITS_7B[nUnitId].ChildNodes);

            nNodeCount = pCollectionNodeToCheck[nCollectionIndex].uChildAmt;

            if (nDistanceFromZero < nNodeCount)
            {
                // We know it's within this group.  Now: is it basic?
                if (!fReturnBasicNodesOnly || (nCollectionIndex < 2)) // P1/P2
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

const sGame_PaletteDataset* CGame_MSHVSF_A::GetSpecificPalette(UINT16 nUnitId, UINT16 nPaletteId)
{
    // Don't use this for Extra palettes.
    UINT16 nTotalCollections = GetCollectionCountForUnit(nUnitId);
    const sGame_PaletteDataset* paletteToUse = nullptr;
    int nDistanceFromZero = nPaletteId;

    for (int nCollectionIndex = 0; nCollectionIndex < nTotalCollections; nCollectionIndex++)
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

void CGame_MSHVSF_A::InitDataBuffer()
{
    m_nBufferSelectedRom = m_nMSHVSFSelectedRom;
    pppDataBuffer = new UINT16 * *[nUnitAmt];
    memset(pppDataBuffer, NULL, sizeof(UINT16**) * nUnitAmt);
}

void CGame_MSHVSF_A::ClearDataBuffer()
{
    int nCurrentROMMode = m_nMSHVSFSelectedRom;

    m_nMSHVSFSelectedRom = m_nBufferSelectedRom;

    if (pppDataBuffer)
    {
        for (UINT16 nUnitCtr = 0; nUnitCtr < nUnitAmt; nUnitCtr++)
        {
            if (pppDataBuffer[nUnitCtr])
            {
                UINT16 nPalAmt = GetPaletteCountForUnit(nUnitCtr);

                for (UINT16 nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
                {
                    safe_delete_array(pppDataBuffer[nUnitCtr][nPalCtr]);
                }

                safe_delete_array(pppDataBuffer[nUnitCtr]);
            }
        }

        safe_delete_array(pppDataBuffer);
    }

    m_nMSHVSFSelectedRom = nCurrentROMMode;
}

void CGame_MSHVSF_A::LoadSpecificPaletteData(UINT16 nUnitId, UINT16 nPalId)
{
    if (UsePaletteSetForCharacters() ? (nUnitId != MSHVSF_A_EXTRALOC_6A) :
                                       (nUnitId != MSHVSF_A_EXTRALOC_7B))
    {
        int cbPaletteSizeOnDisc = 0;
        const sGame_PaletteDataset* paletteData = GetSpecificPalette(nUnitId, nPalId);

        cbPaletteSizeOnDisc = (int)max(0, (paletteData->nPaletteOffsetEnd - paletteData->nPaletteOffset));

        nCurrPalOffs = paletteData->nPaletteOffset;
        m_nCurrentPaletteSize = cbPaletteSizeOnDisc / 2;
    }
    else // MSHVSF_A_EXTRALOC
    {
        // This is where we handle all the palettes added in via Extra.
        stExtraDef* pCurrDef = GetExtraDefForMSHVSF(GetExtraLoc(nUnitId) + nPalId);

        nCurrPalOffs = pCurrDef->uOffset;
        m_nCurrentPaletteSize = (pCurrDef->cbPaletteSize / 2);
    }

    m_nCurrentPaletteROMLocation = nCurrPalOffs;
}

BOOL CGame_MSHVSF_A::LoadFile(CFile* LoadedFile, UINT16 nUnitId)
{
    for (UINT16 nUnitCtr = 0; nUnitCtr < nUnitAmt; nUnitCtr++)
    {
        UINT16 nPalAmt = GetPaletteCountForUnit(nUnitCtr);

        pppDataBuffer[nUnitCtr] = new UINT16 * [nPalAmt];

        rgUnitRedir[nUnitCtr] = nUnitCtr;

        for (UINT16 nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
        {
            LoadSpecificPaletteData(nUnitCtr, nPalCtr);

            pppDataBuffer[nUnitCtr][nPalCtr] = new UINT16[m_nCurrentPaletteSize];

            LoadedFile->Seek(nCurrPalOffs, CFile::begin);

            LoadedFile->Read(pppDataBuffer[nUnitCtr][nPalCtr], m_nCurrentPaletteSize * 2);
        }
    }

    rgUnitRedir[nUnitAmt] = INVALID_UNIT_VALUE;

    CheckForErrorsInTables();

    return TRUE;
}

BOOL CGame_MSHVSF_A::SaveFile(CFile* SaveFile, UINT16 nUnitId)
{
    UINT32 nTotalPalettesSaved = 0;
    bool fShownOnce = false;

    for (UINT16 nUnitCtr = 0; nUnitCtr < nUnitAmt; nUnitCtr++)
    {
        UINT16 nPalAmt = GetPaletteCountForUnit(nUnitCtr);

        for (UINT16 nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
        {
            LoadSpecificPaletteData(nUnitCtr, nPalCtr);

            if (!fShownOnce && (nCurrPalOffs < m_nLowestKnownPaletteRomLocation)) // This magic number is the lowest known ROM location.
            {
                CString strMsg;
                strMsg.Format("Warning: Unit %u palette %u is trying to write to ROM location 0x%06x which is lower than we usually write to.", nUnitCtr, nPalCtr, nCurrPalOffs);
                MessageBox(g_appHWnd, strMsg, GetHost()->GetAppName(), MB_ICONERROR);
                fShownOnce = true;
            }

            SaveFile->Seek(nCurrPalOffs, CFile::begin);
            SaveFile->Write(pppDataBuffer[nUnitCtr][nPalCtr], m_nCurrentPaletteSize * 2);
            nTotalPalettesSaved++;
        }
    }

    CString strMsg;
    strMsg.Format("CGame_MSHVSF_A::SaveFile: Saved 0x%x palettes to disk for %u units\n", nTotalPalettesSaved, nUnitAmt);
    OutputDebugString(strMsg);

    return TRUE;
}

void CGame_MSHVSF_A::CreateDefPal(sDescNode* srcNode, UINT16 nSepId)
{
    UINT16 nUnitId = srcNode->uUnitId;
    UINT16 nPalId = srcNode->uPalId;

    LoadSpecificPaletteData(nUnitId, nPalId);

    BasePalGroup.AddPal(CreatePal(nUnitId, nPalId), m_nCurrentPaletteSize, nUnitId, nPalId);
    BasePalGroup.AddSep(nSepId, srcNode->szDesc, 0, m_nCurrentPaletteSize);
}

BOOL CGame_MSHVSF_A::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
{
    //Reset palette sources
    ClearSrcPal();

    if (Node01 == -1)
    {
        return FALSE;
    }

    sDescNode* NodeGet = UsePaletteSetForCharacters() ? MainDescTree_6A.GetDescNode(Node01, Node02, Node03, Node04) :
                                                        MainDescTree_7B.GetDescNode(Node01, Node02, Node03, Node04);

    if (NodeGet == nullptr)
    {
        return FALSE;
    }

    // Default values for multisprite image display for Export
    int nSrcStart = 0;
    int nSrcAmt = 0;
    UINT16 nNodeIncrement = 1;

    //Get rid of any palettes if there are any
    BasePalGroup.FlushPalAll();

    // Make sure to reset the image id
    nTargetImgId = 0;
    UINT16 nImgUnitId = INVALID_UNIT_VALUE;

    bool fShouldUseAlternateLoadLogic = false;

    // Only load images for internal units, since we don't currently have a methodology for associating
    // external loads to internal sprites.
    if (UsePaletteSetForCharacters() ? (NodeGet->uUnitId != MSHVSF_A_EXTRALOC_6A) :
                                       (NodeGet->uUnitId != MSHVSF_A_EXTRALOC_7B))
    {
        const sGame_PaletteDataset* paletteDataSet = GetSpecificPalette(NodeGet->uUnitId, NodeGet->uPalId);

        nSrcStart = NodeGet->uPalId;
        nSrcAmt = 1;

        if (paletteDataSet)
        {
            nImgUnitId = paletteDataSet->indexImgToUse;
            nTargetImgId = paletteDataSet->indexOffsetToUse;

            const sDescTreeNode* pCurrentNode = GetNodeFromPaletteId(NodeGet->uUnitId, NodeGet->uPalId, true);

            if (pCurrentNode) // For Basic nodes, we can allow multisprite view in the Export dialog
            {
                if ((strstr(pCurrentNode->szDesc, "P1") != nullptr) || (strstr(pCurrentNode->szDesc, "P2") == nullptr))
                {
                    // We show 2 sprites (P1/P2) for export for all normal mvc sprites
                    nSrcAmt = 2;
                    nNodeIncrement = pCurrentNode->uChildAmt;

                    if (NodeGet->uUnitId == index_MSHVSF_Blackheart_Mephisto)
                    {
                        // Allow for both Blackheart and Mephisto displays
                        if (((nSrcStart >= nNodeIncrement) && (nSrcStart <= (nNodeIncrement * 2))) ||
                            ((nSrcStart >= (nNodeIncrement * 3)) && (nSrcStart <= (nNodeIncrement * 4))))
                        {
                            nSrcStart -= nNodeIncrement;
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
                    const sGame_PaletteDataset* paletteDataSetToJoin = GetSpecificPalette(NodeGet->uUnitId, NodeGet->uPalId + 1);

                    if (paletteDataSetToJoin)
                    {
                        int nXOffs, nYOffs;

                        if (NodeGet->uUnitId == index_MSHVSF_Wolverine) // wolvie claws support
                        {
                            nXOffs = 20;
                            nYOffs = 4;
                            fShouldUseAlternateLoadLogic = true;
                        }
                        else if ((NodeGet->uUnitId == index_MSHVSF_CaptainAmerica) ||// Captain America shield
                                 (NodeGet->uUnitId == index_MSHVSF_USAgent))
                        {
                            nXOffs = -22;
                            nYOffs = -17;
                            fShouldUseAlternateLoadLogic = true;
                        }
                        else if (NodeGet->uUnitId == index_MSHVSF_CyberGouki)
                        {
                            fShouldUseAlternateLoadLogic = true;
                        }

                        if (fShouldUseAlternateLoadLogic)
                        {
                            ClearSetImgTicket(
                                CreateImgTicket(paletteDataSet->indexImgToUse, paletteDataSet->indexOffsetToUse,
                                    CreateImgTicket(paletteDataSetToJoin->indexImgToUse, paletteDataSetToJoin->indexOffsetToUse, nullptr, nXOffs, nYOffs)
                                )
                            );

                            //Set each palette
                            sDescNode* JoinedNode[2] = {
                                MainDescTree_6A.GetDescNode(Node01, Node02, Node03, -1),
                                MainDescTree_6A.GetDescNode(Node01, Node02, Node03 + 1, -1)
                            };

                            //Set each palette
                            CreateDefPal(JoinedNode[0], 0);
                            CreateDefPal(JoinedNode[1], 1);

                            SetSourcePal(0, NodeGet->uUnitId, nSrcStart, nSrcAmt, nNodeIncrement);
                            SetSourcePal(1, NodeGet->uUnitId, nSrcStart + 1, nSrcAmt, nNodeIncrement);
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

COLORREF* CGame_MSHVSF_A::CreatePal(UINT16 nUnitId, UINT16 nPalId)
{
    LoadSpecificPaletteData(nUnitId, nPalId);

    COLORREF* NewPal = new COLORREF[m_nCurrentPaletteSize];

    for (int i = 0; i < m_nCurrentPaletteSize - 1; i++)
    {
        NewPal[i + 1] = ConvPal(pppDataBuffer[nUnitId][nPalId][i]) | 0xFF000000;
    }

    NewPal[0] = 0xFF000000;

    return NewPal;
}

void CGame_MSHVSF_A::UpdatePalData()
{
    for (int nPalCtr = 0; nPalCtr < MAX_PAL; nPalCtr++)
    {
        sPalDef* srcDef = BasePalGroup.GetPalDef(nPalCtr);

        if (srcDef->bAvail)
        {
            COLORREF* crSrc = srcDef->pPal;

            int nTotalColorsRemaining = srcDef->uPalSz;
            UINT16 nCurrentTotalWrites = 0;
            // Every 16 colors there is another counter WORD (color length) to preserve.
            const UINT16 nMaxSafeColorsToWrite = 16;
            const UINT16 iFixedCounterPosition = 0; // The lead 'color' is a counter and needs to be preserved.

            while (nTotalColorsRemaining > 0)
            {
                UINT16 nCurrentColorCountToWrite = min(nMaxSafeColorsToWrite, nTotalColorsRemaining);

                for (int nPICtr = 0; nPICtr < nCurrentColorCountToWrite; nPICtr++)
                {
                    if (nPICtr == iFixedCounterPosition)
                    {
                        continue;
                    }

                    UINT16 iCurrentArrayOffset = nPICtr + nCurrentTotalWrites;
                    pppDataBuffer[srcDef->uUnitId][srcDef->uPalId][iCurrentArrayOffset - 1] = (ConvCol(crSrc[iCurrentArrayOffset]) & 0x0FFF);
                }

                nCurrentTotalWrites += nMaxSafeColorsToWrite;
                nTotalColorsRemaining -= nMaxSafeColorsToWrite;
            }

            srcDef->bChanged = FALSE;
            rgFileChanged[0] = TRUE;
        }
    }
}

#include "StdAfx.h"
#include "Game_MSH_A.h"
#include "GameDef.h"
#include "..\PalMod.h"
#include "..\RegProc.h"

#define MSH_DEBUG DEFAULT_GAME_DEBUG_STATE

stExtraDef* CGame_MSH_A::MSH_A_EXTRA_CUSTOM_05 = nullptr;
stExtraDef* CGame_MSH_A::MSH_A_EXTRA_CUSTOM_06 = nullptr;

CDescTree CGame_MSH_A::MainDescTree_05;
CDescTree CGame_MSH_A::MainDescTree_06;

int CGame_MSH_A::rgExtraCountAll_05[MSH_A_NUMUNIT_05 + 1] = { -1 };
int CGame_MSH_A::rgExtraCountAll_06[MSH_A_NUMUNIT_06 + 1] = { -1 };
int CGame_MSH_A::rgExtraLoc_05[MSH_A_NUMUNIT_05 + 1] = { -1 };
int CGame_MSH_A::rgExtraLoc_06[MSH_A_NUMUNIT_06 + 1] = { -1 };

int CGame_MSH_A::m_nMSHSelectedRom = 5;
UINT32 CGame_MSH_A::m_nTotalPaletteCountForMSH_05 = 0;
UINT32 CGame_MSH_A::m_nTotalPaletteCountForMSH_06 = 0;

void CGame_MSH_A::InitializeStatics()
{
    safe_delete_array(CGame_MSH_A::MSH_A_EXTRA_CUSTOM_05);
    safe_delete_array(CGame_MSH_A::MSH_A_EXTRA_CUSTOM_06);

    memset(rgExtraCountAll_05, -1, sizeof(rgExtraCountAll_05));
    memset(rgExtraCountAll_06, -1, sizeof(rgExtraCountAll_06));
    memset(rgExtraLoc_05, -1, sizeof(rgExtraLoc_05));
    memset(rgExtraLoc_06, -1, sizeof(rgExtraLoc_06));

    MainDescTree_05.SetRootTree(InitDescTree(5));
    MainDescTree_06.SetRootTree(InitDescTree(6));
}

CGame_MSH_A::CGame_MSH_A(int nMSHRomToLoad)
{
    InitializeStatics();

    m_nMSHSelectedRom = (nMSHRomToLoad == 5) ? 5 : 6;

    CString strMessage;
    strMessage.Format("CGame_MSH_A::CGame_MSH_A: Loading for the %s ROM\n", (m_nMSHSelectedRom == 5) ? "05" : "6B");
    OutputDebugString(strMessage);


    m_nTotalInternalUnits = UsePaletteSetForCharacters() ? MSH_A_NUMUNIT_05 : MSH_A_NUMUNIT_06;
    m_nExtraUnit = UsePaletteSetForCharacters() ? MSH_A_EXTRALOC_05 : MSH_A_EXTRALOC_06;

    const UINT32 nSafeCountFor05 = 68;
    // 24 for large palettes, 40 for small.
#if ALLOW_256_COLOR_PALETTES
    const UINT32 nSafeCountFor06 = 24;
#else
    const UINT32 nSafeCountFor06 = 40;
#endif

    m_nSafeCountForThisRom = GetExtraCt(m_nExtraUnit) + (UsePaletteSetForCharacters() ? nSafeCountFor05 : nSafeCountFor06);
    m_pszExtraFilename = UsePaletteSetForCharacters() ? EXTRA_FILENAME_MSH_05 : EXTRA_FILENAME_MSH_06;
    m_nTotalPaletteCount = UsePaletteSetForCharacters() ? m_nTotalPaletteCountForMSH_05 : m_nTotalPaletteCountForMSH_06;
    m_nLowestKnownPaletteRomLocation = UsePaletteSetForCharacters() ? m_uLowestKnownPaletteROMLocation_05 : m_uLowestKnownPaletteROMLocation_06;

    nUnitAmt = m_nTotalInternalUnits + (GetExtraCt(m_nExtraUnit) ? 1 : 0);

    InitDataBuffer();

    //Set color mode
    SetColMode(COLMODE_12A);

    //Set palette conversion mode
    BasePalGroup.SetMode(PALTYPE_17);

    //Set game information
    nGameFlag = MSH_A;
    nImgGameFlag = IMG4;
    nImgUnitAmt = MSH_A_NUM_IMG_UNITS;

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

CGame_MSH_A::~CGame_MSH_A(void)
{
    safe_delete_array(CGame_MSH_A::MSH_A_EXTRA_CUSTOM_05);
    safe_delete_array(CGame_MSH_A::MSH_A_EXTRA_CUSTOM_06);
    ClearDataBuffer();
    //Get rid of the file changed flag
    safe_delete(rgFileChanged);
}

CDescTree* CGame_MSH_A::GetMainTree()
{
    if (UsePaletteSetForCharacters())
    {
        return &CGame_MSH_A::MainDescTree_05;
    }
    else
    {
        return &CGame_MSH_A::MainDescTree_06;
    }
}

int CGame_MSH_A::GetExtraCt(UINT16 nUnitId, BOOL bCountVisibleOnly)
{
    int* rgExtraCt = UsePaletteSetForCharacters() ? (int*)rgExtraCountAll_05 : (int*)rgExtraCountAll_06;

    if (rgExtraCt[0] == -1)
    {
        int nDefCtr = 0;
        memset(rgExtraCt, 0, ((UsePaletteSetForCharacters() ? MSH_A_NUMUNIT_05 : MSH_A_NUMUNIT_06) + 1) * sizeof(int));

        stExtraDef* pCurrDef = GetExtraDefForMSH(0);

        while (pCurrDef->uUnitN != INVALID_UNIT_VALUE)
        {
            if (!pCurrDef->isInvisible || !bCountVisibleOnly)
            {
                rgExtraCt[pCurrDef->uUnitN]++;
            }

            nDefCtr++;
            pCurrDef = GetExtraDefForMSH(nDefCtr);
        }
    }

    return rgExtraCt[nUnitId];
}

int CGame_MSH_A::GetExtraLoc(UINT16 nUnitId)
{
    if (UsePaletteSetForCharacters())
    {
        if (rgExtraLoc_05[0] == -1)
        {
            int nDefCtr = 0;
            int nCurrUnit = UNIT_START_VALUE;
            memset(rgExtraLoc_05, 0, (MSH_A_NUMUNIT_05 + 1) * sizeof(int));

            stExtraDef* pCurrDef = GetExtraDefForMSH(0);

            while (pCurrDef->uUnitN != INVALID_UNIT_VALUE)
            {
                if (pCurrDef->uUnitN != nCurrUnit)
                {
                    rgExtraLoc_05[pCurrDef->uUnitN] = nDefCtr;
                    nCurrUnit = pCurrDef->uUnitN;
                }

                nDefCtr++;
                pCurrDef = GetExtraDefForMSH(nDefCtr);
            }
        }

        return rgExtraLoc_05[nUnitId];
    }
    else
    {
        if (rgExtraLoc_06[0] == -1)
        {
            int nDefCtr = 0;
            int nCurrUnit = UNIT_START_VALUE;
            memset(rgExtraLoc_06, 0, (MSH_A_NUMUNIT_06 + 1) * sizeof(int));

            stExtraDef* pCurrDef = GetExtraDefForMSH(0);

            while (pCurrDef->uUnitN != INVALID_UNIT_VALUE)
            {
                if (pCurrDef->uUnitN != nCurrUnit)
                {
                    rgExtraLoc_06[pCurrDef->uUnitN] = nDefCtr;
                    nCurrUnit = pCurrDef->uUnitN;
                }

                nDefCtr++;
                pCurrDef = GetExtraDefForMSH(nDefCtr);
            }
        }

        return rgExtraLoc_06[nUnitId];
    }
}

sDescTreeNode* CGame_MSH_A::InitDescTree(int nROMPaletteSetToUse)
{
    UINT32 nTotalPaletteCount = 0;
    m_nMSHSelectedRom = nROMPaletteSetToUse;

    //Load extra file if we're using it
    if (UsePaletteSetForCharacters())
    {
        LoadExtraFileForGame(EXTRA_FILENAME_MSH_05, MSH_A_EXTRA, &MSH_A_EXTRA_CUSTOM_05, MSH_A_EXTRALOC_05);
    }
    else
    {
        LoadExtraFileForGame(EXTRA_FILENAME_MSH_06, MSH_A_EXTRA, &MSH_A_EXTRA_CUSTOM_06, MSH_A_EXTRALOC_06);
    }

    UINT16 nUnitCt = UsePaletteSetForCharacters() ? (MSH_A_NUMUNIT_05 + (GetExtraCt(MSH_A_EXTRALOC_05) ? 1 : 0)) :
                                                    (MSH_A_NUMUNIT_06 + (GetExtraCt(MSH_A_EXTRALOC_06) ? 1 : 0));
    
    sDescTreeNode* NewDescTree = new sDescTreeNode;

    //Create the main character tree
    sprintf(NewDescTree->szDesc, "%s", g_GameFriendlyName[MSH_A]);
    NewDescTree->ChildNodes = new sDescTreeNode[nUnitCt];
    NewDescTree->uChildAmt = nUnitCt;
    //All units have tree children
    NewDescTree->uChildType = DESC_NODETYPE_TREE;

    CString strMsg;
    bool fHaveExtras = (GetExtraCt(UsePaletteSetForCharacters() ? MSH_A_EXTRALOC_05 : MSH_A_EXTRALOC_06) > 0);
    strMsg.Format("CGame_MSH_A::InitDescTree: Building desc tree for MSH %s extras...\n", fHaveExtras ? "with" : "without");
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

        if (UsePaletteSetForCharacters() ? (iUnitCtr < MSH_A_EXTRALOC_05) : (iUnitCtr < MSH_A_EXTRALOC_06))
        {
            //Set each description
            sprintf(UnitNode->szDesc, "%s", UsePaletteSetForCharacters() ? MSH_UNITS_05[iUnitCtr].szDesc : MSH_UNITS_06[iUnitCtr].szDesc);
            UnitNode->ChildNodes = new sDescTreeNode[nUnitChildCount];
            //All children have collection trees
            UnitNode->uChildType = DESC_NODETYPE_TREE;
            UnitNode->uChildAmt = nUnitChildCount;

#if MSH_DEBUG
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

#if MSH_DEBUG
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

#if MSH_DEBUG
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

#if MSH_DEBUG
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
                CollectionNode = &((sDescTreeNode*)UnitNode->ChildNodes)[(MSH_A_EXTRALOC_05 > iUnitCtr) ? (nUnitChildCount - 1) : 0]; //Extra node
            }
            else
            {
                CollectionNode = &((sDescTreeNode*)UnitNode->ChildNodes)[(MSH_A_EXTRALOC_06 > iUnitCtr) ? (nUnitChildCount - 1) : 0]; //Extra node
            }

            sprintf(CollectionNode->szDesc, "Extra");

            CollectionNode->ChildNodes = new sDescTreeNode[nExtraCt];

            CollectionNode->uChildType = DESC_NODETYPE_NODE;
            CollectionNode->uChildAmt = nExtraCt; //EX + Extra

#if MSH_DEBUG
            strMsg.Format("\tCollection: %s, %u of %u, %u children\n", CollectionNode->szDesc, 1, nUnitChildCount, nExtraCt);
            OutputDebugString(strMsg);
#endif

            for (UINT16 nExtraCtr = 0; nExtraCtr < nExtraCt; nExtraCtr++)
            {
                ChildNode = &((sDescNode*)CollectionNode->ChildNodes)[nExtraCtr];

                stExtraDef* pCurrDef = GetExtraDefForMSH(nExtraPos + nCurrExtra);

                while (pCurrDef->isInvisible)
                {
                    nCurrExtra++;

                    pCurrDef = GetExtraDefForMSH(nExtraPos + nCurrExtra);
                }

                sprintf(ChildNode->szDesc, pCurrDef->szDesc);

                ChildNode->uUnitId = iUnitCtr;
                if (UsePaletteSetForCharacters())
                {
                    ChildNode->uPalId = (((MSH_A_EXTRALOC_05 > iUnitCtr) ? 1 : 0) * nUnitChildCount * 2) + nCurrExtra;
                }
                else
                {
                    ChildNode->uPalId = (((MSH_A_EXTRALOC_06 > iUnitCtr) ? 1 : 0) * nUnitChildCount * 2) + nCurrExtra;
                }

#if MSH_DEBUG
                strMsg.Format("\t\tPalette: %s, %u of %u\n", ChildNode->szDesc, nExtraCtr + 1, nExtraCt);
                OutputDebugString(strMsg);
#endif

                nCurrExtra++;
                nTotalPaletteCount++;
            }
        }
    }

    strMsg.Format("CGame_MSH_A::InitDescTree: Loaded %u palettes for MSH\n", nTotalPaletteCount);
    OutputDebugString(strMsg);

    if (UsePaletteSetForCharacters())
    {
        m_nTotalPaletteCountForMSH_05 = nTotalPaletteCount;
    }
    else
    {
        m_nTotalPaletteCountForMSH_06 = nTotalPaletteCount;
    }


    return NewDescTree;
}

sFileRule CGame_MSH_A::GetRule(UINT16 nUnitId)
{
    sFileRule NewFileRule;

    sprintf_s(NewFileRule.szFileName, MAX_FILENAME_LENGTH, (nUnitId == 5) ? "MSH.05" : "MSH.06B");

    NewFileRule.uUnitId = 0;
    NewFileRule.uVerifyVar = 0x80000;

    return NewFileRule;
}

UINT16 CGame_MSH_A::GetCollectionCountForUnit(UINT16 nUnitId)
{
    if (UsePaletteSetForCharacters())
    {
        if (nUnitId == MSH_A_EXTRALOC_05)
        {
            return GetExtraCt(nUnitId);
        }
        else
        {
            return MSH_UNITS_05[nUnitId].uChildAmt;
        }
    }
    else
    {
        if (nUnitId == MSH_A_EXTRALOC_06)
        {
            return GetExtraCt(nUnitId);
        }
        else
        {
            return MSH_UNITS_06[nUnitId].uChildAmt;
        }
    }
}

UINT16 CGame_MSH_A::GetNodeCountForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    if (UsePaletteSetForCharacters())
    {
        if (nUnitId == MSH_A_EXTRALOC_05)
        {
            return GetExtraCt(nUnitId);
        }
        else
        {
            const sDescTreeNode* pCollectionNode = (const sDescTreeNode*)(MSH_UNITS_05[nUnitId].ChildNodes);

            return pCollectionNode[nCollectionId].uChildAmt;
        }
    }
    else
    {
        if (nUnitId == MSH_A_EXTRALOC_06)
        {
            return GetExtraCt(nUnitId);
        }
        else
        {
            const sDescTreeNode* pCollectionNode = (const sDescTreeNode*)(MSH_UNITS_06[nUnitId].ChildNodes);

            return pCollectionNode[nCollectionId].uChildAmt;
        }
    }
}

LPCSTR CGame_MSH_A::GetDescriptionForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    if (UsePaletteSetForCharacters())
    {
        if (nUnitId == MSH_A_EXTRALOC_05)
        {
            return "Extra Palettes";
        }
        else
        {
            const sDescTreeNode* pCollection = (const sDescTreeNode*)MSH_UNITS_05[nUnitId].ChildNodes;
            return pCollection[nCollectionId].szDesc;
        }
    }
    else
    {
        if (nUnitId == MSH_A_EXTRALOC_06)
        {
            return "Extra Palettes";
        }
        else
        {
            const sDescTreeNode* pCollection = (const sDescTreeNode*)MSH_UNITS_06[nUnitId].ChildNodes;
            return pCollection[nCollectionId].szDesc;
        }
    }
}

UINT16 CGame_MSH_A::GetPaletteCountForUnit(UINT16 nUnitId)
{
    if (UsePaletteSetForCharacters() ? (nUnitId == MSH_A_EXTRALOC_05) :
                                      (nUnitId == MSH_A_EXTRALOC_06))
    {
        return GetExtraCt(nUnitId);
    }
    else
    {
        UINT16 nCompleteCount = 0;
        const sDescTreeNode* pCompleteROMTree = UsePaletteSetForCharacters() ? MSH_UNITS_05 : MSH_UNITS_06;
        UINT16 nCollectionCount = pCompleteROMTree[nUnitId].uChildAmt;

        const sDescTreeNode* pCurrentCollection = (const sDescTreeNode*)(pCompleteROMTree[nUnitId].ChildNodes);

        for (UINT16 nCollectionIndex = 0; nCollectionIndex < nCollectionCount; nCollectionIndex++)
        {
            nCompleteCount += pCurrentCollection[nCollectionIndex].uChildAmt;
        }

#if MSH_DEBUG
        CString strMsg;
        strMsg.Format("CGame_MSH_A::GetPaletteCountForUnit: %u for unit %u which has %u collections.\n", nCompleteCount, nUnitId, nCollectionCount);
        OutputDebugString(strMsg);
#endif

        return nCompleteCount;
    }
}

const sGame_PaletteDataset* CGame_MSH_A::GetPaletteSet(UINT16 nUnitId, UINT16 nCollectionId)
{
    if (UsePaletteSetForCharacters())
    {
        // Don't use this for Extra palettes.
        const sDescTreeNode* pCurrentSet = (const sDescTreeNode*)MSH_UNITS_05[nUnitId].ChildNodes;
        return ((sGame_PaletteDataset*)(pCurrentSet[nCollectionId].ChildNodes));
    }
    else
    {
        // Don't use this for Extra palettes.
        const sDescTreeNode* pCurrentSet = (const sDescTreeNode*)MSH_UNITS_06[nUnitId].ChildNodes;
        return ((sGame_PaletteDataset*)(pCurrentSet[nCollectionId].ChildNodes));
    }
}

const sDescTreeNode* CGame_MSH_A::GetNodeFromPaletteId(UINT16 nUnitId, UINT16 nPaletteId, bool fReturnBasicNodesOnly)
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

        if (UsePaletteSetForCharacters() ? (nUnitId == MSH_A_EXTRALOC_05) :
                                           (nUnitId == MSH_A_EXTRALOC_06))
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
            const sDescTreeNode* pCollectionNodeToCheck = UsePaletteSetForCharacters() ? (const sDescTreeNode*)(MSH_UNITS_05[nUnitId].ChildNodes) :
                                                                                         (const sDescTreeNode*)(MSH_UNITS_06[nUnitId].ChildNodes);
            
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

const sGame_PaletteDataset* CGame_MSH_A::GetSpecificPalette(UINT16 nUnitId, UINT16 nPaletteId)
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

void CGame_MSH_A::InitDataBuffer()
{
    m_nBufferSelectedRom = m_nMSHSelectedRom;
    pppDataBuffer = new UINT16 * *[nUnitAmt];
    memset(pppDataBuffer, NULL, sizeof(UINT16**) * nUnitAmt);
}

void CGame_MSH_A::ClearDataBuffer()
{
    int nCurrentROMMode = m_nMSHSelectedRom;

    m_nMSHSelectedRom = m_nBufferSelectedRom;

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

    m_nMSHSelectedRom = nCurrentROMMode;
}

void CGame_MSH_A::LoadSpecificPaletteData(UINT16 nUnitId, UINT16 nPalId)
{
     if (UsePaletteSetForCharacters() ? (nUnitId != MSH_A_EXTRALOC_05) :
                                        (nUnitId != MSH_A_EXTRALOC_06))
    {
        int cbPaletteSizeOnDisc = 0;
        const sGame_PaletteDataset* paletteData = GetSpecificPalette(nUnitId, nPalId);

        if (paletteData)
        {
            cbPaletteSizeOnDisc = (int)max(0, (paletteData->nPaletteOffsetEnd - paletteData->nPaletteOffset));

            nCurrPalOffs = paletteData->nPaletteOffset;
            m_nCurrentPaletteSize = cbPaletteSizeOnDisc / 2;
        }
        else
        {
            // A bogus palette was requested: this is unrecoverable.
            DebugBreak();
        }
    }
    else // MSH_A_EXTRALOC
    {
        // This is where we handle all the palettes added in via Extra.
        stExtraDef* pCurrDef = GetExtraDefForMSH(GetExtraLoc(nUnitId) + nPalId);

        nCurrPalOffs = pCurrDef->uOffset;
        m_nCurrentPaletteSize = (pCurrDef->cbPaletteSize / 2);
    }

    m_nCurrentPaletteROMLocation = nCurrPalOffs;
}

BOOL CGame_MSH_A::LoadFile(CFile* LoadedFile, UINT16 nUnitId)
{
    for (UINT16 nUnitCtr = 0; nUnitCtr < nUnitAmt; nUnitCtr++)
    {
        int nPalAmt = GetPaletteCountForUnit(nUnitCtr);

        pppDataBuffer[nUnitCtr] = new UINT16 * [nPalAmt];

        rgUnitRedir[nUnitCtr] = nUnitCtr; // probably can remove this

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

BOOL CGame_MSH_A::SaveFile(CFile* SaveFile, UINT16 nUnitId)
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
    strMsg.Format("CGame_MSH_A::SaveFile: Saved 0x%x palettes to disk for %u units\n", nTotalPalettesSaved, nUnitAmt);
    OutputDebugString(strMsg);

    return TRUE;
}

void CGame_MSH_A::CreateDefPal(sDescNode* srcNode, UINT16 nSepId)
{
    UINT16 nUnitId = srcNode->uUnitId;
    UINT16 nPalId = srcNode->uPalId;
    static DWORD s_nColorsPerPage = CRegProc::GetMaxPalettePageSize();

    LoadSpecificPaletteData(nUnitId, nPalId);

    const UINT8 nTotalPagesNeeded = (UINT8)ceil(m_nCurrentPaletteSize / s_nColorsPerPage);
    const bool fCanFitWithinCurrentPageLayout = (nTotalPagesNeeded <= MAX_PALETTE_PAGES);

    if (!fCanFitWithinCurrentPageLayout)
    {
        CString strWarning;
        strWarning.Format("ERROR: The UI currently only supports %u pages. \"%s\" is trying to use %u pages which will not work.\n", MAX_PALETTE_PAGES, srcNode->szDesc, nTotalPagesNeeded);
        OutputDebugString(strWarning);
    }

    BasePalGroup.AddPal(CreatePal(nUnitId, nPalId), m_nCurrentPaletteSize, nUnitId, nPalId);

    if (fCanFitWithinCurrentPageLayout && (m_nCurrentPaletteSize > s_nColorsPerPage))
    {
        CString strPageDescription;
        int nColorsRemaining = m_nCurrentPaletteSize;

        for (UINT16 nCurrentPage = 0; (nCurrentPage * s_nColorsPerPage) < m_nCurrentPaletteSize; nCurrentPage++)
        {
            strPageDescription.Format("%s (%u/%u)", srcNode->szDesc, nCurrentPage + 1, nTotalPagesNeeded);
            BasePalGroup.AddSep(0, strPageDescription, nCurrentPage * s_nColorsPerPage, min(s_nColorsPerPage, (DWORD)nColorsRemaining));
            nColorsRemaining -= s_nColorsPerPage;
        }
    }
    else
    {
        BasePalGroup.AddSep(nSepId, srcNode->szDesc, 0, m_nCurrentPaletteSize);
    }
}

BOOL CGame_MSH_A::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
{
    //Reset palette sources
    ClearSrcPal();

    if (Node01 == -1)
    {
        return FALSE;
    }

    sDescNode* NodeGet = UsePaletteSetForCharacters() ? MainDescTree_05.GetDescNode(Node01, Node02, Node03, Node04) :
                                                        MainDescTree_06.GetDescNode(Node01, Node02, Node03, Node04);

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
     if (UsePaletteSetForCharacters() ? (NodeGet->uUnitId != MSH_A_EXTRALOC_05) :
                                        (NodeGet->uUnitId != MSH_A_EXTRALOC_06))
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
                if ((_stricmp(pCurrentNode->szDesc, "P1") == 0) || (_stricmp(pCurrentNode->szDesc, "P2") == 0))
                {
                    // We show 2 sprites (P1/P2) for export for all normal msh sprites
                    nSrcAmt = 2;
                    nNodeIncrement = pCurrentNode->uChildAmt;

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

                    if (NodeGet->uUnitId == indexMSHWolverine) // wolvie claws support
                    {
                        nXOffs = 20;
                        nYOffs = 4;
                        fShouldUseAlternateLoadLogic = true;
                    }
                    else if (NodeGet->uUnitId == indexMSHCaptainAmerica)
                    {
                        nXOffs = -22;
                        nYOffs = -17;
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
                            MainDescTree_05.GetDescNode(Node01, Node02, Node03, -1),
                            MainDescTree_05.GetDescNode(Node01, Node02, Node03 + 1, -1)
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
    
    if (!fShouldUseAlternateLoadLogic)
    {
        //Create the default palette
        ClearSetImgTicket(CreateImgTicket(nImgUnitId, nTargetImgId));

        CreateDefPal(NodeGet, 0);

        SetSourcePal(0, NodeGet->uUnitId, nSrcStart, nSrcAmt, nNodeIncrement);
    }

    return TRUE;
}

COLORREF* CGame_MSH_A::CreatePal(UINT16 nUnitId, UINT16 nPalId)
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

void CGame_MSH_A::UpdatePalData()
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

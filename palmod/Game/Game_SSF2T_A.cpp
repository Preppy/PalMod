#include "StdAfx.h"
#include "Game_SSF2T_A.h"
#include "GameDef.h"
#include "..\ExtraFile.h"
#include "..\PalMod.h"

#define SSF2T_DEBUG 0

stExtraDef* CGame_SSF2T_A::SSF2T_A_EXTRA_CUSTOM_3C = nullptr;
stExtraDef* CGame_SSF2T_A::SSF2T_A_EXTRA_CUSTOM_4A = nullptr;

CDescTree CGame_SSF2T_A::MainDescTree_3C = CGame_SSF2T_A::InitDescTree(3);
CDescTree CGame_SSF2T_A::MainDescTree_4A = CGame_SSF2T_A::InitDescTree(4);

int CGame_SSF2T_A::m_nSSF2TSelectedRom = 4;
UINT32 CGame_SSF2T_A::m_nTotalPaletteCountForSSF2T_3C = 0;
UINT32 CGame_SSF2T_A::m_nTotalPaletteCountForSSF2T_4A = 0;

int CGame_SSF2T_A::GetExtraLoc(UINT16 nUnitId)
{
    static int rgExtraLoc_3C[SSF2T_A_NUM_IND_3C + 1] = { -1 };
    static int rgExtraLoc_4A[SSF2T_A_NUM_IND_4A + 1] = { -1 };

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

CGame_SSF2T_A::CGame_SSF2T_A(int nSSF2TRomToLoad)
{
    m_nSSF2TSelectedRom = (nSSF2TRomToLoad == 3) ? 3 : 4;

    CString strMessage;
    strMessage.Format("CGame_SSF2T_A::CGame_SSF2T_A: Loading for the %s ROM\n", (m_nSSF2TSelectedRom == 3) ? "3C" : "4A");
    OutputDebugString(strMessage);

    m_nTotalInternalUnits = UsePaletteSetForPortraits() ? SSF2T_A_NUM_IND_3C : SSF2T_A_NUM_IND_4A;
    m_nExtraUnit = UsePaletteSetForPortraits() ? SSF2T_A_EXTRALOC_3C : SSF2T_A_EXTRALOC_4A;

    const UINT32 nSafeCountFor3C = 32;
    const UINT32 nSafeCountFor4A = 192;

    m_nSafeCountForThisRom = GetExtraCt(m_nExtraUnit) + (UsePaletteSetForPortraits() ? nSafeCountFor3C : nSafeCountFor4A);
    m_pszExtraFilename = UsePaletteSetForPortraits() ? EXTRA_FILENAME_SSF2T_3C : EXTRA_FILENAME_SSF2T_4A;
    m_nTotalPaletteCount = UsePaletteSetForPortraits() ? m_nTotalPaletteCountForSSF2T_3C : m_nTotalPaletteCountForSSF2T_4A;

    nUnitAmt = m_nTotalInternalUnits + (GetExtraCt(m_nExtraUnit) ? 1 : 0);

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
    DisplayType = DISP_DEF;
    pButtonLabel = const_cast<CHAR*>((CHAR*)DEF_BUTTONLABEL6);

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

int CGame_SSF2T_A::GetExtraCt(UINT16 nUnitId, BOOL bCountVisibleOnly)
{
    static int rgExtraCountAll_3C[SSF2T_A_NUM_IND_3C + 1] = { -1 };
    static int rgExtraCountAll_4A[SSF2T_A_NUM_IND_4A + 1] = { -1 };

    int* rgExtraCt = nullptr;
   
    rgExtraCt = UsePaletteSetForPortraits() ? (int*)rgExtraCountAll_3C : (int*)rgExtraCountAll_4A;

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

CGame_SSF2T_A::~CGame_SSF2T_A(void)
{
    ClearDataBuffer();
    //Get rid of the file changed flag
    safe_delete(rgFileChanged);
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

CDescTree CGame_SSF2T_A::InitDescTree(int nROMPaletteSetToUse)
{
    UINT32 nTotalPaletteCount = 0;
    m_nSSF2TSelectedRom = nROMPaletteSetToUse;

    //Load extra file if we're using it

    if (UsePaletteSetForPortraits())
    {
        LoadExtraFileForGame(EXTRA_FILENAME_SSF2T_3C, SSF2T_A_EXTRA, &SSF2T_A_EXTRA_CUSTOM_3C, SSF2T_A_EXTRALOC_3C);
    }
    else
    {
        LoadExtraFileForGame(EXTRA_FILENAME_SSF2T_4A, SSF2T_A_EXTRA, &SSF2T_A_EXTRA_CUSTOM_4A, SSF2T_A_EXTRALOC_4A);
    }

    UINT16 nUnitCt = UsePaletteSetForPortraits() ? (SSF2T_A_NUM_IND_3C + (GetExtraCt(SSF2T_A_EXTRALOC_3C) ? 1 : 0)) :
                                                   (SSF2T_A_NUM_IND_4A + (GetExtraCt(SSF2T_A_EXTRALOC_4A) ? 1 : 0));

    sDescTreeNode* NewDescTree = new sDescTreeNode;

    //Create the main character tree
    sprintf(NewDescTree->szDesc, "%s", g_GameFriendlyName[SSF2T_A]);
    NewDescTree->ChildNodes = new sDescTreeNode[nUnitCt];
    NewDescTree->uChildAmt = nUnitCt;
    //All units have tree children
    NewDescTree->uChildType = DESC_NODETYPE_TREE;

    CString strMsg;
    bool fHaveExtras = UsePaletteSetForPortraits() ? (GetExtraCt(SSF2T_A_EXTRALOC_3C) > 0) : (GetExtraCt(SSF2T_A_EXTRALOC_4A) > 0);
    strMsg.Format("CGame_SSF2T_A::InitDescTree: Building desc tree for SSF2T ROM...\n", UsePaletteSetForPortraits() ? "3C" : "4A" );
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
            sprintf(UnitNode->szDesc, "%s", UsePaletteSetForPortraits() ? SSF2T_A_UNITS_3C[iUnitCtr].szDesc : SSF2T_A_UNITS_4A[iUnitCtr].szDesc);
            UnitNode->ChildNodes = new sDescTreeNode[nUnitChildCount];
            //All children have collection trees
            UnitNode->uChildType = DESC_NODETYPE_TREE;
            UnitNode->uChildAmt = nUnitChildCount;

#if SSF2T_DEBUG
            strMsg.Format("Unit: %s, %u of %u (%s), %u total children\n", UnitNode->szDesc, iUnitCtr + 1, nUnitCt, bUseExtra ? "with extras" : "no extras", nUnitChildCount);
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

#if SSF2T_DEBUG
                strMsg.Format("\tCollection: %s, %u of %u, %u children\n", CollectionNode->szDesc, iCollectionCtr + 1, nUnitChildCount, nListedChildrenCount);
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

#if SSF2T_DEBUG
#if OUTPUT_AS_NODE
                    strMsg.Format("    { \"%s\", 0x%06x, 0x%06x },\n", ChildNode->szDesc, paletteSetToUse[nNodeIndex].nPaletteOffset, paletteSetToUse[nNodeIndex].nPaletteOffsetEnd);
                    OutputDebugString(strMsg);
#else
                    strMsg.Format("\t\tPalette: %s, %u of %u", ChildNode->szDesc, nNodeIndex + 1, nListedChildrenCount);
                    OutputDebugString(strMsg);
                    strMsg.Format(" from 0x%06x to 0x%06x total %u\n", paletteSetToUse[nNodeIndex].nPaletteOffset, paletteSetToUse[nNodeIndex].nPaletteOffsetEnd, paletteSetToUse[nNodeIndex].nPaletteOffsetEnd - paletteSetToUse[nNodeIndex].nPaletteOffset);
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
            sprintf(UnitNode->szDesc, "Extra Palettes");
            UnitNode->ChildNodes = new sDescTreeNode[1];
            UnitNode->uChildType = DESC_NODETYPE_TREE;
            UnitNode->uChildAmt = 1;

#if SSF2T_DEBUG
            strMsg.Format("Unit (Extras): %s, %u of %u, %u total children\n", UnitNode->szDesc, iUnitCtr + 1, nUnitCt, nUnitChildCount);
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

            sprintf(CollectionNode->szDesc, "Extra");

            CollectionNode->ChildNodes = new sDescTreeNode[nExtraCt];

            CollectionNode->uChildType = DESC_NODETYPE_NODE;
            CollectionNode->uChildAmt = nExtraCt; //EX + Extra

#if SSF2T_DEBUG
            strMsg.Format("\tCollection: %s, %u of %u, %u children\n", CollectionNode->szDesc, 1, nUnitChildCount, nExtraCt);
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

                sprintf(ChildNode->szDesc, pCurrDef->szDesc);

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
                strMsg.Format("\t\tPalette: %s, %u of %u\n", ChildNode->szDesc, nExtraCtr + 1, nExtraCt);
                OutputDebugString(strMsg);
#endif

                nCurrExtra++;
                nTotalPaletteCount++;
            }
        }
    }

    strMsg.Format("CGame_SSF2T_A::InitDescTree: Loaded %u palettes for SSF2T ROM %s\n", nTotalPaletteCount, (m_nSSF2TSelectedRom == 3) ? "3C" : "4A");
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

    sprintf_s(NewFileRule.szFileName, MAX_FILENAME_LENGTH, (nUnitId == 3) ? "sfxe.03c" : "sfxe.04a");

    NewFileRule.uUnitId = 0;
    NewFileRule.uVerifyVar = 0x80000;

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

LPCSTR CGame_SSF2T_A::GetDescriptionForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    if (UsePaletteSetForPortraits())
    {
        if (nUnitId == SSF2T_A_EXTRALOC_3C)
        {
            return "Extra Palettes";
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
            return "Extra Palettes";
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
        strMsg.Format("CGame_SSF2T_A::GetPaletteCountForUnit: %u for unit %u which has %u collections.\n", nCompleteCount, nUnitId, nCollectionCount);
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

const sGame_PaletteDataset* CGame_SSF2T_A::GetSpecificPalette(UINT16 nUnitId, UINT16 nPaletteId)
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

void CGame_SSF2T_A::InitDataBuffer()
{
    m_nBufferSelectedRom = m_nSSF2TSelectedRom;
    pppDataBuffer = new UINT16 * *[nUnitAmt];
    memset(pppDataBuffer, NULL, sizeof(UINT16**) * nUnitAmt);
}

void CGame_SSF2T_A::ClearDataBuffer()
{
    int nCurrentROMMode = m_nSSF2TSelectedRom;

    m_nSSF2TSelectedRom = m_nBufferSelectedRom;

    if (pppDataBuffer)
    {
        for (int nUnitCtr = 0; nUnitCtr < nUnitAmt; nUnitCtr++)
        {
            if (pppDataBuffer[nUnitCtr])
            {
                int nPalAmt = GetPaletteCountForUnit(nUnitCtr);

                for (int nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
                {
                    safe_delete_array(pppDataBuffer[nUnitCtr][nPalCtr]);
                }

                safe_delete_array(pppDataBuffer[nUnitCtr]);
            }
        }

        safe_delete_array(pppDataBuffer);
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

        cbPaletteSizeOnDisc = max(0, (paletteData->nPaletteOffsetEnd - paletteData->nPaletteOffset));

        nCurrPalOffs = paletteData->nPaletteOffset;
        nCurrPalSz = cbPaletteSizeOnDisc / 2;
    }
    else // SSF2T_A_EXTRALOC
    {
        // This is where we handle all the palettes added in via Extra.
        stExtraDef* pCurrDef = GetExtraDefForSSF2T(GetExtraLoc(nUnitId) + nPalId);

        nCurrPalOffs = pCurrDef->uOffset;
        nCurrPalSz = (pCurrDef->cbPaletteSize / 2);
    }

    m_nCurrentPaletteROMLocation = nCurrPalOffs;
}

BOOL CGame_SSF2T_A::LoadFile(CFile* LoadedFile, UINT16 nUnitId)
{
    for (UINT16 nUnitCtr = 0; nUnitCtr < nUnitAmt; nUnitCtr++)
    {
        UINT16 nPalAmt = GetPaletteCountForUnit(nUnitCtr);

        pppDataBuffer[nUnitCtr] = new UINT16 * [nPalAmt];

        rgUnitRedir[nUnitCtr] = nUnitCtr; //Fix later for unit sort

        for (UINT16 nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
        {
            LoadSpecificPaletteData(nUnitCtr, nPalCtr);

            pppDataBuffer[nUnitCtr][nPalCtr] = new UINT16[nCurrPalSz];

            LoadedFile->Seek(nCurrPalOffs, CFile::begin);

            LoadedFile->Read(pppDataBuffer[nUnitCtr][nPalCtr], nCurrPalSz * 2);
        }
    }

    rgUnitRedir[nUnitAmt] = INVALID_UNIT_VALUE;

    CheckForDupesInTables();

    return TRUE;
}

BOOL CGame_SSF2T_A::SaveFile(CFile* SaveFile, UINT16 nUnitId)
{
    UINT32 nTotalPalettesSaved = 0;
    bool fShownOnce = false;
    const int nLowestROMLocationToTestFor = UsePaletteSetForPortraits() ? m_uLowestKnownPaletteROMLocation_3C : m_uLowestKnownPaletteROMLocation_4A;

    for (UINT16 nUnitCtr = 0; nUnitCtr < nUnitAmt; nUnitCtr++)
    {
        UINT16 nPalAmt = GetPaletteCountForUnit(nUnitCtr);

        for (UINT16 nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
        {
            LoadSpecificPaletteData(nUnitCtr, nPalCtr);

            if (!fShownOnce && (nCurrPalOffs < nLowestROMLocationToTestFor)) // This magic number is the lowest known ROM location.
            {
                CString strMsg;
                strMsg.Format("Warning: Unit %u palette %u is trying to write to ROM location 0x%06x which is lower than we usually write to.", nUnitCtr, nPalCtr, nCurrPalOffs);
                MessageBox(g_appHWnd, strMsg, GetHost()->GetAppName(), MB_ICONERROR);
                fShownOnce = true;
            }

            SaveFile->Seek(nCurrPalOffs, CFile::begin);
            SaveFile->Write(pppDataBuffer[nUnitCtr][nPalCtr], nCurrPalSz * 2);
            nTotalPalettesSaved++;
        }
    }

    CString strMsg;
    strMsg.Format("CGame_SSF2T_A::SaveFile: Saved 0x%x palettes to disk for %u units\n", nTotalPalettesSaved, nUnitAmt);
    OutputDebugString(strMsg);

    return TRUE;
}

void CGame_SSF2T_A::CreateDefPal(sDescNode* srcNode, UINT16 nSepId)
{
    UINT16 nUnitId = srcNode->uUnitId;
    UINT16 nPalId = srcNode->uPalId;

    LoadSpecificPaletteData(nUnitId, nPalId);

    BasePalGroup.AddPal(CreatePal(nUnitId, nPalId), nCurrPalSz, nUnitId, nPalId);
    BasePalGroup.AddSep(nSepId, srcNode->szDesc, 0, nCurrPalSz);
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

    int nSrcStart = 0;
    int nSrcAmt = nCollectionCount;

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
        nSrcAmt = 1;

        if (paletteDataSet)
        {
            nImgUnitId = paletteDataSet->indexImgToUse;
            nTargetImgId = paletteDataSet->indexOffsetToUse;
        }
    }

    if (!fShouldUseAlternateLoadLogic)
    {
        //Create the default palette
        ClearSetImgTicket(CreateImgTicket(nImgUnitId, nTargetImgId));

        CreateDefPal(NodeGet, 0);

        SetSourcePal(0, NodeGet->uUnitId, nSrcStart, nSrcAmt, 1);
    }

    return TRUE;
}

COLORREF* CGame_SSF2T_A::CreatePal(UINT16 nUnitId, UINT16 nPalId)
{
    LoadSpecificPaletteData(nUnitId, nPalId);

    COLORREF* NewPal = new COLORREF[nCurrPalSz];

    for (int i = 0; i < nCurrPalSz - 1; i++)
    {
        NewPal[i + 1] = ConvPal(pppDataBuffer[nUnitId][nPalId][i]) | 0xFF000000;
    }

    NewPal[0] = 0xFF000000;

    return NewPal;
}

void CGame_SSF2T_A::UpdatePalData()
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

#include "StdAfx.h"
#include "Game_MVC_A.h"
#include "GameDef.h"
#include "..\ExtraFile.h"
#include "..\PalMod.h"

#define MVC_DEBUG 0

stExtraDef* CGame_MVC_A::MVC_A_EXTRA_CUSTOM = nullptr;

CDescTree CGame_MVC_A::MainDescTree = CGame_MVC_A::InitDescTree();

UINT32 CGame_MVC_A::m_nTotalPaletteCountForMVC = 0;

int CGame_MVC_A::GetExtraCt(UINT16 nUnitId, BOOL bCountVisibleOnly)
{
    static int rgExtraCountAll[MVC_A_NUMUNIT + 1] = { -1 };
    static int rgExtraCountVisibleOnly[MVC_A_NUMUNIT + 1] = { -1 };

    int* rgExtraCt = bCountVisibleOnly ? (int*)rgExtraCountVisibleOnly : (int*)rgExtraCountAll;

    static bool s_isInitialized = false;

    if (!s_isInitialized)
    {
        s_isInitialized = true;

        int nDefCtr = 0;
        memset(rgExtraCt, 0, (MVC_A_NUMUNIT + 1) * sizeof(int));

        stExtraDef* pCurrDef = GetExtraDefForMVC(0);

        while (pCurrDef->uUnitN != INVALID_UNIT_VALUE)
        {
            rgExtraCountAll[pCurrDef->uUnitN]++;

            if (!pCurrDef->isInvisible)
            {
                rgExtraCountVisibleOnly[pCurrDef->uUnitN]++;
            }

            nDefCtr++;
            pCurrDef = GetExtraDefForMVC(nDefCtr);
        }
    }

    return rgExtraCt[nUnitId];
}

int CGame_MVC_A::GetExtraLoc(UINT16 nUnitId)
{
    static int rgExtraLoc[MVC_A_NUMUNIT + 1] = { -1 };

    if (rgExtraLoc[0] == -1)
    {
        int nDefCtr = 0;
        int nCurrUnit = UNIT_START_VALUE;
        memset(rgExtraLoc, 0, (MVC_A_NUMUNIT + 1) * sizeof(int));

        stExtraDef* pCurrDef = GetExtraDefForMVC(0);

        while (pCurrDef->uUnitN != INVALID_UNIT_VALUE)
        {
            if (pCurrDef->uUnitN != nCurrUnit)
            {
                rgExtraLoc[pCurrDef->uUnitN] = nDefCtr;
                nCurrUnit = pCurrDef->uUnitN;
            }

            nDefCtr++;
            pCurrDef = GetExtraDefForMVC(nDefCtr);
        }
    }

    return rgExtraLoc[nUnitId];
}

CGame_MVC_A::CGame_MVC_A(void)
{
    //We need the proper unit amt before we init the main buffer
    nUnitAmt = MVC_A_NUMUNIT + (GetExtraCt(MVC_A_EXTRALOC) ? 1 : 0);

    m_nTotalInternalUnits = MVC_A_NUMUNIT;
    m_nExtraUnit = MVC_A_EXTRALOC;
    m_nSafeCountForThisRom = 827 + GetExtraCt(MVC_A_EXTRALOC);
    m_pszExtraFilename = EXTRA_FILENAME_MVC;
    m_nTotalPaletteCount = m_nTotalPaletteCountForMVC;

    InitDataBuffer();

    //Set color mode
    SetColMode(COLMODE_12A);

    //Set palette conversion mode
    BasePalGroup.SetMode(PALTYPE_17);

    //Set game information
    nGameFlag = MVC_A;
    nImgGameFlag = IMG4;
    nImgUnitAmt = nUnitAmt;

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

CGame_MVC_A::~CGame_MVC_A(void)
{
    ClearDataBuffer();
    //Get rid of the file changed flag
    safe_delete(rgFileChanged);
}

CDescTree* CGame_MVC_A::GetMainTree()
{
    return &CGame_MVC_A::MainDescTree;
}

CDescTree CGame_MVC_A::InitDescTree()
{
    UINT32 nTotalPaletteCount = 0;

    //Load extra file if we're using it
    LoadExtraFileForGame(EXTRA_FILENAME_MVC, MVC_A_EXTRA, &MVC_A_EXTRA_CUSTOM, MVC_A_EXTRALOC);

    UINT16 nUnitCt = MVC_A_NUMUNIT + (GetExtraCt(MVC_A_EXTRALOC) ? 1 : 0);

    sDescTreeNode* NewDescTree = new sDescTreeNode;

    //Create the main character tree
    sprintf(NewDescTree->szDesc, "%s", g_GameFriendlyName[MVC_A]);
    NewDescTree->ChildNodes = new sDescTreeNode[nUnitCt];
    NewDescTree->uChildAmt = nUnitCt;
    //All units have tree children
    NewDescTree->uChildType = DESC_NODETYPE_TREE;

    CString strMsg;
    bool fHaveExtras = (GetExtraCt(MVC_A_EXTRALOC) > 0);
    strMsg.Format("CGame_MVC_A::InitDescTree: Building desc tree for MVC %s extras...\n", fHaveExtras ? "with" : "without");
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

        if (iUnitCtr < MVC_A_EXTRALOC)
        {
            //Set each description
            sprintf(UnitNode->szDesc, "%s", MVC_UNITS[iUnitCtr].szDesc);
            UnitNode->ChildNodes = new sDescTreeNode[nUnitChildCount];
            //All children have collection trees
            UnitNode->uChildType = DESC_NODETYPE_TREE;
            UnitNode->uChildAmt = nUnitChildCount;

#if MVC_DEBUG
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

#if MVC_DEBUG
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

#if MVC_DEBUG
                    strMsg.Format("\t\tPalette: %s, %u of %u", ChildNode->szDesc, nNodeIndex + 1, nListedChildrenCount);
                    OutputDebugString(strMsg);
                    strMsg.Format(" from 0x%06x to 0x%06x total %u\n", paletteSetToUse[nNodeIndex].nPaletteOffset, paletteSetToUse[nNodeIndex].nPaletteOffsetEnd, paletteSetToUse[nNodeIndex].nPaletteOffsetEnd - paletteSetToUse[nNodeIndex].nPaletteOffset);
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

#if MVC_DEBUG
            strMsg.Format("Unit (Extras): %s, %u of %u, %u total children\n", UnitNode->szDesc, iUnitCtr + 1, nUnitCt, nUnitChildCount);
            OutputDebugString(strMsg);
#endif
        }

        //Set up extra nodes
        if (bUseExtra)
        {
            int nExtraPos = GetExtraLoc(iUnitCtr);
            int nCurrExtra = 0;

            CollectionNode = &((sDescTreeNode*)UnitNode->ChildNodes)[(MVC_A_EXTRALOC > iUnitCtr) ? (nUnitChildCount - 1) : 0]; //Extra node
            sprintf(CollectionNode->szDesc, "Extra");

            CollectionNode->ChildNodes = new sDescTreeNode[nExtraCt];

            CollectionNode->uChildType = DESC_NODETYPE_NODE;
            CollectionNode->uChildAmt = nExtraCt; //EX + Extra

#if MVC_DEBUG
            strMsg.Format("\tCollection: %s, %u of %u, %u children\n", CollectionNode->szDesc, 1, nUnitChildCount, nExtraCt);
            OutputDebugString(strMsg);
#endif

            for (UINT16 nExtraCtr = 0; nExtraCtr < nExtraCt; nExtraCtr++)
            {
                ChildNode = &((sDescNode*)CollectionNode->ChildNodes)[nExtraCtr];

                stExtraDef* pCurrDef = GetExtraDefForMVC(nExtraPos + nCurrExtra);

                while (pCurrDef->isInvisible)
                {
                    nCurrExtra++;

                    pCurrDef = GetExtraDefForMVC(nExtraPos + nCurrExtra);
                }

                sprintf(ChildNode->szDesc, pCurrDef->szDesc);

                ChildNode->uUnitId = iUnitCtr;
                ChildNode->uPalId = (((MVC_A_EXTRALOC > iUnitCtr) ? 1 : 0) * nUnitChildCount * 2) + nCurrExtra;

#if MVC_DEBUG
                strMsg.Format("\t\tPalette: %s, %u of %u\n", ChildNode->szDesc, nExtraCtr + 1, nExtraCt);
                OutputDebugString(strMsg);
#endif

                nCurrExtra++;
                nTotalPaletteCount++;
            }
        }
    }

    strMsg.Format("CGame_MVC_A::InitDescTree: Loaded %u palettes for MVC1\n", nTotalPaletteCount);
    OutputDebugString(strMsg);

    m_nTotalPaletteCountForMVC = nTotalPaletteCount;

    return NewDescTree;
}

sFileRule CGame_MVC_A::GetRule(UINT16 nUnitId)
{
    sFileRule NewFileRule;

    sprintf_s(NewFileRule.szFileName, MAX_FILENAME_LENGTH, "mvc.06");

    NewFileRule.uUnitId = 0;
    NewFileRule.uVerifyVar = 0x80000;

    return NewFileRule;
}

UINT16 CGame_MVC_A::GetCollectionCountForUnit(UINT16 nUnitId)
{
    if (nUnitId == MVC_A_EXTRALOC)
    {
        return GetExtraCt(nUnitId);
    }
    else
    {
        return MVC_UNITS[nUnitId].uChildAmt;
    }
}

UINT16 CGame_MVC_A::GetNodeCountForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    if (nUnitId == MVC_A_EXTRALOC)
    {
        return GetExtraCt(nUnitId);
    }
    else
    {
        const sDescTreeNode* pCollectionNode = (const sDescTreeNode*)(MVC_UNITS[nUnitId].ChildNodes);

        return pCollectionNode[nCollectionId].uChildAmt;
    }
}

LPCSTR CGame_MVC_A::GetDescriptionForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    if (nUnitId == MVC_A_EXTRALOC)
    {
        return "Extra Palettes";
    }
    else
    {
        const sDescTreeNode* pCollection = (const sDescTreeNode*)MVC_UNITS[nUnitId].ChildNodes;
        return pCollection[nCollectionId].szDesc;
    }
}

UINT16 CGame_MVC_A::GetPaletteCountForUnit(UINT16 nUnitId)
{
    if (nUnitId == MVC_A_EXTRALOC)
    {
        return GetExtraCt(nUnitId);
    }
    else
    {
        UINT16 nCompleteCount = 0;
        UINT16 nCollectionCount = MVC_UNITS[nUnitId].uChildAmt;
        const sDescTreeNode* pCurrentCollection = (const sDescTreeNode*)(MVC_UNITS[nUnitId].ChildNodes);

        for (UINT16 nCollectionIndex = 0; nCollectionIndex < nCollectionCount; nCollectionIndex++)
        {
            nCompleteCount += pCurrentCollection[nCollectionIndex].uChildAmt;
        }

#if MVC_DEBUG
        CString strMsg;
        strMsg.Format("CGame_MVC_A::GetPaletteCountForUnit: %u for unit %u which has %u collections.\n", nCompleteCount, nUnitId, nCollectionCount);
        OutputDebugString(strMsg);
#endif

        return nCompleteCount;
    }
}

const sGame_PaletteDataset* CGame_MVC_A::GetPaletteSet(UINT16 nUnitId, UINT16 nCollectionId)
{
    // Don't use this for Extra palettes.
    const sDescTreeNode* pCurrentSet = (const sDescTreeNode*)MVC_UNITS[nUnitId].ChildNodes;
    return ((sGame_PaletteDataset*)(pCurrentSet[nCollectionId].ChildNodes));
}

const sGame_PaletteDataset* CGame_MVC_A::GetSpecificPalette(UINT16 nUnitId, UINT16 nPaletteId)
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

void CGame_MVC_A::InitDataBuffer()
{
    pppDataBuffer = new UINT16 * *[nUnitAmt];
    memset(pppDataBuffer, NULL, sizeof(UINT16**) * nUnitAmt);
}

void CGame_MVC_A::ClearDataBuffer()
{
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
}

void CGame_MVC_A::LoadSpecificPaletteData(UINT16 nUnitId, UINT16 nPalId)
{
    if (nUnitId != MVC_A_EXTRALOC)
    {
        int cbPaletteSizeOnDisc = 0;
        const sGame_PaletteDataset* paletteData = GetSpecificPalette(nUnitId, nPalId);

        cbPaletteSizeOnDisc = max(0, (paletteData->nPaletteOffsetEnd - paletteData->nPaletteOffset));

        nCurrPalOffs = paletteData->nPaletteOffset;
        nCurrPalSz = cbPaletteSizeOnDisc / 2;
    }
    else // MVC_A_EXTRALOC
    {
        // This is where we handle all the palettes added in via Extra.
        stExtraDef* pCurrDef = GetExtraDefForMVC(GetExtraLoc(nUnitId) + nPalId);

        nCurrPalOffs = pCurrDef->uOffset;
        nCurrPalSz = (pCurrDef->cbPaletteSize / 2);
    }

    m_nCurrentPaletteROMLocation = nCurrPalOffs;
}

BOOL CGame_MVC_A::LoadFile(CFile* LoadedFile, UINT16 nUnitId)
{
    for (UINT16 nUnitCtr = 0; nUnitCtr < nUnitAmt; nUnitCtr++)
    {
        int nPalAmt = GetPaletteCountForUnit(nUnitCtr);

        pppDataBuffer[nUnitCtr] = new UINT16 * [nPalAmt];

        // Use a sorted layout
        rgUnitRedir[nUnitCtr] = MVC_A_UNITSORT[nUnitCtr];

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

BOOL CGame_MVC_A::SaveFile(CFile* SaveFile, UINT16 nUnitId)
{
    UINT32 nTotalPalettesSaved = 0;
    bool fShownOnce = false;

    for (UINT16 nUnitCtr = 0; nUnitCtr < nUnitAmt; nUnitCtr++)
    {
        UINT16 nPalAmt = GetPaletteCountForUnit(nUnitCtr);

        for (UINT16 nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
        {
            LoadSpecificPaletteData(nUnitCtr, nPalCtr);

            if (!fShownOnce && (nCurrPalOffs < 0x03e5ba)) // This magic number is the lowest known ROM location.
            {
                CString strMsg;
                strMsg.Format("Warning: Unit %u palette %u is trying to write to ROM location 0x06%x which is lower than we usually write to.", nUnitCtr, nPalCtr, nCurrPalOffs);
                MessageBox(g_appHWnd, strMsg, GetAppName(), MB_ICONERROR);
                fShownOnce = true;
            }

            SaveFile->Seek(nCurrPalOffs, CFile::begin);
            SaveFile->Write(pppDataBuffer[nUnitCtr][nPalCtr], nCurrPalSz * 2);
            nTotalPalettesSaved++;
        }
    }

    CString strMsg;
    strMsg.Format("CGame_MVC_A::SaveFile: Saved 0x%x palettes to disk for %u units\n", nTotalPalettesSaved, nUnitAmt);
    OutputDebugString(strMsg);

    return TRUE;
}

void CGame_MVC_A::CreateDefPal(sDescNode* srcNode, UINT16 nSepId)
{
    UINT16 nUnitId = srcNode->uUnitId;
    UINT16 nPalId = srcNode->uPalId;

    LoadSpecificPaletteData(nUnitId, nPalId);

    BasePalGroup.AddPal(CreatePal(nUnitId, nPalId), nCurrPalSz, nUnitId, nPalId);
    BasePalGroup.AddSep(nSepId, srcNode->szDesc, 0, nCurrPalSz);
}

BOOL CGame_MVC_A::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
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

    UINT16 nCollectionCount = GetCollectionCountForUnit(NodeGet->uUnitId);
    
    int nSrcStart = 0;
    int nSrcAmt = nCollectionCount;

    //Get rid of any palettes if there are any
    BasePalGroup.FlushPalAll();

    // Make sure to reset the image id
    nTargetImgId = 0;
    UINT16 nImgUnitId = INVALID_UNIT_VALUE;

    if (MVC_A_EXTRALOC != NodeGet->uUnitId)
    {
        nSrcStart = NodeGet->uPalId;
        nSrcAmt = 1;

        const sGame_PaletteDataset* paletteDataSet = GetSpecificPalette(NodeGet->uUnitId, NodeGet->uPalId);

        if (paletteDataSet)
        {
            nImgUnitId = paletteDataSet->indexImgToUse;
            nTargetImgId = paletteDataSet->indexOffsetToUse;
        }
    }

    //Get rid of any palettes if there are any
    BasePalGroup.FlushPalAll();

    //Create the default palette
    ClearSetImgTicket(CreateImgTicket(nImgUnitId, nTargetImgId));

    CreateDefPal(NodeGet, 0);

    SetSourcePal(0, NodeGet->uUnitId, nSrcStart, nSrcAmt, 1);

    return TRUE;
}

COLORREF* CGame_MVC_A::CreatePal(UINT16 nUnitId, UINT16 nPalId)
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

void CGame_MVC_A::UpdatePalData()
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

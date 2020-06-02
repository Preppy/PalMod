#include "StdAfx.h"
#include "Game_JOJOS_A.h"
#include "GameDef.h"
#include "..\palmod.h"
#include "..\RegProc.h"

#define JOJOS_DEBUG                 DEFAULT_GAME_DEBUG_STATE
#define NEED_TO_UPDATE_JOJO_HEADERS 0

stExtraDef* CGame_JOJOS_A::JOJOS_A_EXTRA_CUSTOM_50 = nullptr;
stExtraDef* CGame_JOJOS_A::JOJOS_A_EXTRA_CUSTOM_51 = nullptr;

CDescTree CGame_JOJOS_A::MainDescTree_50;
CDescTree CGame_JOJOS_A::MainDescTree_51;

int CGame_JOJOS_A::m_nJojosMode = 50;
UINT32 CGame_JOJOS_A::m_nTotalPaletteCount50 = 0;
UINT32 CGame_JOJOS_A::m_nTotalPaletteCount51 = 0;

int CGame_JOJOS_A::rgExtraCountAll_50[JOJOS_A_NUMUNIT_50 + 1] = { -1 };
int CGame_JOJOS_A::rgExtraCountVisibleOnly_50[JOJOS_A_NUMUNIT_50 + 1] = { -1 };
int CGame_JOJOS_A::rgExtraCountAll_51[JOJOS_A_NUMUNIT_51 + 1] = { -1 };
int CGame_JOJOS_A::rgExtraCountVisibleOnly_51[JOJOS_A_NUMUNIT_51 + 1] = { -1 };
int CGame_JOJOS_A::rgExtraLoc_50[JOJOS_A_NUMUNIT_50 + 1] = { -1 };
int CGame_JOJOS_A::rgExtraLoc_51[JOJOS_A_NUMUNIT_51 + 1] = { -1 };

void CGame_JOJOS_A::InitializeStatics()
{
    // Reset all the Extra related data as we need to load it all again.
    safe_delete_array(CGame_JOJOS_A::JOJOS_A_EXTRA_CUSTOM_50);
    safe_delete_array(CGame_JOJOS_A::JOJOS_A_EXTRA_CUSTOM_51);

    memset(rgExtraCountAll_50, -1, sizeof(rgExtraCountAll_50));
    memset(rgExtraCountVisibleOnly_50, -1, sizeof(rgExtraCountVisibleOnly_50));
    memset(rgExtraCountAll_51, -1, sizeof(rgExtraCountAll_51));
    memset(rgExtraCountVisibleOnly_51, -1, sizeof(rgExtraCountVisibleOnly_51));

    memset(rgExtraLoc_50, -1, sizeof(rgExtraLoc_50));
    memset(rgExtraLoc_51, -1, sizeof(rgExtraLoc_51));

    MainDescTree_50.SetRootTree(CGame_JOJOS_A::InitDescTree(50));
    MainDescTree_51.SetRootTree(CGame_JOJOS_A::InitDescTree(51));
}

CGame_JOJOS_A::CGame_JOJOS_A(int nJojosModeToLoad)
{
    InitializeStatics();

    //We need the proper unit amt before we init the main buffer
    m_nJojosMode = nJojosModeToLoad;

    if (UsePaletteSetFor50())
    {
        OutputDebugString("CGame_JOJOS_A::CGame_JOJOS_A: Loading for the 50 ROM\n");
        nUnitAmt = JOJOS_A_NUMUNIT_50 + (GetExtraCt(JOJOS_A_EXTRALOC_50) ? 1 : 0);
    }
    else
    {
        OutputDebugString("CGame_JOJOS_A::CGame_JOJOS_A: Loading for the 51 ROM\n");
        nUnitAmt = JOJOS_A_NUMUNIT_51 + (GetExtraCt(JOJOS_A_EXTRALOC_51) ? 1 : 0);
    }

    m_nTotalInternalUnits = UsePaletteSetFor50() ? JOJOS_A_NUMUNIT_50 : JOJOS_A_NUMUNIT_51;
    m_nExtraUnit = UsePaletteSetFor50() ? JOJOS_A_EXTRALOC_50 : JOJOS_A_EXTRALOC_51;

    const UINT32 nSafeCountFor50 = 475;
    const UINT32 nSafeCountFor51 = 2044;

    m_nSafeCountForThisRom = UsePaletteSetFor50() ? (nSafeCountFor50 + GetExtraCt(JOJOS_A_EXTRALOC_50)): (nSafeCountFor51 + GetExtraCt(JOJOS_A_EXTRALOC_51));
    m_pszExtraFilename = UsePaletteSetFor50() ? EXTRA_FILENAME_50 : EXTRA_FILENAME_51;
    m_nTotalPaletteCount = UsePaletteSetFor50() ? m_nTotalPaletteCount50 : m_nTotalPaletteCount51;
    m_nLowestKnownPaletteRomLocation = UsePaletteSetFor50() ? 0x7c0000 : 0x2d0000;

    InitDataBuffer();

    //Set color mode
    SetColMode(COLMODE_15);

    //Set palette conversion mode
    BasePalGroup.SetMode(PALTYPE_8);

    //Set game information
    nGameFlag = JOJOS_A;
    nImgGameFlag = IMGDAT_SECTION_JOJOS;
    nImgUnitAmt = JOJOS_A_NUM_IMG_UNITS;

    nDisplayW = 8;
    nFileAmt = 1;

    //Set the image out display type
    DisplayType = DISP_DEF;
    pButtonLabel = const_cast<CHAR*>((CHAR*)DEF_BUTTONLABEL_JOJOS_5);

    //Create the redirect buffer
    rgUnitRedir = new UINT16[nUnitAmt + 1];
    memset(rgUnitRedir, NULL, sizeof(UINT16) * nUnitAmt);

    //Create the file changed flag
    rgFileChanged = new UINT16;

    nRGBIndexAmt = 31;
    nAIndexAmt = 0;

    nRGBIndexMul = 8.225;
    nAIndexMul = 0;
}

CGame_JOJOS_A::~CGame_JOJOS_A(void)
{
    safe_delete_array(CGame_JOJOS_A::JOJOS_A_EXTRA_CUSTOM_50);
    safe_delete_array(CGame_JOJOS_A::JOJOS_A_EXTRA_CUSTOM_51);
    ClearDataBuffer();
    //Get rid of the file changed flag
    safe_delete(rgFileChanged);
}

int CGame_JOJOS_A::GetExtraCt(UINT16 nUnitId, BOOL bCountVisibleOnly)
{
    int* rgExtraCt = nullptr;

    if (bCountVisibleOnly)
    {
        rgExtraCt = UsePaletteSetFor50() ? (int*)rgExtraCountVisibleOnly_50 : (int*)rgExtraCountVisibleOnly_51;
    }
    else
    {
        rgExtraCt = UsePaletteSetFor50() ? (int*)rgExtraCountAll_50 : (int*)rgExtraCountAll_51;
    }

    if (rgExtraCt[0] == -1)
    {
        int nDefCtr = 0;
        memset(rgExtraCt, 0, ((UsePaletteSetFor50() ? JOJOS_A_NUMUNIT_50 : JOJOS_A_NUMUNIT_51) + 1) * sizeof(int));

        stExtraDef* pCurrDef = GetJojosExtraDef(0);

        while (pCurrDef->uUnitN != INVALID_UNIT_VALUE)
        {
            if (!pCurrDef->isInvisible || !bCountVisibleOnly)
            {
                rgExtraCt[pCurrDef->uUnitN]++;
            }

            nDefCtr++;
            pCurrDef = GetJojosExtraDef(nDefCtr);
        }
    }

    return rgExtraCt[nUnitId];
}

int CGame_JOJOS_A::GetExtraLoc(UINT16 nUnitId)
{
    if (UsePaletteSetFor50())
    {
        if (rgExtraLoc_50[0] == -1)
        {
            int nDefCtr = 0;
            UINT16 nCurrUnit = UNIT_START_VALUE;
            memset(rgExtraLoc_50, 0, (JOJOS_A_NUMUNIT_50 + 1) * sizeof(int));

            stExtraDef* pCurrDef = GetJojosExtraDef(0);

            while (pCurrDef->uUnitN != INVALID_UNIT_VALUE)
            {
                if (pCurrDef->uUnitN != nCurrUnit)
                {
                    rgExtraLoc_50[pCurrDef->uUnitN] = nDefCtr;
                    nCurrUnit = pCurrDef->uUnitN;
                }

                nDefCtr++;
                pCurrDef = GetJojosExtraDef(nDefCtr);
            }
        }

        return rgExtraLoc_50[nUnitId];
    }
    else
    {
        if (rgExtraLoc_51[0] == -1)
        {
            int nDefCtr = 0;
            UINT16 nCurrUnit = UNIT_START_VALUE;
            memset(rgExtraLoc_51, 0, (JOJOS_A_NUMUNIT_51 + 1) * sizeof(int));

            stExtraDef* pCurrDef = GetJojosExtraDef(0);

            while (pCurrDef->uUnitN != INVALID_UNIT_VALUE)
            {
                if (pCurrDef->uUnitN != nCurrUnit)
                {
                    rgExtraLoc_51[pCurrDef->uUnitN] = nDefCtr;
                    nCurrUnit = pCurrDef->uUnitN;
                }

                nDefCtr++;
                pCurrDef = GetJojosExtraDef(nDefCtr);
            }
        }

        return rgExtraLoc_51[nUnitId];
    }
}

CDescTree* CGame_JOJOS_A::GetMainTree()
{
    if (UsePaletteSetFor50())
    {
        return &CGame_JOJOS_A::MainDescTree_50;
    }
    else
    {
        return &CGame_JOJOS_A::MainDescTree_51;
    }
}

#if NEED_TO_UPDATE_JOJO_HEADERS
void ExportTableToDebugger()
{
#ifndef USE_LARGE_PALETTES
    OutputDebugString("FWIW: You want to define USE_LARGE_PALETTES so that you are working with the unsplit headers.\n");
#endif

    OutputDebugString("const sGame_PaletteDataset JOJOS_BONUS_NODE_INTRO_MANGA[] =\n{\n");
    for (int iHeaderIndex = 0; iHeaderIndex < ARRAYSIZE(JOJOS_BONUS_NODE_INTRO_MANGA); iHeaderIndex++)
    {
        CString strstr;

        const int knMaxPalettePageSizeOnDisc = 2 * m_knMaxPalettePageSize;
        int nPaletteTotalSize = (JOJOS_BONUS_NODE_INTRO_MANGA[iHeaderIndex].nPaletteOffsetEnd - JOJOS_BONUS_NODE_INTRO_MANGA[iHeaderIndex].nPaletteOffset);
        int nAdjust = 0;

        if (nPaletteTotalSize % 2 == 1)
        {
            // Looks like random errors crept into the Jojo files people were passing around: fix and move on.
            nPaletteTotalSize -= 1;
            nAdjust = 1;
        }

        if (nPaletteTotalSize > (knMaxPalettePageSizeOnDisc + 1))
        {
            const int nTotalPagesNeeded = (int)ceil((double)nPaletteTotalSize / (double)knMaxPalettePageSizeOnDisc);
            int nCurrentPaletteSectionLength = knMaxPalettePageSizeOnDisc;
            int nTotalUnusedColors = nPaletteTotalSize;

            OutputDebugString("#ifndef USE_LARGE_PALETTES\n");

            for (int nCurrentPage = 0, nCurrentOffset = 0; nCurrentPage < nTotalPagesNeeded; nCurrentPage++)
            {
                strstr.Format("    { \"%s (%u/%u)\", 0x%07x, 0x%07x }, \n", JOJOS_BONUS_NODE_INTRO_MANGA[iHeaderIndex].szPaletteName, nCurrentPage + 1, nTotalPagesNeeded,
                                                                            JOJOS_BONUS_NODE_INTRO_MANGA[iHeaderIndex].nPaletteOffset + nCurrentOffset, 
                                                                            JOJOS_BONUS_NODE_INTRO_MANGA[iHeaderIndex].nPaletteOffset + nCurrentOffset + nCurrentPaletteSectionLength);

                nCurrentOffset += knMaxPalettePageSizeOnDisc;
                nTotalUnusedColors -= nCurrentPaletteSectionLength;
                nCurrentPaletteSectionLength = min(nTotalUnusedColors, knMaxPalettePageSizeOnDisc);
                OutputDebugString(strstr);
            }
            OutputDebugString("#else\n");
        }

        strstr.Format("    { \"%s\", 0x%07x, 0x%07x }, \n", JOJOS_BONUS_NODE_INTRO_MANGA[iHeaderIndex].szPaletteName,
                                                            JOJOS_BONUS_NODE_INTRO_MANGA[iHeaderIndex].nPaletteOffset,
                                                            JOJOS_BONUS_NODE_INTRO_MANGA[iHeaderIndex].nPaletteOffsetEnd - nAdjust);
        OutputDebugString(strstr);

        if (nPaletteTotalSize > (knMaxPalettePageSizeOnDisc + 1))
        {
            OutputDebugString("#endif\n");
        }
    }

    OutputDebugString("};\n");
}
#endif

sDescTreeNode* CGame_JOJOS_A::InitDescTree(int nPaletteSetToUse)
{
    UINT32 nTotalPaletteCount = 0;
    m_nJojosMode = nPaletteSetToUse;

#ifdef JOJOS_A_USEEXTRAFILE
    //Load extra file if we're using it
    if (UsePaletteSetFor50())
    {
        LoadExtraFileForGame(EXTRA_FILENAME_50, JOJOS_A_EXTRA, &JOJOS_A_EXTRA_CUSTOM_50, JOJOS_A_EXTRALOC_50);
    }
    else
    {
        LoadExtraFileForGame(EXTRA_FILENAME_51, JOJOS_A_EXTRA, &JOJOS_A_EXTRA_CUSTOM_51, JOJOS_A_EXTRALOC_51);
    }
#endif

    UINT16 nUnitCt = UsePaletteSetFor50() ? (JOJOS_A_NUMUNIT_50 + (GetExtraCt(JOJOS_A_EXTRALOC_50) ? 1 : 0)) :
                                            (JOJOS_A_NUMUNIT_51 + (GetExtraCt(JOJOS_A_EXTRALOC_51) ? 1 : 0));

    sDescTreeNode* NewDescTree = new sDescTreeNode;

    //Create the main character tree
    sprintf(NewDescTree->szDesc, "%s", g_GameFriendlyName[JOJOS_A]);
    NewDescTree->ChildNodes = new sDescTreeNode[nUnitCt];
    NewDescTree->uChildAmt = nUnitCt;
    //All units have tree children
    NewDescTree->uChildType = DESC_NODETYPE_TREE;

    CString strMsg;
    bool fHaveExtras = ((UsePaletteSetFor50() ? GetExtraCt(JOJOS_A_EXTRALOC_50) : GetExtraCt(JOJOS_A_EXTRALOC_51)) > 0);
    strMsg.Format("CGame_JOJOS_A::InitDescTree: Building desc tree for ROM %u...\n", m_nJojosMode);
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

        if (UsePaletteSetFor50() ? (iUnitCtr < JOJOS_A_EXTRALOC_50) : (iUnitCtr < JOJOS_A_EXTRALOC_51))
        {
            //Set each description
            sprintf(UnitNode->szDesc, "%s", UsePaletteSetFor50() ? JOJOS_UNITS_50[iUnitCtr].szDesc : JOJOS_UNITS_51[iUnitCtr].szDesc);
            UnitNode->ChildNodes = new sDescTreeNode[nUnitChildCount];
            //All children have collection trees
            UnitNode->uChildType = DESC_NODETYPE_TREE;
            UnitNode->uChildAmt = nUnitChildCount;

#if JOJOS_DEBUG
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

#if JOJOS_DEBUG
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

#if JOJOS_DEBUG
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

#if JOJOS_DEBUG
            strMsg.Format("Unit: \"%s\" (Extras), %u of %u, %u total children\n", UnitNode->szDesc, iUnitCtr + 1, nUnitCt, UnitNode->uChildAmt);
            OutputDebugString(strMsg);
#endif
        }

        //Set up extra nodes
        if (bUseExtra)
        {
            int nExtraPos = GetExtraLoc(iUnitCtr);
            int nCurrExtra = 0;

            if (UsePaletteSetFor50())
            {
                CollectionNode = &((sDescTreeNode*)UnitNode->ChildNodes)[(JOJOS_A_EXTRALOC_50 > iUnitCtr) ? (nUnitChildCount - 1) : 0]; //Extra node
            }
            else
            {
                CollectionNode = &((sDescTreeNode*)UnitNode->ChildNodes)[(JOJOS_A_EXTRALOC_51 > iUnitCtr) ? (nUnitChildCount - 1) : 0]; //Extra node
            }

            sprintf(CollectionNode->szDesc, "Extra");

            CollectionNode->ChildNodes = new sDescTreeNode[nExtraCt];

            CollectionNode->uChildType = DESC_NODETYPE_NODE;
            CollectionNode->uChildAmt = nExtraCt; //EX + Extra

#if JOJOS_DEBUG
            strMsg.Format("\tCollection: \"%s\", %u of %u, %u children\n", CollectionNode->szDesc, 1, nUnitChildCount, nExtraCt);
            OutputDebugString(strMsg);
#endif

            for (UINT16 nExtraCtr = 0; nExtraCtr < nExtraCt; nExtraCtr++)
            {
                ChildNode = &((sDescNode*)CollectionNode->ChildNodes)[nExtraCtr];

                stExtraDef* pCurrDef = GetJojosExtraDef(nExtraPos + nCurrExtra);

                while (pCurrDef->isInvisible)
                {
                    nCurrExtra++;

                    pCurrDef = GetJojosExtraDef(nExtraPos + nCurrExtra);
                }

                sprintf(ChildNode->szDesc, pCurrDef->szDesc);

                ChildNode->uUnitId = iUnitCtr;
                if (UsePaletteSetFor50())
                {
                    ChildNode->uPalId = (((JOJOS_A_EXTRALOC_50 > iUnitCtr) ? 1 : 0) * nUnitChildCount * 2) + nCurrExtra;
                }
                else
                {
                    ChildNode->uPalId = (((JOJOS_A_EXTRALOC_51 > iUnitCtr) ? 1 : 0) * nUnitChildCount * 2) + nCurrExtra;
                }

#if JOJOS_DEBUG
                strMsg.Format("\t\tPalette: %s, %u of %u\n", ChildNode->szDesc, nExtraCtr + 1, nExtraCt);
                OutputDebugString(strMsg);
#endif

                nCurrExtra++;
                nTotalPaletteCount++;
            }
        }
    }

    strMsg.Format("CGame_JOJOS_A::InitDescTree: Loaded %u palettes for Jojos ROM %u \n", nTotalPaletteCount, m_nJojosMode);
    OutputDebugString(strMsg);

    if (UsePaletteSetFor50())
    {
        m_nTotalPaletteCount50 = nTotalPaletteCount;
    }
    else
    {
        m_nTotalPaletteCount51 = nTotalPaletteCount;
    }

    return NewDescTree;
}

sFileRule CGame_JOJOS_A::GetRule(UINT16 nUnitId)
{
    sFileRule NewFileRule;

    sprintf_s(NewFileRule.szFileName, MAX_FILENAME_LENGTH, "%u", nUnitId);

    NewFileRule.uUnitId = 0;
    NewFileRule.uVerifyVar = 0x800000;

    return NewFileRule;
}

UINT16 CGame_JOJOS_A::GetCollectionCountForUnit(UINT16 nUnitId)
{
    if (UsePaletteSetFor50())
    {
        if (nUnitId == JOJOS_A_EXTRALOC_50)
        {
            return 1;
        }
        else
        {
            return JOJOS_UNITS_50[nUnitId].uChildAmt;
        }
    }
    else
    {
        if (nUnitId == JOJOS_A_EXTRALOC_51)
        {
            return 1;
        }
        else
        {
            return JOJOS_UNITS_51[nUnitId].uChildAmt;
        }
    }
}

UINT16 CGame_JOJOS_A::GetNodeCountForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    if (UsePaletteSetFor50())
    {
        if (nUnitId == JOJOS_A_EXTRALOC_50)
        {
            return GetExtraCt(JOJOS_A_EXTRALOC_50);
        }
        else
        {
            const sDescTreeNode* pCompleteROMTree = JOJOS_UNITS_50;
            const sDescTreeNode* pCollectionNode = (const sDescTreeNode*)(pCompleteROMTree[nUnitId].ChildNodes);

            return pCollectionNode[nCollectionId].uChildAmt;
        }
    }
    else
    {
        if (nUnitId == JOJOS_A_EXTRALOC_51)
        {
            return GetExtraCt(JOJOS_A_EXTRALOC_51);
        }
        else
        {
            const sDescTreeNode* pCompleteROMTree = JOJOS_UNITS_51;
            const sDescTreeNode* pCollectionNode = (const sDescTreeNode*)(pCompleteROMTree[nUnitId].ChildNodes);

            return pCollectionNode[nCollectionId].uChildAmt;
        }
    }
}

LPCSTR CGame_JOJOS_A::GetDescriptionForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    if (UsePaletteSetFor50())
    {
        if (nUnitId == JOJOS_A_EXTRALOC_50)
        {
            return "Palettes";
        }
        else
        {
            const sDescTreeNode* pCollection = (const sDescTreeNode*)JOJOS_UNITS_50[nUnitId].ChildNodes;
            return pCollection[nCollectionId].szDesc;
        }
    }
    else
    {
        if (nUnitId == JOJOS_A_EXTRALOC_51)
        {
            return "Palettes";
        }
        else
        {
            const sDescTreeNode* pCollection = (const sDescTreeNode*)JOJOS_UNITS_51[nUnitId].ChildNodes;
            return pCollection[nCollectionId].szDesc;
        }
    }
}

UINT16 CGame_JOJOS_A::GetPaletteCountForUnit(UINT16 nUnitId)
{
    if (UsePaletteSetFor50() ?  (nUnitId == JOJOS_A_EXTRALOC_50) :
                                (nUnitId == JOJOS_A_EXTRALOC_51))
    {
        return GetExtraCt(nUnitId);
    }
    else
    {
        UINT16 nCompleteCount = 0;
        const sDescTreeNode* pCompleteROMTree = UsePaletteSetFor50() ? JOJOS_UNITS_50 : JOJOS_UNITS_51;
        UINT16 nCollectionCount = pCompleteROMTree[nUnitId].uChildAmt;
        const sDescTreeNode* pCurrentCollection = (const sDescTreeNode *)(pCompleteROMTree[nUnitId].ChildNodes);

        for (UINT16 nCollectionIndex = 0; nCollectionIndex < nCollectionCount; nCollectionIndex++)
        {
            nCompleteCount += pCurrentCollection[nCollectionIndex].uChildAmt;
        }

#if JOJOS_DEBUG
        CString strMsg;
        strMsg.Format("CGame_JOJOS_A::GetPaletteCountForUnit: %u for unit %u which has %u collections.\n", nCompleteCount, nUnitId, nCollectionCount);
        OutputDebugString(strMsg);
#endif

        return nCompleteCount;
    }
}

bool CGame_JOJOS_A::CanEnableMultispriteExport(UINT16 nUnitId, UINT16 nPalId)
{
    bool isBalanced = false;

    if (!UsePaletteSetFor50() && (nUnitId != JOJOS_A_EXTRALOC_51))
    {
        const sDescTreeNode* pUnitTree = &(JOJOS_UNITS_51[nUnitId]);

        // Only enable for character nodes
        if ((strstr(pUnitTree->szDesc, "Timestop") == nullptr) &&
            (strstr(pUnitTree->szDesc, "Bonus") == nullptr))
        {
            if (pUnitTree->uChildAmt >= m_nGameButtonColorCount)
            {
                const sDescTreeNode* pCurrentCollection = (const sDescTreeNode*)(pUnitTree->ChildNodes);

                isBalanced = ((pCurrentCollection[0].uChildAmt == pCurrentCollection[1].uChildAmt) &&
                              (pCurrentCollection[0].uChildAmt == pCurrentCollection[2].uChildAmt) &&
                              (pCurrentCollection[0].uChildAmt == pCurrentCollection[3].uChildAmt) &&
                              (pCurrentCollection[0].uChildAmt == pCurrentCollection[4].uChildAmt));

                if (isBalanced)
                {
                    // We know the button nodes are balanced... but are we in a core button node?
                    isBalanced = nPalId < (5 * pCurrentCollection[0].uChildAmt);
                }
            }
        }
    }

    return isBalanced;
}


const sDescTreeNode* CGame_JOJOS_A::GetNodeFromPaletteId(UINT16 nUnitId, UINT16 nPaletteId)
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

        if (nUnitId == m_nExtraUnit)
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
            const sDescTreeNode* pCollectionNodeToCheck = (const sDescTreeNode*)(UsePaletteSetFor50() ? JOJOS_UNITS_50[nUnitId].ChildNodes  : JOJOS_UNITS_51[nUnitId].ChildNodes);

            nNodeCount = pCollectionNodeToCheck[nCollectionIndex].uChildAmt;

            if (nDistanceFromZero < nNodeCount)
            {
                pCollectionNode = &(pCollectionNodeToCheck[nCollectionIndex]);
                break;
            }
        }

        nDistanceFromZero -= nNodeCount;
    }

    return pCollectionNode;
}

const sGame_PaletteDataset* CGame_JOJOS_A::GetSpecificPalette(UINT16 nUnitId, UINT16 nPaletteId)
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

void CGame_JOJOS_A::InitDataBuffer()
{
    m_nBufferJojosMode = m_nJojosMode;
    m_pppDataBuffer = new UINT16 * *[nUnitAmt];
    memset(m_pppDataBuffer, 0, sizeof(UINT16**) * nUnitAmt);
}

void CGame_JOJOS_A::ClearDataBuffer()
{
    // We walk the tree to clear it according to Jojos mode, but if you live switch games
    // we would use the new mode incorrectly as we clear the old buffer.
    int nCurrentJojosMode = m_nJojosMode;

    m_nJojosMode = m_nBufferJojosMode;

    if (m_pppDataBuffer)
    {
        for (UINT16 nUnitCtr = 0; nUnitCtr < nUnitAmt; nUnitCtr++)
        {
            if (m_pppDataBuffer[nUnitCtr])
            {
                UINT16 nPaletteCount = GetPaletteCountForUnit(nUnitCtr);

                for (UINT16 nPaletteIndex = 0; nPaletteIndex < nPaletteCount; nPaletteIndex++)
                {
                    safe_delete_array(m_pppDataBuffer[nUnitCtr][nPaletteIndex]);
                }

                safe_delete_array(m_pppDataBuffer[nUnitCtr]);
            }
        }

        safe_delete_array(m_pppDataBuffer);
    }

    m_nJojosMode = nCurrentJojosMode;
}

const sGame_PaletteDataset* CGame_JOJOS_A::GetPaletteSet(UINT16 nUnitId, UINT16 nCollectionId)
{
    const sGame_PaletteDataset* paletteSetToUse = nullptr;

    if (UsePaletteSetFor50())
    {
        const sDescTreeNode* pCurrentSet = (const sDescTreeNode*)JOJOS_UNITS_50[nUnitId].ChildNodes;
        paletteSetToUse = ((sGame_PaletteDataset*)(pCurrentSet[nCollectionId].ChildNodes));
    }
    else
    {
        const sDescTreeNode* pCurrentSet = (const sDescTreeNode*)JOJOS_UNITS_51[nUnitId].ChildNodes;
        paletteSetToUse = ((sGame_PaletteDataset*)(pCurrentSet[nCollectionId].ChildNodes));
    }

    return paletteSetToUse;
}

void CGame_JOJOS_A::LoadSpecificPaletteData(UINT16 nUnitId, UINT16 nPalId)
{
    int nTotalCollections = GetCollectionCountForUnit(nUnitId);
    UINT32 nOffset = 0;
    int cbPaletteSizeOnDisc = 0;
    BOOL isPaletteFromExtensionsFile = FALSE;

    if (UsePaletteSetFor50() ? (nUnitId == JOJOS_A_EXTRALOC_50) :
                               (nUnitId == JOJOS_A_EXTRALOC_51))
    {
        isPaletteFromExtensionsFile = TRUE;
    }

    if (!isPaletteFromExtensionsFile)
    {
        UINT32 nCurrentPaletteOffset = 0;
        int nDistanceFromZero = nPalId;
        const sGame_PaletteDataset* paletteSetToUse = nullptr;

        for (int nCollectionIndex = 0; nCollectionIndex < nTotalCollections; nCollectionIndex++)
        {
            paletteSetToUse = GetPaletteSet(nUnitId, nCollectionIndex);
            UINT16 nNodeCount = GetNodeCountForCollection(nUnitId, nCollectionIndex);

            if (nDistanceFromZero < nNodeCount)
            {
                nOffset = paletteSetToUse[nDistanceFromZero].nPaletteOffset;
                cbPaletteSizeOnDisc = (int)max(0, (paletteSetToUse[nDistanceFromZero].nPaletteOffsetEnd - paletteSetToUse[nDistanceFromZero].nPaletteOffset));
                break;
            }

            nDistanceFromZero -= nNodeCount;
        }

#if NEED_TO_UPDATE_JOJO_HEADERS
        const int knMaxPalettePageSizeOnDisc = 2 * m_knMaxPalettePageSize;

        if (nPaletteSizeOnDisc > knMaxPalettePageSizeOnDisc)
        {
            CString strError;
            strError.Format("BUG: In unit %u collection %u palette %u (\"%s\") at offset 0x%u will be chopped.  Please use this instead:\n", nUnitId, nCollectionIndex, nPalId, paletteSetToUse[nPalId].szPaletteName, paletteSetToUse[nPalId].nPaletteOffset);
            OutputDebugString(strError);

            const int nTotalPagesNeeded = (int)ceil((double)nPaletteSizeOnDisc / (double)knMaxPalettePageSizeOnDisc);
            if (nTotalPagesNeeded < 250)
            {
                int nCurrentPaletteSectionLength = knMaxPalettePageSizeOnDisc;
                int nTotalUnusedColors = nPaletteSizeOnDisc;

                OutputDebugString("#ifdef USE_LARGE_PALETTES\n");

                strError.Format("    { \"%s\", 0x%07x, 0x%07x }, \n", paletteSetToUse[nPalId].szPaletteName,
                                                                      paletteSetToUse[nPalId].nPaletteOffset,
                                                                      paletteSetToUse[nPalId].nPaletteOffsetEnd);
                OutputDebugString(strError);

                OutputDebugString("#else\n");

                for (int nCurrentPage = 0, nCurrentOffset = 0; nCurrentPage < nTotalPagesNeeded; nCurrentPage++)
                {
                    strError.Format("    { \"%s (%u/%u)\", 0x%07x, 0x%07x }, \n", paletteSetToUse[nPalId].szPaletteName, nCurrentPage + 1, nTotalPagesNeeded,
                                                                                    paletteSetToUse[nPalId].nPaletteOffset + nCurrentOffset,
                                                                                    paletteSetToUse[nPalId].nPaletteOffset + nCurrentOffset + nCurrentPaletteSectionLength);

                    nCurrentOffset += knMaxPalettePageSizeOnDisc;
                    nTotalUnusedColors -= nCurrentPaletteSectionLength;
                    nCurrentPaletteSectionLength = min(nTotalUnusedColors, knMaxPalettePageSizeOnDisc);
                    OutputDebugString(strError);
                }

                OutputDebugString("#endif\n");
            }
            else
            {
                // This won't be recoverable.
                OutputDebugString("ERROR: Actually, something is wrong.  Don't use this palette.\n");
                DebugBreak();
            }
        }
#endif
    }
    else //Extra Palettes
    {
        stExtraDef* pCurrDef = GetJojosExtraDef(GetExtraLoc(nUnitId) + nPalId);

        nOffset = pCurrDef->uOffset;
        cbPaletteSizeOnDisc = pCurrDef->cbPaletteSize;
    }

    m_nCurrentPaletteROMLocation = nOffset;
    m_nCurrentPaletteSize = cbPaletteSizeOnDisc / 2;
}

void CGame_JOJOS_A::CreateDefPal(sDescNode* srcNode, UINT16 nSepId)
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

BOOL CGame_JOJOS_A::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
{
    // This loads the data and any image for the current selection.

    //Reset palette sources
    ClearSrcPal();

    if (Node01 == -1)
    {
        return FALSE;
    }

    sDescNode* NodeGet = (UsePaletteSetFor50() ? MainDescTree_50.GetDescNode(Node01, Node02, Node03, Node04) :
                                                 MainDescTree_51.GetDescNode(Node01, Node02, Node03, Node04));

    if (NodeGet == nullptr)
    {
        return FALSE;
    }

    // Default values for multisprite image display for Export.
    int nSrcStart = 0;
    int nSrcAmt = 0;
    UINT16 nNodeIncrement = 1;

    //Get rid of any palettes if there are any
    BasePalGroup.FlushPalAll();

    // Make sure to reset the image id
    nTargetImgId = 0;
    UINT16 nImgUnitId = INVALID_UNIT_VALUE;

    //Select the image
    int nNormalPalettesCount = ((GetCollectionCountForUnit(NodeGet->uUnitId) * 2) + 10);
    bool fUseDefaultPaletteLoad = true;

    if (UsePaletteSetFor50() ? (JOJOS_A_EXTRALOC_50 > NodeGet->uUnitId) : (JOJOS_A_EXTRALOC_51 > NodeGet->uUnitId))
    {
        const sGame_PaletteDataset* paletteDataSet = GetSpecificPalette(NodeGet->uUnitId, NodeGet->uPalId);

        nSrcStart = NodeGet->uPalId;
        nSrcAmt = 1;

        if (paletteDataSet)
        {
            if (CanEnableMultispriteExport(NodeGet->uUnitId, NodeGet->uPalId))
            {
                const sDescTreeNode* pCurrentNode = GetNodeFromPaletteId(NodeGet->uUnitId, NodeGet->uPalId);
                nSrcAmt = m_nGameButtonColorCount;
                nSrcStart = NodeGet->uPalId % pCurrentNode->uChildAmt;
                nNodeIncrement = pCurrentNode->uChildAmt;
            }

            nImgUnitId = paletteDataSet->indexImgToUse;
            nTargetImgId = paletteDataSet->indexOffsetToUse;

            if (paletteDataSet->pPalettePairingInfo)
            {
                if (!UsePaletteSetFor50())
                {
                    int nXOffs = 0, nYOffs = 0;
                    int nPaletteOneDelta = 0;
                    int nPaletteTwoDelta = 0;

                    if (((nTargetImgId == indexJojos51Character_SelectWin1) || (nTargetImgId == indexJojos51Character_SelectWin2)) &&
                        ((NodeGet->uUnitId == indexJojos51Jotaro) ||
                         (NodeGet->uUnitId == indexJojos51Avdol) ||
                         (NodeGet->uUnitId == indexJojos51Joseph) ||
                         (NodeGet->uUnitId == indexJojos51Alessi) ||
                         (NodeGet->uUnitId == indexJojos51Dio) ||
                         (NodeGet->uUnitId == indexJojos51Devo) ||
                         (NodeGet->uUnitId == indexJojos51VIce) ||
                         (NodeGet->uUnitId == indexJojos51Anubis) ||
                         (NodeGet->uUnitId == indexJojos51Petshop) ||
                         (NodeGet->uUnitId == indexJojos51Midler) ||
                         (NodeGet->uUnitId == indexJojos51HolBoingo) ||
                         (NodeGet->uUnitId == indexJojos51Iggy)))
                    {
                        if (nTargetImgId == indexJojos51Character_SelectWin1) // winning 1
                        {
                            nPaletteOneDelta = 0;
                            nPaletteTwoDelta = 1;
                            fUseDefaultPaletteLoad = false;

                        }
                        else if (nTargetImgId == indexJojos51Character_SelectWin2) // winning 2
                        {
                            nPaletteOneDelta = 0;
                            nPaletteTwoDelta = -1;
                            fUseDefaultPaletteLoad = false;
                        }
                    }
                    else if (NodeGet->uUnitId == indexJojos51Avdol)
                    {
                        if (nTargetImgId == 0x0) // main
                        {
                            nXOffs = 48;
                            nYOffs = 7;
                            nPaletteOneDelta = 0;
                            nPaletteTwoDelta = 1;
                            fUseDefaultPaletteLoad = false;
                        }
                        else if (nTargetImgId == 0x1) // fire
                        {
                            nXOffs = -48;
                            nYOffs = -7;
                            nPaletteOneDelta = 0;
                            nPaletteTwoDelta = -1;
                            fUseDefaultPaletteLoad = false;
                        }
                    }
                    else if (NodeGet->uUnitId == indexJojos51Kakyo) // Kakyo
                    {
                        if (nSrcStart == indexJojos51Character_Main)
                        {
                            // BUGBUG: There's actually a Hiero we should use in the 00 palette, but
                            // we need a new sprite for that to work.  Once we have that we should undo this join.
                            nPaletteOneDelta = 0;
                            nPaletteTwoDelta = 1;
                            fUseDefaultPaletteLoad = false;
                        }
                        else
                        {
                            // Hieros
                            nPaletteOneDelta = 0;
                            nPaletteTwoDelta = -nSrcStart;
                            fUseDefaultPaletteLoad = false;
                        }
                    }
                    else if (NodeGet->uUnitId == indexJojos51Pol) // Pol : uses an older numbering system.
                    {
                        if (nTargetImgId == 4) // winning 1
                        {
                            nPaletteOneDelta = 0;
                            nPaletteTwoDelta = 1;
                            fUseDefaultPaletteLoad = false;

                        }
                        else if (nTargetImgId == 5) // winning 2
                        {
                            nPaletteOneDelta = 0;
                            nPaletteTwoDelta = -1;
                            fUseDefaultPaletteLoad = false;
                        }
                    }

                    if (!fUseDefaultPaletteLoad)
                    {
                        const sGame_PaletteDataset* paletteDataSetOne = GetSpecificPalette(NodeGet->uUnitId, NodeGet->uPalId + nPaletteOneDelta);
                        const sGame_PaletteDataset* paletteDataSetTwo = GetSpecificPalette(NodeGet->uUnitId, NodeGet->uPalId + nPaletteTwoDelta);

                        ClearSetImgTicket(
                            CreateImgTicket(paletteDataSetOne->indexImgToUse, paletteDataSetOne->indexOffsetToUse,
                                CreateImgTicket(paletteDataSetTwo->indexImgToUse, paletteDataSetTwo->indexOffsetToUse, nullptr, nXOffs, nYOffs)
                            )
                        );

                        //Set each palette
                        sDescNode* JoinedNode[2] = {
                            MainDescTree_51.GetDescNode(Node01, Node02, Node03 + nPaletteOneDelta, -1),
                            MainDescTree_51.GetDescNode(Node01, Node02, Node03 + nPaletteTwoDelta, -1)
                        };

                        //Set each palette
                        CreateDefPal(JoinedNode[0], 0);
                        CreateDefPal(JoinedNode[1], 1);

                        SetSourcePal(0, NodeGet->uUnitId, nSrcStart + nPaletteOneDelta, nSrcAmt, nNodeIncrement);
                        SetSourcePal(1, NodeGet->uUnitId, nSrcStart + nPaletteTwoDelta, nSrcAmt, nNodeIncrement);
                    }
                }
            }
        }
    }
    else
    {
        // This handles palettes loaded from the Extras extension file
    }

    if (fUseDefaultPaletteLoad)
    {
        ClearSetImgTicket(CreateImgTicket(nImgUnitId, nTargetImgId));

        //Create the default palette
        CreateDefPal(NodeGet, 0);

        SetSourcePal(0, NodeGet->uUnitId, nSrcStart, nSrcAmt, nNodeIncrement);
    }

    return TRUE;
}

COLORREF* CGame_JOJOS_A::CreatePal(UINT16 nUnitId, UINT16 nPalId)
{
    LoadSpecificPaletteData(nUnitId, nPalId);

    //We get this from create def pal
    COLORREF* NewPal = new COLORREF[m_nCurrentPaletteSize];

    for (int i = 0; i < m_nCurrentPaletteSize; i++)
    {
        NewPal[i] = ConvPal(m_pppDataBuffer[nUnitId][nPalId][i]) | 0xFF000000;
    }

    return NewPal;
}

void CGame_JOJOS_A::UpdatePalData()
{
    for (int nPalCtr = 0; nPalCtr < MAX_PAL; nPalCtr++)
    {
        // Get the current palette group shown in the UI
        sPalDef* srcDef = BasePalGroup.GetPalDef(nPalCtr);
        if (srcDef->bAvail)
        {
            int nIndexStart = 0;

            COLORREF* crSrc = srcDef->pPal;
            UINT16 uAmt = srcDef->uPalSz;
            int nBasicAmt = GetCollectionCountForUnit(srcDef->uUnitId);

            for (int nPICtr = nIndexStart; nPICtr < uAmt; nPICtr++)
            {
                m_pppDataBuffer[srcDef->uUnitId][srcDef->uPalId][nPICtr] = ConvCol(crSrc[nPICtr]);
            }

            srcDef->bChanged = FALSE;
            rgFileChanged[0] = TRUE;
        }
    }
}

BOOL CGame_JOJOS_A::LoadFile(CFile* LoadedFile, UINT16 nFileId)
{
    for (int nUnitCtr = 0; nUnitCtr < nUnitAmt; nUnitCtr++)
    {
        int nPalAmt = GetPaletteCountForUnit(nUnitCtr);

        m_pppDataBuffer[nUnitCtr] = new UINT16 * [nPalAmt];

        // Use a natural sort: no need to override the array layout
        rgUnitRedir[nUnitCtr] = nUnitCtr;

        for (int nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
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

BOOL CGame_JOJOS_A::SaveFile(CFile* SaveFile, UINT16 nFileId)
{
    UINT32 nTotalPalettesSaved = 0;

    for (INT16 nUnitCtr = 0; nUnitCtr < nUnitAmt; nUnitCtr++)
    {
        UINT16 nPalCount = GetPaletteCountForUnit(nUnitCtr);

        for (UINT16 nPalCtr = 0; nPalCtr < nPalCount; nPalCtr++)
        {
            LoadSpecificPaletteData(nUnitCtr, nPalCtr);

            SaveFile->Seek(m_nCurrentPaletteROMLocation, CFile::begin);
            SaveFile->Write(m_pppDataBuffer[nUnitCtr][nPalCtr], m_nCurrentPaletteSize * 2);
            nTotalPalettesSaved++;
        }
    }

    CString strMsg;
    strMsg.Format("CGame_JOJOS_A::SaveFile: Saved 0x%x palettes to disk for %u units\n", nTotalPalettesSaved, nUnitAmt);
    OutputDebugString(strMsg);

    return TRUE;
}

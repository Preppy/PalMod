#include "StdAfx.h"
#include "Game_JOJOS_A.h"
#include "GameDef.h"
#include "..\palmod.h"
#include "..\RegProc.h"

#define JOJOS_DEBUG                 DEFAULT_GAME_DEBUG_STATE
#define NEED_TO_UPDATE_JOJO_HEADERS 0

stExtraDef* CGame_JOJOS_A::JOJOS_A_EXTRA_CUSTOM_50 = nullptr;
stExtraDef* CGame_JOJOS_A::JOJOS_A_EXTRA_CUSTOM_51 = nullptr;

CDescTree CGame_JOJOS_A::MainDescTree_50 = nullptr;
CDescTree CGame_JOJOS_A::MainDescTree_51 = nullptr;

uint32_t CGame_JOJOS_A::m_nJojosMode = 50;
UINT32 CGame_JOJOS_A::m_nTotalPaletteCount50 = 0;
UINT32 CGame_JOJOS_A::m_nTotalPaletteCount51 = 0;

uint32_t CGame_JOJOS_A::rgExtraCountAll_50[JOJOS_A_NUMUNIT_50 + 1] = { (uint32_t)-1 };
uint32_t CGame_JOJOS_A::rgExtraCountAll_51[JOJOS_A_NUMUNIT_51 + 1] = { (uint32_t)-1 };
uint32_t CGame_JOJOS_A::rgExtraLoc_50[JOJOS_A_NUMUNIT_50 + 1] = { (uint32_t)-1 };
uint32_t CGame_JOJOS_A::rgExtraLoc_51[JOJOS_A_NUMUNIT_51 + 1] = { (uint32_t)-1 };
UINT32 CGame_JOJOS_A::m_nConfirmedROMSize = -1;

void CGame_JOJOS_A::InitializeStatics()
{
    // Reset all the Extra related data as we need to load it all again.
    safe_delete_array(CGame_JOJOS_A::JOJOS_A_EXTRA_CUSTOM_50);
    safe_delete_array(CGame_JOJOS_A::JOJOS_A_EXTRA_CUSTOM_51);

    memset(rgExtraCountAll_50, -1, sizeof(rgExtraCountAll_50));
    memset(rgExtraCountAll_51, -1, sizeof(rgExtraCountAll_51));

    memset(rgExtraLoc_50, -1, sizeof(rgExtraLoc_50));
    memset(rgExtraLoc_51, -1, sizeof(rgExtraLoc_51));

    MainDescTree_50.SetRootTree(CGame_JOJOS_A::InitDescTree(50));
    MainDescTree_51.SetRootTree(CGame_JOJOS_A::InitDescTree(51));
}

CGame_JOJOS_A::CGame_JOJOS_A(UINT32 nConfirmedROMSize, int nJojosModeToLoad)
{
    //Set color mode
    createPalOptions = { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX };
    SetAlphaMode(AlphaMode::GameUsesFixedAlpha);
    SetColorMode(ColMode::COLMODE_RGB555_LE);

    // We need this set before we initialize so that corrupt Extras truncate correctly.
    // Otherwise the new user inadvertently corrupts their ROM.
    m_nConfirmedROMSize = nConfirmedROMSize;
    InitializeStatics();

    //We need the proper unit amt before we init the main buffer
    m_nJojosMode = nJojosModeToLoad;

    if (UsePaletteSetFor50())
    {
        OutputDebugString(L"CGame_JOJOS_A::CGame_JOJOS_A: Loading for the 50 ROM\n");
        nUnitAmt = JOJOS_A_NUMUNIT_50 + (GetExtraCt(JOJOS_A_EXTRALOC_50) ? 1 : 0);
    }
    else
    {
        OutputDebugString(L"CGame_JOJOS_A::CGame_JOJOS_A: Loading for the 51 ROM\n");
        nUnitAmt = JOJOS_A_NUMUNIT_51 + (GetExtraCt(JOJOS_A_EXTRALOC_51) ? 1 : 0);
    }

    m_nTotalInternalUnits = UsePaletteSetFor50() ? JOJOS_A_NUMUNIT_50 : JOJOS_A_NUMUNIT_51;
    m_nExtraUnit = UsePaletteSetFor50() ? JOJOS_A_EXTRALOC_50 : JOJOS_A_EXTRALOC_51;

    const UINT32 nSafeCountFor50 = 476;
    const UINT32 nSafeCountFor51 = 1823;

    m_nSafeCountForThisRom = UsePaletteSetFor50() ? (nSafeCountFor50 + GetExtraCt(JOJOS_A_EXTRALOC_50)): (nSafeCountFor51 + GetExtraCt(JOJOS_A_EXTRALOC_51));
    m_pszExtraFilename = UsePaletteSetFor50() ? EXTRA_FILENAME_50 : EXTRA_FILENAME_51;
    m_nTotalPaletteCount = UsePaletteSetFor50() ? m_nTotalPaletteCount50 : m_nTotalPaletteCount51;
    m_nLowestKnownPaletteRomLocation = UsePaletteSetFor50() ? 0x7c0000 : 0x2d0000;

    InitDataBuffer();

    //Set game information
    nGameFlag = JOJOS_A;
    nImgGameFlag = IMGDAT_SECTION_JOJOS;
    m_prgGameImageSet = JOJOS_A_IMGIDS_USED;

    nFileAmt = 1;

    //Set the image out display type
    DisplayType = eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT;
    pButtonLabelSet = DEF_BUTTONLABEL_JOJOS_5;

    //Create the redirect buffer
    rgUnitRedir = new uint32_t[max(10, nUnitAmt) + 1]; // We need at least 8 redirs because we have that many SIMMs
    memset(rgUnitRedir, NULL, sizeof(uint32_t) * max(10, nUnitAmt));

    //Create the file changed flag
    PrepChangeTrackingArray();
}

CGame_JOJOS_A::~CGame_JOJOS_A(void)
{
    safe_delete_array(CGame_JOJOS_A::JOJOS_A_EXTRA_CUSTOM_50);
    safe_delete_array(CGame_JOJOS_A::JOJOS_A_EXTRA_CUSTOM_51);
    ClearDataBuffer();
    //Get rid of the file changed flag
    FlushChangeTrackingArray();
}

uint32_t CGame_JOJOS_A::GetExtraCt(uint32_t nUnitId, BOOL fCountVisibleOnly)
{
    if (UsePaletteSetFor50())
    {
        return _GetExtraCount(rgExtraCountAll_50, JOJOS_A_NUMUNIT_50, nUnitId, JOJOS_A_EXTRA_CUSTOM_50);
    }
    else
    {
        return _GetExtraCount(rgExtraCountAll_51, JOJOS_A_NUMUNIT_51, nUnitId, JOJOS_A_EXTRA_CUSTOM_51);
    }
}

uint32_t CGame_JOJOS_A::GetExtraLoc(uint32_t nUnitId)
{
    if (UsePaletteSetFor50())
    {
        return _GetExtraLocation(rgExtraLoc_50, JOJOS_A_NUMUNIT_50, nUnitId, JOJOS_A_EXTRA_CUSTOM_50);
    }
    else
    {
        return _GetExtraLocation(rgExtraLoc_51, JOJOS_A_NUMUNIT_51, nUnitId, JOJOS_A_EXTRA_CUSTOM_51);
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
    OutputDebugString(L"FWIW: You want to define USE_LARGE_PALETTES so that you are working with the unsplit headers.\n");
#endif

    OutputDebugString(L"const sGame_PaletteDataset JOJOS_BONUS_NODE_INTRO_MANGA[] =\n{\n");
    for (int iHeaderIndex = 0; iHeaderIndex < ARRAYSIZE(JOJOS_BONUS_NODE_INTRO_MANGA); iHeaderIndex++)
    {
        CString strOutput;

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

            OutputDebugString(L"#ifndef USE_LARGE_PALETTES\n");

            for (int nCurrentPage = 0, nCurrentOffset = 0; nCurrentPage < nTotalPagesNeeded; nCurrentPage++)
            {
                strOutput.Format(L"    { \"%s (%u/%u)\", 0x%07x, 0x%07x }, \n", JOJOS_BONUS_NODE_INTRO_MANGA[iHeaderIndex].szPaletteName, nCurrentPage + 1, nTotalPagesNeeded,
                                                                            JOJOS_BONUS_NODE_INTRO_MANGA[iHeaderIndex].nPaletteOffset + nCurrentOffset, 
                                                                            JOJOS_BONUS_NODE_INTRO_MANGA[iHeaderIndex].nPaletteOffset + nCurrentOffset + nCurrentPaletteSectionLength);

                nCurrentOffset += knMaxPalettePageSizeOnDisc;
                nTotalUnusedColors -= nCurrentPaletteSectionLength;
                nCurrentPaletteSectionLength = min(nTotalUnusedColors, knMaxPalettePageSizeOnDisc);
                OutputDebugString(strOutput);
            }
            OutputDebugString(L"#else\n");
        }

        strOutput.Format(L"    { \"%s\", 0x%07x, 0x%07x }, \n", JOJOS_BONUS_NODE_INTRO_MANGA[iHeaderIndex].szPaletteName,
                                                            JOJOS_BONUS_NODE_INTRO_MANGA[iHeaderIndex].nPaletteOffset,
                                                            JOJOS_BONUS_NODE_INTRO_MANGA[iHeaderIndex].nPaletteOffsetEnd - nAdjust);
        OutputDebugString(strOutput);

        if (nPaletteTotalSize > (knMaxPalettePageSizeOnDisc + 1))
        {
            OutputDebugString(L"#endif\n");
        }
    }

    OutputDebugString(L"};\n");
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
        LoadExtraFileForGame(EXTRA_FILENAME_50, &JOJOS_A_EXTRA_CUSTOM_50, JOJOS_A_EXTRALOC_50, m_nConfirmedROMSize);
    }
    else
    {
        LoadExtraFileForGame(EXTRA_FILENAME_51, &JOJOS_A_EXTRA_CUSTOM_51, JOJOS_A_EXTRALOC_51, m_nConfirmedROMSize);
    }
#endif

    uint32_t nUnitCt = UsePaletteSetFor50() ? (JOJOS_A_NUMUNIT_50 + (GetExtraCt(JOJOS_A_EXTRALOC_50) ? 1 : 0)) :
                                            (JOJOS_A_NUMUNIT_51 + (GetExtraCt(JOJOS_A_EXTRALOC_51) ? 1 : 0));

    sDescTreeNode* NewDescTree = new sDescTreeNode;

    //Create the main character tree
    _snwprintf_s(NewDescTree->szDesc, ARRAYSIZE(NewDescTree->szDesc), _TRUNCATE, L"%s", g_GameFriendlyName[JOJOS_A]);
    NewDescTree->ChildNodes = new sDescTreeNode[nUnitCt];
    NewDescTree->uChildAmt = nUnitCt;
    //All units have tree children
    NewDescTree->uChildType = DESC_NODETYPE_TREE;

    CString strMsg;
    bool fHaveExtras = ((UsePaletteSetFor50() ? GetExtraCt(JOJOS_A_EXTRALOC_50) : GetExtraCt(JOJOS_A_EXTRALOC_51)) > 0);
    strMsg.Format(L"CGame_JOJOS_A::InitDescTree: Building desc tree for ROM %u...\n", m_nJojosMode);
    OutputDebugString(strMsg);

    //Go through each character
    for (uint32_t iUnitCtr = 0; iUnitCtr < nUnitCt; iUnitCtr++)
    {
        sDescTreeNode* UnitNode = nullptr;
        sDescTreeNode* CollectionNode = nullptr;
        sDescNode* ChildNode = nullptr;

        uint32_t nExtraCt = GetExtraCt(iUnitCtr, TRUE);
        BOOL fUseExtra = (GetExtraLoc(iUnitCtr) ? 1 : 0);

        uint32_t nUnitChildCount = GetCollectionCountForUnit(iUnitCtr);

        UnitNode = &((sDescTreeNode*)NewDescTree->ChildNodes)[iUnitCtr];

        if (UsePaletteSetFor50() ? (iUnitCtr < JOJOS_A_EXTRALOC_50) : (iUnitCtr < JOJOS_A_EXTRALOC_51))
        {
            //Set each description
            _snwprintf_s(UnitNode->szDesc, ARRAYSIZE(UnitNode->szDesc), _TRUNCATE, L"%s", UsePaletteSetFor50() ? JOJOS_UNITS_50[iUnitCtr].szDesc : JOJOS_UNITS_51[iUnitCtr].szDesc);
            UnitNode->ChildNodes = new sDescTreeNode[nUnitChildCount];
            //All children have collection trees
            UnitNode->uChildType = DESC_NODETYPE_TREE;
            UnitNode->uChildAmt = nUnitChildCount;

#if JOJOS_DEBUG
            strMsg.Format(L"Unit: \"%s\", %u of %u (%s), %u total children\n", UnitNode->szDesc, iUnitCtr + 1, nUnitCt, fUseExtra ? L"with extras" : L"no extras", nUnitChildCount);
            OutputDebugString(strMsg);
#endif

            uint32_t nTotalPalettesUsedInUnit = 0;

            //Set data for each child group ("collection")
            for (uint32_t iCollectionCtr = 0; iCollectionCtr < nUnitChildCount; iCollectionCtr++)
            {
                CollectionNode = &((sDescTreeNode*)UnitNode->ChildNodes)[iCollectionCtr];

                //Set each collection data

                // Default label, since these aren't associated to collections
                _snwprintf_s(CollectionNode->szDesc, ARRAYSIZE(CollectionNode->szDesc), _TRUNCATE, GetDescriptionForCollection(iUnitCtr, iCollectionCtr));
                //Collection children have nodes
                uint32_t nListedChildrenCount = GetNodeCountForCollection(iUnitCtr, iCollectionCtr);
                CollectionNode->uChildType = DESC_NODETYPE_NODE;
                CollectionNode->uChildAmt = nListedChildrenCount;
                CollectionNode->ChildNodes = (sDescTreeNode*)new sDescNode[nListedChildrenCount];

#if JOJOS_DEBUG
                strMsg.Format(L"\tCollection: \"%s\", %u of %u, %u children\n", CollectionNode->szDesc, iCollectionCtr + 1, nUnitChildCount, nListedChildrenCount);
                OutputDebugString(strMsg);
#endif

                const sGame_PaletteDataset* paletteSetToUse = GetPaletteSet(iUnitCtr, iCollectionCtr);

                //Set each collection's extra nodes: convert the sGame_PaletteDataset to sDescTreeNodes
                for (uint32_t nNodeIndex = 0; nNodeIndex < nListedChildrenCount; nNodeIndex++)
                {
                    ChildNode = &((sDescNode*)CollectionNode->ChildNodes)[nNodeIndex];

                    _snwprintf_s(ChildNode->szDesc, ARRAYSIZE(ChildNode->szDesc), _TRUNCATE, L"%s", paletteSetToUse[nNodeIndex].szPaletteName);

                    ChildNode->uUnitId = iUnitCtr; // but this doesn't work in the new layout does it...?
                    ChildNode->uPalId = nTotalPalettesUsedInUnit++;
                    nTotalPaletteCount++;

#if JOJOS_DEBUG
                    strMsg.Format(L"\t\tPalette: \"%s\", %u of %u", ChildNode->szDesc, nNodeIndex + 1, nListedChildrenCount);
                    OutputDebugString(strMsg);
                    strMsg.Format(_L", 0x%06x to 0x%06x (%u colors),", paletteSetToUse[nNodeIndex].nPaletteOffset, paletteSetToUse[nNodeIndex].nPaletteOffsetEnd, (paletteSetToUse[nNodeIndex].nPaletteOffsetEnd - paletteSetToUse[nNodeIndex].nPaletteOffset) / 2);
                    OutputDebugString(strMsg);

                    if (paletteSetToUse[nNodeIndex].indexImgToUse != INVALID_UNIT_VALUE)
                    {
                        strMsg.Format(L" image unit 0x%02x image index 0x%02x.\n", paletteSetToUse[nNodeIndex].indexImgToUse, paletteSetToUse[nNodeIndex].indexOffsetToUse);
                    }
                    else
                    {
                        strMsg.Format(L" no image available.\n");
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
            _snwprintf_s(UnitNode->szDesc, ARRAYSIZE(UnitNode->szDesc), _TRUNCATE, L"Extra Palettes");
            UnitNode->ChildNodes = new sDescTreeNode[1];
            UnitNode->uChildType = DESC_NODETYPE_TREE;
            UnitNode->uChildAmt = 1;

#if JOJOS_DEBUG
            strMsg.Format(L"Unit: \"%s\" (Extras), %u of %u, %u total children\n", UnitNode->szDesc, iUnitCtr + 1, nUnitCt, UnitNode->uChildAmt);
            OutputDebugString(strMsg);
#endif
        }

        //Set up extra nodes
        if (fUseExtra)
        {
            uint32_t nExtraPos = GetExtraLoc(iUnitCtr);
            int nCurrExtra = 0;

            if (UsePaletteSetFor50())
            {
                CollectionNode = &((sDescTreeNode*)UnitNode->ChildNodes)[(JOJOS_A_EXTRALOC_50 > iUnitCtr) ? (nUnitChildCount - 1) : 0]; //Extra node
            }
            else
            {
                CollectionNode = &((sDescTreeNode*)UnitNode->ChildNodes)[(JOJOS_A_EXTRALOC_51 > iUnitCtr) ? (nUnitChildCount - 1) : 0]; //Extra node
            }

            _snwprintf_s(CollectionNode->szDesc, ARRAYSIZE(CollectionNode->szDesc), _TRUNCATE, L"Extra");

            CollectionNode->ChildNodes = new sDescTreeNode[nExtraCt];

            CollectionNode->uChildType = DESC_NODETYPE_NODE;
            CollectionNode->uChildAmt = nExtraCt; //EX + Extra

#if JOJOS_DEBUG
            strMsg.Format(L"\tCollection: \"%s\", %u of %u, %u children\n", CollectionNode->szDesc, 1, nUnitChildCount, nExtraCt);
            OutputDebugString(strMsg);
#endif

            for (uint32_t nExtraCtr = 0; nExtraCtr < nExtraCt; nExtraCtr++)
            {
                ChildNode = &((sDescNode*)CollectionNode->ChildNodes)[nExtraCtr];

                stExtraDef* pCurrDef = GetJojosExtraDef(nExtraPos + nCurrExtra);

                while (pCurrDef->isInvisible)
                {
                    nCurrExtra++;

                    pCurrDef = GetJojosExtraDef(nExtraPos + nCurrExtra);
                }

                _snwprintf_s(ChildNode->szDesc, ARRAYSIZE(ChildNode->szDesc), _TRUNCATE, pCurrDef->szDesc);

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
                strMsg.Format(L"\t\tPalette: %s, %u of %u\n", ChildNode->szDesc, nExtraCtr + 1, nExtraCt);
                OutputDebugString(strMsg);
#endif

                nCurrExtra++;
                nTotalPaletteCount++;
            }
        }
    }

    strMsg.Format(L"CGame_JOJOS_A::InitDescTree: Loaded %u palettes for Jojos ROM %u \n", nTotalPaletteCount, m_nJojosMode);
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

sFileRule CGame_JOJOS_A::GetRule(uint32_t nUnitId)
{
    sFileRule NewFileRule;

    _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, L"%u", nUnitId);

    NewFileRule.uUnitId = 0;
    NewFileRule.uVerifyVar = m_nExpectedGameROMSize;

    return NewFileRule;
}

uint32_t CGame_JOJOS_A::GetCollectionCountForUnit(uint32_t nUnitId)
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

uint32_t CGame_JOJOS_A::GetNodeCountForCollection(uint32_t nUnitId, uint32_t nCollectionId)
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

LPCWSTR CGame_JOJOS_A::GetDescriptionForCollection(uint32_t nUnitId, uint32_t nCollectionId)
{
    if (UsePaletteSetFor50())
    {
        if (nUnitId == JOJOS_A_EXTRALOC_50)
        {
            return L"Palettes";
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
            return L"Palettes";
        }
        else
        {
            const sDescTreeNode* pCollection = (const sDescTreeNode*)JOJOS_UNITS_51[nUnitId].ChildNodes;
            return pCollection[nCollectionId].szDesc;
        }
    }
}

uint32_t CGame_JOJOS_A::GetPaletteCountForUnit(uint32_t nUnitId)
{
    if (UsePaletteSetFor50() ?  (nUnitId == JOJOS_A_EXTRALOC_50) :
                                (nUnitId == JOJOS_A_EXTRALOC_51))
    {
        return GetExtraCt(nUnitId);
    }
    else
    {
        uint32_t nCompleteCount = 0;
        const sDescTreeNode* pCompleteROMTree = UsePaletteSetFor50() ? JOJOS_UNITS_50 : JOJOS_UNITS_51;
        uint32_t nCollectionCount = pCompleteROMTree[nUnitId].uChildAmt;
        const sDescTreeNode* pCurrentCollection = (const sDescTreeNode *)(pCompleteROMTree[nUnitId].ChildNodes);

        for (uint32_t nCollectionIndex = 0; nCollectionIndex < nCollectionCount; nCollectionIndex++)
        {
            nCompleteCount += pCurrentCollection[nCollectionIndex].uChildAmt;
        }

#if JOJOS_DEBUG
        CString strMsg;
        strMsg.Format(L"CGame_JOJOS_A::GetPaletteCountForUnit: %u for unit %u which has %u collections.\n", nCompleteCount, nUnitId, nCollectionCount);
        OutputDebugString(strMsg);
#endif

        return nCompleteCount;
    }
}

bool CGame_JOJOS_A::CanEnableMultispriteExport(uint32_t nUnitId, uint32_t nPalId)
{
    bool isBalanced = false;

    if (!UsePaletteSetFor50() && (nUnitId != JOJOS_A_EXTRALOC_51))
    {
        const sDescTreeNode* pUnitTree = &(JOJOS_UNITS_51[nUnitId]);

        // Only enable for character nodes
        if ((wcsstr(pUnitTree->szDesc, L"Timestop") == nullptr) &&
            (wcsstr(pUnitTree->szDesc, L"Bonus") == nullptr))
        {
            if (pUnitTree->uChildAmt >= pButtonLabelSet.size())
            {
                const sDescTreeNode* pCurrentCollection = (const sDescTreeNode*)(pUnitTree->ChildNodes);

                isBalanced = ((pCurrentCollection[0].uChildAmt == pCurrentCollection[1].uChildAmt) &&
                              (pCurrentCollection[0].uChildAmt == pCurrentCollection[2].uChildAmt) &&
                              (pCurrentCollection[0].uChildAmt == pCurrentCollection[3].uChildAmt) &&
                              (pCurrentCollection[0].uChildAmt == pCurrentCollection[4].uChildAmt));

                if (isBalanced)
                {
                    // We know the button nodes are balanced... but are we in a core button node?
                    isBalanced = nPalId < (pButtonLabelSet.size() * pCurrentCollection[0].uChildAmt);
                }
            }
        }
    }

    return isBalanced;
}

const sDescTreeNode* CGame_JOJOS_A::GetNodeFromPaletteId(uint32_t nUnitId, uint32_t nPaletteId)
{
    // Don't use this for Extra palettes.
    const sDescTreeNode* pCollectionNode = nullptr;
    uint32_t nTotalCollections = GetCollectionCountForUnit(nUnitId);
    const sGame_PaletteDataset* paletteSetToUse = nullptr;
    uint32_t nDistanceFromZero = nPaletteId;

    for (uint32_t nCollectionIndex = 0; nCollectionIndex < nTotalCollections; nCollectionIndex++)
    {
        const sGame_PaletteDataset* paletteSetToCheck = GetPaletteSet(nUnitId, nCollectionIndex);
        uint32_t nNodeCount;

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

const sGame_PaletteDataset* CGame_JOJOS_A::GetSpecificPalette(uint32_t nUnitId, uint32_t nPaletteId)
{
    // Don't use this for Extra palettes.
    uint32_t nTotalCollections = GetCollectionCountForUnit(nUnitId);
    const sGame_PaletteDataset* paletteToUse = nullptr;
    uint32_t nDistanceFromZero = nPaletteId;

    for (uint32_t nCollectionIndex = 0; nCollectionIndex < nTotalCollections; nCollectionIndex++)
    {
        const sGame_PaletteDataset* paletteSetToUse = GetPaletteSet(nUnitId, nCollectionIndex);
        uint32_t nNodeCount = GetNodeCountForCollection(nUnitId, nCollectionIndex);

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
        for (uint32_t nUnitCtr = 0; nUnitCtr < nUnitAmt; nUnitCtr++)
        {
            if (m_pppDataBuffer[nUnitCtr])
            {
                uint32_t nPaletteCount = GetPaletteCountForUnit(nUnitCtr);

                for (uint32_t nPaletteIndex = 0; nPaletteIndex < nPaletteCount; nPaletteIndex++)
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

const sGame_PaletteDataset* CGame_JOJOS_A::GetPaletteSet(uint32_t nUnitId, uint32_t nCollectionId)
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

void CGame_JOJOS_A::LoadSpecificPaletteData(uint32_t nUnitId, uint32_t nPalId)
{
    uint32_t nTotalCollections = GetCollectionCountForUnit(nUnitId);
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
        uint32_t nDistanceFromZero = nPalId;
        const sGame_PaletteDataset* paletteSetToUse = nullptr;

        for (uint32_t nCollectionIndex = 0; nCollectionIndex < nTotalCollections; nCollectionIndex++)
        {
            paletteSetToUse = GetPaletteSet(nUnitId, nCollectionIndex);
            uint32_t nNodeCount = GetNodeCountForCollection(nUnitId, nCollectionIndex);

            if (nDistanceFromZero < nNodeCount)
            {
                nOffset = paletteSetToUse[nDistanceFromZero].nPaletteOffset;
                m_pszCurrentPaletteName = paletteSetToUse[nDistanceFromZero].szPaletteName;
                cbPaletteSizeOnDisc = (int)max(0, (paletteSetToUse[nDistanceFromZero].nPaletteOffsetEnd - paletteSetToUse[nDistanceFromZero].nPaletteOffset));
                break;
            }

            nDistanceFromZero -= nNodeCount;
        }
    }
    else //Extra Palettes
    {
        stExtraDef* pCurrDef = GetJojosExtraDef(GetExtraLoc(nUnitId) + nPalId);

        nOffset = pCurrDef->uOffset;
        cbPaletteSizeOnDisc = pCurrDef->cbPaletteSize;
        m_pszCurrentPaletteName = pCurrDef->szDesc;
    }

    m_nCurrentPaletteROMLocation = nOffset;
    m_nCurrentPaletteSizeInColors = cbPaletteSizeOnDisc / m_nSizeOfColorsInBytes;
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

    sDescNode* NodeGet = GetMainTree()->GetDescNode(Node01, Node02, Node03, Node04);

    if (NodeGet == nullptr)
    {
        return FALSE;
    }

    // Default values for multisprite image display for Export.
    int32_t nSrcStart = NodeGet->uPalId;
    uint32_t nSrcAmt = 1;
    uint32_t nNodeIncrement = 1;

    //Get rid of any palettes if there are any
    BasePalGroup.FlushPalAll();

    // Make sure to reset the image id
    int nTargetImgId = 0;
    uint32_t nImgUnitId = INVALID_UNIT_VALUE;

    //Select the image
    int nNormalPalettesCount = ((GetCollectionCountForUnit(NodeGet->uUnitId) * 2) + 10);
    bool fUseDefaultPaletteLoad = true;

    if (m_nExtraUnit != NodeGet->uUnitId)
    {
        const sGame_PaletteDataset* paletteDataSet = GetSpecificPalette(NodeGet->uUnitId, NodeGet->uPalId);

        if (paletteDataSet)
        {
            if (CanEnableMultispriteExport(NodeGet->uUnitId, NodeGet->uPalId))
            {
                const sDescTreeNode* pCurrentNode = GetNodeFromPaletteId(NodeGet->uUnitId, NodeGet->uPalId);
                nSrcAmt = static_cast<uint32_t>(pButtonLabelSet.size());
                nSrcStart = NodeGet->uPalId % pCurrentNode->uChildAmt;
                nNodeIncrement = pCurrentNode->uChildAmt;
            }

            nImgUnitId = paletteDataSet->indexImgToUse;
            nTargetImgId = paletteDataSet->indexOffsetToUse;

            if (paletteDataSet->pPalettePairingInfo)
            {
                int nXOffs = 0, nYOffs = 0;
                int nPaletteOneDelta = 0;
                int nPaletteTwoDelta = 0;

                if (paletteDataSet->pPalettePairingInfo == &pairFullyLinkedNode)
                {
                    const sDescTreeNode* pThisNode = GetNodeFromPaletteId(NodeGet->uUnitId, NodeGet->uPalId);
                    const uint32_t nStageCount = pThisNode->uChildAmt;

                    fUseDefaultPaletteLoad = false;
                    sImgTicket* pImgArray = nullptr;

                    for (uint32_t nStageIndex = 0; nStageIndex < nStageCount; nStageIndex++)
                    {
                        // The palettes get added forward, but the image tickets need to be generated in reverse order
                        const sGame_PaletteDataset* paletteDataSetToJoin = GetSpecificPalette(NodeGet->uUnitId, NodeGet->uPalId + (nStageCount - 1 - nStageIndex));
                        if (paletteDataSetToJoin)
                        {
                            pImgArray = CreateImgTicket(paletteDataSetToJoin->indexImgToUse, paletteDataSetToJoin->indexOffsetToUse, pImgArray);

                            //Set each palette
                            sDescNode* JoinedNode = GetMainTree()->GetDescNode(Node01, Node02, Node03 + nStageIndex, -1);
                            CreateDefPal(JoinedNode, nStageIndex);
                            SetSourcePal(nStageIndex, NodeGet->uUnitId, nSrcStart + nStageIndex, nSrcAmt, nNodeIncrement);
                        }
                    }

                    ClearSetImgTicket(pImgArray);
                }
                else if (!UsePaletteSetFor50())
                {
                    // most of these can now be replaced with pairNext/pairPrevious when somebody has time
                    if (((nTargetImgId == indexJojos51Character_SelectWin1) || (nTargetImgId == indexJojos51Character_SelectWin2)) &&
                        ((NodeGet->uUnitId == indexJojos51Jotaro) ||
                            (NodeGet->uUnitId == indexJojos51Avdol) ||
                            (NodeGet->uUnitId == indexJojos51Joseph) ||
                            (NodeGet->uUnitId == indexJojos51Alessi) ||
                            (NodeGet->uUnitId == indexJojos51Dio) ||
                            (NodeGet->uUnitId == indexJojos51Devo) ||
                            (NodeGet->uUnitId == indexJojos51Kakyo) ||
                            (NodeGet->uUnitId == indexJojos51NewKakyo) ||
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
                    else if ((NodeGet->uUnitId == indexJojos51Kakyo) ||
                             (NodeGet->uUnitId == indexJojos51NewKakyo))
                    {
                        // Hieros: show the glow/changing palette on top of a normal Kakyo
                        nPaletteOneDelta = 0;
                        nPaletteTwoDelta = -nSrcStart;
                        fUseDefaultPaletteLoad = false;
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
                    else if ((paletteDataSet->pPalettePairingInfo == &pairHandledInCode) ||
                             (paletteDataSet->pPalettePairingInfo == &pairUnhandled))
                    {
                        OutputDebugString(L"Error: unhandled palette join!\n");
                    }
                    else
                    {
                        // this is for next/previous/etc
                        nPaletteOneDelta = 0;
                        nPaletteTwoDelta = paletteDataSet->pPalettePairingInfo->nNodeIncrementToPartner;
                        fUseDefaultPaletteLoad = false;
                    }

                    if (!fUseDefaultPaletteLoad)
                    {
                        const sGame_PaletteDataset* paletteDataSetOne = GetSpecificPalette(NodeGet->uUnitId, NodeGet->uPalId + nPaletteOneDelta);
                        const sGame_PaletteDataset* paletteDataSetTwo = GetSpecificPalette(NodeGet->uUnitId, NodeGet->uPalId + nPaletteTwoDelta);

                        UINT16 imageOne = paletteDataSetOne->indexOffsetToUse;
                        UINT16 imageTwo = paletteDataSetTwo->indexOffsetToUse;

                        if ((NodeGet->uUnitId == indexJojos51Kakyo) &&
                            !((nTargetImgId == indexJojos51Character_SelectWin1) || (nTargetImgId == indexJojos51Character_SelectWin2)))
                        {
                            // old kak needs to flip preview layout!
                            ClearSetImgTicket(
                                CreateImgTicket(paletteDataSetTwo->indexImgToUse, imageTwo,
                                    CreateImgTicket(paletteDataSetOne->indexImgToUse, imageOne, nullptr, nXOffs, nYOffs)
                                )
                            );

                            //Set each palette
                            std::vector<sDescNode*> JoinedNode = {
                                GetMainTree()->GetDescNode(Node01, Node02, Node03 + nPaletteTwoDelta, -1),
                                GetMainTree()->GetDescNode(Node01, Node02, Node03 + nPaletteOneDelta, -1)
                            };

                            //Set each palette
                            CreateDefPal(JoinedNode[0], 0);
                            CreateDefPal(JoinedNode[1], 1);

                            SetSourcePal(0, NodeGet->uUnitId, nSrcStart + nPaletteTwoDelta, nSrcAmt, nNodeIncrement);
                            SetSourcePal(1, NodeGet->uUnitId, nSrcStart + nPaletteOneDelta, nSrcAmt, nNodeIncrement);
                        }
                        else
                        {
                            if ((NodeGet->uUnitId == indexJojos51NewKakyo) &&
                                !((nTargetImgId == indexJojos51Character_SelectWin1) || (nTargetImgId == indexJojos51Character_SelectWin2)))
                            {
                                // NewKakyo uses special logic as the paired palette actually is aligned to a different "full" sprite.
                                imageOne = 1;
                                imageTwo = 2;
                            }

                            ClearSetImgTicket(
                                CreateImgTicket(paletteDataSetOne->indexImgToUse, imageOne,
                                    CreateImgTicket(paletteDataSetTwo->indexImgToUse, imageTwo, nullptr, nXOffs, nYOffs)
                                )
                            );

                            //Set each palette
                            std::vector<sDescNode*> JoinedNode = {
                                GetMainTree()->GetDescNode(Node01, Node02, Node03 + nPaletteOneDelta, -1),
                                GetMainTree()->GetDescNode(Node01, Node02, Node03 + nPaletteTwoDelta, -1)
                            };

                            //Set each palette
                            CreateDefPal(JoinedNode[0], 0);
                            CreateDefPal(JoinedNode[1], 1);

                            SetSourcePal(0, NodeGet->uUnitId, nSrcStart + nPaletteOneDelta, nSrcAmt, nNodeIncrement);
                            SetSourcePal(1, NodeGet->uUnitId, nSrcStart + nPaletteTwoDelta, nSrcAmt, nNodeIncrement);
                        }
                    }
                }
                else // 50 ROM
                {
                    nImgUnitId = paletteDataSet->indexImgToUse;
                    if ((nImgUnitId == indexJojos51Bonus) && (nTargetImgId == 0x28))
                    {
                        fUseDefaultPaletteLoad = false;
                        nPaletteTwoDelta = 1;
                        int nPaletteThreeDelta = 2;
                        int nPaletteFourDelta = 3;
                        int nPaletteFiveDelta = 4;

                        const sGame_PaletteDataset* paletteDataSetOne = GetSpecificPalette(NodeGet->uUnitId, NodeGet->uPalId + nPaletteOneDelta);
                        const sGame_PaletteDataset* paletteDataSetTwo = GetSpecificPalette(NodeGet->uUnitId, NodeGet->uPalId + nPaletteTwoDelta);
                        const sGame_PaletteDataset* paletteDataSetThree = GetSpecificPalette(NodeGet->uUnitId, NodeGet->uPalId + nPaletteThreeDelta);
                        const sGame_PaletteDataset* paletteDataSetFour = GetSpecificPalette(NodeGet->uUnitId, NodeGet->uPalId + nPaletteFourDelta);
                        const sGame_PaletteDataset* paletteDataSetFive = GetSpecificPalette(NodeGet->uUnitId, NodeGet->uPalId + nPaletteFiveDelta);

                        UINT16 imageOne = paletteDataSetOne->indexOffsetToUse;
                        UINT16 imageTwo = paletteDataSetTwo->indexOffsetToUse;
                        UINT16 imageThree = paletteDataSetThree->indexOffsetToUse;
                        UINT16 imageFour = paletteDataSetFour->indexOffsetToUse;
                        UINT16 imageFive = paletteDataSetFive->indexOffsetToUse;

                        ClearSetImgTicket(
                            CreateImgTicket(paletteDataSetOne->indexImgToUse, imageOne,
                                CreateImgTicket(paletteDataSetTwo->indexImgToUse, imageTwo,
                                    CreateImgTicket(paletteDataSetThree->indexImgToUse, imageThree,
                                        CreateImgTicket(paletteDataSetFour->indexImgToUse, imageFour,
                                            CreateImgTicket(paletteDataSetFive->indexImgToUse, imageFive, nullptr, nXOffs, nYOffs))))
                            )
                        );

                        //Set each palette
                        std::vector<sDescNode*> JoinedNode = {
                            GetMainTree()->GetDescNode(Node01, Node02, Node03 + nPaletteOneDelta, -1),
                            GetMainTree()->GetDescNode(Node01, Node02, Node03 + nPaletteTwoDelta, -1),
                            GetMainTree()->GetDescNode(Node01, Node02, Node03 + nPaletteThreeDelta, -1),
                            GetMainTree()->GetDescNode(Node01, Node02, Node03 + nPaletteFourDelta, -1),
                            GetMainTree()->GetDescNode(Node01, Node02, Node03 + nPaletteFiveDelta, -1)
                        };

                        //Set each palette
                        CreateDefPal(JoinedNode[0], 0);
                        CreateDefPal(JoinedNode[1], 1);
                        CreateDefPal(JoinedNode[2], 2);
                        CreateDefPal(JoinedNode[3], 3);
                        CreateDefPal(JoinedNode[4], 4);

                        SetSourcePal(0, NodeGet->uUnitId, nSrcStart + nPaletteOneDelta, nSrcAmt, nNodeIncrement);
                        SetSourcePal(1, NodeGet->uUnitId, nSrcStart + nPaletteTwoDelta, nSrcAmt, nNodeIncrement);
                        SetSourcePal(2, NodeGet->uUnitId, nSrcStart + nPaletteThreeDelta, nSrcAmt, nNodeIncrement);
                        SetSourcePal(3, NodeGet->uUnitId, nSrcStart + nPaletteFourDelta, nSrcAmt, nNodeIncrement);
                        SetSourcePal(4, NodeGet->uUnitId, nSrcStart + nPaletteFiveDelta, nSrcAmt, nNodeIncrement);
                    }
                    else
                    {
                        // this is for next/previous/etc
                        nPaletteOneDelta = 0;
                        nPaletteTwoDelta = paletteDataSet->pPalettePairingInfo->nNodeIncrementToPartner;
                        fUseDefaultPaletteLoad = false;

                        const sGame_PaletteDataset* paletteDataSetOne = GetSpecificPalette(NodeGet->uUnitId, NodeGet->uPalId + nPaletteOneDelta);
                        const sGame_PaletteDataset* paletteDataSetTwo = GetSpecificPalette(NodeGet->uUnitId, NodeGet->uPalId + nPaletteTwoDelta);

                        ClearSetImgTicket(
                            CreateImgTicket(paletteDataSetOne->indexImgToUse, paletteDataSetOne->indexOffsetToUse,
                                CreateImgTicket(paletteDataSetTwo->indexImgToUse, paletteDataSetTwo->indexOffsetToUse)
                            )
                        );

                        //Set each palette
                        std::vector<sDescNode*> JoinedNode = {
                            GetMainTree()->GetDescNode(Node01, Node02, Node03 + nPaletteOneDelta, -1),
                            GetMainTree()->GetDescNode(Node01, Node02, Node03 + nPaletteTwoDelta, -1)
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

    if (fUseDefaultPaletteLoad)
    {
        ClearSetImgTicket(CreateImgTicket(nImgUnitId, nTargetImgId));

        //Create the default palette
        CreateDefPal(NodeGet, 0);

        SetSourcePal(0, NodeGet->uUnitId, nSrcStart, nSrcAmt, nNodeIncrement);
    }

    return TRUE;
}

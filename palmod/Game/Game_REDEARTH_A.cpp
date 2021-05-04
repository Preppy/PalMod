#include "StdAfx.h"
#include "Game_REDEARTH_A.h"
#include "GameDef.h"
#include "..\ExtraFile.h"
#include "..\PalMod.h"
#include "..\regproc.h"

#define REDEARTH_A_DEBUG DEFAULT_GAME_DEBUG_STATE

stExtraDef* CGame_REDEARTH_A::REDEARTH_A_EXTRA_CUSTOM_30 = NULL;
stExtraDef* CGame_REDEARTH_A::REDEARTH_A_EXTRA_CUSTOM_31 = NULL;

int CGame_REDEARTH_A::rgExtraCountAll_30[REDEARTH_A_NUMUNIT_30 + 1] = { -1 };
int CGame_REDEARTH_A::rgExtraCountAll_31[REDEARTH_A_NUMUNIT_31 + 1] = { -1 };
int CGame_REDEARTH_A::rgExtraLoc_30[REDEARTH_A_NUMUNIT_30 + 1] = { -1 };
int CGame_REDEARTH_A::rgExtraLoc_31[REDEARTH_A_NUMUNIT_31 + 1] = { -1 };

CDescTree CGame_REDEARTH_A::MainDescTree_30 = nullptr;
CDescTree CGame_REDEARTH_A::MainDescTree_31 = nullptr;

int CGame_REDEARTH_A::m_nRedEarthMode = 31;
UINT32 CGame_REDEARTH_A::m_nTotalPaletteCount30 = 0;
UINT32 CGame_REDEARTH_A::m_nTotalPaletteCount31 = 0;

UINT32 CGame_REDEARTH_A::m_nExpectedGameROMSize = 0x800000; // 8388608 bytes
UINT32 CGame_REDEARTH_A::m_nConfirmedROMSize = -1;

void CGame_REDEARTH_A::InitializeStatics()
{
    safe_delete_array(CGame_REDEARTH_A::REDEARTH_A_EXTRA_CUSTOM_30);
    safe_delete_array(CGame_REDEARTH_A::REDEARTH_A_EXTRA_CUSTOM_31);

    memset(rgExtraCountAll_30, -1, sizeof(rgExtraCountAll_30));
    memset(rgExtraCountAll_31, -1, sizeof(rgExtraCountAll_31));
    memset(rgExtraLoc_30, -1, sizeof(rgExtraLoc_30));
    memset(rgExtraLoc_31, -1, sizeof(rgExtraLoc_31));

    MainDescTree_30.SetRootTree(CGame_REDEARTH_A::InitDescTree(30));
    MainDescTree_31.SetRootTree(CGame_REDEARTH_A::InitDescTree(31));
}

CGame_REDEARTH_A::CGame_REDEARTH_A(UINT32 nConfirmedROMSize /* = -1 */, int nRedEarthModeToLoad /* = 31 */)
{
    createPalOptions = { NO_SPECIAL_OPTIONS, WRITE_MAX };
    SetAlphaMode(AlphaMode::GameUsesFixedAlpha);
    SetColorMode(ColMode::COLMODE_RGB555_LE);

    // We need this set before we initialize so that corrupt Extras truncate correctly.
    // Otherwise the new user inadvertently corrupts their ROM.
    m_nConfirmedROMSize = nConfirmedROMSize;
    InitializeStatics();

    //We need the proper unit amt before we init the main buffer
    m_nRedEarthMode = nRedEarthModeToLoad;

    if (UsePaletteSetFor30())
    {
        OutputDebugString(L"CGame_REDEARTH_A::CGame_REDEARTH_A: Loading for the 30 ROM\n");
        nUnitAmt = REDEARTH_A_NUMUNIT_30 + (GetExtraCt(REDEARTH_A_EXTRALOC_30) ? 1 : 0);
    }
    else
    {
        OutputDebugString(L"CGame_REDEARTH_A::CGame_REDEARTH_A: Loading for the 31 ROM\n");
        nUnitAmt = REDEARTH_A_NUMUNIT_31 + (GetExtraCt(REDEARTH_A_EXTRALOC_31) ? 1 : 0);
    }

    m_nTotalInternalUnits = UsePaletteSetFor30() ? REDEARTH_A_NUMUNIT_30 : REDEARTH_A_NUMUNIT_31;
    m_nExtraUnit = UsePaletteSetFor30() ? REDEARTH_A_EXTRALOC_30 : REDEARTH_A_EXTRALOC_31;

    const UINT32 nSafeCountFor30 = 124;
    const UINT32 nSafeCountFor31 = 605;

    m_nSafeCountForThisRom = UsePaletteSetFor30() ? (nSafeCountFor30 + GetExtraCt(REDEARTH_A_EXTRALOC_30)) : (nSafeCountFor31 + GetExtraCt(REDEARTH_A_EXTRALOC_31));
    m_pszExtraFilename = UsePaletteSetFor30() ? EXTRA_FILENAME_REDEARTH_30 : EXTRA_FILENAME_REDEARTH_31;
    m_nTotalPaletteCount = UsePaletteSetFor30() ? m_nTotalPaletteCount30 : m_nTotalPaletteCount31;
    m_nLowestKnownPaletteRomLocation = UsePaletteSetFor30() ? 0x734000 : 0x132600;

    InitDataBuffer();

    //Set game information
    nGameFlag = REDEARTH_A;
    nImgGameFlag = IMGDAT_SECTION_REDEARTH;
    m_prgGameImageSet = REDEARTH_A_IMG_UNITS;
    nImgUnitAmt = ARRAYSIZE(REDEARTH_A_IMG_UNITS);

    nFileAmt = 1;

    //Set the image out display type
    DisplayType = eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT;
    pButtonLabelSet = DEF_BUTTONLABEL_2_PK;
    m_nNumberOfColorOptions = ARRAYSIZE(DEF_BUTTONLABEL_2_PK);

    //Create the redirect buffer
    rgUnitRedir = new UINT16[nUnitAmt + 1];
    memset(rgUnitRedir, NULL, sizeof(UINT16) * nUnitAmt);

    //Create the file changed flag
    PrepChangeTrackingArray();
}

CGame_REDEARTH_A::~CGame_REDEARTH_A(void)
{
    safe_delete_array(CGame_REDEARTH_A::REDEARTH_A_EXTRA_CUSTOM_30);
    safe_delete_array(CGame_REDEARTH_A::REDEARTH_A_EXTRA_CUSTOM_31);
    //Get rid of the file changed flag
    ClearDataBuffer();
    FlushChangeTrackingArray();
}

int CGame_REDEARTH_A::GetExtraCt(UINT16 nUnitId, BOOL bCountVisibleOnly)
{
    int* rgExtraCt = UsePaletteSetFor30() ? (int*)rgExtraCountAll_30 : (int*)rgExtraCountAll_31;

    if (rgExtraCt[0] == -1)
    {
        int nDefCtr = 0;
        memset(rgExtraCt, 0, ((UsePaletteSetFor30() ? REDEARTH_A_NUMUNIT_30 : REDEARTH_A_NUMUNIT_31) + 1) * sizeof(int));

        stExtraDef* pCurrDef = GetRedEarthExtraDef(0);

        while (pCurrDef->uUnitN != INVALID_UNIT_VALUE)
        {
            rgExtraCt[pCurrDef->uUnitN]++;
            nDefCtr++;
            pCurrDef = GetRedEarthExtraDef(nDefCtr);
        }
    }

    return rgExtraCt[nUnitId];
}

int CGame_REDEARTH_A::GetExtraLoc(UINT16 nUnitId)
{
    int* rgExtraLocations = UsePaletteSetFor30() ? (int*)rgExtraLoc_30 : (int*)rgExtraLoc_31;

    if (rgExtraLocations[0] == -1)
    {
        int nDefCtr = 0;
        int nCurrUnit = UNIT_START_VALUE;
        memset(rgExtraLocations, 0, ((UsePaletteSetFor30() ? REDEARTH_A_NUMUNIT_30 : REDEARTH_A_NUMUNIT_31) + 1) * sizeof(int));

        stExtraDef* pCurrDef = GetRedEarthExtraDef(0);

        while (pCurrDef->uUnitN != INVALID_UNIT_VALUE)
        {
            if (pCurrDef->uUnitN != nCurrUnit)
            {
                rgExtraLocations[pCurrDef->uUnitN] = nDefCtr;
                nCurrUnit = pCurrDef->uUnitN;
            }

            nDefCtr++;
            pCurrDef = GetRedEarthExtraDef(nDefCtr);
        }
    }

    return rgExtraLocations[nUnitId];
}

CDescTree* CGame_REDEARTH_A::GetMainTree()
{
    if (UsePaletteSetFor30())
    {
        return &CGame_REDEARTH_A::MainDescTree_30;
    }
    else
    {
        return &CGame_REDEARTH_A::MainDescTree_31;
    }
}

void CGame_REDEARTH_A::InitDataBuffer()
{
    m_nBufferRedEarthMode = m_nRedEarthMode;
    m_pppDataBuffer = new UINT16 * *[nUnitAmt];
    memset(m_pppDataBuffer, 0, sizeof(UINT16**) * nUnitAmt);
}

void CGame_REDEARTH_A::ClearDataBuffer()
{
    // We walk the tree to clear it according to RedEarth mode, but if you live switch games
    // we would use the new mode incorrectly as we clear the old buffer.
    int nCurrentRedEarthMode = m_nRedEarthMode;

    m_nRedEarthMode = m_nBufferRedEarthMode;

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

    m_nRedEarthMode = nCurrentRedEarthMode;
}

sDescTreeNode* CGame_REDEARTH_A::InitDescTree(int nPaletteSetToUse)
{
    UINT32 nTotalPaletteCount = 0;
    m_nRedEarthMode = nPaletteSetToUse;

#ifdef REDEARTH_A_USEEXTRAFILE
    if (UsePaletteSetFor30())
    {
        //Load extra file if we're using it
        LoadExtraFileForGame(EXTRA_FILENAME_REDEARTH_30, REDEARTH_A_EXTRA, &REDEARTH_A_EXTRA_CUSTOM_30, REDEARTH_A_EXTRALOC_30, m_nConfirmedROMSize);
    }
    else
    {
        //Load extra file if we're using it
        LoadExtraFileForGame(EXTRA_FILENAME_REDEARTH_31, REDEARTH_A_EXTRA, &REDEARTH_A_EXTRA_CUSTOM_31, REDEARTH_A_EXTRALOC_31, m_nConfirmedROMSize);
    }
#endif

    bool fHaveExtras = ((UsePaletteSetFor30() ? GetExtraCt(REDEARTH_A_EXTRALOC_30) : GetExtraCt(REDEARTH_A_EXTRALOC_31)) > 0);
    UINT16 nUnitCt = UsePaletteSetFor30() ? (REDEARTH_A_NUMUNIT_30 + (GetExtraCt(REDEARTH_A_EXTRALOC_30) ? 1 : 0)) :
                                            (REDEARTH_A_NUMUNIT_31 + (GetExtraCt(REDEARTH_A_EXTRALOC_31) ? 1 : 0));

    sDescTreeNode* NewDescTree = new sDescTreeNode;

    //Create the main character tree
    _snwprintf_s(NewDescTree->szDesc, ARRAYSIZE(NewDescTree->szDesc), _TRUNCATE, L"%s", g_GameFriendlyName[REDEARTH_A]);
    NewDescTree->ChildNodes = new sDescTreeNode[nUnitCt];
    NewDescTree->uChildAmt = nUnitCt;
    //All units have tree children
    NewDescTree->uChildType = DESC_NODETYPE_TREE;

    CString strMsg;
    strMsg.Format(L"CGame_REDEARTH_A::InitDescTree: Building desc tree for REDEARTH_A...\n");
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

        if (UsePaletteSetFor30() ? (iUnitCtr != REDEARTH_A_EXTRALOC_30) : (iUnitCtr != REDEARTH_A_EXTRALOC_31))
        {
            //Set each description
            _snwprintf_s(UnitNode->szDesc, ARRAYSIZE(UnitNode->szDesc), _TRUNCATE, L"%s", UsePaletteSetFor30() ? REDEARTH_A_UNITS_30[iUnitCtr].szDesc : REDEARTH_A_UNITS_31[iUnitCtr].szDesc);

            UnitNode->ChildNodes = new sDescTreeNode[nUnitChildCount];
            //All children have collection trees
            UnitNode->uChildType = DESC_NODETYPE_TREE;
            UnitNode->uChildAmt = nUnitChildCount;

#if REDEARTH_A_DEBUG
            strMsg.Format(L"Unit: \"%s\", %u of %u, %u total children\n", UnitNode->szDesc, iUnitCtr + 1, nUnitCt, UnitNode->uChildAmt);
            OutputDebugString(strMsg);
#endif

            UINT16 nTotalPalettesUsedInUnit = 0;

            //Set data for each child group ("collection")
            for (UINT16 iCollectionCtr = 0; iCollectionCtr < nUnitChildCount; iCollectionCtr++)
            {
                CollectionNode = &((sDescTreeNode*)UnitNode->ChildNodes)[iCollectionCtr];

                //Set each collection data

                // Default label, since these aren't associated to collections
                _snwprintf_s(CollectionNode->szDesc, ARRAYSIZE(CollectionNode->szDesc), _TRUNCATE, GetDescriptionForCollection(iUnitCtr, iCollectionCtr));
                //Collection children have nodes
                UINT16 nListedChildrenCount = GetNodeCountForCollection(iUnitCtr, iCollectionCtr);
                CollectionNode->uChildType = DESC_NODETYPE_NODE;
                CollectionNode->uChildAmt = nListedChildrenCount;
                CollectionNode->ChildNodes = (sDescTreeNode*)new sDescNode[nListedChildrenCount];

#if REDEARTH_A_DEBUG
                strMsg.Format(L"\tCollection: \"%s\", %u of %u, %u children\n", CollectionNode->szDesc, iCollectionCtr + 1, nUnitChildCount, nListedChildrenCount);
                OutputDebugString(strMsg);
#endif

                const sGame_PaletteDataset* paletteSetToUse = GetPaletteSet(iUnitCtr, iCollectionCtr);

                //Set each collection's extra nodes: convert the sGame_PaletteDataset to sDescTreeNodes
                for (UINT16 nNodeIndex = 0; nNodeIndex < nListedChildrenCount; nNodeIndex++)
                {
                    ChildNode = &((sDescNode*)CollectionNode->ChildNodes)[nNodeIndex];

                    _snwprintf_s(ChildNode->szDesc, ARRAYSIZE(ChildNode->szDesc), _TRUNCATE, L"%s", paletteSetToUse[nNodeIndex].szPaletteName);

                    ChildNode->uUnitId = iUnitCtr; // but this doesn't work in the new layout does it...?
                    ChildNode->uPalId = nTotalPalettesUsedInUnit++;
                    nTotalPaletteCount++;

#if REDEARTH_A_DEBUG
                    strMsg.Format(L"\t\tPalette: \"%s\", %u of %u", ChildNode->szDesc, nNodeIndex + 1, nListedChildrenCount);
                    OutputDebugString(strMsg);
                    strMsg.Format(L", 0x%06x to 0x%06x (%u colors),", paletteSetToUse[nNodeIndex].nPaletteOffset, paletteSetToUse[nNodeIndex].nPaletteOffsetEnd, (paletteSetToUse[nNodeIndex].nPaletteOffsetEnd - paletteSetToUse[nNodeIndex].nPaletteOffset) / 2);
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
            UnitNode->ChildNodes = new sDescTreeNode[1]; // Only 1, L"Extra Palettes)"
            UnitNode->uChildType = DESC_NODETYPE_TREE;
            UnitNode->uChildAmt = 1;

#if REDEARTH_A_DEBUG
            strMsg.Format(L"Unit (Extras): %s, %u of %u, %u total children\n", UnitNode->szDesc, iUnitCtr + 1, nUnitCt, nUnitChildCount);
            OutputDebugString(strMsg);
#endif

        }

        //Set up extra nodes
        if (bUseExtra)
        {
            int nExtraPos = GetExtraLoc(iUnitCtr);
            int nCurrExtra = 0;

            if (UsePaletteSetFor30())
            {
                CollectionNode = &((sDescTreeNode*)UnitNode->ChildNodes)[((REDEARTH_A_EXTRALOC_30) > iUnitCtr) ? (nUnitChildCount - 1) : 0]; //Extra node
            }
            else
            {
                CollectionNode = &((sDescTreeNode*)UnitNode->ChildNodes)[((REDEARTH_A_EXTRALOC_31) > iUnitCtr) ? (nUnitChildCount - 1) : 0]; //Extra node
            }

            _snwprintf_s(CollectionNode->szDesc, ARRAYSIZE(CollectionNode->szDesc), _TRUNCATE, L"Extra");

            CollectionNode->ChildNodes = new sDescTreeNode[nExtraCt];

            CollectionNode->uChildType = DESC_NODETYPE_NODE;
            CollectionNode->uChildAmt = nExtraCt; //EX + Extra

            for (UINT16 nExtraCtr = 0; nExtraCtr < nExtraCt; nExtraCtr++)
            {
                ChildNode = &((sDescNode*)CollectionNode->ChildNodes)[nExtraCtr];

                stExtraDef* pCurrDef = GetRedEarthExtraDef(nExtraPos + nCurrExtra);

                _snwprintf_s(ChildNode->szDesc, ARRAYSIZE(ChildNode->szDesc), _TRUNCATE, pCurrDef->szDesc);

                ChildNode->uUnitId = iUnitCtr;
                ChildNode->uPalId = (((UsePaletteSetFor30() ? REDEARTH_A_EXTRALOC_30 : REDEARTH_A_EXTRALOC_31) > iUnitCtr ? 1 : 0) * nUnitChildCount * 2) + nCurrExtra;

#if REDEARTH_A_DEBUG
                strMsg.Format(L"\t\tPalette: %s, %u of %u\n", ChildNode->szDesc, nExtraCtr + 1, nExtraCt);
                OutputDebugString(strMsg);
#endif

                nCurrExtra++;
                nTotalPaletteCount++;
            }
        }
    }

    strMsg.Format(L"CGame_REDEARTH_A::InitDescTree: Loaded %u palettes for REDEARTH ROM %u\n", nTotalPaletteCount, m_nRedEarthMode);
    OutputDebugString(strMsg);

    if (UsePaletteSetFor30())
    {
        m_nTotalPaletteCount30 = nTotalPaletteCount;
    }
    else
    {
        m_nTotalPaletteCount31 = nTotalPaletteCount;
    }

    return NewDescTree;
}

sFileRule CGame_REDEARTH_A::GetRule(UINT16 nUnitId)
{
    sFileRule NewFileRule;

    _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, L"31");

    NewFileRule.uUnitId = 0;
    NewFileRule.uVerifyVar = m_nExpectedGameROMSize;

    return NewFileRule;
}

UINT32 CGame_REDEARTH_A::GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet, bool* pfNeedToValidateCRCs)
{
    static sCRC32ValueSet knownROMs[] =
    {
        { L"Red Earth: Stages (Arcade ROM 30)", L"30", 0x074cab4d, 0 },
        { L"Red Earth: Characters (Arcade ROM 31)", L"31", 0x14e2cad4, 0 },
    };

    if (ppKnownROMSet != nullptr)
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

UINT16 CGame_REDEARTH_A::GetCollectionCountForUnit(UINT16 nUnitId)
{
    if (UsePaletteSetFor30())
    {
        if (nUnitId == REDEARTH_A_EXTRALOC_30)
        {
            return GetExtraCt(nUnitId);
        }
        else
        {
            return REDEARTH_A_UNITS_30[nUnitId].uChildAmt;
        }
    }
    else
    {
        if (nUnitId == REDEARTH_A_EXTRALOC_31)
        {
            return GetExtraCt(nUnitId);
        }
        else
        {
            return REDEARTH_A_UNITS_31[nUnitId].uChildAmt;
        }
    }
}

UINT16 CGame_REDEARTH_A::GetNodeCountForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    if (UsePaletteSetFor30())
    {
        if (nUnitId == REDEARTH_A_EXTRALOC_30)
        {
            return GetExtraCt(nUnitId);
        }
        else
        {
            const sDescTreeNode* pCollectionNode = (const sDescTreeNode*)(REDEARTH_A_UNITS_30[nUnitId].ChildNodes);
            return pCollectionNode[nCollectionId].uChildAmt;
        }
    }
    else
    {
        if (nUnitId == REDEARTH_A_EXTRALOC_31)
        {
            return GetExtraCt(nUnitId);
        }
        else
        {
            const sDescTreeNode* pCollectionNode = (const sDescTreeNode*)(REDEARTH_A_UNITS_31[nUnitId].ChildNodes);
            return pCollectionNode[nCollectionId].uChildAmt;
        }
    }
}

LPCWSTR CGame_REDEARTH_A::GetDescriptionForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    if (UsePaletteSetFor30())
    {
        if (nUnitId == REDEARTH_A_EXTRALOC_30)
        {
            return L"Extra Palettes";
        }
        else
        {
            const sDescTreeNode* pCollection = (const sDescTreeNode*)REDEARTH_A_UNITS_30[nUnitId].ChildNodes;
            return pCollection[nCollectionId].szDesc;
        }
    }
    else
    {
        if (nUnitId == REDEARTH_A_EXTRALOC_31)
        {
            return L"Extra Palettes";
        }
        else
        {
            const sDescTreeNode* pCollection = (const sDescTreeNode*)REDEARTH_A_UNITS_31[nUnitId].ChildNodes;
            return pCollection[nCollectionId].szDesc;
        }
    }
}

UINT16 CGame_REDEARTH_A::GetPaletteCountForUnit(UINT16 nUnitId)
{
    if (UsePaletteSetFor30())
    {
        if (nUnitId == REDEARTH_A_EXTRALOC_30)
        {
            return GetExtraCt(nUnitId);
        }
        else
        {
            UINT16 nCompleteCount = 0;
            UINT16 nCollectionCount = REDEARTH_A_UNITS_30[nUnitId].uChildAmt;
            const sDescTreeNode* pCurrentCollection = (const sDescTreeNode*)(REDEARTH_A_UNITS_30[nUnitId].ChildNodes);

            for (UINT16 nCollectionIndex = 0; nCollectionIndex < nCollectionCount; nCollectionIndex++)
            {
                nCompleteCount += pCurrentCollection[nCollectionIndex].uChildAmt;
            }

            return nCompleteCount;
        }
    }
    else
    {
        if (nUnitId == REDEARTH_A_EXTRALOC_31)
        {
            return GetExtraCt(nUnitId);
        }
        else
        {
            UINT16 nCompleteCount = 0;
            UINT16 nCollectionCount = REDEARTH_A_UNITS_31[nUnitId].uChildAmt;
            const sDescTreeNode* pCurrentCollection = (const sDescTreeNode*)(REDEARTH_A_UNITS_31[nUnitId].ChildNodes);

            for (UINT16 nCollectionIndex = 0; nCollectionIndex < nCollectionCount; nCollectionIndex++)
            {
                nCompleteCount += pCurrentCollection[nCollectionIndex].uChildAmt;
            }

            return nCompleteCount;
        }
    }
}

const sGame_PaletteDataset* CGame_REDEARTH_A::GetPaletteSet(UINT16 nUnitId, UINT16 nCollectionId)
{
    // Don't use this for Extra palettes.
    if (UsePaletteSetFor30())
    {
        const sDescTreeNode* pCurrentSet = (const sDescTreeNode*)REDEARTH_A_UNITS_30[nUnitId].ChildNodes;
        return ((sGame_PaletteDataset*)(pCurrentSet[nCollectionId].ChildNodes));
    }
    else
    {
        const sDescTreeNode* pCurrentSet = (const sDescTreeNode*)REDEARTH_A_UNITS_31[nUnitId].ChildNodes;
        return ((sGame_PaletteDataset*)(pCurrentSet[nCollectionId].ChildNodes));
    }
}

const sGame_PaletteDataset* CGame_REDEARTH_A::GetSpecificPalette(UINT16 nUnitId, UINT16 nPaletteId)
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

UINT16 CGame_REDEARTH_A::GetNodeSizeFromPaletteId(UINT16 nUnitId, UINT16 nPaletteId)
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

const sDescTreeNode* CGame_REDEARTH_A::GetNodeFromPaletteId(UINT16 nUnitId, UINT16 nPaletteId, bool fReturnBasicNodesOnly)
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
            const sDescTreeNode* pCollectionNodeToCheck = (const sDescTreeNode*)(UsePaletteSetFor30() ? REDEARTH_A_UNITS_30[nUnitId].ChildNodes : REDEARTH_A_UNITS_31[nUnitId].ChildNodes);

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

void CGame_REDEARTH_A::LoadSpecificPaletteData(UINT16 nUnitId, UINT16 nPalId)
{
    if (UsePaletteSetFor30() ? (nUnitId != REDEARTH_A_EXTRALOC_30) :
                                (nUnitId != REDEARTH_A_EXTRALOC_31))
    {
        int cbPaletteSizeOnDisc = 0;
        const sGame_PaletteDataset* paletteData = GetSpecificPalette(nUnitId, nPalId);

        cbPaletteSizeOnDisc = (int)max(0, (paletteData->nPaletteOffsetEnd - paletteData->nPaletteOffset));

        m_nCurrentPaletteROMLocation = paletteData->nPaletteOffset;

        m_nCurrentPaletteSizeInColors = cbPaletteSizeOnDisc / m_nSizeOfColorsInBytes;
        m_pszCurrentPaletteName = paletteData->szPaletteName;
    }
    else // REDEARTH_A_EXTRALOC
    {
        // This is where we handle all the palettes added in via Extra.
        stExtraDef* pCurrDef = GetRedEarthExtraDef(GetExtraLoc(nUnitId) + nPalId);

        m_nCurrentPaletteROMLocation = pCurrDef->uOffset;
        m_nCurrentPaletteSizeInColors = (pCurrDef->cbPaletteSize / m_nSizeOfColorsInBytes);
        m_pszCurrentPaletteName = pCurrDef->szDesc;
    }
}

bool CGame_REDEARTH_A::CanEnableMultispriteExport(UINT16 nUnitId, UINT16 nPalId)
{
    bool isBalanced = false;

    const sDescTreeNode* pUnitTree = UsePaletteSetFor30() ? &(REDEARTH_A_UNITS_30[nUnitId]) : &(REDEARTH_A_UNITS_31[nUnitId]);

    // Only enable for character nodes
    if (pUnitTree->uChildAmt >= m_nNumberOfColorOptions)
    {
        const sDescTreeNode* pCurrentCollection = (const sDescTreeNode*)(pUnitTree->ChildNodes);

        isBalanced = (pCurrentCollection[0].uChildAmt == pCurrentCollection[1].uChildAmt);

        if (isBalanced)
        {
            // We know the button nodes are balanced... but are we in a core button node?
            isBalanced = nPalId < (m_nNumberOfColorOptions* pCurrentCollection[0].uChildAmt);
        }
    }

    return isBalanced;
}

BOOL CGame_REDEARTH_A::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
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

        if (paletteDataSet)
        {
            nImgUnitId = paletteDataSet->indexImgToUse;
            nTargetImgId = paletteDataSet->indexOffsetToUse;

            const sDescTreeNode* pCurrentNode = GetNodeFromPaletteId(NodeGet->uUnitId, NodeGet->uPalId, true);

            if (pCurrentNode) // For Basic nodes, we can allow multisprite view in the Export dialog
            {
                if (((_wcsicmp(pCurrentNode->szDesc, pButtonLabelSet[0]) == 0) || (_wcsicmp(pCurrentNode->szDesc, pButtonLabelSet[1]) == 0)) &&
                    CanEnableMultispriteExport(NodeGet->uUnitId, NodeGet->uPalId)) // make sure we're in a balanced node, since we have unbalanced P palettes
                {
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
                int nXOffs = paletteDataSet->pPalettePairingInfo->nXOffs;
                int nYOffs = paletteDataSet->pPalettePairingInfo->nYOffs;
                INT8 nPeerPaletteDistance = paletteDataSet->pPalettePairingInfo->nNodeIncrementToPartner;

                const sGame_PaletteDataset* paletteDataSetToJoin = GetSpecificPalette(NodeGet->uUnitId, NodeGet->uPalId + nPeerPaletteDistance);

                if (paletteDataSetToJoin)
                {
                    fShouldUseAlternateLoadLogic = true;

                    ClearSetImgTicket(
                        CreateImgTicket(paletteDataSet->indexImgToUse, paletteDataSet->indexOffsetToUse,
                            CreateImgTicket(paletteDataSetToJoin->indexImgToUse, paletteDataSetToJoin->indexOffsetToUse, nullptr, nXOffs, nYOffs)
                        )
                    );

                    //Set each palette
                    sDescNode* JoinedNode[2] = {
                       GetMainTree()->GetDescNode(Node01, Node02, Node03, -1),
                       GetMainTree()->GetDescNode(Node01, Node02, Node03 + nPeerPaletteDistance, -1)
                    };

                    //Set each palette
                    CreateDefPal(JoinedNode[0], 0);
                    CreateDefPal(JoinedNode[1], 1);

                    SetSourcePal(0, NodeGet->uUnitId, nSrcStart, nSrcAmt, nNodeIncrement);
                    SetSourcePal(1, NodeGet->uUnitId, nSrcStart + nPeerPaletteDistance, nSrcAmt, nNodeIncrement);
                }
            }
        }
    }
    else // Extra region
    {
        stExtraDef* pCurrDef = GetRedEarthExtraDef(GetExtraLoc(NodeGet->uUnitId) + NodeGet->uPalId);

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

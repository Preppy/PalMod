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
UINT32 CGame_SF2HF_A::m_nExpectedGameROMSize_HF = 0x80000; // 524288 bytes
UINT32 CGame_SF2HF_A::m_nExpectedGameROMSize_30th = 0x7d191f;

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

    createPalOptions = { (UINT8)(IsSF30thBundleFile() ? NO_SPECIAL_OPTIONS : OFFSET_PALETTE_BY_ONE), WRITE_16 };
    SetAlphaMode(AlphaMode::GameDoesNotUseAlpha);
    SetColorMode(IsSF30thBundleFile() ? ColMode::COLMODE_12A_LE : ColMode::COLMODE_12A);

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
    strInfo.Format(L"CGame_SF2HF_A::CGame_SF2HF_A: Loaded SF2HF_A with %u Extras\n", GetExtraCt(m_nExtraUnit));
    OutputDebugString(strInfo);

    InitDataBuffer();

    //Set game information
    nGameFlag = SF2HF_A;
    nImgGameFlag = IMGDAT_SECTION_SF2;
    m_prgGameImageSet = SF2HF_A_IMG_UNITS;
    nImgUnitAmt = ARRAYSIZE(SF2HF_A_IMG_UNITS);

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
        { L"Street Fighter II' - Hyper Fighting (US 921209)", L"s2tu_21.6f", 0xfd200288, 0 },
        { L"Street Fighter II' - Hyper Fighting (US 921209)", L"s2tu_22.7f", 0xaea6e035, 0 },

        { L"Street Fighter II' - Hyper Fighting (World 921209)", L"s2te_21.6f", 0xfd200288, 0 },
        { L"Street Fighter II' - Hyper Fighting (World 921209)", L"s2te_22.7f", 0xaea6e035, 0 },

        { L"Street Fighter II' - Hyper Fighting (Japan 921209)", L"s2tj_21.6f", 0xfd200288, 0 },
        { L"Street Fighter II' - Hyper Fighting (Japan 921209)", L"s2tj_22.7f", 0xaea6e035, 0 },

        { L"Street Fighter II' - Hyper Fighting (30th Anniversary)", L"bundleStreetFighterII_HF.mbundle", 0, 0 },
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
    _snwprintf_s(NewDescTree->szDesc, ARRAYSIZE(NewDescTree->szDesc), _TRUNCATE, L"%s", g_GameFriendlyName[SF2HF_A]);
    NewDescTree->ChildNodes = new sDescTreeNode[nUnitCt];
    NewDescTree->uChildAmt = nUnitCt;
    //All units have tree children
    NewDescTree->uChildType = DESC_NODETYPE_TREE;

    CString strMsg;
    strMsg.Format(L"CGame_SF2HF_A::InitDescTree: Building desc tree for SF2HF_A ROM %u...\n", m_nSelectedRom);
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
            _snwprintf_s(UnitNode->szDesc, ARRAYSIZE(UnitNode->szDesc), _TRUNCATE, L"%s", GetCurrentUnitSet()[iUnitCtr].szDesc);

            UnitNode->ChildNodes = new sDescTreeNode[nUnitChildCount];
            //All children have collection trees
            UnitNode->uChildType = DESC_NODETYPE_TREE;
            UnitNode->uChildAmt = nUnitChildCount;

#if SF2HF_A_DEBUG
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

#if SF2HF_A_DEBUG
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

#if SF2HF_A_DEBUG
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

#if SF2HF_A_DEBUG
            strMsg.Format(L"Unit (Extras): %s, %u of %u, %u total children\n", UnitNode->szDesc, iUnitCtr + 1, nUnitCt, nUnitChildCount);
            OutputDebugString(strMsg);
#endif

        }

        //Set up extra nodes
        if (bUseExtra)
        {
            int nExtraPos = GetExtraLoc(iUnitCtr);
            int nCurrExtra = 0;

            CollectionNode = &((sDescTreeNode*)UnitNode->ChildNodes)[(nExtraUnitLocation > iUnitCtr) ? (nUnitChildCount - 1) : 0]; //Extra node
            _snwprintf_s(CollectionNode->szDesc, ARRAYSIZE(CollectionNode->szDesc), _TRUNCATE, L"Extra");

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

                _snwprintf_s(ChildNode->szDesc, ARRAYSIZE(ChildNode->szDesc), _TRUNCATE, pCurrDef->szDesc);

                ChildNode->uUnitId = iUnitCtr;
                ChildNode->uPalId = (((nExtraUnitLocation > iUnitCtr) ? 1 : 0) * nUnitChildCount * 2) + nCurrExtra;

#if SF2HF_A_DEBUG
                strMsg.Format(L"\t\tPalette: %s, %u of %u\n", ChildNode->szDesc, nExtraCtr + 1, nExtraCt);
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

    strMsg.Format(L"CGame_SF2HF_A::InitDescTree: Loaded %u palettes for SF2HF ROM %u\n", nTotalPaletteCount, m_nSelectedRom);
    OutputDebugString(strMsg);

    return NewDescTree;
}

sFileRule CGame_SF2HF_A::GetRule(UINT16 nUnitId)
{
    sFileRule NewFileRule;

    _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, L"s2te_21.6f");

    NewFileRule.uUnitId = 0;
    NewFileRule.uVerifyVar = -1;

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

LPCWSTR CGame_SF2HF_A::GetDescriptionForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    if (nUnitId == GetCurrentExtraLoc())
    {
        return L"Extra Palettes";
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
        strMsg.Format(L"CGame_SF2HF_A::GetPaletteCountForUnit: %u palettes for unit %u which has %u collections.\n", nCompleteCount, nUnitId, nCollectionCount);
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

        m_nCurrentPaletteSizeInColors = cbPaletteSizeOnDisc / m_nSizeOfColorsInBytes;
        m_pszCurrentPaletteName = paletteData->szPaletteName;

        // shifts:
        // Portraits: 0x70009C
        // Characters: 0x68009C
        if (IsSF30thBundleFile())
        {
            m_nCurrentPaletteROMLocation += UsePaletteSetForSelect() ? 0x70009C : 0x68009C;
        }
    }
    else // SF2HF_A_EXTRALOC
    {
        // This is where we handle all the palettes added in via Extra.
        stExtraDef* pCurrDef = GetCurrentExtraDef(GetExtraLoc(nUnitId) + nPalId);

        m_nCurrentPaletteROMLocation = pCurrDef->uOffset;
        m_nCurrentPaletteSizeInColors = (pCurrDef->cbPaletteSize / m_nSizeOfColorsInBytes);
        m_pszCurrentPaletteName = pCurrDef->szDesc;
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
            if ((_wcsicmp(pCurrentNode->szDesc, DEF_BUTTONLABEL_2[0]) == 0) ||
                (_wcsicmp(pCurrentNode->szDesc, DEF_BUTTONLABEL_2[1]) == 0))
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

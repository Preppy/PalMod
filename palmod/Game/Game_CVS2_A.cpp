#include "StdAfx.h"
#include "GameDef.h"
#include "Game_CVS2_A.h"
#include "..\PalMod.h"
#include "..\RegProc.h"

#define CVS2_A_DEBUG DEFAULT_GAME_DEBUG_STATE

stExtraDef* CGame_CVS2_A::CVS2_A_EXTRA_CUSTOM = nullptr;

CDescTree CGame_CVS2_A::MainDescTree = nullptr;

int CGame_CVS2_A::rgExtraCountAll[CVS2_A_NUMUNIT + 1];
int CGame_CVS2_A::rgExtraLoc[CVS2_A_NUMUNIT + 1];

UINT32 CGame_CVS2_A::m_nTotalPaletteCountForCVS2 = 0;
UINT32 CGame_CVS2_A::m_nExpectedGameROMSize = 0x9800000;  // 159,383,552 bytes
UINT32 CGame_CVS2_A::m_nConfirmedROMSize = -1;

void CGame_CVS2_A::InitializeStatics()
{
    safe_delete_array(CGame_CVS2_A::CVS2_A_EXTRA_CUSTOM);

    memset(rgExtraCountAll, -1, sizeof(rgExtraCountAll));
    memset(rgExtraLoc, -1, sizeof(rgExtraLoc));

    MainDescTree.SetRootTree(CGame_CVS2_A::InitDescTree());
}

CGame_CVS2_A::CGame_CVS2_A(UINT32 nConfirmedROMSize)
{
    CString strMessage;
    strMessage.Format(L"CGame_CVS2_A::CGame_CVS2_A: Loading ROM...\n");
    OutputDebugString(strMessage);

    createPalOptions = { NO_SPECIAL_OPTIONS, WRITE_MAX };
    SetAlphaMode(AlphaMode::GameUsesFixedAlpha);
    SetColorMode(ColMode::COLMODE_15ALT);

    // We need this set before we initialize so that corrupt Extras truncate correctly.
    // Otherwise the new user inadvertently corrupts their ROM.
    m_nConfirmedROMSize = nConfirmedROMSize;
    InitializeStatics();

    m_nTotalInternalUnits = CVS2_A_NUMUNIT;
    m_nExtraUnit = CVS2_A_EXTRALOC;

    m_nSafeCountForThisRom = GetExtraCt(m_nExtraUnit) + 2296;
    m_pszExtraFilename = EXTRA_FILENAME_CVS2_A;
    m_nTotalPaletteCount = m_nTotalPaletteCountForCVS2;
    // This magic number is used to warn users if their Extra file is trying to write somewhere potentially unusual
    m_nLowestKnownPaletteRomLocation = 0x1488e80;

    nUnitAmt = m_nTotalInternalUnits + (GetExtraCt(m_nExtraUnit) ? 1 : 0);

    InitDataBuffer();

    //Set game information
    nGameFlag = CVS2_A;
    nImgGameFlag = IMGDAT_SECTION_CVS2;
    m_prgGameImageSet = CVS2_A_IMG_UNITS;
    nImgUnitAmt = ARRAYSIZE(CVS2_A_IMG_UNITS);

    nFileAmt = 1;

    //Set the image out display type
    DisplayType = eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT;

    // Button labels are used for the Export Image dialog
    pButtonLabelSet = DEF_BUTTONLABEL_CVS2;
    m_nNumberOfColorOptions = ARRAYSIZE(DEF_BUTTONLABEL_CVS2);

    //Create the redirect buffer
    rgUnitRedir = new UINT16[nUnitAmt + 1];
    memset(rgUnitRedir, NULL, sizeof(UINT16) * nUnitAmt);

    //Create the file changed flag
    PrepChangeTrackingArray();
}

CGame_CVS2_A::~CGame_CVS2_A(void)
{
    safe_delete_array(CGame_CVS2_A::CVS2_A_EXTRA_CUSTOM);
    ClearDataBuffer();
    //Get rid of the file changed flag
    FlushChangeTrackingArray();
}

CDescTree* CGame_CVS2_A::GetMainTree()
{
    return &CGame_CVS2_A::MainDescTree;
}

int CGame_CVS2_A::GetExtraCt(UINT16 nUnitId, BOOL bCountVisibleOnly)
{
    if (rgExtraCountAll[0] == -1)
    {
        int nDefCtr = 0;
        memset(rgExtraCountAll, 0, ((CVS2_A_NUMUNIT + 1) * sizeof(int)));

        stExtraDef* pCurrDef = GetExtraDefForCVS2(0);

        while (pCurrDef->uUnitN != INVALID_UNIT_VALUE)
        {
            if (!pCurrDef->isInvisible || !bCountVisibleOnly)
            {
                rgExtraCountAll[pCurrDef->uUnitN]++;
            }

            nDefCtr++;
            pCurrDef = GetExtraDefForCVS2(nDefCtr);
        }
    }

    return rgExtraCountAll[nUnitId];
}

int CGame_CVS2_A::GetExtraLoc(UINT16 nUnitId)
{
    if (rgExtraLoc[0] == -1)
    {
        int nDefCtr = 0;
        int nCurrUnit = UNIT_START_VALUE;
        memset(rgExtraLoc, 0, (CVS2_A_NUMUNIT + 1) * sizeof(int));

        stExtraDef* pCurrDef = GetExtraDefForCVS2(0);

        while (pCurrDef->uUnitN != INVALID_UNIT_VALUE)
        {
            if (pCurrDef->uUnitN != nCurrUnit)
            {
                rgExtraLoc[pCurrDef->uUnitN] = nDefCtr;
                nCurrUnit = pCurrDef->uUnitN;
            }

            nDefCtr++;
            pCurrDef = GetExtraDefForCVS2(nDefCtr);
        }
    }

    return rgExtraLoc[nUnitId];
}

void CGame_CVS2_A::DumpAllCharacters()
{
    //Go through each character
    for (UINT16 iUnitCtr = 0; iUnitCtr < ARRAYSIZE(CVS2_CharacterOffsetArray); iUnitCtr++)
    {
        UINT32 nCurrentCharacterOffset = 0;
        UINT16 nPaletteCount = 0;
        const UINT16 k_nCharacterColorCount = ARRAYSIZE(DEF_BUTTONLABEL_CVS2);
        CString strOutput;

        WCHAR szCodeDesc[MAX_DESCRIPTION_LENGTH];
        StrRemoveNonASCII(szCodeDesc, ARRAYSIZE(szCodeDesc), CVS2_CharacterOffsetArray[iUnitCtr].pszCharacterName);

        for (UINT16 iButtonIndex = 0; iButtonIndex < k_nCharacterColorCount; iButtonIndex++)
        {
            nCurrentCharacterOffset = CVS2_CharacterOffsetArray[iUnitCtr].romOffset + (0xc0 * iButtonIndex);

            strOutput.Format(L"const sGame_PaletteDataset CVS2_A_%s_PALETTES_%s[] =\r\n{\r\n", szCodeDesc, DEF_BUTTONLABEL_CVS2[iButtonIndex]);
            OutputDebugString(strOutput);

            strOutput.Format(L"    { L\"Main Sprite\", 0x%07x, 0x%07x, %s },\r\n", 
                nCurrentCharacterOffset, nCurrentCharacterOffset + 0x20,
                CVS2_CharacterOffsetArray[iUnitCtr].pszImageRefName);

            OutputDebugString(strOutput);
            nCurrentCharacterOffset += 0x20;
            nPaletteCount++;

            for (UINT16 iCurrentExtra = 1; iCurrentExtra < 6; iCurrentExtra++)
            {
                const sCVS2_ExtraPair* extraPairInfo = nullptr;

                switch (iCurrentExtra)
                {
                case 1:
                    extraPairInfo = &(CVS2_CharacterOffsetArray[iUnitCtr].sExtra1);
                    break;
                case 2:
                    extraPairInfo = &(CVS2_CharacterOffsetArray[iUnitCtr].sExtra2);
                    break;
                case 3:
                    extraPairInfo = &(CVS2_CharacterOffsetArray[iUnitCtr].sExtra3);
                    break;
                case 4:
                    extraPairInfo = &(CVS2_CharacterOffsetArray[iUnitCtr].sExtra4);
                    break;
                case 5:
                    extraPairInfo = &(CVS2_CharacterOffsetArray[iUnitCtr].sExtra5);
                    break;
                }

                if (extraPairInfo && extraPairInfo->pszExtraName)
                {
                    strOutput.Format(L"    { L\"%s\", 0x%07x, 0x%07x, %s, %u },\r\n", 
                        extraPairInfo->pszExtraName, 
                        nCurrentCharacterOffset, nCurrentCharacterOffset + 0x20,
                        CVS2_CharacterOffsetArray[iUnitCtr].pszImageRefName, extraPairInfo->nImgIndex);
                }
                else
                {
                    strOutput.Format(L"    { L\"Extra %u\", 0x%07x, 0x%07x },\r\n", iCurrentExtra,
                        nCurrentCharacterOffset, nCurrentCharacterOffset + 0x20);
                }

                OutputDebugString(strOutput);
                nCurrentCharacterOffset += 0x20;
                nPaletteCount++;
            }

            OutputDebugString(L"};\r\n\r\n");
        }

        // Now create the collection...
        strOutput.Format(L"const sDescTreeNode CVS2_A_%s_COLLECTION[] =\r\n{\r\n", szCodeDesc);
        OutputDebugString(strOutput);

        for (UINT16 iButtonIndex = 0; iButtonIndex < k_nCharacterColorCount; iButtonIndex++)
        {
            strOutput.Format(L"    { L\"%s\", DESC_NODETYPE_TREE, (void*)CVS2_A_%s_PALETTES_%s, ARRAYSIZE(CVS2_A_%s_PALETTES_%s) },\r\n",
                DEF_BUTTONLABEL_CVS2[iButtonIndex],
                szCodeDesc, DEF_BUTTONLABEL_CVS2[iButtonIndex],
                szCodeDesc, DEF_BUTTONLABEL_CVS2[iButtonIndex]);
            OutputDebugString(strOutput);
        }

        OutputDebugString(L"};\r\n\r\n");
    }

    for (UINT16 iUnitCtr = 0; iUnitCtr < ARRAYSIZE(CVS2_CharacterOffsetArray); iUnitCtr++)
    {
        UINT32 nCurrentCharacterOffset = 0;
        UINT16 nPaletteCount = 0;
        CString strOutput;

        WCHAR szCodeDesc[MAX_DESCRIPTION_LENGTH];
        StrRemoveNonASCII(szCodeDesc, ARRAYSIZE(szCodeDesc), CVS2_CharacterOffsetArray[iUnitCtr].pszCharacterName);


        strOutput.Format(L"    { \"%s\", DESC_NODETYPE_TREE, (void*)CVS2_A_%s_COLLECTION, ARRAYSIZE(CVS2_A_%s_COLLECTION) },\r\n", CVS2_CharacterOffsetArray[iUnitCtr].pszCharacterName,
                                        szCodeDesc, szCodeDesc);
        OutputDebugString(strOutput);
    }
}

sDescTreeNode* CGame_CVS2_A::InitDescTree()
{
    UINT32 nTotalPaletteCount = 0;

    //Load extra file if we're using it
    LoadExtraFileForGame(EXTRA_FILENAME_CVS2_A, CVS2_A_EXTRA, &CVS2_A_EXTRA_CUSTOM, CVS2_A_EXTRALOC, m_nConfirmedROMSize);

    UINT16 nUnitCt = CVS2_A_NUMUNIT + (GetExtraCt(CVS2_A_EXTRALOC) ? 1 : 0);
    
    sDescTreeNode* NewDescTree = new sDescTreeNode;

    //Create the main character tree
    _snwprintf_s(NewDescTree->szDesc, ARRAYSIZE(NewDescTree->szDesc), _TRUNCATE, L"%s", g_GameFriendlyName[CVS2_A]);
    NewDescTree->ChildNodes = new sDescTreeNode[nUnitCt];
    NewDescTree->uChildAmt = nUnitCt;
    //All units have tree children
    NewDescTree->uChildType = DESC_NODETYPE_TREE;

    CString strMsg;
    bool fHaveExtras = (GetExtraCt(CVS2_A_EXTRALOC) > 0);
    strMsg.Format(L"CGame_CVS2_A::InitDescTree: Building desc tree for CVS2_A %s extras...\n", fHaveExtras ? L"with" : L"without");
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

        if (iUnitCtr < CVS2_A_EXTRALOC)
        {
            //Set each description
            _snwprintf_s(UnitNode->szDesc, ARRAYSIZE(UnitNode->szDesc), _TRUNCATE, L"%s", CVS2_A_UNITS[iUnitCtr].szDesc);
            UnitNode->ChildNodes = new sDescTreeNode[nUnitChildCount];
            //All children have collection trees
            UnitNode->uChildType = DESC_NODETYPE_TREE;
            UnitNode->uChildAmt = nUnitChildCount;

#if CVS2_A_DEBUG
            strMsg.Format(L"Unit: \"%s\", %u of %u (%s), %u total children\n", UnitNode->szDesc, iUnitCtr + 1, nUnitCt, bUseExtra ? L"with extras" : L"no extras", nUnitChildCount);
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

#if CVS2_A_DEBUG
                strMsg.Format(L"\tCollection: \"%s\", %u of %u, %u children\n", CollectionNode->szDesc, iCollectionCtr + 1, nUnitChildCount, nListedChildrenCount);
                OutputDebugString(strMsg);
#endif

                const sGame_PaletteDataset* paletteSetToUse = GetPaletteSet(iUnitCtr, iCollectionCtr);

                //Set each collection's extra nodes: convert the sGame_PaletteDataset to sDescTreeNodes
                for (UINT16 nNodeIndex = 0; nNodeIndex < nListedChildrenCount; nNodeIndex++)
                {
                    ChildNode = &((sDescNode*)CollectionNode->ChildNodes)[nNodeIndex];

                    _snwprintf(ChildNode->szDesc, ARRAYSIZE(ChildNode->szDesc), L"%s", paletteSetToUse[nNodeIndex].szPaletteName);

                    ChildNode->uUnitId = iUnitCtr;
                    ChildNode->uPalId = nTotalPalettesUsedInUnit++;
                    nTotalPaletteCount++;

#if CVS2_A_DEBUG
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
            UnitNode->ChildNodes = new sDescTreeNode[1];
            UnitNode->uChildType = DESC_NODETYPE_TREE;
            UnitNode->uChildAmt = 1;

#if CVS2_A_DEBUG
            strMsg.Format(L"Unit (Extras): %s, %u of %u, %u total children\n", UnitNode->szDesc, iUnitCtr + 1, nUnitCt, nUnitChildCount);
            OutputDebugString(strMsg);
#endif
        }

        //Set up extra nodes
        if (bUseExtra)
        {
            int nExtraPos = GetExtraLoc(iUnitCtr);
            int nCurrExtra = 0;

            CollectionNode = &((sDescTreeNode*)UnitNode->ChildNodes)[(CVS2_A_EXTRALOC > iUnitCtr) ? (nUnitChildCount - 1) : 0]; //Extra node

            _snwprintf_s(CollectionNode->szDesc, ARRAYSIZE(CollectionNode->szDesc), _TRUNCATE, L"Extra");

            CollectionNode->ChildNodes = new sDescTreeNode[nExtraCt];

            CollectionNode->uChildType = DESC_NODETYPE_NODE;
            CollectionNode->uChildAmt = nExtraCt; //EX + Extra

#if CVS2_A_DEBUG
            strMsg.Format(L"\tCollection: %s, %u of %u, %u children\n", CollectionNode->szDesc, 1, nUnitChildCount, nExtraCt);
            OutputDebugString(strMsg);
#endif

            for (UINT16 nExtraCtr = 0; nExtraCtr < nExtraCt; nExtraCtr++)
            {
                ChildNode = &((sDescNode*)CollectionNode->ChildNodes)[nExtraCtr];

                stExtraDef* pCurrDef = GetExtraDefForCVS2(nExtraPos + nCurrExtra);

                while (pCurrDef->isInvisible)
                {
                    nCurrExtra++;

                    pCurrDef = GetExtraDefForCVS2(nExtraPos + nCurrExtra);
                }

                _snwprintf_s(ChildNode->szDesc, ARRAYSIZE(ChildNode->szDesc), _TRUNCATE, pCurrDef->szDesc);

                ChildNode->uUnitId = iUnitCtr;
                ChildNode->uPalId = (((CVS2_A_EXTRALOC > iUnitCtr) ? 1 : 0) * nUnitChildCount * 2) + nCurrExtra;

#if CVS2_A_DEBUG
                strMsg.Format(L"\t\tPalette: %s, %u of %u\n", ChildNode->szDesc, nExtraCtr + 1, nExtraCt);
                OutputDebugString(strMsg);
#endif

                nCurrExtra++;
                nTotalPaletteCount++;
            }
        }
    }

    strMsg.Format(L"CGame_CVS2_A::InitDescTree: Loaded %u palettes for CVS2\n", nTotalPaletteCount);
    OutputDebugString(strMsg);

    m_nTotalPaletteCountForCVS2 = nTotalPaletteCount;

    // For development purposes only...
    // DumpAllCharacters();

    return NewDescTree;
}

sFileRule CGame_CVS2_A::GetRule(UINT16 nUnitId)
{
    sFileRule NewFileRule;

    // This value is only used for directory-based games
    _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, L"242-p2.sp2");

    NewFileRule.uUnitId = 0;
    NewFileRule.uVerifyVar = m_nExpectedGameROMSize;

    return NewFileRule;
}

UINT16 CGame_CVS2_A::GetCollectionCountForUnit(UINT16 nUnitId)
{
    if (nUnitId == CVS2_A_EXTRALOC)
    {
        return GetExtraCt(nUnitId);
    }
    else
    {
        return CVS2_A_UNITS[nUnitId].uChildAmt;
    }
}

UINT16 CGame_CVS2_A::GetNodeCountForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    if (nUnitId == CVS2_A_EXTRALOC)
    {
        return GetExtraCt(nUnitId);
    }
    else
    {
        const sDescTreeNode* pCollectionNode = (const sDescTreeNode*)(CVS2_A_UNITS[nUnitId].ChildNodes);

        return pCollectionNode[nCollectionId].uChildAmt;
    }
}

LPCWSTR CGame_CVS2_A::GetDescriptionForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    if (nUnitId == CVS2_A_EXTRALOC)
    {
        return L"Extra Palettes";
    }
    else
    {
        const sDescTreeNode* pCollection = (const sDescTreeNode*)CVS2_A_UNITS[nUnitId].ChildNodes;
        return pCollection[nCollectionId].szDesc;
    }
}

UINT16 CGame_CVS2_A::GetPaletteCountForUnit(UINT16 nUnitId)
{
    if (nUnitId == CVS2_A_EXTRALOC)
    {
        return GetExtraCt(nUnitId);
    }
    else
    {
        UINT16 nCompleteCount = 0;
        const sDescTreeNode* pCompleteROMTree = CVS2_A_UNITS;
        UINT16 nCollectionCount = pCompleteROMTree[nUnitId].uChildAmt;

        const sDescTreeNode* pCurrentCollection = (const sDescTreeNode*)(pCompleteROMTree[nUnitId].ChildNodes);

        for (UINT16 nCollectionIndex = 0; nCollectionIndex < nCollectionCount; nCollectionIndex++)
        {
            nCompleteCount += pCurrentCollection[nCollectionIndex].uChildAmt;
        }

#if CVS2_A_DEBUG
        CString strMsg;
        strMsg.Format(L"CGame_CVS2_A::GetPaletteCountForUnit: %u for unit %u which has %u collections.\n", nCompleteCount, nUnitId, nCollectionCount);
        OutputDebugString(strMsg);
#endif

        return nCompleteCount;
    }
}

const sGame_PaletteDataset* CGame_CVS2_A::GetPaletteSet(UINT16 nUnitId, UINT16 nCollectionId)
{
    // Don't use this for Extra palettes.
    const sDescTreeNode* pCurrentSet = (const sDescTreeNode*)CVS2_A_UNITS[nUnitId].ChildNodes;
    return ((sGame_PaletteDataset*)(pCurrentSet[nCollectionId].ChildNodes));
}

const sDescTreeNode* CGame_CVS2_A::GetNodeFromPaletteId(UINT16 nUnitId, UINT16 nPaletteId, bool fReturnBasicNodesOnly)
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

        if (nUnitId == CVS2_A_EXTRALOC)
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
            const sDescTreeNode* pCollectionNodeToCheck = (const sDescTreeNode*)(CVS2_A_UNITS[nUnitId].ChildNodes);
            
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

const sGame_PaletteDataset* CGame_CVS2_A::GetSpecificPalette(UINT16 nUnitId, UINT16 nPaletteId)
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

void CGame_CVS2_A::LoadSpecificPaletteData(UINT16 nUnitId, UINT16 nPalId)
{
     if (nUnitId != CVS2_A_EXTRALOC)
    {
        int cbPaletteSizeOnDisc = 0;
        const sGame_PaletteDataset* paletteData = GetSpecificPalette(nUnitId, nPalId);

        if (paletteData)
        {
            cbPaletteSizeOnDisc = (int)max(0, (paletteData->nPaletteOffsetEnd - paletteData->nPaletteOffset));

            m_nCurrentPaletteROMLocation = paletteData->nPaletteOffset;
            m_nCurrentPaletteSizeInColors = cbPaletteSizeOnDisc / m_nSizeOfColorsInBytes;
            m_pszCurrentPaletteName = paletteData->szPaletteName;
        }
        else
        {
            // A bogus palette was requested: this is unrecoverable.
            DebugBreak();
        }
    }
    else // CVS2_A_EXTRALOC
    {
        // This is where we handle all the palettes added in via Extra.
        stExtraDef* pCurrDef = GetExtraDefForCVS2(GetExtraLoc(nUnitId) + nPalId);

        m_nCurrentPaletteROMLocation = pCurrDef->uOffset;
        m_nCurrentPaletteSizeInColors = (pCurrDef->cbPaletteSize / m_nSizeOfColorsInBytes);
        m_pszCurrentPaletteName = pCurrDef->szDesc;
    }
}

BOOL CGame_CVS2_A::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
{
    return _UpdatePalImg(CVS2_A_UNITS, rgExtraCountAll, CVS2_A_NUMUNIT, CVS2_A_EXTRALOC, CVS2_A_EXTRA_CUSTOM, Node01, Node02, Node03, Node03);
}

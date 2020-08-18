#include "StdAfx.h"
#include "..\StdAfx.h"
#include "GameDef.h"
#include "Game_KOF02_A.h"
#include "..\PalMod.h"
#include "..\RegProc.h"

#define KOF02_A_DEBUG DEFAULT_GAME_DEBUG_STATE

stExtraDef* CGame_KOF02_A::KOF02_A_EXTRA_CUSTOM = nullptr;

CDescTree CGame_KOF02_A::MainDescTree = nullptr;

int CGame_KOF02_A::rgExtraCountAll[KOF02_A_NUMUNIT + 1];
int CGame_KOF02_A::rgExtraLoc[KOF02_A_NUMUNIT + 1];

UINT32 CGame_KOF02_A::m_nTotalPaletteCountForKOF02 = 0;
UINT32 CGame_KOF02_A::m_nExpectedGameROMSize = 0x400000;  // 4194304 bytes
UINT32 CGame_KOF02_A::m_nConfirmedROMSize = -1;

void CGame_KOF02_A::InitializeStatics()
{
    safe_delete_array(CGame_KOF02_A::KOF02_A_EXTRA_CUSTOM);

    memset(rgExtraCountAll, -1, sizeof(rgExtraCountAll));
    memset(rgExtraLoc, -1, sizeof(rgExtraLoc));

    MainDescTree.SetRootTree(CGame_KOF02_A::InitDescTree());
}

CGame_KOF02_A::CGame_KOF02_A(UINT32 nConfirmedROMSize)
{
    CString strMessage;
    strMessage.Format(_T("CGame_KOF02_A::CGame_KOF02_A: Loading ROM...\n"));
    OutputDebugString(strMessage);

    // We need this set before we initialize so that corrupt Extras truncate correctly.
    // Otherwise the new user inadvertently corrupts their ROM.
    m_nConfirmedROMSize = nConfirmedROMSize;
    InitializeStatics();

    m_nTotalInternalUnits = KOF02_A_NUMUNIT;
    m_nExtraUnit = KOF02_A_EXTRALOC;

    m_nSafeCountForThisRom = GetExtraCt(m_nExtraUnit) + 1804;
    m_pszExtraFilename = EXTRA_FILENAME_KOF02_A;
    m_nTotalPaletteCount = m_nTotalPaletteCountForKOF02;
    // This magic number is used to warn users if their Extra file is trying to write somewhere potentially unusual
    m_nLowestKnownPaletteRomLocation = 0x88b62;

    nUnitAmt = m_nTotalInternalUnits + (GetExtraCt(m_nExtraUnit) ? 1 : 0);

    InitDataBuffer();

    //Set color mode
    SetColMode(COLMODE_NEOGEO);

    //Set palette conversion mode
    BasePalGroup.SetMode(PALTYPE_8);

    //Set game information
    nGameFlag = KOF02_A;
    nImgGameFlag = IMGDAT_SECTION_KOF;
    nImgUnitAmt = KOF02_A_NUM_IMG_UNITS;

    nDisplayW = 8;
    nFileAmt = 1;

    //Set the image out display type
    DisplayType = DISP_DEF;
    // Button labels are used for the Export Image dialog
    pButtonLabel = const_cast<TCHAR*>((TCHAR*)DEF_BUTTONLABEL_NEOGEO);
    m_nNumberOfColorOptions = ARRAYSIZE(DEF_BUTTONLABEL_NEOGEO);

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

CGame_KOF02_A::~CGame_KOF02_A(void)
{
    safe_delete_array(CGame_KOF02_A::KOF02_A_EXTRA_CUSTOM);
    ClearDataBuffer();
    //Get rid of the file changed flag
    safe_delete(rgFileChanged);
}

CDescTree* CGame_KOF02_A::GetMainTree()
{
    return &CGame_KOF02_A::MainDescTree;
}

int CGame_KOF02_A::GetExtraCt(UINT16 nUnitId, BOOL bCountVisibleOnly)
{
    if (rgExtraCountAll[0] == -1)
    {
        int nDefCtr = 0;
        memset(rgExtraCountAll, 0, ((KOF02_A_NUMUNIT + 1) * sizeof(int)));

        stExtraDef* pCurrDef = GetExtraDefForKOF02(0);

        while (pCurrDef->uUnitN != INVALID_UNIT_VALUE)
        {
            if (!pCurrDef->isInvisible || !bCountVisibleOnly)
            {
                rgExtraCountAll[pCurrDef->uUnitN]++;
            }

            nDefCtr++;
            pCurrDef = GetExtraDefForKOF02(nDefCtr);
        }
    }

    return rgExtraCountAll[nUnitId];
}

int CGame_KOF02_A::GetExtraLoc(UINT16 nUnitId)
{
    if (rgExtraLoc[0] == -1)
    {
        int nDefCtr = 0;
        int nCurrUnit = UNIT_START_VALUE;
        memset(rgExtraLoc, 0, (KOF02_A_NUMUNIT + 1) * sizeof(int));

        stExtraDef* pCurrDef = GetExtraDefForKOF02(0);

        while (pCurrDef->uUnitN != INVALID_UNIT_VALUE)
        {
            if (pCurrDef->uUnitN != nCurrUnit)
            {
                rgExtraLoc[pCurrDef->uUnitN] = nDefCtr;
                nCurrUnit = pCurrDef->uUnitN;
            }

            nDefCtr++;
            pCurrDef = GetExtraDefForKOF02(nDefCtr);
        }
    }

    return rgExtraLoc[nUnitId];
}

void CGame_KOF02_A::DumpAllCharacters()
{
    //Go through each character
    for (UINT16 iUnitCtr = 0; iUnitCtr < ARRAYSIZE(KOF02_A_CharacterOffsetArray); iUnitCtr++)
    {
        UINT32 nCurrentCharacterOffset = 0;
        UINT16 nPaletteCount = 0;
        CString strOutput;
        TCHAR szCodeDesc[MAX_DESCRIPTION_LENGTH];

        StrRemoveNonASCII(szCodeDesc, ARRAYSIZE(szCodeDesc), KOF02_A_CharacterOffsetArray[iUnitCtr].pszCharacterName);

        for (UINT16 iButtonIndex = 0; iButtonIndex < 4; iButtonIndex++)
        {
            nCurrentCharacterOffset = KOF02_A_CharacterOffsetArray[iUnitCtr].locationInROM + (0x200 * iButtonIndex);

            strOutput.Format(_T("const sGame_PaletteDataset KOF02_A_%s_PALETTES_%s[] =\r\n{\r\n"), szCodeDesc, DEF_BUTTONLABEL_NEOGEO[iButtonIndex]);
            OutputDebugString(strOutput);

            if (KOF02_A_CharacterOffsetArray[iUnitCtr].pszImageRefName)
            {
                strOutput.Format(_T("    { _T(\"%s %s\"), 0x%07x, 0x%07x, %s },\r\n"), KOF02_A_CharacterOffsetArray[iUnitCtr].pszCharacterName, DEF_BUTTONLABEL_NEOGEO[iButtonIndex],
                    nCurrentCharacterOffset, nCurrentCharacterOffset + 0x20,
                    KOF02_A_CharacterOffsetArray[iUnitCtr].pszImageRefName);
            }
            else
            {
                strOutput.Format(_T("    { _T(\"%s %s\"), 0x%07x, 0x%07x },\r\n"), KOF02_A_CharacterOffsetArray[iUnitCtr].pszCharacterName, DEF_BUTTONLABEL_NEOGEO[iButtonIndex],
                    nCurrentCharacterOffset, nCurrentCharacterOffset + 0x20);
            }

            OutputDebugString(strOutput);
            nCurrentCharacterOffset += 0x20;
            nPaletteCount++;

            const LPCTSTR pszMoveNames[] =
            {
                _T("Hidden Super Desperation Move 1"),
                _T("Desperation Move / Super Desperation Move"),
                _T("Electric Shock Effect"),
                _T("Max Flash"),
                _T("Hidden Super Desperation Move 2"),
                _T("Soul Palette"),
                _T("Hidden Super Desperation Move 3"),
            };

            for (UINT16 iCurrentExtra = 1; iCurrentExtra < 8; iCurrentExtra++)
            {
                if (KOF02_A_CharacterOffsetArray[iUnitCtr].pszImageRefName)
                {
                    strOutput.Format(_T("    { _T(\"%s - %s\"), 0x%07x, 0x%07x, %s },\r\n"), DEF_BUTTONLABEL_NEOGEO[iButtonIndex], pszMoveNames[iCurrentExtra - 1],
                        nCurrentCharacterOffset, nCurrentCharacterOffset + 0x20,
                        KOF02_A_CharacterOffsetArray[iUnitCtr].pszImageRefName);
                }
                else
                {
                    strOutput.Format(_T("    { _T(\"%s - %s\"), 0x%07x, 0x%07x },\r\n"), DEF_BUTTONLABEL_NEOGEO[iButtonIndex], pszMoveNames[iCurrentExtra - 1],
                        nCurrentCharacterOffset, nCurrentCharacterOffset + 0x20);
                }

                OutputDebugString(strOutput);
                nCurrentCharacterOffset += 0x20;
                nPaletteCount++;
            }

            OutputDebugString(_T("};\r\n\r\n"));
        }
    }

    // Now create the collections...
    for (UINT16 iUnitCtr = 0; iUnitCtr < ARRAYSIZE(KOF02_A_CharacterOffsetArray); iUnitCtr++)
    {
        CString strOutput;
        TCHAR szCodeDesc[MAX_DESCRIPTION_LENGTH];

        StrRemoveNonASCII(szCodeDesc, ARRAYSIZE(szCodeDesc), KOF02_A_CharacterOffsetArray[iUnitCtr].pszCharacterName);

        strOutput.Format(_T("const sDescTreeNode KOF02_A_%s_COLLECTION[] =\r\n{\r\n"), szCodeDesc);
        OutputDebugString(strOutput);

        strOutput.Format(_T("    { _T(\"A\"), DESC_NODETYPE_TREE, (void*)KOF02_A_%s_PALETTES_A, ARRAYSIZE(KOF02_A_%s_PALETTES_A) },\r\n"), szCodeDesc, szCodeDesc);
        OutputDebugString(strOutput);
        strOutput.Format(_T("    { _T(\"B\"), DESC_NODETYPE_TREE, (void*)KOF02_A_%s_PALETTES_B, ARRAYSIZE(KOF02_A_%s_PALETTES_B) },\r\n"), szCodeDesc, szCodeDesc);
        OutputDebugString(strOutput);
        strOutput.Format(_T("    { _T(\"C\"), DESC_NODETYPE_TREE, (void*)KOF02_A_%s_PALETTES_C, ARRAYSIZE(KOF02_A_%s_PALETTES_C) },\r\n"), szCodeDesc, szCodeDesc);
        OutputDebugString(strOutput);
        strOutput.Format(_T("    { _T(\"D\"), DESC_NODETYPE_TREE, (void*)KOF02_A_%s_PALETTES_D, ARRAYSIZE(KOF02_A_%s_PALETTES_D) },\r\n"), szCodeDesc, szCodeDesc);
        OutputDebugString(strOutput);

        strOutput.Format(_T("    { _T(\"Win Portraits\"), DESC_NODETYPE_TREE, (void*)KOF02_A_%s_PALETTES_PORTRAITS_WIN, ARRAYSIZE(KOF02_A_%s_PALETTES_PORTRAITS_WIN) },\r\n"), szCodeDesc, szCodeDesc);
        OutputDebugString(strOutput);
        strOutput.Format(_T("    { _T(\"Lifebar Portraits\"), DESC_NODETYPE_TREE, (void*)KOF02_A_%s_PALETTES_PORTRAITS_LIFEBAR, ARRAYSIZE(KOF02_A_%s_PALETTES_PORTRAITS_LIFEBAR) },\r\n"), szCodeDesc, szCodeDesc);
        OutputDebugString(strOutput);
        strOutput.Format(_T("    { _T(\"Select Portrait\"), DESC_NODETYPE_TREE, (void*)KOF02_A_%s_PALETTES_PORTRAITS_SELECT, ARRAYSIZE(KOF02_A_%s_PALETTES_PORTRAITS_SELECT) },\r\n"), szCodeDesc, szCodeDesc);
        OutputDebugString(strOutput);


        OutputDebugString(_T("};\r\n\r\n"));
    }

    for (UINT16 iUnitCtr = 0; iUnitCtr < ARRAYSIZE(KOF02_A_CharacterOffsetArray); iUnitCtr++)
    {
        UINT32 nCurrentCharacterOffset = 0;
        UINT16 nPaletteCount = 0;
        CString strOutput;
        TCHAR szCodeDesc[MAX_DESCRIPTION_LENGTH];

        StrRemoveNonASCII(szCodeDesc, ARRAYSIZE(szCodeDesc), KOF02_A_CharacterOffsetArray[iUnitCtr].pszCharacterName);

        strOutput.Format(_T("    { _T(\"%s\"), DESC_NODETYPE_TREE, (void*)KOF02_A_%s_COLLECTION, ARRAYSIZE(KOF02_A_%s_COLLECTION) },\r\n"), KOF02_A_CharacterOffsetArray[iUnitCtr].pszCharacterName, szCodeDesc, szCodeDesc);
        OutputDebugString(strOutput);
    }
}

sDescTreeNode* CGame_KOF02_A::InitDescTree()
{
    UINT32 nTotalPaletteCount = 0;

    //Load extra file if we're using it
    LoadExtraFileForGame(EXTRA_FILENAME_KOF02_A, KOF02_A_EXTRA, &KOF02_A_EXTRA_CUSTOM, KOF02_A_EXTRALOC, m_nConfirmedROMSize);

    UINT16 nUnitCt = KOF02_A_NUMUNIT + (GetExtraCt(KOF02_A_EXTRALOC) ? 1 : 0);
    
    sDescTreeNode* NewDescTree = new sDescTreeNode;

    //Create the main character tree
    _stprintf(NewDescTree->szDesc, _T("%s"), g_GameFriendlyName[KOF02_A]);
    NewDescTree->ChildNodes = new sDescTreeNode[nUnitCt];
    NewDescTree->uChildAmt = nUnitCt;
    //All units have tree children
    NewDescTree->uChildType = DESC_NODETYPE_TREE;

    CString strMsg;
    bool fHaveExtras = (GetExtraCt(KOF02_A_EXTRALOC) > 0);
    strMsg.Format(_T("CGame_KOF02_A::InitDescTree: Building desc tree for KOF02_A %s extras...\n"), fHaveExtras ? _T("with") : _T("without"));
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

        if (iUnitCtr < KOF02_A_EXTRALOC)
        {
            //Set each description
            _stprintf(UnitNode->szDesc, _T("%s"), KOF02_A_UNITS[iUnitCtr].szDesc);
            UnitNode->ChildNodes = new sDescTreeNode[nUnitChildCount];
            //All children have collection trees
            UnitNode->uChildType = DESC_NODETYPE_TREE;
            UnitNode->uChildAmt = nUnitChildCount;

#if KOF02_A_DEBUG
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

#if KOF02_A_DEBUG
                strMsg.Format(_T("\tCollection: \"%s\", %u of %u, %u children\n"), CollectionNode->szDesc, iCollectionCtr + 1, nUnitChildCount, nListedChildrenCount);
                OutputDebugString(strMsg);
#endif

                const sGame_PaletteDataset* paletteSetToUse = GetPaletteSet(iUnitCtr, iCollectionCtr);

                //Set each collection's extra nodes: convert the sGame_PaletteDataset to sDescTreeNodes
                for (UINT16 nNodeIndex = 0; nNodeIndex < nListedChildrenCount; nNodeIndex++)
                {
                    ChildNode = &((sDescNode*)CollectionNode->ChildNodes)[nNodeIndex];

                    _sntprintf(ChildNode->szDesc, ARRAYSIZE(ChildNode->szDesc), _T("%s"), paletteSetToUse[nNodeIndex].szPaletteName);

                    ChildNode->uUnitId = iUnitCtr;
                    ChildNode->uPalId = nTotalPalettesUsedInUnit++;
                    nTotalPaletteCount++;

#if KOF02_A_DEBUG
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

#if KOF02_A_DEBUG
            strMsg.Format(_T("Unit (Extras): %s, %u of %u, %u total children\n"), UnitNode->szDesc, iUnitCtr + 1, nUnitCt, nUnitChildCount);
            OutputDebugString(strMsg);
#endif
        }

        //Set up extra nodes
        if (bUseExtra)
        {
            int nExtraPos = GetExtraLoc(iUnitCtr);
            int nCurrExtra = 0;

            CollectionNode = &((sDescTreeNode*)UnitNode->ChildNodes)[(KOF02_A_EXTRALOC > iUnitCtr) ? (nUnitChildCount - 1) : 0]; //Extra node

            _stprintf(CollectionNode->szDesc, _T("Extra"));

            CollectionNode->ChildNodes = new sDescTreeNode[nExtraCt];

            CollectionNode->uChildType = DESC_NODETYPE_NODE;
            CollectionNode->uChildAmt = nExtraCt; //EX + Extra

#if KOF02_A_DEBUG
            strMsg.Format(_T("\tCollection: %s, %u of %u, %u children\n"), CollectionNode->szDesc, 1, nUnitChildCount, nExtraCt);
            OutputDebugString(strMsg);
#endif

            for (UINT16 nExtraCtr = 0; nExtraCtr < nExtraCt; nExtraCtr++)
            {
                ChildNode = &((sDescNode*)CollectionNode->ChildNodes)[nExtraCtr];

                stExtraDef* pCurrDef = GetExtraDefForKOF02(nExtraPos + nCurrExtra);

                while (pCurrDef->isInvisible)
                {
                    nCurrExtra++;

                    pCurrDef = GetExtraDefForKOF02(nExtraPos + nCurrExtra);
                }

                _stprintf(ChildNode->szDesc, pCurrDef->szDesc);

                ChildNode->uUnitId = iUnitCtr;
                ChildNode->uPalId = (((KOF02_A_EXTRALOC > iUnitCtr) ? 1 : 0) * nUnitChildCount * 2) + nCurrExtra;

#if KOF02_A_DEBUG
                strMsg.Format(_T("\t\tPalette: %s, %u of %u\n"), ChildNode->szDesc, nExtraCtr + 1, nExtraCt);
                OutputDebugString(strMsg);
#endif

                nCurrExtra++;
                nTotalPaletteCount++;
            }
        }
    }

    strMsg.Format(_T("CGame_KOF02_A::InitDescTree: Loaded %u palettes for KOF02\n"), nTotalPaletteCount);
    OutputDebugString(strMsg);

    m_nTotalPaletteCountForKOF02 = nTotalPaletteCount;

    // For development purposes only...
    //DumpAllCharacters();

    return NewDescTree;
}

sFileRule CGame_KOF02_A::GetRule(UINT16 nUnitId)
{
    sFileRule NewFileRule;

    // This value is only used for directory-based games
    _stprintf_s(NewFileRule.szFileName, MAX_FILENAME_LENGTH, _T("265-p2.sp2"));

    NewFileRule.uUnitId = 0;
    NewFileRule.uVerifyVar = m_nExpectedGameROMSize;

    return NewFileRule;
}

UINT16 CGame_KOF02_A::GetCollectionCountForUnit(UINT16 nUnitId)
{
    if (nUnitId == KOF02_A_EXTRALOC)
    {
        return GetExtraCt(nUnitId);
    }
    else
    {
        return KOF02_A_UNITS[nUnitId].uChildAmt;
    }
}

UINT16 CGame_KOF02_A::GetNodeCountForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    if (nUnitId == KOF02_A_EXTRALOC)
    {
        return GetExtraCt(nUnitId);
    }
    else
    {
        const sDescTreeNode* pCollectionNode = (const sDescTreeNode*)(KOF02_A_UNITS[nUnitId].ChildNodes);

        return pCollectionNode[nCollectionId].uChildAmt;
    }
}

LPCTSTR CGame_KOF02_A::GetDescriptionForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    if (nUnitId == KOF02_A_EXTRALOC)
    {
        return _T("Extra Palettes");
    }
    else
    {
        const sDescTreeNode* pCollection = (const sDescTreeNode*)KOF02_A_UNITS[nUnitId].ChildNodes;
        return pCollection[nCollectionId].szDesc;
    }
}

UINT16 CGame_KOF02_A::GetPaletteCountForUnit(UINT16 nUnitId)
{
    if (nUnitId == KOF02_A_EXTRALOC)
    {
        return GetExtraCt(nUnitId);
    }
    else
    {
        UINT16 nCompleteCount = 0;
        const sDescTreeNode* pCompleteROMTree = KOF02_A_UNITS;
        UINT16 nCollectionCount = pCompleteROMTree[nUnitId].uChildAmt;

        const sDescTreeNode* pCurrentCollection = (const sDescTreeNode*)(pCompleteROMTree[nUnitId].ChildNodes);

        for (UINT16 nCollectionIndex = 0; nCollectionIndex < nCollectionCount; nCollectionIndex++)
        {
            nCompleteCount += pCurrentCollection[nCollectionIndex].uChildAmt;
        }

#if KOF02_A_DEBUG
        CString strMsg;
        strMsg.Format(_T("CGame_KOF02_A::GetPaletteCountForUnit: %u for unit %u which has %u collections.\n"), nCompleteCount, nUnitId, nCollectionCount);
        OutputDebugString(strMsg);
#endif

        return nCompleteCount;
    }
}

const sGame_PaletteDataset* CGame_KOF02_A::GetPaletteSet(UINT16 nUnitId, UINT16 nCollectionId)
{
    // Don't use this for Extra palettes.
    const sDescTreeNode* pCurrentSet = (const sDescTreeNode*)KOF02_A_UNITS[nUnitId].ChildNodes;
    return ((sGame_PaletteDataset*)(pCurrentSet[nCollectionId].ChildNodes));
}

const sDescTreeNode* CGame_KOF02_A::GetNodeFromPaletteId(UINT16 nUnitId, UINT16 nPaletteId, bool fReturnBasicNodesOnly)
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

        if (nUnitId == KOF02_A_EXTRALOC)
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
            const sDescTreeNode* pCollectionNodeToCheck = (const sDescTreeNode*)(KOF02_A_UNITS[nUnitId].ChildNodes);
            
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

const sGame_PaletteDataset* CGame_KOF02_A::GetSpecificPalette(UINT16 nUnitId, UINT16 nPaletteId)
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

void CGame_KOF02_A::InitDataBuffer()
{
    pppDataBuffer = new UINT16 * *[nUnitAmt];
    memset(pppDataBuffer, NULL, sizeof(UINT16**) * nUnitAmt);
}

void CGame_KOF02_A::ClearDataBuffer()
{
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
}

void CGame_KOF02_A::LoadSpecificPaletteData(UINT16 nUnitId, UINT16 nPalId)
{
     if (nUnitId != KOF02_A_EXTRALOC)
    {
        int cbPaletteSizeOnDisc = 0;
        const sGame_PaletteDataset* paletteData = GetSpecificPalette(nUnitId, nPalId);

        if (paletteData)
        {
            cbPaletteSizeOnDisc = (int)max(0, (paletteData->nPaletteOffsetEnd - paletteData->nPaletteOffset));

            nCurrPalOffs = paletteData->nPaletteOffset;
            m_nCurrentPaletteSize = cbPaletteSizeOnDisc / 2;
            m_pszCurrentPaletteName = paletteData->szPaletteName;
        }
        else
        {
            // A bogus palette was requested: this is unrecoverable.
            DebugBreak();
        }
    }
    else // KOF02_A_EXTRALOC
    {
        // This is where we handle all the palettes added in via Extra.
        stExtraDef* pCurrDef = GetExtraDefForKOF02(GetExtraLoc(nUnitId) + nPalId);

        nCurrPalOffs = pCurrDef->uOffset;
        m_nCurrentPaletteSize = (pCurrDef->cbPaletteSize / 2);
        m_pszCurrentPaletteName = pCurrDef->szDesc;
    }

    m_nCurrentPaletteROMLocation = nCurrPalOffs;
}

BOOL CGame_KOF02_A::LoadFile(CFile* LoadedFile, UINT16 nUnitId)
{
    for (UINT16 nUnitCtr = 0; nUnitCtr < nUnitAmt; nUnitCtr++)
    {
        UINT16 nPalAmt = GetPaletteCountForUnit(nUnitCtr);

        pppDataBuffer[nUnitCtr] = new UINT16 * [nPalAmt];

        // Use a sorted layout
        rgUnitRedir[nUnitCtr] = KOF02_A_UNITSORT[nUnitCtr];

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

BOOL CGame_KOF02_A::SaveFile(CFile* SaveFile, UINT16 nUnitId)
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
                strMsg.Format(_T("Warning: Unit %u palette %u is trying to write to ROM location 0x%06x which is lower than we usually write to."), nUnitCtr, nPalCtr, nCurrPalOffs);
                MessageBox(g_appHWnd, strMsg, GetHost()->GetAppName(), MB_ICONERROR);
                fShownOnce = true;
            }

            SaveFile->Seek(nCurrPalOffs, CFile::begin);
            SaveFile->Write(pppDataBuffer[nUnitCtr][nPalCtr], m_nCurrentPaletteSize * 2);
            nTotalPalettesSaved++;
        }
    }

    CString strMsg;
    strMsg.Format(_T("CGame_KOF02_A::SaveFile: Saved 0x%x palettes to disk for %u units\n"), nTotalPalettesSaved, nUnitAmt);
    OutputDebugString(strMsg);

    return TRUE;
}

void CGame_KOF02_A::CreateDefPal(sDescNode* srcNode, UINT16 nSepId)
{
    UINT16 nUnitId = srcNode->uUnitId;
    UINT16 nPalId = srcNode->uPalId;
    static UINT16 s_nColorsPerPage = CRegProc::GetMaxPalettePageSize();

    LoadSpecificPaletteData(nUnitId, nPalId);

    const UINT8 nTotalPagesNeeded = (UINT8)ceil(m_nCurrentPaletteSize / s_nColorsPerPage);
    const bool fCanFitWithinCurrentPageLayout = (nTotalPagesNeeded <= MAX_PALETTE_PAGES);

    if (!fCanFitWithinCurrentPageLayout)
    {
        CString strWarning;
        strWarning.Format(_T("ERROR: The UI currently only supports %u pages. \"%s\" is trying to use %u pages which will not work.\n"), MAX_PALETTE_PAGES, srcNode->szDesc, nTotalPagesNeeded);
        OutputDebugString(strWarning);
    }

    BasePalGroup.AddPal(CreatePal(nUnitId, nPalId), m_nCurrentPaletteSize, nUnitId, nPalId);

    if (fCanFitWithinCurrentPageLayout && (m_nCurrentPaletteSize > s_nColorsPerPage))
    {
        CString strPageDescription;
        UINT16 nColorsRemaining = m_nCurrentPaletteSize;

        for (UINT16 nCurrentPage = 0; (nCurrentPage * s_nColorsPerPage) < m_nCurrentPaletteSize; nCurrentPage++)
        {
            strPageDescription.Format(_T("%s (%u/%u)"), srcNode->szDesc, nCurrentPage + 1, nTotalPagesNeeded);
            BasePalGroup.AddSep(0, strPageDescription, nCurrentPage * s_nColorsPerPage, min(s_nColorsPerPage, (DWORD)nColorsRemaining));
            nColorsRemaining -= s_nColorsPerPage;
        }
    }
    else
    {
        BasePalGroup.AddSep(nSepId, srcNode->szDesc, 0, m_nCurrentPaletteSize);
    }
}

BOOL CGame_KOF02_A::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
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

    // Default values for multisprite image display for Export
    UINT16 nSrcStart = 0;
    UINT16 nSrcAmt = 0;
    UINT16 nNodeIncrement = 1;

    //Get rid of any palettes if there are any
    BasePalGroup.FlushPalAll();

    // Make sure to reset the image id
    nTargetImgId = 0;
    UINT16 nImgUnitId = INVALID_UNIT_VALUE;

    // Only load images for internal units, since we don't currently have a methodology for associating
    // external loads to internal sprites.
    if (NodeGet->uUnitId != KOF02_A_EXTRALOC)
    {
        const sGame_PaletteDataset* paletteDataSet = GetSpecificPalette(NodeGet->uUnitId, NodeGet->uPalId);

        nSrcStart = NodeGet->uPalId;
        nSrcAmt = 1;

        if (paletteDataSet)
        {
            nImgUnitId = paletteDataSet->indexImgToUse;
            nTargetImgId = paletteDataSet->indexOffsetToUse;

            const sDescTreeNode* pCurrentNode = GetNodeFromPaletteId(NodeGet->uUnitId, NodeGet->uPalId, false);

            if (pCurrentNode)
            {
                nSrcAmt = 4;
                nNodeIncrement = pCurrentNode->uChildAmt;

                while (nSrcStart >= nNodeIncrement)
                {
                    // The starting point is the absolute first palette for the sprite in question which is found in P1
                    nSrcStart -= nNodeIncrement;
                }
            }
        }
    }

    //Create the default palette
    ClearSetImgTicket(CreateImgTicket(nImgUnitId, nTargetImgId));

    CreateDefPal(NodeGet, 0);

    SetSourcePal(0, NodeGet->uUnitId, nSrcStart, nSrcAmt, nNodeIncrement);

    return TRUE;
}

COLORREF* CGame_KOF02_A::CreatePal(UINT16 nUnitId, UINT16 nPalId)
{
    LoadSpecificPaletteData(nUnitId, nPalId);

    COLORREF* NewPal = new COLORREF[m_nCurrentPaletteSize];

    for (UINT16 i = 0; i < m_nCurrentPaletteSize; i++)
    {
        NewPal[i] = ConvPal(pppDataBuffer[nUnitId][nPalId][i]);
    }

    return NewPal;
}

void CGame_KOF02_A::UpdatePalData()
{
    for (UINT16 nPalCtr = 0; nPalCtr < MAX_PAL; nPalCtr++)
    {
        sPalDef* srcDef = BasePalGroup.GetPalDef(nPalCtr);

        if (srcDef->bAvail)
        {
            COLORREF* crSrc = srcDef->pPal;

            UINT16 nTotalColorsRemaining = srcDef->uPalSz;
            UINT16 nCurrentTotalWrites = 0;
            const UINT16 nMaxSafeColorsToWrite = 16;
            // First color is the transparency color
            const UINT16 iFixedCounterPosition = 0;

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
                    pppDataBuffer[srcDef->uUnitId][srcDef->uPalId][iCurrentArrayOffset] = ConvCol(crSrc[iCurrentArrayOffset]);
                }

                nCurrentTotalWrites += nMaxSafeColorsToWrite;
                nTotalColorsRemaining -= nMaxSafeColorsToWrite;
            }

            srcDef->bChanged = FALSE;
            rgFileChanged[0] = TRUE;
        }
    }
}

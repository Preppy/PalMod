#include "StdAfx.h"
#include "Game_SFA1_A.h"
#include "GameDef.h"
#include "..\PalMod.h"
#include "..\RegProc.h"

#define SFA1_DEBUG DEFAULT_GAME_DEBUG_STATE

stExtraDef* CGame_SFA1_A::SFA1_A_EXTRA_CUSTOM = nullptr;

CDescTree CGame_SFA1_A::MainDescTree = nullptr;

UINT32 CGame_SFA1_A::m_nTotalPaletteCountForSFA1 = 0;

int CGame_SFA1_A::rgExtraCountAll[SFA1_A_NUM_IND + 1] = { -1 };
int CGame_SFA1_A::rgExtraCountVisibleOnly[SFA1_A_NUM_IND + 1] = { -1 };
int CGame_SFA1_A::rgExtraLoc[SFA1_A_NUM_IND + 1] = { -1 };
UINT32 CGame_SFA1_A::m_nExpectedGameROMSize = 0x80000; // 524288 bytes
UINT32 CGame_SFA1_A::m_nConfirmedROMSize = -1;

void CGame_SFA1_A::InitializeStatics()
{
    safe_delete_array(CGame_SFA1_A::SFA1_A_EXTRA_CUSTOM);

    memset(rgExtraCountAll, -1, sizeof(rgExtraCountAll));
    memset(rgExtraCountVisibleOnly, -1, sizeof(rgExtraCountVisibleOnly));
    memset(rgExtraLoc, -1, sizeof(rgExtraLoc));

    MainDescTree.SetRootTree(CGame_SFA1_A::InitDescTree());
}

CGame_SFA1_A::CGame_SFA1_A(UINT32 nConfirmedROMSize)
{
    createPalOptions = { NO_SPECIAL_OPTIONS, WRITE_16 };
    SetAlphaMode(AlphaMode::GameDoesNotUseAlpha);
    SetColorMode(ColMode::COLMODE_RGB444_BE);

    // We need this set before we initialize so that corrupt Extras truncate correctly.
    // Otherwise the new user inadvertently corrupts their ROM.
    m_nConfirmedROMSize = nConfirmedROMSize;
    InitializeStatics();

    //We need the proper unit amt before we init the main buffer
    nUnitAmt = SFA1_A_NUM_IND + (GetExtraCt(SFA1_A_EXTRALOC) ? 1 : 0);

    m_nTotalInternalUnits = SFA1_A_NUM_IND;
    m_nExtraUnit = SFA1_A_EXTRALOC;
    m_nSafeCountForThisRom = 234 + GetExtraCt(SFA1_A_EXTRALOC);
    m_pszExtraFilename = EXTRA_FILENAME_SFA1;
    m_nTotalPaletteCount = m_nTotalPaletteCountForSFA1;
    m_nLowestKnownPaletteRomLocation = 0x6795e;

    InitDataBuffer();

    //Set game information
    nGameFlag = SFA1_A;
    nImgGameFlag = IMGDAT_SECTION_CPS2;
    m_prgGameImageSet = SFA1_A_IMG_UNITS;
    nImgUnitAmt = ARRAYSIZE(SFA1_A_IMG_UNITS);

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

CGame_SFA1_A::~CGame_SFA1_A(void)
{
    safe_delete_array(CGame_SFA1_A::SFA1_A_EXTRA_CUSTOM);
    ClearDataBuffer();
    //Get rid of the file changed flag
    FlushChangeTrackingArray();
}

int CGame_SFA1_A::GetExtraCt(UINT16 nUnitId, BOOL bCountVisibleOnly)
{
    int* rgExtraCt = bCountVisibleOnly ? (int*)rgExtraCountVisibleOnly : (int*)rgExtraCountAll;

    if (rgExtraCountAll[0] == -1)
    {
        int nDefCtr = 0;
        memset(rgExtraCountAll, 0, (SFA1_A_NUM_IND + 1) * sizeof(int));
        memset(rgExtraCountVisibleOnly, 0, (SFA1_A_NUM_IND + 1) * sizeof(int));

        stExtraDef* pCurrDef = GetExtraDefForSFA1(0);

        while (pCurrDef->uUnitN != INVALID_UNIT_VALUE)
        {
            rgExtraCountAll[pCurrDef->uUnitN]++;

            if (!pCurrDef->isInvisible)
            {
                rgExtraCountVisibleOnly[pCurrDef->uUnitN]++;
            }

            nDefCtr++;
            pCurrDef = GetExtraDefForSFA1(nDefCtr);
        }
    }

    return rgExtraCt[nUnitId];
}

int CGame_SFA1_A::GetExtraLoc(UINT16 nUnitId)
{
    if (rgExtraLoc[0] == -1)
    {
        int nDefCtr = 0;
        int nCurrUnit = UNIT_START_VALUE;
        memset(rgExtraLoc, 0, (SFA1_A_NUM_IND + 1) * sizeof(int));

        stExtraDef* pCurrDef = GetExtraDefForSFA1(0);

        while (pCurrDef->uUnitN != INVALID_UNIT_VALUE)
        {
            if (pCurrDef->uUnitN != nCurrUnit)
            {
                rgExtraLoc[pCurrDef->uUnitN] = nDefCtr;
                nCurrUnit = pCurrDef->uUnitN;
            }

            nDefCtr++;
            pCurrDef = GetExtraDefForSFA1(nDefCtr);
        }
    }

    return rgExtraLoc[nUnitId];
}

CDescTree* CGame_SFA1_A::GetMainTree()
{
    return &CGame_SFA1_A::MainDescTree;
}

sDescTreeNode* CGame_SFA1_A::InitDescTree()
{
    UINT32 nTotalPaletteCount = 0;

    //Load extra file if we're using it
    LoadExtraFileForGame(EXTRA_FILENAME_SFA1, SFA1_A_EXTRA, &SFA1_A_EXTRA_CUSTOM, SFA1_A_EXTRALOC, m_nConfirmedROMSize);

    bool fHaveExtras = (GetExtraCt(SFA1_A_EXTRALOC) > 0);
    UINT16 nUnitCt = SFA1_A_NUM_IND + (fHaveExtras ? 1 : 0);

    sDescTreeNode* NewDescTree = new sDescTreeNode;

    //Create the main character tree
    _snwprintf_s(NewDescTree->szDesc, ARRAYSIZE(NewDescTree->szDesc), _TRUNCATE, L"%s", g_GameFriendlyName[SFA1_A]);
    NewDescTree->ChildNodes = new sDescTreeNode[nUnitCt];
    NewDescTree->uChildAmt = nUnitCt;
    //All units have tree children
    NewDescTree->uChildType = DESC_NODETYPE_TREE;

    CString strMsg;
    strMsg.Format(L"CGame_SFA1_A::InitDescTree: Building desc tree for SFA1 %s extras...\n", fHaveExtras ? L"with" : L"without");
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

        if (iUnitCtr < SFA1_A_EXTRALOC)
        {
            //Set each description
            _snwprintf_s(UnitNode->szDesc, ARRAYSIZE(UnitNode->szDesc), _TRUNCATE, L"%s", SFA1_A_UNITS[iUnitCtr].szDesc);
            UnitNode->ChildNodes = new sDescTreeNode[nUnitChildCount];
            //All children have collection trees
            UnitNode->uChildType = DESC_NODETYPE_TREE;
            UnitNode->uChildAmt = nUnitChildCount;

#if SFA1_DEBUG
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

#if SFA1_DEBUG
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

#if SFA1_DEBUG
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

#if SFA1_DEBUG
            strMsg.Format(L"Unit (Extras): %s, %u of %u, %u total children\n", UnitNode->szDesc, iUnitCtr + 1, nUnitCt, nUnitChildCount);
            OutputDebugString(strMsg);
#endif
        }

        //Set up extra nodes
        if (bUseExtra)
        {
            int nExtraPos = GetExtraLoc(iUnitCtr);
            int nCurrExtra = 0;

            CollectionNode = &((sDescTreeNode*)UnitNode->ChildNodes)[(SFA1_A_EXTRALOC > iUnitCtr) ? (nUnitChildCount - 1) : 0]; //Extra node
            _snwprintf_s(CollectionNode->szDesc, ARRAYSIZE(CollectionNode->szDesc), _TRUNCATE, L"Extra");

            CollectionNode->ChildNodes = new sDescTreeNode[nExtraCt];

            CollectionNode->uChildType = DESC_NODETYPE_NODE;
            CollectionNode->uChildAmt = nExtraCt; //EX + Extra

#if SFA1_DEBUG
            strMsg.Format(L"\tCollection: %s, %u of %u, %u children\n", CollectionNode->szDesc, 1, nUnitChildCount, nExtraCt);
            OutputDebugString(strMsg);
#endif

            for (UINT16 nExtraCtr = 0; nExtraCtr < nExtraCt; nExtraCtr++)
            {
                ChildNode = &((sDescNode*)CollectionNode->ChildNodes)[nExtraCtr];

                stExtraDef* pCurrDef = GetExtraDefForSFA1(nExtraPos + nCurrExtra);

                while (pCurrDef->isInvisible)
                {
                    nCurrExtra++;

                    pCurrDef = GetExtraDefForSFA1(nExtraPos + nCurrExtra);
                }

                _snwprintf_s(ChildNode->szDesc, ARRAYSIZE(ChildNode->szDesc), _TRUNCATE, pCurrDef->szDesc);

                ChildNode->uUnitId = iUnitCtr;
                ChildNode->uPalId = (((SFA1_A_EXTRALOC > iUnitCtr) ? 1 : 0)* nUnitChildCount * 2) + nCurrExtra;

#if SFA1_DEBUG
                strMsg.Format(L"\t\tPalette: %s, %u of %u\n", ChildNode->szDesc, nExtraCtr + 1, nExtraCt);
                OutputDebugString(strMsg);
#endif

                nCurrExtra++;
                nTotalPaletteCount++;
            }
        }
    }

    strMsg.Format(L"CGame_SFA1_A::InitDescTree: Loaded %u palettes for SFA1\n", nTotalPaletteCount);
    OutputDebugString(strMsg);

    m_nTotalPaletteCountForSFA1 = nTotalPaletteCount;

    // For development use to speed things up
    //DumpHeaderPalettes();

    return NewDescTree;
}

struct sSFA1_A_PortraitData
{
    LPCWSTR pszCharacterName = nullptr;
    LPCWSTR pszCodeName = nullptr;
    UINT32 nROMOffset = 0;
    LPCWSTR pszImageSet = L"indexCPS2_SFA1Assets"; // SFA1_Unique
    UINT32 nImageSetIndex = 0;
};

sSFA1_A_PortraitData SFA1_A_PortraitDataArray[] =
{
    { L"Ryu", L"RYU", 0x4ce14, L"indexCPS2_SFA1Assets", 0xB4 }, // Ryu
    { L"Ken", L"KEN", 0x4d114, L"indexCPS2_SFA1Assets", 0xAF }, // Ken
    { L"Akuma", L"AKUMA", 0x4d414, L"indexCPS2_SFA1Assets", 0xA1 }, // Akuma
    { L"Charlie", L"CHARLIE", 0x4d714, L"indexCPS2_SFA1Assets", 0xA5 }, // Charlie
    { L"Chun-Li", L"CHUNLI", 0x4da14, L"indexCPS2_SFA1Assets", 0xA6 }, // Chun (NOTE: Chun has a special non-X-ISM portrait, A7)
    { L"Adon", L"ADON", 0x4dd14, L"indexCPS2_SFA1Assets", 0xA0 }, // Adon
    { L"Sodom", L"SODOM", 0x4e014, L"indexCPS2_SFA1Assets", 0xB7 }, // Sodom
    { L"Guy", L"GUY", 0x4e314, L"indexCPS2_SFA1Assets", 0xAD }, // Guy
    { L"Birdie", L"BIRDIE", 0x4e614, L"indexCPS2_SFA1Assets", 0xA2 }, // Birdie
    { L"Rose", L"ROSE", 0x4e914, L"indexCPS2_SFA1Assets", 0xB3 }, // Rose
    { L"M.Bison", L"MBISON", 0x4ec14, L"indexCPS2_SFA1Assets", 0xB0 }, // Dict
    { L"Sagat", L"SAGAT", 0x4ef14, L"indexCPS2_SFA1Assets", 0xB5 }, // Sagat
    { L"Dan", L"DAN", 0x4f214, L"indexCPS2_SFA1Assets", 0xA9 }, // Dan
    { L"Sakura", L"SAKURA", 0x4f514, L"indexCPS2_SFA1Assets", 0xB6 }, // Sakura
    { L"Rolento", L"ROLENTO", 0x4f814, L"indexCPS2_SFA1Assets", 0xB2 }, // Rolento
    { L"Dhalsim", L"DHALSIM", 0x4fb14, L"indexCPS2_SFA1Assets", 0xAA }, // Dhalsim
    { L"Zangief", L"ZANGIEF", 0x4fe14, L"indexCPS2_SFA1Assets", 0xB9 }, // Zangief
    { L"Gen", L"GEN", 0x50114, L"indexCPS2_SFA1Assets", 0xAC }, // Gen
    { L"Cammy", L"CAMMY", 0x50a14, L"indexCPS2_SFA1Assets", 0xA4 }, // Cammy
    { L"E.Honda", L"EHONDA", 0x50d14, L"indexCPS2_SFA1Assets", 0xAB }, // E.Honda
    { L"Blanka", L"BLANKA", 0x51014, L"indexCPS2_SFA1Assets", 0xA3 }, // Blanka
    { L"R.Mika", L"RMIKA", 0x51314, L"indexCPS2_SFA1Assets", 0xB1 }, // R.Mika
    { L"Cody", L"CODY", 0x51614, L"indexCPS2_SFA1Assets", 0xA8 }, // Cody
    { L"Vega", L"VEGA", 0x51914, L"indexCPS2_SFA1Assets", 0xB8 }, // Vega
    { L"Karin", L"KARIN", 0x51c14, L"indexCPS2_SFA1Assets", 0xAE }, // Karin
};

void CGame_SFA1_A::DumpHeaderPalettes()
{
    CString strOutput;

    for (UINT16 nIndex = 0; nIndex < ARRAYSIZE(SFA1_A_PortraitDataArray); nIndex++)
    {
        const UINT16 nPortraitsPerCharacter = 6;
        strOutput.Format(L"const sGame_PaletteDataset SFA1_A_%s_PORTRAIT_PALETTES[] = \r\n{\r\n", SFA1_A_PortraitDataArray[nIndex].pszCodeName);
        OutputDebugString(strOutput);
        for (UINT16 nColorIndex = 0; nColorIndex < nPortraitsPerCharacter; nColorIndex++)
        {
            constexpr UINT32 PORTRAIT_OFFSET = 0x80;
            CString strColorName;

            switch (nColorIndex)
            {
            case 0:
                strColorName = L"X-Ism Punch";
                break;
            case 1:
                strColorName = L"X-Ism Kick";
                break;
            case 2:
                strColorName = L"A-Ism Punch";
                break;
            case 3:
                strColorName = L"A-Ism Kick";
                break;
            case 4:
                strColorName = L"V-Ism Punch";
                break;
            case 5:
                strColorName = L"V-Ism Kick";
                break;
            }

            strOutput.Format(L"    { \"%s\", 0x%x, 0x%x, %s, 0x%02x },\r\n", strColorName.GetString(), SFA1_A_PortraitDataArray[nIndex].nROMOffset + (PORTRAIT_OFFSET * nColorIndex), SFA1_A_PortraitDataArray[nIndex].nROMOffset + (PORTRAIT_OFFSET * (nColorIndex + 1)), SFA1_A_PortraitDataArray[nIndex].pszImageSet, SFA1_A_PortraitDataArray[nIndex].nImageSetIndex);
            OutputDebugString(strOutput);
        }

        OutputDebugString(L"};\r\n\r\n");
    }

    for (UINT16 nIndex = 0; nIndex < ARRAYSIZE(SFA1_A_PortraitDataArray); nIndex++)
    {
        const UINT16 nPortraitsPerCharacter = 6;
        strOutput.Format(L"    { \"Select Portraits\", DESC_NODETYPE_TREE, (void*)SFA1_A_%s_PORTRAIT_PALETTES, ARRAYSIZE(SFA1_A_%s_PORTRAIT_PALETTES) },\r\n", SFA1_A_PortraitDataArray[nIndex].pszCodeName, SFA1_A_PortraitDataArray[nIndex].pszCodeName);
        OutputDebugString(strOutput);
    }
}

sFileRule CGame_SFA1_A::GetRule(UINT16 nUnitId)
{
    sFileRule NewFileRule;

    _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, L"sz3.09c");

    NewFileRule.uUnitId = 0;
    NewFileRule.uVerifyVar = m_nExpectedGameROMSize;

    return NewFileRule;
}

UINT16 CGame_SFA1_A::GetCollectionCountForUnit(UINT16 nUnitId)
{
    if (nUnitId == SFA1_A_EXTRALOC)
    {
        return GetExtraCt(nUnitId);
    }
    else
    {
        return SFA1_A_UNITS[nUnitId].uChildAmt;
    }
}

UINT16 CGame_SFA1_A::GetNodeCountForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    if (nUnitId == SFA1_A_EXTRALOC)
    {
        return GetExtraCt(nUnitId);
    }
    else
    {
        const sDescTreeNode* pCollectionNode = (const sDescTreeNode*)(SFA1_A_UNITS[nUnitId].ChildNodes);

        return pCollectionNode[nCollectionId].uChildAmt;
    }
}

LPCWSTR CGame_SFA1_A::GetDescriptionForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    if (nUnitId == SFA1_A_EXTRALOC)
    {
        return L"Extra Palettes";
    }
    else
    {
        const sDescTreeNode* pCollection = (const sDescTreeNode*)SFA1_A_UNITS[nUnitId].ChildNodes;
        return pCollection[nCollectionId].szDesc;
    }
}

UINT16 CGame_SFA1_A::GetPaletteCountForUnit(UINT16 nUnitId)
{
    if (nUnitId == SFA1_A_EXTRALOC)
    {
        return GetExtraCt(nUnitId);
    }
    else
    {
        UINT16 nCompleteCount = 0;
        UINT16 nCollectionCount = SFA1_A_UNITS[nUnitId].uChildAmt;
        const sDescTreeNode* pCurrentCollection = (const sDescTreeNode*)(SFA1_A_UNITS[nUnitId].ChildNodes);

        for (UINT16 nCollectionIndex = 0; nCollectionIndex < nCollectionCount; nCollectionIndex++)
        {
            nCompleteCount += pCurrentCollection[nCollectionIndex].uChildAmt;
        }

#if SFA1_DEBUG
        CString strMsg;
        strMsg.Format(L"CGame_SFA1_A::GetPaletteCountForUnit: %u for unit %u which has %u collections.\n", nCompleteCount, nUnitId, nCollectionCount);
        OutputDebugString(strMsg);
#endif

        return nCompleteCount;
    }
}

const sGame_PaletteDataset* CGame_SFA1_A::GetPaletteSet(UINT16 nUnitId, UINT16 nCollectionId)
{
    // Don't use this for Extra palettes.
    const sDescTreeNode* pCurrentSet = (const sDescTreeNode*)SFA1_A_UNITS[nUnitId].ChildNodes;
    return ((sGame_PaletteDataset*)(pCurrentSet[nCollectionId].ChildNodes));
}

const sGame_PaletteDataset* CGame_SFA1_A::GetSpecificPalette(UINT16 nUnitId, UINT16 nPaletteId)
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

UINT16 CGame_SFA1_A::GetNodeSizeFromPaletteId(UINT16 nUnitId, UINT16 nPaletteId)
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

const sDescTreeNode* CGame_SFA1_A::GetNodeFromPaletteId(UINT16 nUnitId, UINT16 nPaletteId, bool fReturnBasicNodesOnly)
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

        if (nUnitId == SFA1_A_EXTRALOC)
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
            const sDescTreeNode* pCollectionNodeToCheck = (const sDescTreeNode*)(SFA1_A_UNITS[nUnitId].ChildNodes);

            nNodeCount = pCollectionNodeToCheck[nCollectionIndex].uChildAmt;

            if (nDistanceFromZero < nNodeCount)
            {
                // We know it's within this group.  Now: is it basic?
                if (!fReturnBasicNodesOnly || (nCollectionIndex < 6)) // 3 sets of P/K Isms
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

void CGame_SFA1_A::LoadSpecificPaletteData(UINT16 nUnitId, UINT16 nPalId)
{
    if (nUnitId != SFA1_A_EXTRALOC)
    {
        int cbPaletteSizeOnDisc = 0;
        const sGame_PaletteDataset* paletteData = GetSpecificPalette(nUnitId, nPalId);

        cbPaletteSizeOnDisc = (int)max(0, (paletteData->nPaletteOffsetEnd - paletteData->nPaletteOffset));

        m_nCurrentPaletteROMLocation = paletteData->nPaletteOffset;
        m_nCurrentPaletteSizeInColors = cbPaletteSizeOnDisc / m_nSizeOfColorsInBytes;
        m_pszCurrentPaletteName = paletteData->szPaletteName;
    }
    else // SFA1_A_EXTRALOC
    {
        // This is where we handle all the palettes added in via Extra.
        stExtraDef* pCurrDef = GetExtraDefForSFA1(GetExtraLoc(nUnitId) + nPalId);

        m_nCurrentPaletteROMLocation = pCurrDef->uOffset;
        m_nCurrentPaletteSizeInColors = (pCurrDef->cbPaletteSize / m_nSizeOfColorsInBytes);
        m_pszCurrentPaletteName = pCurrDef->szDesc;
    }
}

BOOL CGame_SFA1_A::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
{
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

    // Default values for multisprite image display for Export
    UINT16 nSrcStart = NodeGet->uPalId;
    UINT16 nSrcAmt = 1;
    UINT16 nNodeIncrement = 1;

    //Get rid of any palettes if there are any
    BasePalGroup.FlushPalAll();

    // Make sure to reset the image id
    nTargetImgId = 0;
    UINT16 nImgUnitId = INVALID_UNIT_VALUE;

    bool fShouldUseAlternateLoadLogic = false;

    // Only load images for internal units, since we don't currently have a methodology for associating
    // external loads to internal sprites.
    if (SFA1_A_EXTRALOC != NodeGet->uUnitId)
    {
        const sGame_PaletteDataset* paletteDataSet = GetSpecificPalette(NodeGet->uUnitId, NodeGet->uPalId);
        const sDescTreeNode* pCurrentNode = GetNodeFromPaletteId(NodeGet->uUnitId, NodeGet->uPalId, true);

        if (pCurrentNode) // For Basic nodes, we can allow multisprite view in the Export dialog
        {
            if (_wcsicmp(pCurrentNode->szDesc, L"Select Portraits") == 0)
            {
                nSrcAmt = 2;

                if (wcsstr(paletteDataSet->szPaletteName, L"Kick"))
                {
                    // Go back to Punch
                    nSrcStart--;
                }

                nNodeIncrement = 1;
            }
            else if ((_wcsicmp(pCurrentNode->szDesc, L"Punch") == 0) ||
                     (_wcsicmp(pCurrentNode->szDesc, L"Kick") == 0))
            {
                nSrcAmt = 2;
                nNodeIncrement = GetNodeSizeFromPaletteId(NodeGet->uUnitId, NodeGet->uPalId);

                while (nSrcStart >= nNodeIncrement)
                {
                    // The starting point is the absolute first palette for the sprite in question which is found in Punch
                    nSrcStart -= nNodeIncrement;
                }
            }
            else
            {
                // Status effects and etc have no peer palettes
                nSrcAmt = 1;
            }
        }

        if (paletteDataSet)
        {
            nImgUnitId = paletteDataSet->indexImgToUse;
            nTargetImgId = paletteDataSet->indexOffsetToUse;

            if (paletteDataSet->pPalettePairingInfo)
            {
                if (paletteDataSet->pPalettePairingInfo == &pairFullyLinkedNode)
                {
                    const UINT16 nStageCount = GetNodeSizeFromPaletteId(NodeGet->uUnitId, NodeGet->uPalId);

                    fShouldUseAlternateLoadLogic = true;
                    sImgTicket* pImgArray = nullptr;

                    for (INT16 nStageIndex = 0; nStageIndex < nStageCount; nStageIndex++)
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
                else
                {
                    UINT16 nDeltaToSecondElement = paletteDataSet->pPalettePairingInfo->nNodeIncrementToPartner;
                    int nXOffs = paletteDataSet->pPalettePairingInfo->nXOffs;
                    int nYOffs = paletteDataSet->pPalettePairingInfo->nYOffs;

                    UINT16 nPeerPaletteIdInNode = Node03;

                    fShouldUseAlternateLoadLogic = true;
                    nPeerPaletteIdInNode += nDeltaToSecondElement;

                    UINT16 nPeerPaletteIdInUnit = NodeGet->uPalId + nDeltaToSecondElement;

                    if (fShouldUseAlternateLoadLogic)
                    {
                        const sGame_PaletteDataset* paletteDataSetToJoin = GetSpecificPalette(NodeGet->uUnitId, nPeerPaletteIdInUnit);

                        if (paletteDataSetToJoin)
                        {
                            ClearSetImgTicket(
                                CreateImgTicket(paletteDataSet->indexImgToUse, paletteDataSet->indexOffsetToUse,
                                    CreateImgTicket(paletteDataSetToJoin->indexImgToUse, paletteDataSetToJoin->indexOffsetToUse, nullptr, nXOffs, nYOffs)
                                )
                            );

                            //Set each palette
                            sDescNode* JoinedNode[2] = {
                                GetMainTree()->GetDescNode(NodeGet->uUnitId, Node02, Node03, -1),
                                GetMainTree()->GetDescNode(NodeGet->uUnitId, Node02, nPeerPaletteIdInNode, -1)
                            };

                            //Set each palette
                            CreateDefPal(JoinedNode[0], 0);
                            CreateDefPal(JoinedNode[1], 1);

                            SetSourcePal(0, NodeGet->uUnitId, nSrcStart, nSrcAmt, nNodeIncrement);
                            SetSourcePal(1, NodeGet->uUnitId, nSrcStart + nDeltaToSecondElement, nSrcAmt, nNodeIncrement);
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

UINT32 CGame_SFA1_A::GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet, bool* pfNeedToValidateCRCs)
{
    static sCRC32ValueSet knownROMs[] =
    {
        // All versions of SFA1/SFZ1 use the same exact palette rom
        { L"SFA1 (Arcade)", L"sfz.06", 0x806e8f38, 0 },
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

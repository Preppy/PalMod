#include "StdAfx.h"
#include "GameDef.h"
#include "Game_RBFF2_A.h"
#include "..\PalMod.h"
#include "..\RegProc.h"

#define RBFF2_A_DEBUG DEFAULT_GAME_DEBUG_STATE

stExtraDef* CGame_RBFF2_A::RBFF2_A_EXTRA_CUSTOM = nullptr;

CDescTree CGame_RBFF2_A::MainDescTree = nullptr;

int CGame_RBFF2_A::rgExtraCountAll[RBFF2_A_NUMUNIT + 1];
int CGame_RBFF2_A::rgExtraLoc[RBFF2_A_NUMUNIT + 1];

UINT32 CGame_RBFF2_A::m_nTotalPaletteCountForRBFF2 = 0;
UINT32 CGame_RBFF2_A::m_nExpectedGameROMSize = 0x100000;
UINT32 CGame_RBFF2_A::m_nConfirmedROMSize = -1;

void CGame_RBFF2_A::InitializeStatics()
{
    safe_delete_array(CGame_RBFF2_A::RBFF2_A_EXTRA_CUSTOM);

    memset(rgExtraCountAll, -1, sizeof(rgExtraCountAll));
    memset(rgExtraLoc, -1, sizeof(rgExtraLoc));

    MainDescTree.SetRootTree(CGame_RBFF2_A::InitDescTree());
}

CGame_RBFF2_A::CGame_RBFF2_A(UINT32 nConfirmedROMSize)
{
    CString strMessage;
    strMessage.Format(L"CGame_RBFF2_A::CGame_RBFF2_A: Loading ROM...\n");
    OutputDebugString(strMessage);

    createPalOptions = { NO_SPECIAL_OPTIONS, WRITE_16 };
    SetAlphaMode(AlphaMode::GameDoesNotUseAlpha);
    SetColorMode(ColMode::COLMODE_NEOGEO);

    // We need this set before we initialize so that corrupt Extras truncate correctly.
    // Otherwise the new user inadvertently corrupts their ROM.
    m_nConfirmedROMSize = nConfirmedROMSize;
    InitializeStatics();

    m_nTotalInternalUnits = RBFF2_A_NUMUNIT;
    m_nExtraUnit = RBFF2_A_EXTRALOC;

    m_nSafeCountForThisRom = GetExtraCt(m_nExtraUnit) + 958;
    m_pszExtraFilename = EXTRA_FILENAME_RBFF2_A;
    m_nTotalPaletteCount = m_nTotalPaletteCountForRBFF2;
    // This magic number is used to warn users if their Extra file is trying to write somewhere potentially unusual
    m_nLowestKnownPaletteRomLocation = 0xd0000;

    nUnitAmt = m_nTotalInternalUnits + (GetExtraCt(m_nExtraUnit) ? 1 : 0);

    InitDataBuffer();

    //Set game information
    nGameFlag = RBFF2_A;
    nImgGameFlag = IMGDAT_SECTION_KOF;
    m_prgGameImageSet = RBFFS_A_IMG_UNITS;
    nImgUnitAmt = ARRAYSIZE(RBFFS_A_IMG_UNITS);

    nFileAmt = 1;

    //Set the image out display type
    DisplayType = eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT;
    // Button labels are used for the Export Image dialog
    pButtonLabelSet = DEF_BUTTONLABEL_2;
    m_nNumberOfColorOptions = ARRAYSIZE(DEF_BUTTONLABEL_2);

    //Create the redirect buffer
    rgUnitRedir = new UINT16[nUnitAmt + 1];
    memset(rgUnitRedir, NULL, sizeof(UINT16) * nUnitAmt);

    //Create the file changed flag
    PrepChangeTrackingArray();
}

CGame_RBFF2_A::~CGame_RBFF2_A(void)
{
    safe_delete_array(CGame_RBFF2_A::RBFF2_A_EXTRA_CUSTOM);
    ClearDataBuffer();
    //Get rid of the file changed flag
    FlushChangeTrackingArray();
}

CDescTree* CGame_RBFF2_A::GetMainTree()
{
    return &CGame_RBFF2_A::MainDescTree;
}

UINT32 CGame_RBFF2_A::GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet, bool* pfNeedToValidateCRCs)
{
    static sCRC32ValueSet knownROMs[] =
    {
        { L"Real Bout Fatal Fury 2 (Neo-Geo)", L"240-p1.p1", 0x80e41205, 0 },
        { L"Real Bout Fatal Fury 2 (Neo-Geo)", L"240-p1.bin", 0x80e41205, 0 },
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

sFileRule CGame_RBFF2_A::GetRule(UINT16 nUnitId)
{
    sFileRule NewFileRule;

    // This value is only used for directory-based games
    _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, L"240-p1.p1");

    NewFileRule.uUnitId = 0;
    NewFileRule.uVerifyVar = m_nExpectedGameROMSize;

    return NewFileRule;
}

int CGame_RBFF2_A::GetExtraCt(UINT16 nUnitId, BOOL bCountVisibleOnly)
{
    if (rgExtraCountAll[0] == -1)
    {
        int nDefCtr = 0;
        memset(rgExtraCountAll, 0, ((RBFF2_A_NUMUNIT + 1) * sizeof(int)));

        stExtraDef* pCurrDef = GetExtraDefForRBFF2(0);

        while (pCurrDef->uUnitN != INVALID_UNIT_VALUE)
        {
            if (!pCurrDef->isInvisible || !bCountVisibleOnly)
            {
                rgExtraCountAll[pCurrDef->uUnitN]++;
            }

            nDefCtr++;
            pCurrDef = GetExtraDefForRBFF2(nDefCtr);
        }
    }

    return rgExtraCountAll[nUnitId];
}

int CGame_RBFF2_A::GetExtraLoc(UINT16 nUnitId)
{
    if (rgExtraLoc[0] == -1)
    {
        int nDefCtr = 0;
        int nCurrUnit = UNIT_START_VALUE;
        memset(rgExtraLoc, 0, (RBFF2_A_NUMUNIT + 1) * sizeof(int));

        stExtraDef* pCurrDef = GetExtraDefForRBFF2(0);

        while (pCurrDef->uUnitN != INVALID_UNIT_VALUE)
        {
            if (pCurrDef->uUnitN != nCurrUnit)
            {
                rgExtraLoc[pCurrDef->uUnitN] = nDefCtr;
                nCurrUnit = pCurrDef->uUnitN;
            }

            nDefCtr++;
            pCurrDef = GetExtraDefForRBFF2(nDefCtr);
        }
    }

    return rgExtraLoc[nUnitId];
}

sDescTreeNode* CGame_RBFF2_A::InitDescTree()
{
    UINT32 nTotalPaletteCount = 0;

    //Load extra file if we're using it
    LoadExtraFileForGame(EXTRA_FILENAME_RBFF2_A, RBFF2_A_EXTRA, &RBFF2_A_EXTRA_CUSTOM, RBFF2_A_EXTRALOC, m_nConfirmedROMSize);

    UINT16 nUnitCt = RBFF2_A_NUMUNIT + (GetExtraCt(RBFF2_A_EXTRALOC) ? 1 : 0);
    
    sDescTreeNode* NewDescTree = new sDescTreeNode;

    //Create the main character tree
    _snwprintf_s(NewDescTree->szDesc, ARRAYSIZE(NewDescTree->szDesc), _TRUNCATE, L"%s", g_GameFriendlyName[RBFF2_A]);
    NewDescTree->ChildNodes = new sDescTreeNode[nUnitCt];
    NewDescTree->uChildAmt = nUnitCt;
    //All units have tree children
    NewDescTree->uChildType = DESC_NODETYPE_TREE;

    CString strMsg;
    bool fHaveExtras = (GetExtraCt(RBFF2_A_EXTRALOC) > 0);
    strMsg.Format(L"CGame_RBFF2_A::InitDescTree: Building desc tree for RBFF2_A %s extras...\n", fHaveExtras ? L"with" : L"without");
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

        if (iUnitCtr < RBFF2_A_EXTRALOC)
        {
            //Set each description
            _snwprintf_s(UnitNode->szDesc, ARRAYSIZE(UnitNode->szDesc), _TRUNCATE, L"%s", RBFF2_A_UNITS[iUnitCtr].szDesc);
            UnitNode->ChildNodes = new sDescTreeNode[nUnitChildCount];
            //All children have collection trees
            UnitNode->uChildType = DESC_NODETYPE_TREE;
            UnitNode->uChildAmt = nUnitChildCount;

#if RBFF2_A_DEBUG
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

#if RBFF2_A_DEBUG
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

#if RBFF2_A_DEBUG
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

#if RBFF2_A_DEBUG
            strMsg.Format(L"Unit (Extras): %s, %u of %u, %u total children\n", UnitNode->szDesc, iUnitCtr + 1, nUnitCt, nUnitChildCount);
            OutputDebugString(strMsg);
#endif
        }

        //Set up extra nodes
        if (bUseExtra)
        {
            int nExtraPos = GetExtraLoc(iUnitCtr);
            int nCurrExtra = 0;

            CollectionNode = &((sDescTreeNode*)UnitNode->ChildNodes)[(RBFF2_A_EXTRALOC > iUnitCtr) ? (nUnitChildCount - 1) : 0]; //Extra node

            _snwprintf_s(CollectionNode->szDesc, ARRAYSIZE(CollectionNode->szDesc), _TRUNCATE, L"Extra");

            CollectionNode->ChildNodes = new sDescTreeNode[nExtraCt];

            CollectionNode->uChildType = DESC_NODETYPE_NODE;
            CollectionNode->uChildAmt = nExtraCt; //EX + Extra

#if RBFF2_A_DEBUG
            strMsg.Format(L"\tCollection: %s, %u of %u, %u children\n", CollectionNode->szDesc, 1, nUnitChildCount, nExtraCt);
            OutputDebugString(strMsg);
#endif

            for (UINT16 nExtraCtr = 0; nExtraCtr < nExtraCt; nExtraCtr++)
            {
                ChildNode = &((sDescNode*)CollectionNode->ChildNodes)[nExtraCtr];

                stExtraDef* pCurrDef = GetExtraDefForRBFF2(nExtraPos + nCurrExtra);

                while (pCurrDef->isInvisible)
                {
                    nCurrExtra++;

                    pCurrDef = GetExtraDefForRBFF2(nExtraPos + nCurrExtra);
                }

                _snwprintf_s(ChildNode->szDesc, ARRAYSIZE(ChildNode->szDesc), _TRUNCATE, pCurrDef->szDesc);

                ChildNode->uUnitId = iUnitCtr;
                ChildNode->uPalId = (((RBFF2_A_EXTRALOC > iUnitCtr) ? 1 : 0) * nUnitChildCount * 2) + nCurrExtra;

#if RBFF2_A_DEBUG
                strMsg.Format(L"\t\tPalette: %s, %u of %u\n", ChildNode->szDesc, nExtraCtr + 1, nExtraCt);
                OutputDebugString(strMsg);
#endif

                nCurrExtra++;
                nTotalPaletteCount++;
            }
        }
    }

    strMsg.Format(L"CGame_RBFF2_A::InitDescTree: Loaded %u palettes for RBFF2\n", nTotalPaletteCount);
    OutputDebugString(strMsg);

    m_nTotalPaletteCountForRBFF2 = nTotalPaletteCount;

    // turn this on to regenerate the headers
    //DumpPaletteHeaders();

    return NewDescTree;
}

void CGame_RBFF2_A::DumpPaletteHeaders()
{
    CString strOutput;
    const UINT32 RBFF2_PALETTE_LENGTH = 0x20;
    const UINT32 RBFF2_PALETTE_COUNT = 16;

    struct rbff2CharacterData
    {
        LPCWSTR pszCharacterName = nullptr;
        LPCWSTR pszImageName = nullptr;
        bool fShowImage[RBFF2_PALETTE_COUNT] = { false };
    };

    rbff2CharacterData rgCharacterData[] =
    {   //                                               base   bg     2      3     4       5      6      7     8      9       10    11   burn   13    elec  15
        { L"Terry",     L"indexRBFFSSprites_Terry",   { true, true, false, false, false, false, false, false, false, false, false, true, true, true, true, true } },
        { L"Andy",      L"indexRBFFSSprites_Andy",    { true, true, false, false, true, false, false, false, false, false, false, true, true, true, true, true } },
        { L"Joe",       L"indexRBFFSSprites_Joe",     { true, true, false, false, false, false, true, false, false, true, false, true, true, true, true, true } },
        { L"Mai",       L"indexRBFFSSprites_Mai",     { true, true, false, false, true, false, false, false, false, false, false, true, true, true, true, true } },
        { L"Geese",     L"indexRBFFSSprites_Geese",   { true, true, false, false, false, false, true, false, false, false, false, true, true, true, true, true } },
        { L"Sokaku",    L"indexRBFFSSprites_Sokaku",  { true, true, false, false, false, true, false, false, false, false, false, true, true, true, true, true } },
        { L"Bob",       L"indexRBFFSSprites_Bob",     { true, true, false, false, false, false, false, false, false, false, false, true, true, true, true, true } },
        { L"Hon Fu",    L"indexRBFFSSprites_Hon",     { true, true, true, false, false, false, false, false, false, false, false, true, true, true, true, true } },
        { L"Blue Mary", L"indexRBFFSSprites_BlueMary", { true, true, false, false, false, false, false, false, false, false, false, true, true, true, true, true } },
        { L"Franco",    L"indexRBFFSSprites_Franco",  { true, true, false, true, false, false, true, true, false, false, false, true, true, true, true, true } },
        { L"Yamazaki",  L"indexRBFFSSprites_Yamazaki", { true, true, false, false, false, true, true, false, false, false, false, true, true, true, true, true } },
        { L"Chonrei",   L"indexRBFFSSprites_Chonrei", { true, true, false, false, false, false, false, false, false, false, false, true, true, true, true, true } },
        { L"Chonshu",   L"indexRBFFSSprites_Chonshu", { true, true, false, false, false, false, false, false, false, false, false, true, true, true, true, true } },
        { L"Duck King", L"indexRBFFSSprites_DuckKing", { true, true, false, false, true, false, false, false, false, false, false, true, true, true, true, true } },
        { L"Kim",       L"indexRBFFSSprites_Kim",     { true, true, false, true, false, true, true, false, false, false, false, true, true, true, true, true } },
        { L"Billy",     L"indexRBFFSSprites_Billy",   { true, true, false, false, false, false, false, false, false, false, false, true, true, true, true, true } },
        { L"Cheng",     L"indexRBFFSSprites_Cheng",   { true, true, false, false, false, false, false, false, false, false, false, true, true, true, true, true } },
        { L"Tung",      L"indexRBFFSSprites_Tung",    { true, true, false, true, true, false, false, false, false, false, false, true, true, true, true, true } },
        { L"Laurence",  L"indexRBFFSSprites_Laurence", { true, true, false, false, false, false, true, false, false, false, false, true, true, true, true, true } },
        { L"Krauser",   L"indexRBFFSSprites_Krauser", { true, true, false, false, false, false, false, true, false, false, false, true, true, true, true, true } },
        { L"Rick",      L"indexRBFF2Sprites_Rick",    { true, true, false, false, false, false, false, false, false, false, false, true, true, true, true, true } },
        { L"XiangFei",  L"indexRBFF2Sprites_Xiangfei", { true, true, false, false, true, true, false, false, false, false, false, true, true, true, true, true } },
        { L"Alfred",    L"indexRBFF2Sprites_Alfred",  { true, true, false, false, false, true, false, false, false, false, false, true, true, true, true, true } },
        //                                               base   bg     2      3     4       5      6      7     8      9       10    11   burn   13    elec  15
    };

    const UINT32 k_nBasePalette = 0xd0000;
    UINT32 nCurrentPalettePosition = k_nBasePalette;

    for (UINT16 nCharIndex = 0; nCharIndex < ARRAYSIZE(rgCharacterData); nCharIndex++)
    {
        WCHAR szCodeDesc[MAX_DESCRIPTION_LENGTH];
        StrRemoveNonASCII(szCodeDesc, ARRAYSIZE(szCodeDesc), rgCharacterData[nCharIndex].pszCharacterName);

        // Status effects
        for (UINT16 nStatusIndex = 0; nStatusIndex < 32; nStatusIndex++)
        {
            CString strPaletteName;

            if ((nStatusIndex % RBFF2_PALETTE_COUNT) == 0)
            {
                strOutput.Format(L"const sGame_PaletteDataset RBFF2_A_%s_PALETTES_%s[] = \r\n{\r\n", szCodeDesc, (nStatusIndex < 10) ? L"P1" : L"P2");
                OutputDebugString(strOutput);
            }

            UINT32 nAdjustedIndex = (nStatusIndex > (RBFF2_PALETTE_COUNT - 1)) ? (nStatusIndex - RBFF2_PALETTE_COUNT) : nStatusIndex;

            switch (nAdjustedIndex)
            {
            case 0:
                strPaletteName = L"Main Palette";
                break;
            case 1:
                strPaletteName = L"Background Palette";
                break;
            case 12:
                strPaletteName = L"Burn Palette";
                break;
            case 13:
                strPaletteName = L"Purple Burn Palette";
                break;
            case 14:
                strPaletteName = L"Electricity Palette";
                break;
            case 15:
                strPaletteName = L"Break Shot/Background Palette 2";
                break;
            default:
                strPaletteName.Format(L"Extra Palette %u", nAdjustedIndex);
                break;
            }

            if (rgCharacterData[nCharIndex].fShowImage[nAdjustedIndex])
            {
                strOutput.Format(L"    { L\"%s\", 0x%x, 0x%x, %s },\r\n", strPaletteName.GetString(), nCurrentPalettePosition,
                                                                                            nCurrentPalettePosition + RBFF2_PALETTE_LENGTH, rgCharacterData[nCharIndex].pszImageName);
            }
            else
            {
                strOutput.Format(L"    { L\"%s\", 0x%x, 0x%x },\r\n", strPaletteName.GetString(), nCurrentPalettePosition, nCurrentPalettePosition + RBFF2_PALETTE_LENGTH );
            }
            OutputDebugString(strOutput);
            nCurrentPalettePosition += RBFF2_PALETTE_LENGTH;

            if (((nStatusIndex + 1) % RBFF2_PALETTE_COUNT) == 0)
            {
                strOutput.Format(L"};\r\n\r\n");
                OutputDebugString(strOutput);
            }
        }
    }

    for (UINT16 nCharIndex = 0; nCharIndex < ARRAYSIZE(rgCharacterData); nCharIndex++)
    {
        WCHAR szCodeDesc[MAX_DESCRIPTION_LENGTH];
        StrRemoveNonASCII(szCodeDesc, ARRAYSIZE(szCodeDesc), rgCharacterData[nCharIndex].pszCharacterName);

        strOutput.Format(L"const sDescTreeNode RBFF2_A_%s_COLLECTION[] = \r\n{\r\n", szCodeDesc);
        OutputDebugString(strOutput);
        strOutput.Format(L"    { L\"P1\", DESC_NODETYPE_TREE, (void*)RBFF2_A_%s_PALETTES_P1, ARRAYSIZE(RBFF2_A_%s_PALETTES_P1) },\r\n", szCodeDesc, szCodeDesc);
        OutputDebugString(strOutput);
        strOutput.Format(L"    { L\"P2\", DESC_NODETYPE_TREE, (void*)RBFF2_A_%s_PALETTES_P2, ARRAYSIZE(RBFF2_A_%s_PALETTES_P2) },\r\n", szCodeDesc, szCodeDesc);
        OutputDebugString(strOutput);

        strOutput.Format(L"    { L\"P1 Portraits\", DESC_NODETYPE_TREE, (void*)RBFF2_A_%s_PORTRAIT_PALETTES_P1, ARRAYSIZE(RBFF2_A_%s_PORTRAIT_PALETTES_P1) },\r\n", szCodeDesc, szCodeDesc);
        OutputDebugString(strOutput);
        strOutput.Format(L"    { L\"P2 Portraits\", DESC_NODETYPE_TREE, (void*)RBFF2_A_%s_PORTRAIT_PALETTES_P2, ARRAYSIZE(RBFF2_A_%s_PORTRAIT_PALETTES_P2) },\r\n", szCodeDesc, szCodeDesc);
        OutputDebugString(strOutput);

        strOutput.Format(L"};\r\n\r\n");
        OutputDebugString(strOutput);
    }

    strOutput.Format(L"const sDescTreeNode RBFF2_A_UNITS[] = \r\n{\r\n");
    OutputDebugString(strOutput);

    for (UINT16 nCharIndex = 0; nCharIndex < ARRAYSIZE(rgCharacterData); nCharIndex++)
    {
        WCHAR szCodeDesc[MAX_DESCRIPTION_LENGTH];
        StrRemoveNonASCII(szCodeDesc, ARRAYSIZE(szCodeDesc), rgCharacterData[nCharIndex].pszCharacterName);

        strOutput.Format(L"    { L\"%s\", DESC_NODETYPE_TREE, (void*)RBFF2_A_%s_COLLECTION, ARRAYSIZE(RBFF2_A_%s_COLLECTION) },\r\n", rgCharacterData[nCharIndex].pszCharacterName, szCodeDesc, szCodeDesc);
        OutputDebugString(strOutput);
    }

    strOutput.Format(L"    { L\"Bonus\", DESC_NODETYPE_TREE, (void*)RBFF2_A_BONUS_COLLECTION, ARRAYSIZE(RBFF2_A_BONUS_COLLECTION) },\r\n");
    OutputDebugString(strOutput);

    strOutput.Format(L"};\r\n\r\n");
    OutputDebugString(strOutput);
}

UINT16 CGame_RBFF2_A::GetCollectionCountForUnit(UINT16 nUnitId)
{
    if (nUnitId == RBFF2_A_EXTRALOC)
    {
        return GetExtraCt(nUnitId);
    }
    else
    {
        return RBFF2_A_UNITS[nUnitId].uChildAmt;
    }
}

UINT16 CGame_RBFF2_A::GetNodeCountForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    if (nUnitId == RBFF2_A_EXTRALOC)
    {
        return GetExtraCt(nUnitId);
    }
    else
    {
        const sDescTreeNode* pCollectionNode = (const sDescTreeNode*)(RBFF2_A_UNITS[nUnitId].ChildNodes);

        return pCollectionNode[nCollectionId].uChildAmt;
    }
}

LPCWSTR CGame_RBFF2_A::GetDescriptionForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    if (nUnitId == RBFF2_A_EXTRALOC)
    {
        return L"Extra Palettes";
    }
    else
    {
        const sDescTreeNode* pCollection = (const sDescTreeNode*)RBFF2_A_UNITS[nUnitId].ChildNodes;
        return pCollection[nCollectionId].szDesc;
    }
}

UINT16 CGame_RBFF2_A::GetPaletteCountForUnit(UINT16 nUnitId)
{
    if (nUnitId == RBFF2_A_EXTRALOC)
    {
        return GetExtraCt(nUnitId);
    }
    else
    {
        UINT16 nCompleteCount = 0;
        const sDescTreeNode* pCompleteROMTree = RBFF2_A_UNITS;
        UINT16 nCollectionCount = pCompleteROMTree[nUnitId].uChildAmt;

        const sDescTreeNode* pCurrentCollection = (const sDescTreeNode*)(pCompleteROMTree[nUnitId].ChildNodes);

        for (UINT16 nCollectionIndex = 0; nCollectionIndex < nCollectionCount; nCollectionIndex++)
        {
            nCompleteCount += pCurrentCollection[nCollectionIndex].uChildAmt;
        }

#if RBFF2_A_DEBUG
        CString strMsg;
        strMsg.Format(L"CGame_RBFF2_A::GetPaletteCountForUnit: %u for unit %u which has %u collections.\n", nCompleteCount, nUnitId, nCollectionCount);
        OutputDebugString(strMsg);
#endif

        return nCompleteCount;
    }
}

const sGame_PaletteDataset* CGame_RBFF2_A::GetPaletteSet(UINT16 nUnitId, UINT16 nCollectionId)
{
    // Don't use this for Extra palettes.
    const sDescTreeNode* pCurrentSet = (const sDescTreeNode*)RBFF2_A_UNITS[nUnitId].ChildNodes;
    return ((sGame_PaletteDataset*)(pCurrentSet[nCollectionId].ChildNodes));
}

const sDescTreeNode* CGame_RBFF2_A::GetNodeFromPaletteId(UINT16 nUnitId, UINT16 nPaletteId, bool fReturnBasicNodesOnly)
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

        if (nUnitId == RBFF2_A_EXTRALOC)
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
            const sDescTreeNode* pCollectionNodeToCheck = (const sDescTreeNode*)(RBFF2_A_UNITS[nUnitId].ChildNodes);
            
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

const sGame_PaletteDataset* CGame_RBFF2_A::GetSpecificPalette(UINT16 nUnitId, UINT16 nPaletteId)
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

void CGame_RBFF2_A::LoadSpecificPaletteData(UINT16 nUnitId, UINT16 nPalId)
{
     if (nUnitId != RBFF2_A_EXTRALOC)
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
    else // RBFF2_A_EXTRALOC
    {
        // This is where we handle all the palettes added in via Extra.
        stExtraDef* pCurrDef = GetExtraDefForRBFF2(GetExtraLoc(nUnitId) + nPalId);

        m_nCurrentPaletteROMLocation = pCurrDef->uOffset;
        m_nCurrentPaletteSizeInColors = (pCurrDef->cbPaletteSize / m_nSizeOfColorsInBytes);
        m_pszCurrentPaletteName = pCurrDef->szDesc;
    }
}

BOOL CGame_RBFF2_A::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
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

    // Only load images for internal units, since we don't currently have a methodology for associating
    // external loads to internal sprites.
    if (NodeGet->uUnitId != RBFF2_A_EXTRALOC)
    {
        const sGame_PaletteDataset* paletteDataSet = GetSpecificPalette(NodeGet->uUnitId, NodeGet->uPalId);

        if (paletteDataSet)
        {
            nImgUnitId = paletteDataSet->indexImgToUse;
            nTargetImgId = paletteDataSet->indexOffsetToUse;

            const sDescTreeNode* pCurrentNode = GetNodeFromPaletteId(NodeGet->uUnitId, NodeGet->uPalId, false);

            if (pCurrentNode)
            {
                if ((_wcsicmp(pCurrentNode->szDesc, L"P1") == 0) || (_wcsicmp(pCurrentNode->szDesc, L"P2") == 0))
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
        }
    }

    //Create the default palette
    ClearSetImgTicket(CreateImgTicket(nImgUnitId, nTargetImgId));

    CreateDefPal(NodeGet, 0);

    SetSourcePal(0, NodeGet->uUnitId, nSrcStart, nSrcAmt, nNodeIncrement);

    return TRUE;
}

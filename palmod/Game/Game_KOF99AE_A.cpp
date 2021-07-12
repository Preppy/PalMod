#include "StdAfx.h"
#include "GameDef.h"
#include "Game_KOF99AE_A.h"
#include "..\PalMod.h"
#include "..\RegProc.h"

#define KOF99AE_A_DEBUG DEFAULT_GAME_DEBUG_STATE

stExtraDef* CGame_KOF99AE_A::KOF99AE_A_P2_EXTRA_CUSTOM = nullptr;
stExtraDef* CGame_KOF99AE_A::KOF99AE_A_P3_EXTRA_CUSTOM = nullptr;

CDescTree CGame_KOF99AE_A::MainDescTree_P2 = nullptr;
CDescTree CGame_KOF99AE_A::MainDescTree_P3 = nullptr;

int CGame_KOF99AE_A::rgExtraCountAll_P2[KOF99AE_A_P2_NUMUNIT + 1];
int CGame_KOF99AE_A::rgExtraCountAll_P3[KOF99AE_A_P3_NUMUNIT + 1];
int CGame_KOF99AE_A::rgExtraLoc_P2[KOF99AE_A_P2_NUMUNIT + 1];
int CGame_KOF99AE_A::rgExtraLoc_P3[KOF99AE_A_P3_NUMUNIT + 1];

int CGame_KOF99AE_A::m_nSelectedRom = 22;
UINT32 CGame_KOF99AE_A::m_nTotalPaletteCountForKOF99AE_P2 = 0;
UINT32 CGame_KOF99AE_A::m_nTotalPaletteCountForKOF99AE_P3 = 0;
UINT32 CGame_KOF99AE_A::m_nExpectedGameROMSize = 0x400000;  // 4194304 bytes
UINT32 CGame_KOF99AE_A::m_nConfirmedROMSize = -1;

void CGame_KOF99AE_A::InitializeStatics()
{
    safe_delete_array(CGame_KOF99AE_A::KOF99AE_A_P2_EXTRA_CUSTOM);
    safe_delete_array(CGame_KOF99AE_A::KOF99AE_A_P3_EXTRA_CUSTOM);

    memset(rgExtraCountAll_P2, -1, sizeof(rgExtraCountAll_P2));
    memset(rgExtraCountAll_P3, -1, sizeof(rgExtraCountAll_P3));
    memset(rgExtraLoc_P2, -1, sizeof(rgExtraLoc_P2));
    memset(rgExtraLoc_P3, -1, sizeof(rgExtraLoc_P3));

    MainDescTree_P2.SetRootTree(CGame_KOF99AE_A::InitDescTree(2));
    MainDescTree_P3.SetRootTree(CGame_KOF99AE_A::InitDescTree(3));
}

CGame_KOF99AE_A::CGame_KOF99AE_A(UINT32 nConfirmedROMSize, int nROMToLoad /*= 2*/)
{
    OutputDebugString(L"CGame_KOF99AE_A::CGame_KOF99AE_A: Loading ROM...\n");

    // We need this set before we initialize so that corrupt Extras truncate correctly.
    // Otherwise the new user inadvertently corrupts their ROM.
    m_nConfirmedROMSize = nConfirmedROMSize;
    InitializeStatics();

    m_nSelectedRom = nROMToLoad;

    m_nTotalInternalUnits = UsePaletteSetForP2() ? KOF99AE_A_P2_NUMUNIT : KOF99AE_A_P3_NUMUNIT;
    m_nExtraUnit = UsePaletteSetForP2() ? KOF99AE_A_P2_EXTRALOC : KOF99AE_A_P3_EXTRALOC;

    m_nSafeCountForThisRom = GetExtraCt(m_nExtraUnit) + (UsePaletteSetForP2() ? 1468 : 2448);
    m_pszExtraFilename = UsePaletteSetForP2() ? EXTRA_FILENAME_KOF99AE_A_P2 : EXTRA_FILENAME_KOF99AE_A_P3;
    m_nTotalPaletteCount = UsePaletteSetForP2() ? m_nTotalPaletteCountForKOF99AE_P2 : m_nTotalPaletteCountForKOF99AE_P3;
    // This magic number is used to warn users if their Extra file is trying to write somewhere potentially unusual
    m_nLowestKnownPaletteRomLocation = UsePaletteSetForP2() ? 0x2d97f0 : 0x1d97f0;

    nUnitAmt = m_nTotalInternalUnits + (GetExtraCt(m_nExtraUnit) ? 1 : 0);

    InitDataBuffer();

    createPalOptions = { NO_SPECIAL_OPTIONS, WRITE_16 };
    SetAlphaMode(AlphaMode::GameDoesNotUseAlpha);
    SetColorMode(ColMode::COLMODE_RGB666_NEOGEO);

    //Set game information
    nGameFlag = KOF99AE_A;
    nImgGameFlag = IMGDAT_SECTION_KOF;
    m_prgGameImageSet = KOF99AE_A_IMGIDS_USED;
    nImgUnitAmt = ARRAYSIZE(KOF99AE_A_IMGIDS_USED);

    nFileAmt = 1;

    //Set the image out display type
    DisplayType = eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT;
    // Button labels are used for the Export Image dialog
    pButtonLabelSet = UsePaletteSetForP2() ? DEF_BUTTONLABEL_2_AB  : DEF_BUTTONLABEL_KOF99AE_P3;
    m_nNumberOfColorOptions = UsePaletteSetForP2() ? ARRAYSIZE(DEF_BUTTONLABEL_2_AB) : ARRAYSIZE(DEF_BUTTONLABEL_KOF99AE_P3);

    //Create the redirect buffer
    rgUnitRedir = new UINT16[nUnitAmt + 1];
    memset(rgUnitRedir, NULL, sizeof(UINT16) * nUnitAmt);

    //Create the file changed flag
    PrepChangeTrackingArray();
}

CGame_KOF99AE_A::~CGame_KOF99AE_A(void)
{
    safe_delete_array(CGame_KOF99AE_A::KOF99AE_A_P2_EXTRA_CUSTOM);
    safe_delete_array(CGame_KOF99AE_A::KOF99AE_A_P3_EXTRA_CUSTOM);
    ClearDataBuffer();
    //Get rid of the file changed flag
    FlushChangeTrackingArray();
}

const sDescTreeNode* CGame_KOF99AE_A::GetCurrentUnitSet()
{
    if (UsePaletteSetForP2())
    {
        return KOF99AE_A_P2_UNITS;
    }
    else
    {
        return KOF99AE_A_P3_UNITS;
    }
}

UINT16 CGame_KOF99AE_A::GetCurrentExtraLoc()
{
    if (UsePaletteSetForP2())
    {
        return KOF99AE_A_P2_EXTRALOC;
    }
    else
    {
        return KOF99AE_A_P3_EXTRALOC;
    }
}

CDescTree* CGame_KOF99AE_A::GetMainTree()
{
    if (UsePaletteSetForP2())
    {
        return &CGame_KOF99AE_A::MainDescTree_P2;
    }
    else
    {
        return &CGame_KOF99AE_A::MainDescTree_P3;
    }
}

UINT32 CGame_KOF99AE_A::GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet, bool* pfNeedToValidateCRCs)
{
    static sCRC32ValueSet knownROMs[] =
    {
        { L"KOF '99AE ROM P2 (Neo-Geo)", L"kof99ae_p2.bin", 0, 0 },
        { L"KOF '99AE ROM P3 (Neo-Geo)", L"kof99ae_p3.bin", 0, 0 },
        { L"KOF '99ND (Neo-Geo)", L"152-p2.bin", 0, 0 },
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

stExtraDef* CGame_KOF99AE_A::GetCurrentExtraDef(int nDefCtr)
{
    if (UsePaletteSetForP2())
    {
        return (stExtraDef*)&KOF99AE_A_P2_EXTRA_CUSTOM[nDefCtr];
    }
    else
    {
        return (stExtraDef*)&KOF99AE_A_P3_EXTRA_CUSTOM[nDefCtr];
    }
}

int CGame_KOF99AE_A::GetExtraCt(UINT16 nUnitId, BOOL bCountVisibleOnly)
{
    int* rgExtraCt;
    int nArraySize;

    if (UsePaletteSetForP2())
    {
        rgExtraCt = (int*)rgExtraCountAll_P2;
        nArraySize = KOF99AE_A_P2_NUMUNIT;
    }
    else
    {
        rgExtraCt = (int*)rgExtraCountAll_P3;
        nArraySize = KOF99AE_A_P3_NUMUNIT;
    }

    if (rgExtraCt[0] == -1)
    {
        int nDefCtr = 0;
        memset(rgExtraCt, 0, ((nArraySize + 1) * sizeof(int)));

        stExtraDef* pCurrDef = GetCurrentExtraDef(0);

        while (pCurrDef->uUnitN != INVALID_UNIT_VALUE)
        {
            if (!pCurrDef->isInvisible || !bCountVisibleOnly)
            {
                rgExtraCt[pCurrDef->uUnitN]++;
            }

            nDefCtr++;
            pCurrDef = GetCurrentExtraDef(nDefCtr);
        }
    }

    return rgExtraCt[nUnitId];
}

int CGame_KOF99AE_A::GetExtraLoc(UINT16 nUnitId)
{
    int* rgExtraCurrent;
    int nArraySize;

    if (UsePaletteSetForP2())
    {
        rgExtraCurrent = (int*)rgExtraLoc_P2;
        nArraySize = KOF99AE_A_P2_NUMUNIT;
    }
    else
    {
        rgExtraCurrent = (int*)rgExtraLoc_P3;
        nArraySize = KOF99AE_A_P3_NUMUNIT;
    }

    if (rgExtraCurrent[0] == -1)
    {
        int nDefCtr = 0;
        int nCurrUnit = UNIT_START_VALUE;
        memset(rgExtraCurrent, 0, (nArraySize + 1) * sizeof(int));

        stExtraDef* pCurrDef = GetCurrentExtraDef(0);

        while (pCurrDef->uUnitN != INVALID_UNIT_VALUE)
        {
            if (pCurrDef->uUnitN != nCurrUnit)
            {
                rgExtraCurrent[pCurrDef->uUnitN] = nDefCtr;
                nCurrUnit = pCurrDef->uUnitN;
            }

            nDefCtr++;
            pCurrDef = GetCurrentExtraDef(nDefCtr);
        }
    }

    return rgExtraCurrent[nUnitId];
}

sDescTreeNode* CGame_KOF99AE_A::InitDescTree(int nROMPaletteSetToUse)
{
    UINT32 nTotalPaletteCount = 0;
    m_nSelectedRom = nROMPaletteSetToUse;

    bool fHaveExtras;
    UINT16 nUnitCt;
    UINT8 nExtraUnitLocation;

    if (UsePaletteSetForP2())
    {
        nExtraUnitLocation = KOF99AE_A_P2_EXTRALOC;
        LoadExtraFileForGame(EXTRA_FILENAME_KOF99AE_A_P2, KOF99AE_A_EXTRA, &KOF99AE_A_P2_EXTRA_CUSTOM, KOF99AE_A_P2_EXTRALOC, m_nConfirmedROMSize);
        fHaveExtras = GetExtraCt(KOF99AE_A_P2_EXTRALOC);
        nUnitCt = KOF99AE_A_P2_NUMUNIT + (fHaveExtras ? 1 : 0);
    }
    else
    {
        nExtraUnitLocation = KOF99AE_A_P3_EXTRALOC;
        LoadExtraFileForGame(EXTRA_FILENAME_KOF99AE_A_P3, KOF99AE_A_EXTRA, &KOF99AE_A_P3_EXTRA_CUSTOM, KOF99AE_A_P3_EXTRALOC, m_nConfirmedROMSize);
        fHaveExtras = GetExtraCt(KOF99AE_A_P3_EXTRALOC);
        nUnitCt = KOF99AE_A_P3_NUMUNIT + (fHaveExtras ? 1 : 0);
    }

    sDescTreeNode* NewDescTree = new sDescTreeNode;

    //Create the main character tree
    _snwprintf_s(NewDescTree->szDesc, ARRAYSIZE(NewDescTree->szDesc), _TRUNCATE, L"%s", g_GameFriendlyName[KOF99AE_A]);
    NewDescTree->ChildNodes = new sDescTreeNode[nUnitCt];
    NewDescTree->uChildAmt = nUnitCt;
    //All units have tree children
    NewDescTree->uChildType = DESC_NODETYPE_TREE;

    CString strMsg;
    strMsg.Format(L"CGame_KOF99AE_A::InitDescTree: Building desc tree for KOF99AE_A %s extras...\n", fHaveExtras ? L"with" : L"without");
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

#if KOF99AE_A_DEBUG
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

#if KOF99AE_A_DEBUG
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

#if KOF99AE_A_DEBUG
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

#if KOF99AE_A_DEBUG
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

#if KOF99AE_A_DEBUG
            strMsg.Format(L"\tCollection: %s, %u of %u, %u children\n", CollectionNode->szDesc, 1, nUnitChildCount, nExtraCt);
            OutputDebugString(strMsg);
#endif

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

#if KOF99AE_A_DEBUG
                strMsg.Format(L"\t\tPalette: %s, %u of %u\n", ChildNode->szDesc, nExtraCtr + 1, nExtraCt);
                OutputDebugString(strMsg);
#endif

                nCurrExtra++;
                nTotalPaletteCount++;
            }
        }
    }

    strMsg.Format(L"CGame_KOF99AE_A::InitDescTree: Loaded %u palettes for KOF99AE\n", nTotalPaletteCount);
    OutputDebugString(strMsg);

    if (UsePaletteSetForP2())
    {
        // For development use to speed things up.
        // I just dump them once in sequence to avoid needing to cull the ROM loading output
        //DumpPaletteHeaders(2);
        //DumpPaletteHeaders(3);

        m_nTotalPaletteCountForKOF99AE_P2 = nTotalPaletteCount;
    }
    else
    {
        m_nTotalPaletteCountForKOF99AE_P3 = nTotalPaletteCount;
    }

    return NewDescTree;
}

struct sKOF99AE_A_PaletteData
{
    LPCWSTR pszCharacterName;
    UINT32 nROMOffset = 0;
    UINT32 nIgnored = 0; // I don't want to reparse the data I got, so just ignoring this
    LPCWSTR pszImageSet = nullptr;
    bool fIsMultipart = false;
};

sKOF99AE_A_PaletteData KOF99AE_A_CharacterPalettes[] =
{
    { L"K'",                0x2d97f0, 0x2d99f0, L"indexKOF99Sprites_K" },
    { L"Maxima",            0x2d9bf0, 0x2d9df0, L"indexKOF99Sprites_Maxima" },
    { L"Benimaru",          0x2d9ff0, 0x2da1f0, L"indexKOF99Sprites_Benimaru" },
    { L"Shingo",            0x2da3f0, 0x2da5f0, L"indexKOF99Sprites_Shingo" },
    { L"Terry",             0x2da7f0, 0x2da9f0, L"indexKOF99Sprites_Terry" },
    { L"Andy",              0x2dabf0, 0x2dadf0, L"indexKOF99Sprites_Andy" },
    { L"Joe",               0x2daff0, 0x2db1f0, L"indexKOF99Sprites_Joe" },
    { L"Mai",               0x2db3f0, 0x2db5f0, L"indexKOF99Sprites_Mai" },
    { L"Ryo",               0x2db7f0, 0x2db9f0, L"indexKOF99Sprites_Ryo" },
    { L"Robert",            0x2dbbf0, 0x2dbdf0, L"indexKOF99Sprites_Robert" },
    { L"Yuri",              0x2dbff0, 0x2dc1f0, L"indexKOF99Sprites_Yuri" },
    { L"Takuma",            0x2dc3f0, 0x2dc5f0, L"indexKOF99Sprites_Takuma" },
    { L"Leona",             0x2dc7f0, 0x2dc9f0, L"indexKOF99Sprites_Leona" },
    { L"Ralf",              0x2dcbf0, 0x2dcdf0, L"indexKOF99Sprites_Ralf" },
    { L"Clark",             0x2dcff0, 0x2dd1f0, L"indexKOF99Sprites_Clark" },
    { L"Whip",              0x2dd3f0, 0x2dd5f0, L"indexKOF99Sprites_Whip" },
    { L"Athena",            0x2dd7f0, 0x2dd9f0, L"indexKOF99Sprites_Athena" },
    { L"Kensou",            0x2ddbf0, 0x2dddf0, L"indexKOF99Sprites_Kensou" },
    { L"Chin",              0x2ddff0, 0x2de1f0, L"indexKOF99Sprites_Chin" },
    { L"Bao",               0x2de3f0, 0x2de5f0, L"indexKOF99Sprites_Bao" },
    { L"King",              0x2de7f0, 0x2de9f0, L"indexKOF99Sprites_King" },
    { L"Blue Mary",         0x2debf0, 0x2dedf0, L"indexKOF99Sprites_BlueMary" },
    { L"Kasumi",            0x2deff0, 0x2df1f0, L"indexKOF99Sprites_Kasumi" },
    { L"Xiangfei",          0x2df3f0, 0x2df5f0, L"indexKOF99Sprites_Xiangfei" },
    { L"Kim",               0x2df7f0, 0x2df9f0, L"indexKOF99Sprites_Kim" },
    { L"Chang",             0x2dfbf0, 0x2dfdf0, L"indexKOF99Sprites_Chang", true },
    { L"Choi",              0x2dfff0, 0x2e01f0, L"indexKOF99Sprites_Choi" },
    { L"Jhun",              0x2e03f0, 0x2e05f0, L"indexKOF99Sprites_Jhun", true },
    { L"Kyo",               0x2e07f0, 0x2e09f0, L"indexKOF99Sprites_Kyo" },
    { L"Kyo-1",             0x2e0bf0, 0x2e0df0, L"indexKOF99Sprites_Kyo1" },
    { L"Iori",              0x2e0ff0, 0x2e11f0, L"indexKOF99Sprites_Iori" },
    { L"Jacket Krizalid",   0x2e13f0, 0x2e15f0, L"indexKOF99Sprites_JacketKrizalid", true },
    { L"Boss Krizalid",     0x2e17f0, 0x2e19f0, L"indexKOF99Sprites_BossKrizalid" },
    { L"Kyo-2",             0x2fb1f0, 0x2fb3f0, L"indexKOF99Sprites_Kyo2" },
};

sKOF99AE_A_PaletteData KOF99AE_A_CharacterWinPortraits[] =
{
    { L"K' Win Portrait", 0x2e5df0, 0x2e5f70 },
    { L"Maxima Win Portrait", 0x2e60f0, 0x2e6270 },
    { L"Benimaru Win Portrait", 0x2e63f0, 0x2e6570 },
    { L"Shingo Win Portrait", 0x2e66f0, 0x2e6870 },
    { L"Terry Win Portrait", 0x2e69f0, 0x2e6b70 },
    { L"Andy Win Portrait", 0x2e6cf0, 0x2e6e70 },
    { L"Joe Win Portrait", 0x2e6ff0, 0x2e7170 },
    { L"Mai Win Portrait", 0x2e72f0, 0x2e7470 },
    { L"Ryo Win Portrait", 0x2e75f0, 0x2e7770 },
    { L"Robert Win Portrait", 0x2e78f0, 0x2e7a70 },
    { L"Yuri Win Portrait", 0x2e7bf0, 0x2e7d70 },
    { L"Takuma Win Portrait", 0x2e7ef0, 0x2e8070 },
    { L"Leona Win Portrait", 0x2e81f0, 0x2e8370 },
    { L"Ralf Win Portrait", 0x2e84f0, 0x2e8670 },
    { L"Clark Win Portrait", 0x2e87f0, 0x2e8970 },
    { L"Whip Win Portrait", 0x2e8af0, 0x2e8c70 },
    { L"Athena Win Portrait", 0x2e8df0, 0x2e8f70 },
    { L"Kensou Win Portrait", 0x2e90f0, 0x2e9270 },
    { L"Chin Win Portrait", 0x2e93f0, 0x2e9570 },
    { L"Bao Win Portrait", 0x2e96f0, 0x2e9870 },
    { L"King Win Portrait", 0x2e99f0, 0x2e9b70 },
    { L"Blue Mary Win Portrait", 0x2e9cf0, 0x2e9e70 },
    { L"Kasumi Win Portrait", 0x2e9ff0, 0x2ea170 },
    { L"Xiangfei Win Portrait", 0x2ea2f0, 0x2ea470 },
    { L"Kim Win Portrait", 0x2ea5f0, 0x2ea770 },
    { L"Chang Win Portrait", 0x2ea8f0, 0x2eaa70 },
    { L"Choi Win Portrait", 0x2eabf0, 0x2ead70 },
    { L"Jhun Win Portrait", 0x2eaef0, 0x2eb070 },
    { L"Kyo Win Portrait", 0x2eb1f0, 0x2eb370 },
    { L"Kyo-1 Win Portrait", 0x2eb4f0, 0x2eb670 },
    { L"Iori Win Portrait", 0x2eb7f0, 0x2eb970 },
    { L"Jacket Krizalid Win Portrait", 0x2ebaf0, 0x2ebc70 },
    { L"Boss Krizalid Win Portrait", 0x2ebdf0, 0x2ebf70 },
    { L"Kyo-2 Win Portrait", 0x2fb7f0, 0x2fb870 },
};

sKOF99AE_A_PaletteData KOF99AE_A_CharacterStrikerPortraits[] =
{
    { L"K' Striker Portrait", 0x2f9bf0, 0x2f9c10 },
    { L"Maxima Striker Portrait", 0x2f9c30, 0x2f9c50 },
    { L"Benimaru Striker Portrait", 0x2f9c70, 0x2f9c90 },
    { L"Shingo Striker Portrait", 0x2f9cb0, 0x2f9cd0 },
    { L"Terry Striker Portrait", 0x2f9cf0, 0x2f9d10 },
    { L"Andy Striker Portrait", 0x2f9d30, 0x2f9d50 },
    { L"Joe Striker Portrait", 0x2f9d70, 0x2f9d90 },
    { L"Mai Striker Portrait", 0x2f9db0, 0x2f9dd0 },
    { L"Ryo Striker Portrait", 0x2f9df0, 0x2f9e10 },
    { L"Robert Striker Portrait", 0x2f9e30, 0x2f9e50 },
    { L"Yuri Striker Portrait", 0x2f9e70, 0x2f9e90 },
    { L"Takuma Striker Portrait", 0x2f9eb0, 0x2f9ed0 },
    { L"Leona Striker Portrait", 0x2f9ef0, 0x2f9f10 },
    { L"Ralf Striker Portrait", 0x2f9f30, 0x2f9f50 },
    { L"Clark Striker Portrait", 0x2f9f70, 0x2f9f90 },
    { L"Whip Striker Portrait", 0x2f9fb0, 0x2f9fd0 },
    { L"Athena Striker Portrait", 0x2f9ff0, 0x2fa010 },
    { L"Kensou Striker Portrait", 0x2fa030, 0x2fa050 },
    { L"Chin Striker Portrait", 0x2fa070, 0x2fa090 },
    { L"Bao Striker Portrait", 0x2fa0b0, 0x2fa0d0 },
    { L"King Striker Portrait", 0x2fa0f0, 0x2fa110 },
    { L"Blue Mary Striker Portrait", 0x2fa130, 0x2fa150 },
    { L"Kasumi Striker Portrait", 0x2fa170, 0x2fa190 },
    { L"Xiangfei Striker Portrait", 0x2fa1b0, 0x2fa1d0 },
    { L"Kim Striker Portrait", 0x2fa1f0, 0x2fa210 },
    { L"Chang Striker Portrait", 0x2fa230, 0x2fa250 },
    { L"Choi Striker Portrait", 0x2fa270, 0x2fa290 },
    { L"Jhun Striker Portrait", 0x2fa2b0, 0x2fa2d0 },
    { L"Kyo Striker Portrait", 0x2fa2f0, 0x2fa310 },
    { L"Kyo-1 Striker Portrait", 0x2fa330, 0x2fa350 },
    { L"Iori Striker Portrait", 0x2fa370, 0x2fa390 },
    { L"Jacket Krizalid Striker Portrait", 0x2fa3b0, 0x2fa3d0 },
    { L"Boss Krizalid Striker Portrait", 0x2fa3f0, 0x2fa410 },
    { L"Kyo-2 Striker Portrait", 0x2fbaf0, 0x2fbb10 },
};

sKOF99AE_A_PaletteData KOF99AE_A_CharacterEffectPalettes[] =
{
    { L"K' Extras", 0x2e1bf0, 0x2e1cf0 },
    { L"Maxima Extras", 0x2e1df0, 0x2e1ef0 },
    { L"Benimaru Extras", 0x2e1ff0, 0x2e20f0 },
    { nullptr }, // empty: Shingo
    { L"Terry Extras", 0x2e23f0, 0x2e24f0 },
    { L"Andy Extras", 0x2e25f0, 0x2e26f0 },
    { L"Joe Extras", 0x2e27f0, 0x2e28f0 },
    { L"Mai Extras", 0x2e29f0, 0x2e2af0 },
    { L"Ryo Extras", 0x2e2bf0, 0x2e2cf0 },
    { L"Robert Extras", 0x2e2df0, 0x2e2ef0 },
    { L"Yuri Extras", 0x2e2ff0, 0x2e30f0 },
    { L"Takuma Extras", 0x2e31f0, 0x2e32f0 },
    { L"Leona Extras", 0x2e33f0, 0x2e34f0 },
    { nullptr }, // empty: Ralf
    { nullptr }, // empty: Clark
    { L"Whip Extras", 0x2e39f0, 0x2e3af0 },
    { L"Athena Extras", 0x2e3bf0, 0x2e3cf0 },
    { L"Kensou Extras", 0x2e3df0, 0x2e3ef0 },
    { L"Chin Extras", 0x2e3ff0, 0x2e40f0 },
    { L"Bao Extras", 0x2e41f0, 0x2e42f0 },
    { L"King Extras", 0x2e43f0, 0x2e44f0 },
    { L"Blue Mary Extras", 0x2e45f0, 0x2e46f0 },
    { L"Kasumi Extras", 0x2e47f0, 0x2e48f0 },
    { L"Xiangfei Extras", 0x2e49f0, 0x2e4af0 },
    { nullptr }, // empty: Kim
    { L"Chang Extras", 0x2e4df0, 0x2e4ef0 },
    { L"Choi Extras", 0x2e4ff0, 0x2e50f0 },
    { L"Jhun Extras", 0x2e51f0, 0x2e52f0 },
    { L"Kyo Extras", 0x2e53f0, 0x2e54f0 },
    { L"Kyo-1 Extras", 0x2e55f0, 0x2e56f0 },
    { L"Iori Extras", 0x2e57f0, 0x2e58f0 },
    { L"Jacket Krizalid Extras", 0x2e59f0, 0x2e5af0 },
    { L"Boss Krizalid Extras", 0x2e5bf0, 0x2e5cf0 },
    { L"Kyo-2 Extras", 0x2fb5f0, 0x2fb6f0 },
};

void CGame_KOF99AE_A::DumpPaletteHeaders(int nHeaderSetToDump)
{
    CString strOutput;
    UINT16 nColorOptionsPerCharacter = 2;
    constexpr UINT32 KOF99AE_PALETTE_LENGTH = 0x20;
    const UINT16 nCountStatusEffects = 16;
    const LPCWSTR* ppszButtonLabels;

    if (nHeaderSetToDump == 2)
    {
        nColorOptionsPerCharacter = 2;
        ppszButtonLabels = DEF_BUTTONLABEL_2_AB;
    }
    else
    {
        nColorOptionsPerCharacter = 4;
        ppszButtonLabels = DEF_BUTTONLABEL_KOF99AE_P3;
    }

    for (UINT16 nCharIndex = 0; nCharIndex < ARRAYSIZE(KOF99AE_A_CharacterPalettes); nCharIndex++)
    {
        WCHAR szCodeDesc[MAX_DESCRIPTION_LENGTH];
        StruprRemoveNonASCII(szCodeDesc, ARRAYSIZE(szCodeDesc), KOF99AE_A_CharacterPalettes[nCharIndex].pszCharacterName);

        for (UINT16 nCharColorIndex = 0; nCharColorIndex < nColorOptionsPerCharacter; nCharColorIndex++)
        {
            const UINT16 nPaletteIterationForColor = nCharColorIndex % 2;
            int nShiftForP3FirstColorSet = 0;
            
            if ((nHeaderSetToDump == 3) && (nCharColorIndex < 2))
            {
                // C and D are 0x100000 before AC and BD in 3
                nShiftForP3FirstColorSet  = -0x100000;
            }

            strOutput.Format(L"const sGame_PaletteDataset KOF99AE_A_%s_%s_PALETTES[] = \r\n{\r\n", szCodeDesc, ppszButtonLabels[nCharColorIndex]);
            OutputDebugString(strOutput);

            struct s99AEPaletteData
            {
                LPCWSTR pszMoveName;
                int nPaletteIndex = -1;
                bool fIsPairable = false;
                int nPairedPaletteIndex = 0;
            };

            const s99AEPaletteData rgKOF99AEPaletteNames[] =
            {
                { L"Main",                  0, true, 0 },
                { L"Extra 1",               0, true, 1 },
                { L"Extra 2",               0, false },
                { L"Electric Palette",      0, true, 0 },
                { L"Extra 3",               0, true, 1 },
                { L"Counter Mode Flash",    0, true, 0 },
                { L"Counter Extra 1",       0, true, 1 },
                { L"Counter Extra 2",       0, false },
                { L"Armor Mode Flash",      0, true, 0 },
                { L"Armor Mode Extra 1",    0, true, 1 },
                { L"Armor Mode Extra 2",    0, false },
                { L"Super Trail Palette",   0, true, 0 },
                { L"Extra 4",               0, true, 1 },
                { L"Extra 5",               0, false },
                { L"Lifebar Portrait",      -1, false },
                { L"Character Portrait",    0x31, false },
            };

            for (UINT16 nPaletteIndex = 0; nPaletteIndex < ARRAYSIZE(rgKOF99AEPaletteNames); nPaletteIndex++)
            {
                UINT32 nCurrentOffset = KOF99AE_A_CharacterPalettes[nCharIndex].nROMOffset + (nPaletteIndex * KOF99AE_PALETTE_LENGTH) + (nPaletteIterationForColor * 0x200) + nShiftForP3FirstColorSet;

                strOutput.Format(L"    { L\"%s\", 0x%x, 0x%x", rgKOF99AEPaletteNames[nPaletteIndex].pszMoveName, nCurrentOffset, nCurrentOffset + KOF99AE_PALETTE_LENGTH );
                OutputDebugString(strOutput);

                if (KOF99AE_A_CharacterPalettes[nCharIndex].pszImageSet && (rgKOF99AEPaletteNames[nPaletteIndex].nPaletteIndex != -1))
                {
                    if (KOF99AE_A_CharacterPalettes[nCharIndex].fIsMultipart && rgKOF99AEPaletteNames[nPaletteIndex].fIsPairable)
                    {
                        strOutput.Format(L", %s, 0x%02x%s", KOF99AE_A_CharacterPalettes[nCharIndex].pszImageSet, rgKOF99AEPaletteNames[nPaletteIndex].nPairedPaletteIndex,
                                                            (rgKOF99AEPaletteNames[nPaletteIndex].nPairedPaletteIndex == 0) ? L", &pairNext" : L"");
                    }
                    else
                    {
                        // normal output
                        strOutput.Format(L", %s, 0x%02x", KOF99AE_A_CharacterPalettes[nCharIndex].pszImageSet, rgKOF99AEPaletteNames[nPaletteIndex].nPaletteIndex);
                    }
                    OutputDebugString(strOutput);
                }                

                OutputDebugString(L" },\r\n");
            }

            strOutput.Format(L"    { L\"Striker Portrait\", 0x%x, 0x%x },\r\n", KOF99AE_A_CharacterStrikerPortraits[nCharIndex].nROMOffset + (KOF99AE_PALETTE_LENGTH * nPaletteIterationForColor) + nShiftForP3FirstColorSet,
                                                                                KOF99AE_A_CharacterStrikerPortraits[nCharIndex].nROMOffset + KOF99AE_PALETTE_LENGTH + (KOF99AE_PALETTE_LENGTH * nPaletteIterationForColor) + nShiftForP3FirstColorSet);
            OutputDebugString(strOutput);

            const UINT32 KOF99AE_PORTRAIT_LENGTH = 0x180;
            strOutput.Format(L"    { L\"Win Portrait\", 0x%x, 0x%x, %s, 0x30 },\r\n", KOF99AE_A_CharacterWinPortraits[nCharIndex].nROMOffset + (KOF99AE_PORTRAIT_LENGTH * nPaletteIterationForColor) + nShiftForP3FirstColorSet,
                                                                            KOF99AE_A_CharacterWinPortraits[nCharIndex].nROMOffset + KOF99AE_PORTRAIT_LENGTH + (KOF99AE_PORTRAIT_LENGTH * nPaletteIterationForColor) + nShiftForP3FirstColorSet,
                                                                            KOF99AE_A_CharacterPalettes[nCharIndex].pszImageSet);
            OutputDebugString(strOutput);

            OutputDebugString(L"};\r\n\r\n");
        }

        if ((nHeaderSetToDump == 2) &&  // Core Effects are only in 2.  There's an unused copy in 3
            (KOF99AE_A_CharacterEffectPalettes[nCharIndex].pszCharacterName != nullptr))
        {
            strOutput.Format(L"const sGame_PaletteDataset KOF99AE_A_%s_EFFECT_PALETTES[] = \r\n{\r\n", szCodeDesc);
            OutputDebugString(strOutput);

            for (UINT16 nPaletteIndex = 0; nPaletteIndex < 8; nPaletteIndex++)
            {
                UINT32 nCurrentOffset = KOF99AE_A_CharacterEffectPalettes[nCharIndex].nROMOffset + (nPaletteIndex * KOF99AE_PALETTE_LENGTH);

                strOutput.Format(L"    { L\"Effect %u\", 0x%x, 0x%x },\r\n", nPaletteIndex, nCurrentOffset, nCurrentOffset + KOF99AE_PALETTE_LENGTH);
                OutputDebugString(strOutput);
            }

            OutputDebugString(L"};\r\n\r\n");
        }
    }

    for (UINT16 nCharIndex = 0; nCharIndex < ARRAYSIZE(KOF99AE_A_CharacterPalettes); nCharIndex++)
    {
        WCHAR szCodeDesc[MAX_DESCRIPTION_LENGTH];
        StruprRemoveNonASCII(szCodeDesc, ARRAYSIZE(szCodeDesc), KOF99AE_A_CharacterPalettes[nCharIndex].pszCharacterName);

        strOutput.Format(L"const sDescTreeNode KOF99AE_A_P%u_%s_COLLECTION[] = \r\n{\r\n", nHeaderSetToDump, szCodeDesc);
        OutputDebugString(strOutput);

        for (UINT16 nColorIndex = 0; nColorIndex < nColorOptionsPerCharacter; nColorIndex++)
        {
            WCHAR szColorOptionCodeDesc[MAX_DESCRIPTION_LENGTH];
            StruprRemoveNonASCII(szColorOptionCodeDesc, ARRAYSIZE(szColorOptionCodeDesc), ppszButtonLabels[nColorIndex]);

            strOutput.Format(L"    { L\"%s\", DESC_NODETYPE_TREE, (void*)KOF99AE_A_%s_%s_PALETTES, ARRAYSIZE(KOF99AE_A_%s_%s_PALETTES) },\r\n", ppszButtonLabels[nColorIndex], szCodeDesc, szColorOptionCodeDesc, szCodeDesc, szColorOptionCodeDesc);
            OutputDebugString(strOutput);
        }

        if ((nHeaderSetToDump == 3) &&  // Effects are only in 3
            (KOF99AE_A_CharacterEffectPalettes[nCharIndex].pszCharacterName != nullptr))
        {
            strOutput.Format(L"    { L\"Effects\", DESC_NODETYPE_TREE, (void*)KOF99AE_A_%s_EFFECT_PALETTES, ARRAYSIZE(KOF99AE_A_%s_EFFECT_PALETTES) },\r\n", szCodeDesc, szCodeDesc);
            OutputDebugString(strOutput);
        }
        
        OutputDebugString(L"};\r\n\r\n");
    }

    strOutput.Format(L"const sDescTreeNode KOF99AE_A_P%u_UNITS[] = \r\n{\r\n", nHeaderSetToDump);
    OutputDebugString(strOutput);

    for (UINT16 nCharIndex = 0; nCharIndex < ARRAYSIZE(KOF99AE_A_CharacterPalettes); nCharIndex++)
    {
        WCHAR szCodeDesc[MAX_DESCRIPTION_LENGTH];
        StruprRemoveNonASCII(szCodeDesc, ARRAYSIZE(szCodeDesc), KOF99AE_A_CharacterPalettes[nCharIndex].pszCharacterName);

        strOutput.Format(L"    { L\"%s\", DESC_NODETYPE_TREE, (void*)KOF99AE_A_P%u_%s_COLLECTION, ARRAYSIZE(KOF99AE_A_P%u_%s_COLLECTION) },\r\n", KOF99AE_A_CharacterPalettes[nCharIndex].pszCharacterName, nHeaderSetToDump, szCodeDesc, nHeaderSetToDump, szCodeDesc);
        OutputDebugString(strOutput);
    }

    OutputDebugString(L"};\r\n\r\n");
}

sFileRule CGame_KOF99AE_A::GetRule(UINT16 nUnitId)
{
    sFileRule NewFileRule;

    // This value is only used for directory-based games
    _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, L"kof99ae_p3.bin");

    NewFileRule.uUnitId = 0;
    NewFileRule.uVerifyVar = m_nExpectedGameROMSize;

    return NewFileRule;
}

UINT16 CGame_KOF99AE_A::GetCollectionCountForUnit(UINT16 nUnitId)
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

UINT16 CGame_KOF99AE_A::GetNodeCountForCollection(UINT16 nUnitId, UINT16 nCollectionId)
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

LPCWSTR CGame_KOF99AE_A::GetDescriptionForCollection(UINT16 nUnitId, UINT16 nCollectionId)
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

UINT16 CGame_KOF99AE_A::GetPaletteCountForUnit(UINT16 nUnitId)
{
    if (nUnitId == GetCurrentExtraLoc())
    {
        return GetExtraCt(nUnitId);
    }
    else
    {
        UINT16 nCompleteCount = 0;
        const sDescTreeNode* pCompleteROMTree = GetCurrentUnitSet();
        UINT16 nCollectionCount = pCompleteROMTree[nUnitId].uChildAmt;

        const sDescTreeNode* pCurrentCollection = (const sDescTreeNode*)(pCompleteROMTree[nUnitId].ChildNodes);

        for (UINT16 nCollectionIndex = 0; nCollectionIndex < nCollectionCount; nCollectionIndex++)
        {
            nCompleteCount += pCurrentCollection[nCollectionIndex].uChildAmt;
        }

#if KOF99AE_A_DEBUG
        CString strMsg;
        strMsg.Format(L"CGame_KOF99AE_A::GetPaletteCountForUnit: %u for unit %u which has %u collections.\n", nCompleteCount, nUnitId, nCollectionCount);
        OutputDebugString(strMsg);
#endif

        return nCompleteCount;
    }
}

const sGame_PaletteDataset* CGame_KOF99AE_A::GetPaletteSet(UINT16 nUnitId, UINT16 nCollectionId)
{
    // Don't use this for Extra palettes.
    const sDescTreeNode* pCurrentSet = (const sDescTreeNode*)GetCurrentUnitSet()[nUnitId].ChildNodes;
    return ((sGame_PaletteDataset*)(pCurrentSet[nCollectionId].ChildNodes));
}

const sDescTreeNode* CGame_KOF99AE_A::GetNodeFromPaletteId(UINT16 nUnitId, UINT16 nPaletteId, bool fReturnBasicNodesOnly)
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

const sGame_PaletteDataset* CGame_KOF99AE_A::GetSpecificPalette(UINT16 nUnitId, UINT16 nPaletteId)
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

void CGame_KOF99AE_A::InitDataBuffer()
{
    m_nBufferSelectedRom = m_nSelectedRom;
    m_pppDataBuffer = new UINT16 * *[nUnitAmt];
    memset(m_pppDataBuffer, NULL, sizeof(UINT16**) * nUnitAmt);
}

void CGame_KOF99AE_A::ClearDataBuffer()
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

void CGame_KOF99AE_A::LoadSpecificPaletteData(UINT16 nUnitId, UINT16 nPalId)
{
     if (nUnitId != GetCurrentExtraLoc())
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
    else // extraloc
    {
        // This is where we handle all the palettes added in via Extra.
        stExtraDef* pCurrDef = GetCurrentExtraDef(GetExtraLoc(nUnitId) + nPalId);

        m_nCurrentPaletteROMLocation = pCurrDef->uOffset;
        m_nCurrentPaletteSizeInColors = (pCurrDef->cbPaletteSize / m_nSizeOfColorsInBytes);
        m_pszCurrentPaletteName = pCurrDef->szDesc;
    }
}

BOOL CGame_KOF99AE_A::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
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
    if (NodeGet->uUnitId != GetCurrentExtraLoc())
    {
        const sGame_PaletteDataset* paletteDataSet = GetSpecificPalette(NodeGet->uUnitId, NodeGet->uPalId);

        if (paletteDataSet)
        {
            nImgUnitId = paletteDataSet->indexImgToUse;
            nTargetImgId = paletteDataSet->indexOffsetToUse;

            const sDescTreeNode* pCurrentNode = GetNodeFromPaletteId(NodeGet->uUnitId, NodeGet->uPalId, false);

            if (pCurrentNode)
            {
                bool fIsCorePalette = false;

                for (UINT16 nOptionsToTest = 0; nOptionsToTest < m_nNumberOfColorOptions; nOptionsToTest++)
                {
                    if (wcscmp(pCurrentNode->szDesc, pButtonLabelSet[nOptionsToTest]) == 0)
                    {
                        fIsCorePalette = true;
                        break;
                    }
                }

                if (fIsCorePalette)
                {
                    nSrcAmt = m_nNumberOfColorOptions;
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

    if (!fShouldUseAlternateLoadLogic)
    {
        //Create the default palette
        ClearSetImgTicket(CreateImgTicket(nImgUnitId, nTargetImgId));

        CreateDefPal(NodeGet, 0);

        SetSourcePal(0, NodeGet->uUnitId, nSrcStart, nSrcAmt, nNodeIncrement);
    }

    return TRUE;
}

#include "StdAfx.h"
#include "Game_MSHVSF_A.h"
#include "GameDef.h"
#include "..\PalMod.h"

#define MSHVSF_DEBUG DEFAULT_GAME_DEBUG_STATE

stExtraDef* CGame_MSHVSF_A::MSHVSF_A_EXTRA_CUSTOM_6A = nullptr;
stExtraDef* CGame_MSHVSF_A::MSHVSF_A_EXTRA_CUSTOM_7B = nullptr;

CDescTree CGame_MSHVSF_A::MainDescTree_6A = nullptr;
CDescTree CGame_MSHVSF_A::MainDescTree_7B = nullptr;

int CGame_MSHVSF_A::m_nMSHVSFSelectedRom = 6;
UINT32 CGame_MSHVSF_A::m_nTotalPaletteCountForMSHVSF_6A = 0;
UINT32 CGame_MSHVSF_A::m_nTotalPaletteCountForMSHVSF_7B = 0;
UINT32 CGame_MSHVSF_A::m_nExpectedGameROMSize = 0x80000; // 524288 bytes
UINT32 CGame_MSHVSF_A::m_nConfirmedROMSize = -1;

int CGame_MSHVSF_A::rgExtraCountAll_6A[MSHVSF_A_NUM_IND_6A + 1] = { -1 };
int CGame_MSHVSF_A::rgExtraCountAll_7B[MSHVSF_A_NUM_IND_7B + 1] = { -1 };
int CGame_MSHVSF_A::rgExtraCount_6A[MSHVSF_A_NUM_IND_6A + 1] = { -1 };
int CGame_MSHVSF_A::rgExtraCount_7B[MSHVSF_A_NUM_IND_7B + 1] = { -1 };

void CGame_MSHVSF_A::InitializeStatics()
{
    safe_delete_array(CGame_MSHVSF_A::MSHVSF_A_EXTRA_CUSTOM_6A);
    safe_delete_array(CGame_MSHVSF_A::MSHVSF_A_EXTRA_CUSTOM_7B);

    memset(rgExtraCountAll_6A, -1, sizeof(rgExtraCountAll_6A));
    memset(rgExtraCountAll_7B, -1, sizeof(rgExtraCountAll_7B));
    memset(rgExtraCount_6A, -1, sizeof(rgExtraCount_6A));
    memset(rgExtraCount_7B, -1, sizeof(rgExtraCount_7B));

    MainDescTree_6A.SetRootTree(CGame_MSHVSF_A::InitDescTree(6));
    MainDescTree_7B.SetRootTree(CGame_MSHVSF_A::InitDescTree(7));
}

CGame_MSHVSF_A::CGame_MSHVSF_A(UINT32 nConfirmedROMSize, int nMSHVSFRomToLoad)
{
    createPalOptions = { NO_SPECIAL_OPTIONS, WRITE_16 };
    SetAlphaMode(AlphaMode::GameDoesNotUseAlpha);
    SetColorMode(ColMode::COLMODE_RGB444_BE);

    // We need this set before we initialize so that corrupt Extras truncate correctly.
    // Otherwise the new user inadvertently corrupts their ROM.
    m_nConfirmedROMSize = nConfirmedROMSize;
    InitializeStatics();

    m_nMSHVSFSelectedRom = (nMSHVSFRomToLoad == 6) ? 6 : 7;

    CString strMessage;
    strMessage.Format(L"CGame_MSHVSF_A::CGame_MSHVSF_A: Loading for the %s ROM\n", (m_nMSHVSFSelectedRom == 6) ? L"6A" : L"7B");
    OutputDebugString(strMessage);

    m_nTotalInternalUnits = UsePaletteSetForCharacters() ? MSHVSF_A_NUM_IND_6A : MSHVSF_A_NUM_IND_7B;
    m_nExtraUnit = UsePaletteSetForCharacters() ? MSHVSF_A_EXTRALOC_6A : MSHVSF_A_EXTRALOC_7B;

    const UINT32 nSafeCountFor6A = 541;
    const UINT32 nSafeCountFor7B = 24;

    m_nSafeCountForThisRom = GetExtraCt(m_nExtraUnit) + (UsePaletteSetForCharacters() ? nSafeCountFor6A : nSafeCountFor7B);
    m_pszExtraFilename = UsePaletteSetForCharacters() ? EXTRA_FILENAME_MSHVSF_6A : EXTRA_FILENAME_MSHVSF_7B;
    m_nTotalPaletteCount = UsePaletteSetForCharacters() ? m_nTotalPaletteCountForMSHVSF_6A : m_nTotalPaletteCountForMSHVSF_7B;
    m_nLowestKnownPaletteRomLocation = UsePaletteSetForCharacters() ? m_uLowestKnownPaletteROMLocation_6A : m_uLowestKnownPaletteROMLocation_7B;

    nUnitAmt = m_nTotalInternalUnits + (GetExtraCt(m_nExtraUnit) ? 1 : 0);

    InitDataBuffer();

    //Set game information
    nGameFlag = MSHVSF_A;
    nImgGameFlag = IMGDAT_SECTION_CPS2;
    m_prgGameImageSet = MSHVSF_A_IMG_UNITS;
    nImgUnitAmt = ARRAYSIZE(MSHVSF_A_IMG_UNITS);

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

CGame_MSHVSF_A::~CGame_MSHVSF_A(void)
{
    safe_delete_array(CGame_MSHVSF_A::MSHVSF_A_EXTRA_CUSTOM_6A);
    safe_delete_array(CGame_MSHVSF_A::MSHVSF_A_EXTRA_CUSTOM_7B);
    ClearDataBuffer();
    //Get rid of the file changed flag
    FlushChangeTrackingArray();
}

UINT32 CGame_MSHVSF_A::GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet, bool* pfNeedToValidateCRCs)
{
    static sCRC32ValueSet knownROMs[] =
    {
#ifdef MAME_NOTES
        roms 6 and 7 are always identical
GAME(1997, mshvsf,     0,        cps2, cps2_2p6b, cps2_state, init_cps2,     ROT0,   "Capcom", "Marvel Super Heroes Vs. Street Fighter (Euro 970625)", MACHINE_SUPPORTS_SAVE)
    ROM_LOAD16_WORD_SWAP("mvs.06a",  0x180000, 0x80000, CRC(959f3030) SHA1(fbbaa915324815246738f3426232e623f039ce26))
    ROM_LOAD16_WORD_SWAP("mvs.07b",  0x200000, 0x80000, CRC(7f915bdb) SHA1(683da09c5ba55e31b59aa95a8e13c45dc574ab3c))
GAME(1997, mshvsfu,    mshvsf,   cps2, cps2_2p6b, cps2_state, init_cps2,     ROT0,   "Capcom", "Marvel Super Heroes Vs. Street Fighter (USA 970827)", MACHINE_SUPPORTS_SAVE)
    ROM_LOAD16_WORD_SWAP("mvs.06a",  0x180000, 0x80000, CRC(959f3030) SHA1(fbbaa915324815246738f3426232e623f039ce26))
    ROM_LOAD16_WORD_SWAP("mvs.07b",  0x200000, 0x80000, CRC(7f915bdb) SHA1(683da09c5ba55e31b59aa95a8e13c45dc574ab3c))
GAME(1997, mshvsfu1,   mshvsf,   cps2, cps2_2p6b, cps2_state, init_cps2,     ROT0,   "Capcom", "Marvel Super Heroes Vs. Street Fighter (USA 970625)", MACHINE_SUPPORTS_SAVE)
    ROM_LOAD16_WORD_SWAP("mvs.06a",  0x180000, 0x80000, CRC(959f3030) SHA1(fbbaa915324815246738f3426232e623f039ce26))
    ROM_LOAD16_WORD_SWAP("mvs.07b",  0x200000, 0x80000, CRC(7f915bdb) SHA1(683da09c5ba55e31b59aa95a8e13c45dc574ab3c))
GAME(1997, mshvsfj,    mshvsf,   cps2, cps2_2p6b, cps2_state, init_cps2,     ROT0,   "Capcom", "Marvel Super Heroes Vs. Street Fighter (Japan 970707)", MACHINE_SUPPORTS_SAVE)
    ROM_LOAD16_WORD_SWAP("mvs.06a",  0x180000, 0x80000, CRC(959f3030) SHA1(fbbaa915324815246738f3426232e623f039ce26))
    ROM_LOAD16_WORD_SWAP("mvs.07b",  0x200000, 0x80000, CRC(7f915bdb) SHA1(683da09c5ba55e31b59aa95a8e13c45dc574ab3c))
GAME(1997, mshvsfj1,   mshvsf,   cps2, cps2_2p6b, cps2_state, init_cps2,     ROT0,   "Capcom", "Marvel Super Heroes Vs. Street Fighter (Japan 970702)", MACHINE_SUPPORTS_SAVE)
    ROM_LOAD16_WORD_SWAP("mvs.06a",  0x180000, 0x80000, CRC(959f3030) SHA1(fbbaa915324815246738f3426232e623f039ce26))
    ROM_LOAD16_WORD_SWAP("mvs.07b",  0x200000, 0x80000, CRC(7f915bdb) SHA1(683da09c5ba55e31b59aa95a8e13c45dc574ab3c))
GAME(1997, mshvsfj2,   mshvsf,   cps2, cps2_2p6b, cps2_state, init_cps2,     ROT0,   "Capcom", "Marvel Super Heroes Vs. Street Fighter (Japan 970625)", MACHINE_SUPPORTS_SAVE)
    ROM_LOAD16_WORD_SWAP("mvs.06a",  0x180000, 0x80000, CRC(959f3030) SHA1(fbbaa915324815246738f3426232e623f039ce26))
    ROM_LOAD16_WORD_SWAP("mvs.07b",  0x200000, 0x80000, CRC(7f915bdb) SHA1(683da09c5ba55e31b59aa95a8e13c45dc574ab3c))
GAME(1997, mshvsfh,    mshvsf,   cps2, cps2_2p6b, cps2_state, init_cps2,     ROT0,   "Capcom", "Marvel Super Heroes Vs. Street Fighter (Hispanic 970625)", MACHINE_SUPPORTS_SAVE)
    ROM_LOAD16_WORD_SWAP("mvs.06a",  0x180000, 0x80000, CRC(959f3030) SHA1(fbbaa915324815246738f3426232e623f039ce26))
    ROM_LOAD16_WORD_SWAP("mvs.07b",  0x200000, 0x80000, CRC(7f915bdb) SHA1(683da09c5ba55e31b59aa95a8e13c45dc574ab3c))
GAME(1997, mshvsfa,    mshvsf,   cps2, cps2_2p6b, cps2_state, init_cps2,     ROT0,   "Capcom", "Marvel Super Heroes Vs. Street Fighter (Asia 970625)", MACHINE_SUPPORTS_SAVE)
    ROM_LOAD16_WORD_SWAP("mvs.06a",  0x180000, 0x80000, CRC(959f3030) SHA1(fbbaa915324815246738f3426232e623f039ce26))
    ROM_LOAD16_WORD_SWAP("mvs.07b",  0x200000, 0x80000, CRC(7f915bdb) SHA1(683da09c5ba55e31b59aa95a8e13c45dc574ab3c))
GAME(1997, mshvsfa1,   mshvsf,   cps2, cps2_2p6b, cps2_state, init_cps2,     ROT0,   "Capcom", "Marvel Super Heroes Vs. Street Fighter (Asia 970620)", MACHINE_SUPPORTS_SAVE)
    ROM_LOAD16_WORD_SWAP("mvs.06a", 0x180000, 0x80000, CRC(959f3030) SHA1(fbbaa915324815246738f3426232e623f039ce26))
    ROM_LOAD16_WORD_SWAP("mvs.07b", 0x200000, 0x80000, CRC(7f915bdb) SHA1(683da09c5ba55e31b59aa95a8e13c45dc574ab3c))
GAME(1997, mshvsfb,    mshvsf,   cps2, cps2_2p6b, cps2_state, init_cps2,     ROT0,   "Capcom", "Marvel Super Heroes Vs. Street Fighter (Brazil 970827)", MACHINE_SUPPORTS_SAVE)
    ROM_LOAD16_WORD_SWAP("mvs.06a",  0x180000, 0x80000, CRC(959f3030) SHA1(fbbaa915324815246738f3426232e623f039ce26))
    ROM_LOAD16_WORD_SWAP("mvs.07b",  0x200000, 0x80000, CRC(7f915bdb) SHA1(683da09c5ba55e31b59aa95a8e13c45dc574ab3c))
GAME(1997, mshvsfb1,   mshvsf,   cps2, cps2_2p6b, cps2_state, init_cps2,     ROT0,   "Capcom", "Marvel Super Heroes Vs. Street Fighter (Brazil 970625)", MACHINE_SUPPORTS_SAVE)
    ROM_LOAD16_WORD_SWAP("mvs.06a",  0x180000, 0x80000, CRC(959f3030) SHA1(fbbaa915324815246738f3426232e623f039ce26))
    ROM_LOAD16_WORD_SWAP("mvs.07b",  0x200000, 0x80000, CRC(7f915bdb) SHA1(683da09c5ba55e31b59aa95a8e13c45dc574ab3c))
GAME(1997, mshvsfu1d,  mshvsf,   dead_cps2, cps2_2p6b, cps2_state, init_cps2,     ROT0,   "bootleg", "Marvel Super Heroes Vs. Street Fighter (USA 970625 Phoenix Edition) (bootleg)", MACHINE_SUPPORTS_SAVE)
    ROM_LOAD16_WORD_SWAP("mvs.06a",    0x180000, 0x80000, CRC(959f3030) SHA1(fbbaa915324815246738f3426232e623f039ce26))
    ROM_LOAD16_WORD_SWAP("mvs.07b",    0x200000, 0x80000, CRC(7f915bdb) SHA1(683da09c5ba55e31b59aa95a8e13c45dc574ab3c))
#endif
        { L"MSHVSF (Arcade)", L"mvs.06a", 0x959f3030, 0 },
        { L"MSHVSF (Arcade)", L"mvs.07b", 0x7f915bdb, 0 },
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

int CGame_MSHVSF_A::GetExtraLoc(UINT16 nUnitId)
{
    if (UsePaletteSetForCharacters())
    {
        if (rgExtraCountAll_6A[0] == -1)
        {
            int nDefCtr = 0;
            int nCurrUnit = UNIT_START_VALUE;
            memset(rgExtraCountAll_6A, 0, (MSHVSF_A_NUM_IND_6A + 1) * sizeof(int));

            stExtraDef* pCurrDef = GetExtraDefForMSHVSF(0);

            while (pCurrDef->uUnitN != INVALID_UNIT_VALUE)
            {
                if (pCurrDef->uUnitN != nCurrUnit)
                {
                    rgExtraCountAll_6A[pCurrDef->uUnitN] = nDefCtr;
                    nCurrUnit = pCurrDef->uUnitN;
                }

                nDefCtr++;
                pCurrDef = GetExtraDefForMSHVSF(nDefCtr);
            }
        }

        return rgExtraCountAll_6A[nUnitId];
    }
    else
    {
        if (rgExtraCountAll_7B[0] == -1)
        {
            int nDefCtr = 0;
            int nCurrUnit = UNIT_START_VALUE;
            memset(rgExtraCountAll_7B, 0, (MSHVSF_A_NUM_IND_7B + 1) * sizeof(int));

            stExtraDef* pCurrDef = GetExtraDefForMSHVSF(0);

            while (pCurrDef->uUnitN != INVALID_UNIT_VALUE)
            {
                if (pCurrDef->uUnitN != nCurrUnit)
                {
                    rgExtraCountAll_7B[pCurrDef->uUnitN] = nDefCtr;
                    nCurrUnit = pCurrDef->uUnitN;
                }

                nDefCtr++;
                pCurrDef = GetExtraDefForMSHVSF(nDefCtr);
            }
        }

        return rgExtraCountAll_7B[nUnitId];
    }
}

int CGame_MSHVSF_A::GetExtraCt(UINT16 nUnitId, BOOL bCountVisibleOnly)
{
    int* rgExtraCt = UsePaletteSetForCharacters() ? (int*)rgExtraCount_6A : (int*)rgExtraCount_7B;

    if (rgExtraCt[0] == -1)
    {
        int nDefCtr = 0;
        memset(rgExtraCt, 0, ((UsePaletteSetForCharacters() ? MSHVSF_A_NUM_IND_6A : MSHVSF_A_NUM_IND_7B) + 1) * sizeof(int));

        stExtraDef* pCurrDef = GetExtraDefForMSHVSF(0);

        while (pCurrDef->uUnitN != INVALID_UNIT_VALUE)
        {
            if (!pCurrDef->isInvisible || !bCountVisibleOnly)
            {
                rgExtraCt[pCurrDef->uUnitN]++;
            }

            nDefCtr++;
            pCurrDef = GetExtraDefForMSHVSF(nDefCtr);
        }
    }

    return rgExtraCt[nUnitId];
}

CDescTree* CGame_MSHVSF_A::GetMainTree()
{
    if (UsePaletteSetForCharacters())
    {
        return &CGame_MSHVSF_A::MainDescTree_6A;
    }
    else
    {
        return &CGame_MSHVSF_A::MainDescTree_7B;
    }
}

sDescTreeNode* CGame_MSHVSF_A::InitDescTree(int nROMPaletteSetToUse)
{
    UINT32 nTotalPaletteCount = 0;
    m_nMSHVSFSelectedRom = nROMPaletteSetToUse;

    //Load extra file if we're using it
    if (UsePaletteSetForCharacters())
    {
        LoadExtraFileForGame(EXTRA_FILENAME_MSHVSF_6A, MSHVSF_A_EXTRA, &MSHVSF_A_EXTRA_CUSTOM_6A, MSHVSF_A_EXTRALOC_6A, m_nConfirmedROMSize);
    }
    else
    {
        LoadExtraFileForGame(EXTRA_FILENAME_MSHVSF_7B, MSHVSF_A_EXTRA, &MSHVSF_A_EXTRA_CUSTOM_7B, MSHVSF_A_EXTRALOC_7B, m_nConfirmedROMSize);
    }

    UINT16 nUnitCt = UsePaletteSetForCharacters() ? (MSHVSF_A_NUM_IND_6A + (GetExtraCt(MSHVSF_A_EXTRALOC_6A) ? 1 : 0)) :
                                                    (MSHVSF_A_NUM_IND_7B + (GetExtraCt(MSHVSF_A_EXTRALOC_7B) ? 1 : 0));

    sDescTreeNode* NewDescTree = new sDescTreeNode;

    //Create the main character tree
    _snwprintf_s(NewDescTree->szDesc, ARRAYSIZE(NewDescTree->szDesc), _TRUNCATE, L"%s", g_GameFriendlyName[MSHVSF_A]);
    NewDescTree->ChildNodes = new sDescTreeNode[nUnitCt];
    NewDescTree->uChildAmt = nUnitCt;
    //All units have tree children
    NewDescTree->uChildType = DESC_NODETYPE_TREE;

    CString strMsg;
    bool fHaveExtras = UsePaletteSetForCharacters() ? (GetExtraCt(MSHVSF_A_EXTRALOC_6A) > 0) : (GetExtraCt(MSHVSF_A_EXTRALOC_7B) > 0);
    strMsg.Format(L"CGame_MSHVSF_A::InitDescTree: Building desc tree for MSHVSF ROM %s %s extras...\n",
                    UsePaletteSetForCharacters() ? L"6A" : L"7B",
                    fHaveExtras ? L"with" : L"without");
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

        if (UsePaletteSetForCharacters() ? (iUnitCtr < MSHVSF_A_EXTRALOC_6A) : (iUnitCtr < MSHVSF_A_EXTRALOC_7B))
        {
            //Set each description
            _snwprintf_s(UnitNode->szDesc, ARRAYSIZE(UnitNode->szDesc), _TRUNCATE, L"%s", UsePaletteSetForCharacters() ? MSHVSF_A_UNITS_6A[iUnitCtr].szDesc : MSHVSF_A_UNITS_7B[iUnitCtr].szDesc);
            UnitNode->ChildNodes = new sDescTreeNode[nUnitChildCount];
            //All children have collection trees
            UnitNode->uChildType = DESC_NODETYPE_TREE;
            UnitNode->uChildAmt = nUnitChildCount;

#if MSHVSF_DEBUG
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

#if MSHVSF_DEBUG
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

#if MSHVSF_DEBUG
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

#if MSHVSF_DEBUG
            strMsg.Format(L"Unit (Extras): %s, %u of %u, %u total children\n", UnitNode->szDesc, iUnitCtr + 1, nUnitCt, nUnitChildCount);
            OutputDebugString(strMsg);
#endif
        }

        //Set up extra nodes
        if (bUseExtra)
        {
            int nExtraPos = GetExtraLoc(iUnitCtr);
            int nCurrExtra = 0;

            if (UsePaletteSetForCharacters())
            {
                CollectionNode = &((sDescTreeNode*)UnitNode->ChildNodes)[(MSHVSF_A_EXTRALOC_6A > iUnitCtr) ? (nUnitChildCount - 1) : 0]; //Extra node
            }
            else
            {
                CollectionNode = &((sDescTreeNode*)UnitNode->ChildNodes)[(MSHVSF_A_EXTRALOC_7B > iUnitCtr) ? (nUnitChildCount - 1) : 0]; //Extra node
            }

            _snwprintf_s(CollectionNode->szDesc, ARRAYSIZE(CollectionNode->szDesc), _TRUNCATE, L"Extra");

            CollectionNode->ChildNodes = new sDescTreeNode[nExtraCt];

            CollectionNode->uChildType = DESC_NODETYPE_NODE;
            CollectionNode->uChildAmt = nExtraCt; //EX + Extra

#if MSHVSF_DEBUG
            strMsg.Format(L"\tCollection: \"%s\", %u of %u, %u children\n", CollectionNode->szDesc, 1, nUnitChildCount, nExtraCt);
            OutputDebugString(strMsg);
#endif

            for (UINT16 nExtraCtr = 0; nExtraCtr < nExtraCt; nExtraCtr++)
            {
                ChildNode = &((sDescNode*)CollectionNode->ChildNodes)[nExtraCtr];

                stExtraDef* pCurrDef = GetExtraDefForMSHVSF(nExtraPos + nCurrExtra);

                while (pCurrDef->isInvisible)
                {
                    nCurrExtra++;

                    pCurrDef = GetExtraDefForMSHVSF(nExtraPos + nCurrExtra);
                }

                _snwprintf_s(ChildNode->szDesc, ARRAYSIZE(ChildNode->szDesc), _TRUNCATE, pCurrDef->szDesc);

                ChildNode->uUnitId = iUnitCtr;
                if (UsePaletteSetForCharacters())
                {
                    ChildNode->uPalId = (((MSHVSF_A_EXTRALOC_6A > iUnitCtr) ? 1 : 0) * nUnitChildCount * 2) + nCurrExtra;
                }
                else
                {
                    ChildNode->uPalId = (((MSHVSF_A_EXTRALOC_7B > iUnitCtr) ? 1 : 0) * nUnitChildCount * 2) + nCurrExtra;
                }

#if MSHVSF_DEBUG
                strMsg.Format(L"\t\tPalette: %s, %u of %u\n", ChildNode->szDesc, nExtraCtr + 1, nExtraCt);
                OutputDebugString(strMsg);
#endif

                nCurrExtra++;
                nTotalPaletteCount++;
            }
        }
    }

    strMsg.Format(L"CGame_MSHVSF_A::InitDescTree: Loaded %u palettes for MSHVSF ROM %s\n", nTotalPaletteCount, UsePaletteSetForCharacters() ? L"6A" : L"7B");
    OutputDebugString(strMsg);

    if (UsePaletteSetForCharacters())
    {
        m_nTotalPaletteCountForMSHVSF_6A = nTotalPaletteCount;
    }
    else
    {
        m_nTotalPaletteCountForMSHVSF_7B = nTotalPaletteCount;
    }

    return NewDescTree;
}

sFileRule CGame_MSHVSF_A::GetRule(UINT16 nUnitId)
{
    sFileRule NewFileRule;

    _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, (nUnitId == 6) ? L"mvs.06a" : L"mvs.07b");

    NewFileRule.uUnitId = 0;
    NewFileRule.uVerifyVar = m_nExpectedGameROMSize;

    return NewFileRule;
}

UINT16 CGame_MSHVSF_A::GetCollectionCountForUnit(UINT16 nUnitId)
{
    if (UsePaletteSetForCharacters())
    {
        if (nUnitId == MSHVSF_A_EXTRALOC_6A)
        {
            return GetExtraCt(nUnitId);
        }
        else
        {
            return MSHVSF_A_UNITS_6A[nUnitId].uChildAmt;
        }
    }
    else
    {
        if (nUnitId == MSHVSF_A_EXTRALOC_7B)
        {
            return GetExtraCt(nUnitId);
        }
        else
        {
            return MSHVSF_A_UNITS_7B[nUnitId].uChildAmt;
        }
    }

}

UINT16 CGame_MSHVSF_A::GetNodeCountForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    if (UsePaletteSetForCharacters())
    {
        if (nUnitId == MSHVSF_A_EXTRALOC_6A)
        {
            return GetExtraCt(nUnitId);
        }
        else
        {
            const sDescTreeNode* pCollectionNode = (const sDescTreeNode*)(MSHVSF_A_UNITS_6A[nUnitId].ChildNodes);

            return pCollectionNode[nCollectionId].uChildAmt;
        }
    }
    else
    {
        if (nUnitId == MSHVSF_A_EXTRALOC_7B)
        {
            return GetExtraCt(nUnitId);
        }
        else
        {
            const sDescTreeNode* pCollectionNode = (const sDescTreeNode*)(MSHVSF_A_UNITS_7B[nUnitId].ChildNodes);

            return pCollectionNode[nCollectionId].uChildAmt;
        }
    }
}

LPCWSTR CGame_MSHVSF_A::GetDescriptionForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    if (UsePaletteSetForCharacters())
    {
        if (nUnitId == MSHVSF_A_EXTRALOC_6A)
        {
            return L"Extra Palettes";
        }
        else
        {
            const sDescTreeNode* pCollection = (const sDescTreeNode*)MSHVSF_A_UNITS_6A[nUnitId].ChildNodes;
            return pCollection[nCollectionId].szDesc;
        }
    }
    else
    {
        if (nUnitId == MSHVSF_A_EXTRALOC_7B)
        {
            return L"Extra Palettes";
        }
        else
        {
            const sDescTreeNode* pCollection = (const sDescTreeNode*)MSHVSF_A_UNITS_7B[nUnitId].ChildNodes;
            return pCollection[nCollectionId].szDesc;
        }
    }
}

UINT16 CGame_MSHVSF_A::GetPaletteCountForUnit(UINT16 nUnitId)
{
    if (UsePaletteSetForCharacters() ? (nUnitId == MSHVSF_A_EXTRALOC_6A) :
                                       (nUnitId == MSHVSF_A_EXTRALOC_7B))
    {
        return GetExtraCt(nUnitId);
    }
    else
    {
        UINT16 nCompleteCount = 0;
        const sDescTreeNode* pCompleteROMTree = UsePaletteSetForCharacters() ? MSHVSF_A_UNITS_6A : MSHVSF_A_UNITS_7B;
        UINT16 nCollectionCount = pCompleteROMTree[nUnitId].uChildAmt;

        const sDescTreeNode* pCurrentCollection = (const sDescTreeNode*)(pCompleteROMTree[nUnitId].ChildNodes);

        for (UINT16 nCollectionIndex = 0; nCollectionIndex < nCollectionCount; nCollectionIndex++)
        {
            nCompleteCount += pCurrentCollection[nCollectionIndex].uChildAmt;
        }

#if MSHVSF_DEBUG
        CString strMsg;
        strMsg.Format(L"CGame_MSHVSF_A::GetPaletteCountForUnit: %u for unit %u which has %u collections.\n", nCompleteCount, nUnitId, nCollectionCount);
        OutputDebugString(strMsg);
#endif

        return nCompleteCount;
    }
}

const sGame_PaletteDataset* CGame_MSHVSF_A::GetPaletteSet(UINT16 nUnitId, UINT16 nCollectionId)
{
    if (UsePaletteSetForCharacters())
    {
        // Don't use this for Extra palettes.
        const sDescTreeNode* pCurrentSet = (const sDescTreeNode*)MSHVSF_A_UNITS_6A[nUnitId].ChildNodes;
        return ((sGame_PaletteDataset*)(pCurrentSet[nCollectionId].ChildNodes));
    }
    else
    {
        // Don't use this for Extra palettes.
        const sDescTreeNode* pCurrentSet = (const sDescTreeNode*)MSHVSF_A_UNITS_7B[nUnitId].ChildNodes;
        return ((sGame_PaletteDataset*)(pCurrentSet[nCollectionId].ChildNodes));
    }
}

UINT16 CGame_MSHVSF_A::GetNodeSizeFromPaletteId(UINT16 nUnitId, UINT16 nPaletteId)
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

const sDescTreeNode* CGame_MSHVSF_A::GetNodeFromPaletteId(UINT16 nUnitId, UINT16 nPaletteId, bool fReturnBasicNodesOnly)
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

        if (UsePaletteSetForCharacters() ? (nUnitId == MSHVSF_A_EXTRALOC_6A) :
                                           (nUnitId == MSHVSF_A_EXTRALOC_7B))
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
            const sDescTreeNode* pCollectionNodeToCheck = UsePaletteSetForCharacters() ? (const sDescTreeNode*)(MSHVSF_A_UNITS_6A[nUnitId].ChildNodes) :
                                                                                         (const sDescTreeNode*)(MSHVSF_A_UNITS_7B[nUnitId].ChildNodes);

            nNodeCount = pCollectionNodeToCheck[nCollectionIndex].uChildAmt;

            if (nDistanceFromZero < nNodeCount)
            {
                // We know it's within this group.  Now: is it basic?
                if (!fReturnBasicNodesOnly || (nCollectionIndex < 2)) // P1/P2
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

const sGame_PaletteDataset* CGame_MSHVSF_A::GetSpecificPalette(UINT16 nUnitId, UINT16 nPaletteId)
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

void CGame_MSHVSF_A::InitDataBuffer()
{
    m_nBufferSelectedRom = m_nMSHVSFSelectedRom;
    m_pppDataBuffer = new UINT16 * *[nUnitAmt];
    memset(m_pppDataBuffer, NULL, sizeof(UINT16**) * nUnitAmt);
}

void CGame_MSHVSF_A::ClearDataBuffer()
{
    int nCurrentROMMode = m_nMSHVSFSelectedRom;

    m_nMSHVSFSelectedRom = m_nBufferSelectedRom;

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

    m_nMSHVSFSelectedRom = nCurrentROMMode;
}

void CGame_MSHVSF_A::LoadSpecificPaletteData(UINT16 nUnitId, UINT16 nPalId)
{
    if (UsePaletteSetForCharacters() ? (nUnitId != MSHVSF_A_EXTRALOC_6A) :
                                       (nUnitId != MSHVSF_A_EXTRALOC_7B))
    {
        int cbPaletteSizeOnDisc = 0;
        const sGame_PaletteDataset* paletteData = GetSpecificPalette(nUnitId, nPalId);

        cbPaletteSizeOnDisc = (int)max(0, (paletteData->nPaletteOffsetEnd - paletteData->nPaletteOffset));

        m_nCurrentPaletteROMLocation = paletteData->nPaletteOffset;
        m_nCurrentPaletteSizeInColors = cbPaletteSizeOnDisc / m_nSizeOfColorsInBytes;
        m_pszCurrentPaletteName = paletteData->szPaletteName;

        if ((m_nCurrentPaletteROMLocation == 0) && !UsePaletteSetForCharacters())
        {
            // This is a very particular override for the split-rom Captain America Part 2 sprite
            createPalOptions.nTransparencyColorPosition = 6;
        }
        else
        {
            createPalOptions.nTransparencyColorPosition = 0;
        }
    }
    else // MSHVSF_A_EXTRALOC
    {
        // This is where we handle all the palettes added in via Extra.
        stExtraDef* pCurrDef = GetExtraDefForMSHVSF(GetExtraLoc(nUnitId) + nPalId);

        m_nCurrentPaletteROMLocation = pCurrDef->uOffset;
        m_nCurrentPaletteSizeInColors = (pCurrDef->cbPaletteSize / m_nSizeOfColorsInBytes);
        m_pszCurrentPaletteName = pCurrDef->szDesc;
    }
}

BOOL CGame_MSHVSF_A::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
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
    if (UsePaletteSetForCharacters() ? (NodeGet->uUnitId != MSHVSF_A_EXTRALOC_6A) :
                                       (NodeGet->uUnitId != MSHVSF_A_EXTRALOC_7B))
    {
        const sGame_PaletteDataset* paletteDataSet = GetSpecificPalette(NodeGet->uUnitId, NodeGet->uPalId);

        if (paletteDataSet)
        {
            nImgUnitId = paletteDataSet->indexImgToUse;
            nTargetImgId = paletteDataSet->indexOffsetToUse;

            const sDescTreeNode* pCurrentNode = GetNodeFromPaletteId(NodeGet->uUnitId, NodeGet->uPalId, true);

            if (pCurrentNode) // For Basic nodes, we can allow multisprite view in the Export dialog
            {
                if ((wcsstr(pCurrentNode->szDesc, L"P1") != nullptr) || (wcsstr(pCurrentNode->szDesc, L"P2") != nullptr))
                {
                    // We show 2 sprites (P1/P2) for export for all normal VS sprites
                    nSrcAmt = 2;
                    nNodeIncrement = pCurrentNode->uChildAmt;

                    if (NodeGet->uUnitId == index_MSHVSF_Blackheart_Mephisto)
                    {
                        // Allow for both Blackheart and Mephisto displays
                        if (((nSrcStart >= nNodeIncrement) && (nSrcStart <= (nNodeIncrement * 2))) ||
                            ((nSrcStart >= (nNodeIncrement * 3)) && (nSrcStart <= (nNodeIncrement * 4))))
                        {
                            nSrcStart -= nNodeIncrement;
                        }
                    }
                    else
                    {
                        while (nSrcStart >= nNodeIncrement)
                        {
                            // The starting point is the absolute first palette for the sprite in question which is found in P1
                            nSrcStart -= nNodeIncrement;
                        }
                    }
                }

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
                        const sGame_PaletteDataset* paletteDataSetToJoin = GetSpecificPalette(NodeGet->uUnitId, NodeGet->uPalId + 1);

                        if (paletteDataSetToJoin)
                        {
                            int nXOffs = paletteDataSet->pPalettePairingInfo->nXOffs;
                            int nYOffs = paletteDataSet->pPalettePairingInfo->nYOffs;
                            INT8 nPeerPaletteDistance = paletteDataSet->pPalettePairingInfo->nNodeIncrementToPartner;

                            fShouldUseAlternateLoadLogic = true;

                            ClearSetImgTicket(
                                CreateImgTicket(paletteDataSet->indexImgToUse, paletteDataSet->indexOffsetToUse,
                                    CreateImgTicket(paletteDataSetToJoin->indexImgToUse, paletteDataSetToJoin->indexOffsetToUse, nullptr, nXOffs, nYOffs)
                                )
                            );

                            //Set each palette
                            sDescNode* JoinedNode[2] = {
                                GetMainTree()->GetDescNode(Node01, Node02, Node03, -1),
                                GetMainTree()->GetDescNode(Node01, Node02, Node03 + 1, -1)
                            };

                            //Set each palette
                            CreateDefPal(JoinedNode[0], 0);
                            CreateDefPal(JoinedNode[1], 1);

                            SetSourcePal(0, NodeGet->uUnitId, nSrcStart, nSrcAmt, nNodeIncrement);
                            SetSourcePal(1, NodeGet->uUnitId, nSrcStart + 1, nSrcAmt, nNodeIncrement);
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

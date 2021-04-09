#include "StdAfx.h"
#include "Game_XMVSF_A.h"
#include "GameDef.h"
#include "..\palmod.h"

#define XMVSF_DEBUG DEFAULT_GAME_DEBUG_STATE

stExtraDef* CGame_XMVSF_A::XMVSF_A_EXTRA_CUSTOM = nullptr;

CDescTree CGame_XMVSF_A::MainDescTree = nullptr;

UINT32 CGame_XMVSF_A::m_nTotalPaletteCountForXMVSF = 0;

int CGame_XMVSF_A::rgExtraCountAll[XMVSF_A_NUMUNIT + 1] = { -1 };
int CGame_XMVSF_A::rgExtraLoc[XMVSF_A_NUMUNIT + 1] = { -1 };
UINT32 CGame_XMVSF_A::m_nExpectedGameROMSize = 0x80000; // 524288 bytes
UINT32 CGame_XMVSF_A::m_nConfirmedROMSize = -1;

void CGame_XMVSF_A::InitializeStatics()
{
    safe_delete_array(CGame_XMVSF_A::XMVSF_A_EXTRA_CUSTOM);

    memset(rgExtraCountAll, -1, sizeof(rgExtraCountAll));
    memset(rgExtraLoc, -1, sizeof(rgExtraLoc));

    MainDescTree.SetRootTree(CGame_XMVSF_A::InitDescTree());
}

CGame_XMVSF_A::CGame_XMVSF_A(UINT32 nConfirmedROMSize)
{
    OutputDebugString(L"CGame_XMVSF_A::CGame_XMVSF_A: Loading ROM\n");

    createPalOptions = { OFFSET_PALETTE_BY_ONE, WRITE_MAX };
    SetAlphaMode(AlphaMode::GameDoesNotUseAlpha);
    SetColorMode(ColMode::COLMODE_12A);

    // We need this set before we initialize so that corrupt Extras truncate correctly.
    // Otherwise the new user inadvertently corrupts their ROM.
    m_nConfirmedROMSize = nConfirmedROMSize;
    InitializeStatics();

    //We need the proper unit amt before we init the main buffer
    m_nTotalInternalUnits = XMVSF_A_NUMUNIT;
    m_nExtraUnit = XMVSF_A_EXTRALOC;
    m_nSafeCountForThisRom = 468 + GetExtraCt(m_nExtraUnit);
    m_pszExtraFilename = EXTRA_FILENAME_XMVSF;
    m_nTotalPaletteCount = m_nTotalPaletteCountForXMVSF;
    // This magic number is used to warn users if their Extra file is trying to write somewhere potentially unusual
    m_nLowestKnownPaletteRomLocation = 0x606e;

    nUnitAmt = m_nTotalInternalUnits + (GetExtraCt(m_nExtraUnit) ? 1 : 0);

    InitDataBuffer();

    //Set game information
    nGameFlag = XMVSF_A;
    nImgGameFlag = IMGDAT_SECTION_CPS2;
    m_prgGameImageSet = XMVSF_A_IMG_UNITS;
    nImgUnitAmt = ARRAYSIZE(XMVSF_A_IMG_UNITS);

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

CGame_XMVSF_A::~CGame_XMVSF_A(void)
{
    safe_delete_array(CGame_XMVSF_A::XMVSF_A_EXTRA_CUSTOM);
    ClearDataBuffer();
    //Get rid of the file changed flag
    FlushChangeTrackingArray();
}

UINT32 CGame_XMVSF_A::GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet, bool* pfNeedToValidateCRCs)
{
    static sCRC32ValueSet knownROMs[] =
    {
#ifdef MAME_NOTES
    we want the 05 rom
GAME(1996, xmvsf,      0,        cps2, cps2_2p6b, cps2_state, init_cps2,     ROT0,   "Capcom", "X-Men Vs. Street Fighter (Euro 961004)", MACHINE_SUPPORTS_SAVE)
    ROM_LOAD16_WORD_SWAP("xvs.05a",  0x100000, 0x80000, CRC(7db6025d) SHA1(2d74f48f83f45359bfaca28ab686625766af12ee))
GAME(1996, xmvsfr1,    xmvsf,    cps2, cps2_2p6b, cps2_state, init_cps2,     ROT0,   "Capcom", "X-Men Vs. Street Fighter (Euro 960910)", MACHINE_SUPPORTS_SAVE)
    ROM_LOAD16_WORD_SWAP("xvs.05a",  0x100000, 0x80000, CRC(7db6025d) SHA1(2d74f48f83f45359bfaca28ab686625766af12ee))
GAME(1996, xmvsfu,     xmvsf,    cps2, cps2_2p6b, cps2_state, init_cps2,     ROT0,   "Capcom", "X-Men Vs. Street Fighter (USA 961023)", MACHINE_SUPPORTS_SAVE)
    ROM_LOAD16_WORD_SWAP("xvs.05a",  0x100000, 0x80000, CRC(7db6025d) SHA1(2d74f48f83f45359bfaca28ab686625766af12ee))
GAME(1996, xmvsfur1,   xmvsf,    cps2, cps2_2p6b, cps2_state, init_cps2,     ROT0,   "Capcom", "X-Men Vs. Street Fighter (USA 961004)", MACHINE_SUPPORTS_SAVE)
    ROM_LOAD16_WORD_SWAP("xvs.05a",  0x100000, 0x80000, CRC(7db6025d) SHA1(2d74f48f83f45359bfaca28ab686625766af12ee))
GAME(1996, xmvsfur2,   xmvsf,    cps2, cps2_2p6b, cps2_state, init_cps2,     ROT0,   "Capcom", "X-Men Vs. Street Fighter (USA 960910)", MACHINE_SUPPORTS_SAVE)
    ROM_LOAD16_WORD_SWAP("xvs.05a",  0x100000, 0x80000, CRC(7db6025d) SHA1(2d74f48f83f45359bfaca28ab686625766af12ee))
GAME(1996, xmvsfj,     xmvsf,    cps2, cps2_2p6b, cps2_state, init_cps2,     ROT0,   "Capcom", "X-Men Vs. Street Fighter (Japan 961023)", MACHINE_SUPPORTS_SAVE)
    ROM_LOAD16_WORD_SWAP("xvs.05a",  0x100000, 0x80000, CRC(7db6025d) SHA1(2d74f48f83f45359bfaca28ab686625766af12ee))
GAME(1996, xmvsfjr1,   xmvsf,    cps2, cps2_2p6b, cps2_state, init_cps2,     ROT0,   "Capcom", "X-Men Vs. Street Fighter (Japan 961004)", MACHINE_SUPPORTS_SAVE)
    ROM_LOAD16_WORD_SWAP("xvs.05a",  0x100000, 0x80000, CRC(7db6025d) SHA1(2d74f48f83f45359bfaca28ab686625766af12ee))
GAME(1996, xmvsfjr2,   xmvsf,    cps2, cps2_2p6b, cps2_state, init_cps2,     ROT0,   "Capcom", "X-Men Vs. Street Fighter (Japan 960910)", MACHINE_SUPPORTS_SAVE)
    ROM_LOAD16_WORD_SWAP("xvs.05a",  0x100000, 0x80000, CRC(7db6025d) SHA1(2d74f48f83f45359bfaca28ab686625766af12ee))
GAME(1996, xmvsfjr3,   xmvsf,    cps2, cps2_2p6b, cps2_state, init_cps2,     ROT0,   "Capcom", "X-Men Vs. Street Fighter (Japan 960909)", MACHINE_SUPPORTS_SAVE)
    ROM_LOAD16_WORD_SWAP("xvs.05",   0x100000, 0x80000, CRC(030e0e1e) SHA1(164e3023bb1965768448e1bf6c45ff9e0ac964c7))
GAME(1996, xmvsfa,     xmvsf,    cps2, cps2_2p6b, cps2_state, init_cps2,     ROT0,   "Capcom", "X-Men Vs. Street Fighter (Asia 961023)", MACHINE_SUPPORTS_SAVE)
    ROM_LOAD16_WORD_SWAP("xvs.05a",  0x100000, 0x80000, CRC(7db6025d) SHA1(2d74f48f83f45359bfaca28ab686625766af12ee))
GAME(1996, xmvsfar1,   xmvsf,    cps2, cps2_2p6b, cps2_state, init_cps2,     ROT0,   "Capcom", "X-Men Vs. Street Fighter (Asia 961004)", MACHINE_SUPPORTS_SAVE)
    ROM_LOAD16_WORD_SWAP("xvs.05a",  0x100000, 0x80000, CRC(7db6025d) SHA1(2d74f48f83f45359bfaca28ab686625766af12ee))
GAME(1996, xmvsfar2,   xmvsf,    cps2, cps2_2p6b, cps2_state, init_cps2,     ROT0,   "Capcom", "X-Men Vs. Street Fighter (Asia 960919)", MACHINE_SUPPORTS_SAVE)
    ROM_LOAD16_WORD_SWAP("xvs.05a",  0x100000, 0x80000, CRC(7db6025d) SHA1(2d74f48f83f45359bfaca28ab686625766af12ee))
GAME(1996, xmvsfar3,   xmvsf,    cps2, cps2_2p6b, cps2_state, init_cps2,     ROT0,   "Capcom", "X-Men Vs. Street Fighter (Asia 960910)", MACHINE_SUPPORTS_SAVE)
    ROM_LOAD16_WORD_SWAP("xvs.05a",  0x100000, 0x80000, CRC(7db6025d) SHA1(2d74f48f83f45359bfaca28ab686625766af12ee))
GAME(1996, xmvsfh,     xmvsf,    cps2, cps2_2p6b, cps2_state, init_cps2,     ROT0,   "Capcom", "X-Men Vs. Street Fighter (Hispanic 961004)", MACHINE_SUPPORTS_SAVE)
    ROM_LOAD16_WORD_SWAP("xvs.05a",  0x100000, 0x80000, CRC(7db6025d) SHA1(2d74f48f83f45359bfaca28ab686625766af12ee))
GAME(1996, xmvsfb,     xmvsf,    cps2, cps2_2p6b, cps2_state, init_cps2,     ROT0,   "Capcom", "X-Men Vs. Street Fighter (Brazil 961023)", MACHINE_SUPPORTS_SAVE)
    ROM_LOAD16_WORD_SWAP("xvs.05a",  0x100000, 0x80000, CRC(7db6025d) SHA1(2d74f48f83f45359bfaca28ab686625766af12ee))
GAME(1996, xmvsfu1d,   xmvsf,    dead_cps2, cps2_2p6b, cps2_state, init_cps2,     ROT0,   "bootleg", "X-Men Vs. Street Fighter (USA 961004 Phoenix Edition) (bootleg)", MACHINE_SUPPORTS_SAVE)
    ROM_LOAD16_WORD_SWAP("xvs.05a",   0x100000, 0x80000, CRC(7db6025d) SHA1(2d74f48f83f45359bfaca28ab686625766af12ee))
#endif
        { L"XVSF (Arcade)", L"xvs.05a", 0x7db6025d, 0 },
        { L"XVSF (960909 Japan Arcade)", L"xvs.05", 0x030e0e1e, 0 },
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

sFileRule CGame_XMVSF_A::GetRule(UINT16 nUnitId)
{
    sFileRule NewFileRule;

    _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, L"xvs.05a");

    NewFileRule.uUnitId = 0;
    NewFileRule.uVerifyVar = m_nExpectedGameROMSize;

    return NewFileRule;
}

int CGame_XMVSF_A::GetExtraCt(UINT16 nUnitId, BOOL bCountVisibleOnly)
{
    if (rgExtraCountAll[0] == -1)
    {
        int nDefCtr = 0;
        memset(rgExtraCountAll, 0, (XMVSF_A_NUMUNIT + 1) * sizeof(int));

        stExtraDef* pCurrDef = GetExtraDefForXMVSF(0);

        while (pCurrDef->uUnitN != INVALID_UNIT_VALUE)
        {
            if (!pCurrDef->isInvisible || !bCountVisibleOnly)
            {
                rgExtraCountAll[pCurrDef->uUnitN]++;
            }

            nDefCtr++;
            pCurrDef = GetExtraDefForXMVSF(nDefCtr);
        }
    }

    return rgExtraCountAll[nUnitId];
}

int CGame_XMVSF_A::GetExtraLoc(UINT16 nUnitId)
{
    if (rgExtraLoc[0] == -1)
    {
        int nDefCtr = 0;
        int nCurrUnit = UNIT_START_VALUE;
        memset(rgExtraLoc, 0, (XMVSF_A_NUMUNIT + 1) * sizeof(int));

        stExtraDef* pCurrDef = GetExtraDefForXMVSF(0);

        while (pCurrDef->uUnitN != INVALID_UNIT_VALUE)
        {
            if (pCurrDef->uUnitN != nCurrUnit)
            {
                rgExtraLoc[pCurrDef->uUnitN] = nDefCtr;
                nCurrUnit = pCurrDef->uUnitN;
            }

            nDefCtr++;
            pCurrDef = GetExtraDefForXMVSF(nDefCtr);
        }
    }

    return rgExtraLoc[nUnitId];
}

CDescTree* CGame_XMVSF_A::GetMainTree()
{
    return &CGame_XMVSF_A::MainDescTree;
}

sDescTreeNode* CGame_XMVSF_A::InitDescTree()
{
    UINT32 nTotalPaletteCount = 0;

    //Load extra file if we're using it
    LoadExtraFileForGame(EXTRA_FILENAME_XMVSF, XMVSF_A_EXTRA, &XMVSF_A_EXTRA_CUSTOM, XMVSF_A_EXTRALOC, m_nConfirmedROMSize);

    bool fHaveExtras = (GetExtraCt(XMVSF_A_EXTRALOC) > 0);
    UINT16 nUnitCt = XMVSF_A_NUMUNIT + (fHaveExtras ? 1 : 0);

    sDescTreeNode* NewDescTree = new sDescTreeNode;

    //Create the main character tree
    _snwprintf_s(NewDescTree->szDesc, ARRAYSIZE(NewDescTree->szDesc), _TRUNCATE, L"%s", g_GameFriendlyName[XMVSF_A]);
    NewDescTree->ChildNodes = new sDescTreeNode[nUnitCt];
    NewDescTree->uChildAmt = nUnitCt;
    //All units have tree children
    NewDescTree->uChildType = DESC_NODETYPE_TREE;

    CString strMsg;
    strMsg.Format(L"CGame_XMVSF_A::InitDescTree: Building desc tree for XMVSF %s extras...\n", fHaveExtras ? L"with" : L"without");
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
        
        if (iUnitCtr < XMVSF_A_EXTRALOC)
        {
            //Set each description
            _snwprintf_s(UnitNode->szDesc, ARRAYSIZE(UnitNode->szDesc), _TRUNCATE, L"%s", XMVSF_A_UNITS[iUnitCtr].szDesc);
            UnitNode->ChildNodes = new sDescTreeNode[nUnitChildCount];
            //All children have collection trees
            UnitNode->uChildType = DESC_NODETYPE_TREE;
            UnitNode->uChildAmt = nUnitChildCount;

#if XMVSF_DEBUG
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

#if XMVSF_DEBUG
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

#if XMVSF_DEBUG
                    strMsg.Format(L"\t\tPalette: \"%s\", %u of %u", ChildNode->szDesc, nNodeIndex + 1, nListedChildrenCount);
                    OutputDebugString(strMsg);
                    strMsg.Format(L", 0x%06x to 0x%06x (%u colors)", paletteSetToUse[nNodeIndex].nPaletteOffset, paletteSetToUse[nNodeIndex].nPaletteOffsetEnd, (paletteSetToUse[nNodeIndex].nPaletteOffsetEnd - paletteSetToUse[nNodeIndex].nPaletteOffset) / 2);
                    OutputDebugString(strMsg);

                    if (paletteSetToUse[nNodeIndex].indexImgToUse != INVALID_UNIT_VALUE)
                    {
                        strMsg.Format(L", image unit 0x%02x image index 0x%02x.\n", paletteSetToUse[nNodeIndex].indexImgToUse, paletteSetToUse[nNodeIndex].indexOffsetToUse);
                    }
                    else
                    {
                        strMsg.Format(L", no image available.\n");
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

#if XMVSF_DEBUG
            strMsg.Format(L"Unit (Extras): \"%s\", %u of %u, %u total children\n", UnitNode->szDesc, iUnitCtr + 1, nUnitCt, nUnitChildCount);
            OutputDebugString(strMsg);
#endif
        }

        //Set up extra nodes
        if (bUseExtra)
        {
            int nExtraPos = GetExtraLoc(iUnitCtr);
            int nCurrExtra = 0;

            CollectionNode = &((sDescTreeNode*)UnitNode->ChildNodes)[(XMVSF_A_EXTRALOC > iUnitCtr) ? (nUnitChildCount - 1) : 0]; //Extra node
            _snwprintf_s(CollectionNode->szDesc, ARRAYSIZE(CollectionNode->szDesc), _TRUNCATE, L"Extra");

            CollectionNode->ChildNodes = new sDescTreeNode[nExtraCt];

            CollectionNode->uChildType = DESC_NODETYPE_NODE;
            CollectionNode->uChildAmt = nExtraCt; //EX + Extra

#if XMVSF_DEBUG
            strMsg.Format(L"\tCollection: \"%s\", %u of %u, %u children\n", CollectionNode->szDesc, 1, nUnitChildCount, nExtraCt);
            OutputDebugString(strMsg);
#endif

            for (UINT16 nExtraCtr = 0; nExtraCtr < nExtraCt; nExtraCtr++)
            {
                ChildNode = &((sDescNode*)CollectionNode->ChildNodes)[nExtraCtr];

                stExtraDef* pCurrDef = GetExtraDefForXMVSF(nExtraPos + nCurrExtra);

                while (pCurrDef->isInvisible)
                {
                    nCurrExtra++;

                    pCurrDef = GetExtraDefForXMVSF(nExtraPos + nCurrExtra);
                }

                _snwprintf_s(ChildNode->szDesc, ARRAYSIZE(ChildNode->szDesc), _TRUNCATE, pCurrDef->szDesc);

                ChildNode->uUnitId = iUnitCtr;
                ChildNode->uPalId = (((XMVSF_A_EXTRALOC > iUnitCtr) ? 1 : 0) * nUnitChildCount * 2) + nCurrExtra;

#if XMVSF_DEBUG
                strMsg.Format(L"\t\tPalette: \"%s\", %u of %u\n", ChildNode->szDesc, nExtraCtr + 1, nExtraCt);
                OutputDebugString(strMsg);
#endif

                nCurrExtra++;
                nTotalPaletteCount++;
            }
        }
    }

    strMsg.Format(L"CGame_XMVSF_A::InitDescTree: Loaded %u palettes for XMVSF\n", nTotalPaletteCount);
    OutputDebugString(strMsg);

    m_nTotalPaletteCountForXMVSF = nTotalPaletteCount;

    return NewDescTree;
}

UINT16 CGame_XMVSF_A::GetCollectionCountForUnit(UINT16 nUnitId)
{
    if (nUnitId == XMVSF_A_EXTRALOC)
    {
        return GetExtraCt(nUnitId);
    }
    else
    {
        return XMVSF_A_UNITS[nUnitId].uChildAmt;
    }
}

UINT16 CGame_XMVSF_A::GetNodeCountForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    if (nUnitId == XMVSF_A_EXTRALOC)
    {
        return GetExtraCt(nUnitId);
    }
    else
    {
        const sDescTreeNode* pCollectionNode = (const sDescTreeNode*)(XMVSF_A_UNITS[nUnitId].ChildNodes);

        return pCollectionNode[nCollectionId].uChildAmt;
    }
}

LPCWSTR CGame_XMVSF_A::GetDescriptionForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    if (nUnitId == XMVSF_A_EXTRALOC)
    {
        return L"Extra Palettes";
    }
    else
    {
        const sDescTreeNode* pCollection = (const sDescTreeNode*)XMVSF_A_UNITS[nUnitId].ChildNodes;
        return pCollection[nCollectionId].szDesc;
    }
}

UINT16 CGame_XMVSF_A::GetPaletteCountForUnit(UINT16 nUnitId)
{
    if (nUnitId == XMVSF_A_EXTRALOC)
    {
        return GetExtraCt(nUnitId);
    }
    else
    {
        UINT16 nCompleteCount = 0;
        UINT16 nCollectionCount = XMVSF_A_UNITS[nUnitId].uChildAmt;
        const sDescTreeNode* pCurrentCollection = (const sDescTreeNode*)(XMVSF_A_UNITS[nUnitId].ChildNodes);

        for (UINT16 nCollectionIndex = 0; nCollectionIndex < nCollectionCount; nCollectionIndex++)
        {
            nCompleteCount += pCurrentCollection[nCollectionIndex].uChildAmt;
        }

#if XMVSF_DEBUG
        CString strMsg;
        strMsg.Format(L"CGame_XMVSF_A::GetPaletteCountForUnit: %u for unit %u (%s) which has %u collections.\n", nCompleteCount, nUnitId, XMVSF_A_UNITS[nUnitId].szDesc, nCollectionCount);
        OutputDebugString(strMsg);
#endif

        return nCompleteCount;
    }
}

const sGame_PaletteDataset* CGame_XMVSF_A::GetPaletteSet(UINT16 nUnitId, UINT16 nCollectionId)
{
    // Don't use this for Extra palettes.
    const sDescTreeNode* pCurrentSet = (const sDescTreeNode*)XMVSF_A_UNITS[nUnitId].ChildNodes;
    return ((sGame_PaletteDataset*)(pCurrentSet[nCollectionId].ChildNodes));
}

const sDescTreeNode* CGame_XMVSF_A::GetNodeFromPaletteId(UINT16 nUnitId, UINT16 nPaletteId, bool fReturnBasicNodesOnly)
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

        if (nUnitId == XMVSF_A_EXTRALOC)
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
            const sDescTreeNode* pCollectionNodeToCheck = (const sDescTreeNode*)(XMVSF_A_UNITS[nUnitId].ChildNodes);

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

const sGame_PaletteDataset* CGame_XMVSF_A::GetSpecificPalette(UINT16 nUnitId, UINT16 nPaletteId)
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

void CGame_XMVSF_A::LoadSpecificPaletteData(UINT16 nUnitId, UINT16 nPalId)
{
    if (nUnitId != XMVSF_A_EXTRALOC)
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
    }
    else // XMVSF_A_EXTRALOC
    {
        // This is where we handle all the palettes added in via Extra.
        stExtraDef* pCurrDef = GetExtraDefForXMVSF(GetExtraLoc(nUnitId) + nPalId);

        m_nCurrentPaletteROMLocation = pCurrDef->uOffset;
        m_nCurrentPaletteSizeInColors = (pCurrDef->cbPaletteSize / m_nSizeOfColorsInBytes);
        m_pszCurrentPaletteName = pCurrDef->szDesc;
    }
}

BOOL CGame_XMVSF_A::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
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

    UINT16 nImgUnitId = INVALID_UNIT_VALUE;
    nTargetImgId = 0;

    bool fShouldUseAlternateLoadLogic = false;

    // Only load images for internal units, since we don't currently have a methodology for associating
    // external loads to internal sprites.
    if (XMVSF_A_EXTRALOC != NodeGet->uUnitId)
    {
        const sGame_PaletteDataset* paletteDataSet = GetSpecificPalette(NodeGet->uUnitId, NodeGet->uPalId);

        if (paletteDataSet)
        {
            // This value should be the first value for this entry.
            nImgUnitId = paletteDataSet->indexImgToUse;
            nTargetImgId = paletteDataSet->indexOffsetToUse;

            const sDescTreeNode* pCurrentNode = GetNodeFromPaletteId(NodeGet->uUnitId, NodeGet->uPalId, true);

            if (pCurrentNode) // For Basic nodes, we can allow multisprite view in the Export dialog
            {
                if ((_wcsicmp(pCurrentNode->szDesc, L"P1") == 0) || (_wcsicmp(pCurrentNode->szDesc, L"P2") == 0))
                {
                    // We show 2 sprites (P1/P2) for export for all normal XMVSF sprites
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

    if (!fShouldUseAlternateLoadLogic)
    {
        //Create the default palette
        ClearSetImgTicket(CreateImgTicket(nImgUnitId, nTargetImgId));

        CreateDefPal(NodeGet, 0);

        SetSourcePal(0, NodeGet->uUnitId, nSrcStart, nSrcAmt, nNodeIncrement);
    }

    return TRUE;
}

COLORREF* CGame_XMVSF_A::CreatePal(UINT16 nUnitId, UINT16 nPalId)
{
    LoadSpecificPaletteData(nUnitId, nPalId);

    COLORREF* NewPal = NULL;

    NewPal = new COLORREF[m_nCurrentPaletteSizeInColors];

    for (UINT16 i = 1; i < m_nCurrentPaletteSizeInColors; i++)
    {
        NewPal[i] = ConvPal16(m_pppDataBuffer[nUnitId][nPalId][i - 1]) | 0xFF000000;
    }

    NewPal[0] = 0xFF000000;

    return NewPal;
}

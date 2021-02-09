#include "StdAfx.h"
#include "Game_GGXXR_A.h"
#include "..\PalMod.h"

UINT16 CGame_GGXXR_A::uRuleCtr = 0;

CDescTree CGame_GGXXR_A::MainDescTree = nullptr;

#define GGXXR_A_DEBUG DEFAULT_GAME_DEBUG_STATE

struct GGXXRFileData
{
    LPCWSTR pszFileName = nullptr;
    LPCWSTR pszCharacter = nullptr;
    UINT32 nExpectedFileSize = 0;
    UINT32 nInitialLocation = 0;
};

GGXXRFileData GGXXRCharacterData[] =
{
    { L"ab.bin", L"A.B.A.", 5715300 },
    { L"an.bin", L"Anji", 4518932 },
    { L"ax.bin", L"Axel", 4225716 },
    { L"bk.bin", L"Baiken", 3573668 },
    { L"ch.bin", L"Chipp", 3113988 },
    { L"dz.bin", L"Dizzy", 5352324 },
    { L"eab.bin", L"EX A.B.A.", 5912564 },
    { L"ean.bin", L"EX Anji", 4520900 },
    { L"eax.bin", L"EX Axel", 4217220 },
    { L"ebk.bin", L"EX Baiken", 3601604 },
    { L"ech.bin", L"EX Chipp", 3162804 },
    { L"edz.bin", L"EX Dizzy", 5594900 },
    { L"efa.bin", L"EX Faust", 4784260 },
    { L"efr.bin", L"EX Order Sol", 5965396 },
    { L"ein.bin", L"EX I-no", 5762996 },
    { L"ejm.bin", L"EX Jam", 3812100 },
    { L"ejy.bin", L"EX Justice", 4210036 },
    { L"eky.bin", L"EX Ky", 4859572 },
    { L"eml.bin", L"EX Millia", 3003428 },
    { L"emy.bin", L"EX May", 4675812 },
    { L"epo.bin", L"EX Potemkin", 5313412 },
    { L"erk.bin", L"EX Robo-Ky", 4599332 },
    { L"esl.bin", L"EX Sol", 4679684 },
    { L"esy.bin", L"EX Slayer", 6221972 },
    { L"ets.bin", L"EX Testament", 4775796 },
    { L"eve.bin", L"EX Venom", 2848292 },
    { L"eyy.bin", L"EX Bridget", 4206820 },
    { L"ezp.bin", L"EX Zappa", 6044292 },
    { L"ezt.bin", L"EX Eddie", 3185140 },
    { L"fa.bin", L"Faust", 4773284 },
    { L"fr.bin", L"Order Sol", 5772356 },
    { L"in.bin", L"I-no", 5609060 },
    { L"jm.bin", L"Jam", 3827044 },
    { L"js.bin", L"Justice", 4556788 },
    { L"jy.bin", L"Johnny", 4205892 },
    { L"kr.bin", L"Kliff", 3114036 },
    { L"ky.bin", L"Ky", 4571540 },
    { L"ml.bin", L"Millia", 3034084 },
    { L"my.bin", L"May", 4311684 },
    { L"po.bin", L"Potemkin", 5277348 },
    { L"rk.bin", L"Robo-Ky", 4489668 },
    { L"sl.bin", L"Sol", 4613188 },
    { L"sy.bin", L"Slayer", 6215652 },
    { L"ts.bin", L"Testament", 4817508 },
    { L"ve.bin", L"Venom", 2787412 },
    { L"yy.bin", L"Bridget", 4127716 },
    { L"zp.bin", L"Zappa", 6019988 },
    { L"zt.bin", L"Eddie", 3289156 },
};

const LPCWSTR GGXXRPaletteNames[] =
{
    L"Punch",
    L"Kick",
    L"Slash",
    L"Heavy Slash",
    L"Dust",

    L"EX Punch",
    L"EX Kick",
    L"EX Slash",
    L"EX Heavy Slash",
    L"EX Dust",

    L"Slash Punch",
    L"Slash Kick",
    L"Slash Slash",
    L"Slash Heavy Slash",
    L"Gold",

    L"Reload Punch",
    L"Reload Kick",
    L"Reload Slash",
    L"Reload Heavy Slash",
    L"Shadow",

    L"Vs Slash Dust",
    L"Vs Reload Dust",
};

CGame_GGXXR_A::CGame_GGXXR_A(UINT32 nConfirmedROMSize /* = -1 */)
{
    createPalOptions = { NO_SPECIAL_OPTIONS, WRITE_MAX };
    SetAlphaMode(AlphaMode::GameUsesVariableAlpha);
    m_fGameUsesAlphaValue = true;
    SetColorMode(ColMode::COLMODE_ARGB7888);

    //Set palette conversion mode
    BasePalGroup.SetMode(ePalType::PALTYPE_256STEPS);

    InitializeStatics();

    // Don't load extras
    m_pszExtraFilename = nullptr;

    nFileAmt = nUnitAmt = m_nTotalInternalUnits = ARRAYSIZE(GGXXRCharacterData);

    InitDataBuffer();

    nGameFlag = GGXXR_A;
    nImgGameFlag = IMGDAT_SECTION_CPS2;
    // no images yet
    m_prgGameImageSet = nullptr;
    nImgUnitAmt = 0;

    //Set the image out display type
    DisplayType = eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT;

    pButtonLabelSet = DEF_NOBUTTONS;
    m_nNumberOfColorOptions = ARRAYSIZE(DEF_NOBUTTONS);

    //Create the redirect buffer
    rgUnitRedir = new UINT16[nUnitAmt + 1];
    memset(rgUnitRedir, 0, sizeof(UINT16) * nUnitAmt);

    FlushChangeTrackingArray();
    PrepChangeTrackingArray();
}

CGame_GGXXR_A::~CGame_GGXXR_A()
{
    ClearDataBuffer();
    //Get rid of the file changed flag
    FlushChangeTrackingArray();
}

void CGame_GGXXR_A::InitializeStatics()
{
    MainDescTree.SetRootTree(CGame_GGXXR_A::InitDescTree());
}

sFileRule CGame_GGXXR_A::GetRule(UINT16 nUnitId)
{
    sFileRule NewFileRule;

    const UINT16 nAdjustedUnitId = (nUnitId & 0x00FF);
    _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, L"%s", GGXXRCharacterData[nAdjustedUnitId].pszFileName);
    NewFileRule.uUnitId = nUnitId;
    NewFileRule.uVerifyVar = GGXXRCharacterData[nAdjustedUnitId].nExpectedFileSize;

    return NewFileRule;
}

sFileRule CGame_GGXXR_A::GetNextRule()
{
    sFileRule NewFileRule = GetRule(uRuleCtr);

    uRuleCtr++;

    if (uRuleCtr >= ARRAYSIZE(GGXXRCharacterData))
    {
        uRuleCtr = INVALID_UNIT_VALUE;
    }

    return NewFileRule;
}

sDescTreeNode* CGame_GGXXR_A::InitDescTree()
{
    UINT32 nTotalPaletteCount = 0;
    UINT16 nUnitCt = ARRAYSIZE(GGXXRCharacterData);

    sDescTreeNode* NewDescTree = new sDescTreeNode;

    //Create the main character tree
    _snwprintf_s(NewDescTree->szDesc, ARRAYSIZE(NewDescTree->szDesc), _TRUNCATE, L"%s", g_GameFriendlyName[GGXXR_A]);
    NewDescTree->ChildNodes = new sDescTreeNode[nUnitCt];
    NewDescTree->uChildAmt = nUnitCt;
    //All units have tree children
    NewDescTree->uChildType = DESC_NODETYPE_TREE;

    CString strMsg;
    strMsg.Format(L"CGame_GGXXR_A_DIR::InitDescTree: Building desc tree for GGXXR_A...\n");
    OutputDebugString(strMsg);

    //Go through each character
    for (UINT16 iUnitCtr = 0; iUnitCtr < nUnitCt; iUnitCtr++)
    {
        sDescTreeNode* UnitNode = nullptr;
        sDescTreeNode* CollectionNode = nullptr;
        sDescNode* ChildNode = nullptr;

        UINT16 nUnitChildCount = GetCollectionCountForUnit(iUnitCtr);

        UnitNode = &((sDescTreeNode*)NewDescTree->ChildNodes)[iUnitCtr];

        //Set each description
        _snwprintf_s(UnitNode->szDesc, ARRAYSIZE(UnitNode->szDesc), _TRUNCATE, L"%s", GGXXRCharacterData[iUnitCtr].pszCharacter);

        UnitNode->ChildNodes = new sDescTreeNode[nUnitChildCount];
        //All children have collection trees
        UnitNode->uChildType = DESC_NODETYPE_TREE;
        UnitNode->uChildAmt = nUnitChildCount;

#if GGXXR_A_DEBUG
        strMsg.Format(L"Unit: \"%s\", %u of %u, %u total children\n", UnitNode->szDesc, iUnitCtr + 1, nUnitCt, UnitNode->uChildAmt);
        OutputDebugString(strMsg);
#endif

        UINT16 nTotalPalettesUsedInUnit = 0;

        //Set data for each child group ("collection")
        for (UINT16 iCollectionCtr = 0; iCollectionCtr < nUnitChildCount; iCollectionCtr++)
        {
            CollectionNode = &((sDescTreeNode*)UnitNode->ChildNodes)[iCollectionCtr];

            //Set each collection data
            _snwprintf_s(CollectionNode->szDesc, ARRAYSIZE(CollectionNode->szDesc), _TRUNCATE, GetDescriptionForCollection(iUnitCtr, iCollectionCtr));
            //Collection children have nodes
            UINT16 nListedChildrenCount = GetNodeCountForCollection(iUnitCtr, iCollectionCtr);
            CollectionNode->uChildType = DESC_NODETYPE_NODE;
            CollectionNode->uChildAmt = nListedChildrenCount;
            CollectionNode->ChildNodes = (sDescTreeNode*)new sDescNode[nListedChildrenCount];

#if GGXXR_A_DEBUG
            strMsg.Format(L"\tCollection: \"%s\", %u of %u, %u children\n", CollectionNode->szDesc, iCollectionCtr + 1, nUnitChildCount, nListedChildrenCount);
            OutputDebugString(strMsg);
#endif

            //Set each collection's extra nodes: convert the sGame_PaletteDataset to sDescTreeNodes
            for (UINT16 nNodeIndex = 0; nNodeIndex < nListedChildrenCount; nNodeIndex++)
            {
                ChildNode = &((sDescNode*)CollectionNode->ChildNodes)[nNodeIndex];

                _snwprintf_s(ChildNode->szDesc, ARRAYSIZE(ChildNode->szDesc), _TRUNCATE, L"%s", GGXXRPaletteNames[nNodeIndex]);

                ChildNode->uUnitId = iUnitCtr; // but this doesn't work in the new layout does it...?
                ChildNode->uPalId = nTotalPalettesUsedInUnit++;
                nTotalPaletteCount++;

#if GGXXR_A_DEBUG
                strMsg.Format(L"\t\tPalette: \"%s\", %u of %u\n", ChildNode->szDesc, nNodeIndex + 1, nListedChildrenCount);
                OutputDebugString(strMsg);
#endif
            }
        }
    }

    m_nTotalPaletteCount = nTotalPaletteCount;

    strMsg.Format(L"CGame_GGXXR_A_DIR::InitDescTree: Loaded %u palettes for GGXXR ROM\n", nTotalPaletteCount);
    OutputDebugString(strMsg);

    return NewDescTree;
}

UINT16 CGame_GGXXR_A::GetCollectionCountForUnit(UINT16 nUnitId)
{
    // Just one palette set per character
    return 1;
}

UINT16 CGame_GGXXR_A::GetNodeCountForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    return ARRAYSIZE(GGXXRPaletteNames);
}

UINT16 CGame_GGXXR_A::GetPaletteCountForUnit(UINT16 nUnitId)
{
    return ARRAYSIZE(GGXXRPaletteNames);
}

LPCWSTR CGame_GGXXR_A::GetDescriptionForCollection(UINT16 /*nUnitId */, UINT16 /*nCollectionId */)
{
    return L"Palettes";
}

void CGame_GGXXR_A::LoadSpecificPaletteData(UINT16 nUnitId, UINT16 nPalId)
{
    // GGXXR palettes are all 0x100 long
    const int cbPaletteSizeOnDisc = 0x400;

    //GGXXRCharacterData[nPalId].nInitialLocation = 0x48ab50;

    m_pszCurrentPaletteName = GGXXRPaletteNames[nPalId];
    m_nCurrentPaletteROMLocation = GGXXRCharacterData[nUnitId].nInitialLocation + (cbPaletteSizeOnDisc * nPalId) + (0x10 * nPalId);
    m_nCurrentPaletteSizeInColors = cbPaletteSizeOnDisc / m_nSizeOfColorsInBytes;
}

BOOL CGame_GGXXR_A::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
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

    if (!fShouldUseAlternateLoadLogic)
    {
        //Create the default palette
        CreateDefPal(NodeGet, 0);

        if (m_prgGameImageSet) // no need to show images until we get some. this check can be removed once that happens
        {
            // Only internal units get sprites
            ClearSetImgTicket(CreateImgTicket(nImgUnitId, nTargetImgId));
        }

        SetSourcePal(0, NodeGet->uUnitId, nSrcStart, nSrcAmt, nNodeIncrement);
    }

    return TRUE;
}

BOOL CGame_GGXXR_A::LoadFile(CFile* LoadedFile, UINT16 nUnitNumber)
{
    BOOL fSuccess = TRUE;
    CString strInfo;

    strInfo.Format(L"CGame_GGXXR_A_DIR::LoadFile: Preparing to load data for unit number %u (character %s)\n", nUnitNumber, GGXXRCharacterData[nUnitNumber].pszCharacter);
    OutputDebugString(strInfo);

    LONGLONG nPalettePointer = 0;

    LoadedFile->Seek(0, CFile::begin);
    LoadedFile->Read(&nPalettePointer, 0x02);
        
    UINT32 nPaletteStart = 0;

    LoadedFile->Seek(nPalettePointer + 0x0c, CFile::begin);
    LoadedFile->Read(&nPaletteStart, 0x04);

    GGXXRCharacterData[nUnitNumber].nInitialLocation = nPaletteStart + 0x90;

#if GGXXR_A_DEBUG
    strInfo.Format(L"\tCGame_GGXXR_A_DIR::LoadFile: Loaded palettes starting at location 0x%x\n", GGXXRCharacterData[nUnitNumber].nInitialLocation);
    OutputDebugString(strInfo);
#endif

    UINT16 nPalAmt = GetPaletteCountForUnit(nUnitNumber);

    if (m_pppDataBuffer32[nUnitNumber] == nullptr)
    {
        m_pppDataBuffer32[nUnitNumber] = new UINT32 * [nPalAmt];
        memset(m_pppDataBuffer32[nUnitNumber], 0, sizeof(UINT32*) * nPalAmt);
    }

    // These are already sorted, no need to redirect
    rgUnitRedir[nUnitNumber] = nUnitNumber;

    for (UINT16 nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
    {
        LoadSpecificPaletteData(nUnitNumber, nPalCtr);

        m_pppDataBuffer32[nUnitNumber][nPalCtr] = new UINT32[m_nCurrentPaletteSizeInColors];

        LoadedFile->Seek(m_nCurrentPaletteROMLocation, CFile::begin);
        LoadedFile->Read(m_pppDataBuffer32[nUnitNumber][nPalCtr], m_nCurrentPaletteSizeInColors * m_nSizeOfColorsInBytes);

#if GGXXR_A_DEBUG
        strInfo.Format(L"\tCGame_GGXXR_A_DIR::LoadFile: Loaded palette '%s' from location 0x%x\n", m_pszCurrentPaletteName, m_nCurrentPaletteROMLocation);
        OutputDebugString(strInfo);
#endif
    }

    rgUnitRedir[nUnitAmt] = INVALID_UNIT_VALUE;

    return fSuccess;
}

BOOL CGame_GGXXR_A::SaveFile(CFile* SaveFile, UINT16 nUnitId)
{
    UINT32 nTotalPalettesSaved = 0;
    UINT16 nPalAmt = GetPaletteCountForUnit(nUnitId);

    for (UINT16 nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
    {
        if (IsPaletteDirty(nUnitId, nPalCtr))
        {
            LoadSpecificPaletteData(nUnitId, nPalCtr);

            SaveFile->Seek(m_nCurrentPaletteROMLocation, CFile::begin);
            if (GameIsUsing16BitColor())
            {
                SaveFile->Write(m_pppDataBuffer[nUnitId][nPalCtr], m_nCurrentPaletteSizeInColors * m_nSizeOfColorsInBytes);
            }
            else
            {
                SaveFile->Write(m_pppDataBuffer32[nUnitId][nPalCtr], m_nCurrentPaletteSizeInColors * m_nSizeOfColorsInBytes);
            }

            nTotalPalettesSaved++;
        }
    }

    CString strMsg;
    strMsg.Format(L"CGameClass::SaveFile: Saved 0x%x palettes to disk for unit %u\n", nTotalPalettesSaved, nUnitId);
    OutputDebugString(strMsg);

    return TRUE;
}

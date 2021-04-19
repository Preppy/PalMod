#include "StdAfx.h"
#include "Game_UNICLR_A.h"
#include "..\PalMod.h"

UINT16 CGame_UNICLR_A::uRuleCtr = 0;

CDescTree CGame_UNICLR_A::MainDescTree = nullptr;

#define UNICLR_A_DEBUG DEFAULT_GAME_DEBUG_STATE

const UINT16 UNICLR_A_IMG_UNITS[] =
{
	indexFrenchBreadSprites_UNICLR_Akat,   // 0x34
    indexFrenchBreadSprites_UNICLR_Byak,   // 0x35
    indexFrenchBreadSprites_UNICLR_Carm,   // 0x36
    indexFrenchBreadSprites_UNICLR_Chao,   // 0x37
    indexFrenchBreadSprites_UNICLR_Eltn,   // 0x38
    indexFrenchBreadSprites_UNICLR_Enki,   // 0x39
    indexFrenchBreadSprites_UNICLR_Gord,   // 0x3A
    indexFrenchBreadSprites_UNICLR_Hild,   // 0x3B
    indexFrenchBreadSprites_UNICLR_Hyde,   // 0x3C
    indexFrenchBreadSprites_UNICLR_Linn,   // 0x3D
    indexFrenchBreadSprites_UNICLR_Lond,   // 0x3E
    indexFrenchBreadSprites_UNICLR_Merk,   // 0x3F
    indexFrenchBreadSprites_UNICLR_Mika,   // 0x40
    indexFrenchBreadSprites_UNICLR_Nana,   // 0x41
    indexFrenchBreadSprites_UNICLR_Orie,   // 0x42
    indexFrenchBreadSprites_UNICLR_Phon,   // 0x43
    indexFrenchBreadSprites_UNICLR_Seth,   // 0x44
    indexFrenchBreadSprites_UNICLR_Vati,   // 0x45
    indexFrenchBreadSprites_UNICLR_Wagn,   // 0x46
    indexFrenchBreadSprites_UNICLR_Wald,   // 0x47
    indexFrenchBreadSprites_UNICLR_Yuzu,   // 0x48
    indexFrenchBreadSprites_UNICLR_Bonus,  // 0x49
};

struct UNICLRNodeData
{
    LPCWSTR pszNodeName = L"uninit";
    UINT32 nAdjustmentFromBaseNode = 0;
};

const UNICLRNodeData UNICLRPaletteNodes[] =
{
    { L"Left",  0 },
    { L"Right", 0xA000 },
};

const LPCWSTR UNICLRPaletteNamesNormal[] =
{
    L"1",
    L"2",
    L"3",
    L"4",
    L"5",

    L"6",
    L"7",
    L"8",
    L"9",
    L"10",

    L"11",
    L"12",
    L"13",
    L"14",
    L"15",

    L"16",
    L"17",
    L"18",
    L"19",
    L"20",

    L"21",
    L"22",
    L"23",
    L"24",
    L"25",

    L"26",
    L"27",
    L"28",
    L"29",
    L"30",

    L"31",
    L"32",
	L"33",
    L"34",
    L"35",

    L"36",
    L"37",
    L"38",
	L"39",
	L"40",
};

struct UNICLRFileData
{
    LPCWSTR pszFileName = nullptr;
    LPCWSTR pszCharacter = nullptr;
    UINT32 nExpectedFileSize = 0;
    const LPCWSTR* ppszPaletteList = nullptr;
    UINT32 nPaletteListSize = 0;
    UINT32 nInitialLocation = 0;
    UINT32 nSpriteIndex = 0;
};

UNICLRFileData UNICLRCharacterData[] =
{
    { L"Aka.pal",    L"Akatsuki",          81936,    UNICLRPaletteNamesNormal,    ARRAYSIZE(UNICLRPaletteNamesNormal), 0x10,  indexFrenchBreadSprites_UNICLR_Akat },
	{ L"Bya.pal",    L"Byakuya",           81936,    UNICLRPaletteNamesNormal,    ARRAYSIZE(UNICLRPaletteNamesNormal), 0x10,  indexFrenchBreadSprites_UNICLR_Byak },
	{ L"Car.pal",    L"Carmine",           81936,    UNICLRPaletteNamesNormal,    ARRAYSIZE(UNICLRPaletteNamesNormal), 0x10,  indexFrenchBreadSprites_UNICLR_Carm },
	{ L"Cha.pal",    L"Chaos",             81936,    UNICLRPaletteNamesNormal,    ARRAYSIZE(UNICLRPaletteNamesNormal), 0x10,  indexFrenchBreadSprites_UNICLR_Chao },
	{ L"Elt.pal",    L"Eltnum",            81936,    UNICLRPaletteNamesNormal,    ARRAYSIZE(UNICLRPaletteNamesNormal), 0x10,  indexFrenchBreadSprites_UNICLR_Eltn },
	{ L"Enk.pal",    L"Enkidu",            81936,    UNICLRPaletteNamesNormal,    ARRAYSIZE(UNICLRPaletteNamesNormal), 0x10,  indexFrenchBreadSprites_UNICLR_Enki },
	{ L"Gor.pal",    L"Gordeau",           81936,    UNICLRPaletteNamesNormal,    ARRAYSIZE(UNICLRPaletteNamesNormal), 0x10,  indexFrenchBreadSprites_UNICLR_Gord },
	{ L"Hil.pal",    L"Hilda",             81936,    UNICLRPaletteNamesNormal,    ARRAYSIZE(UNICLRPaletteNamesNormal), 0x10,  indexFrenchBreadSprites_UNICLR_Hild },
	{ L"Hyd.pal",    L"Hyde",              81936,    UNICLRPaletteNamesNormal,    ARRAYSIZE(UNICLRPaletteNamesNormal), 0x10,  indexFrenchBreadSprites_UNICLR_Hyde },
	{ L"Lin.pal",    L"Linne",             81936,    UNICLRPaletteNamesNormal,    ARRAYSIZE(UNICLRPaletteNamesNormal), 0x10,  indexFrenchBreadSprites_UNICLR_Linn },
	{ L"Lnd.pal",    L"Londrekia",         81936,    UNICLRPaletteNamesNormal,    ARRAYSIZE(UNICLRPaletteNamesNormal), 0x10,  indexFrenchBreadSprites_UNICLR_Lond },
	{ L"Mer.pal",    L"Merkava",           81936,    UNICLRPaletteNamesNormal,    ARRAYSIZE(UNICLRPaletteNamesNormal), 0x10,  indexFrenchBreadSprites_UNICLR_Merk },
	{ L"Mik.pal",    L"Mika",              81936,    UNICLRPaletteNamesNormal,    ARRAYSIZE(UNICLRPaletteNamesNormal), 0x10,  indexFrenchBreadSprites_UNICLR_Mika },
	{ L"Nan.pal",    L"Nanase",            81936,    UNICLRPaletteNamesNormal,    ARRAYSIZE(UNICLRPaletteNamesNormal), 0x10,  indexFrenchBreadSprites_UNICLR_Nana },
	{ L"Ori.pal",    L"Orie",              81936,    UNICLRPaletteNamesNormal,    ARRAYSIZE(UNICLRPaletteNamesNormal), 0x10,  indexFrenchBreadSprites_UNICLR_Orie },
	{ L"Pho.pal",    L"Phonon",            81936,    UNICLRPaletteNamesNormal,    ARRAYSIZE(UNICLRPaletteNamesNormal), 0x10,  indexFrenchBreadSprites_UNICLR_Phon },
	{ L"Set.pal",    L"Seth",              81936,    UNICLRPaletteNamesNormal,    ARRAYSIZE(UNICLRPaletteNamesNormal), 0x10,  indexFrenchBreadSprites_UNICLR_Seth },
	{ L"Vat.pal",    L"Vatista",           81936,    UNICLRPaletteNamesNormal,    ARRAYSIZE(UNICLRPaletteNamesNormal), 0x10,  indexFrenchBreadSprites_UNICLR_Vati },
	{ L"Wag.pal",    L"Wagner",            81936,    UNICLRPaletteNamesNormal,    ARRAYSIZE(UNICLRPaletteNamesNormal), 0x10,  indexFrenchBreadSprites_UNICLR_Wagn },
	{ L"Wal.pal",    L"Waldstein",         81936,    UNICLRPaletteNamesNormal,    ARRAYSIZE(UNICLRPaletteNamesNormal), 0x10,  indexFrenchBreadSprites_UNICLR_Wald },
	{ L"Yuz.pal",    L"Yuzuriha",          81936,    UNICLRPaletteNamesNormal,    ARRAYSIZE(UNICLRPaletteNamesNormal), 0x10,  indexFrenchBreadSprites_UNICLR_Yuzu },
};

CGame_UNICLR_A::CGame_UNICLR_A(UINT32 nConfirmedROMSize /* = -1 */)
{
    createPalOptions = { NO_SPECIAL_OPTIONS, WRITE_MAX };
    SetAlphaMode(AlphaMode::GameUsesFixedAlpha);
    m_fGameUsesAlphaValue = true;
    SetColorMode(ColMode::COLMODE_ARGB8888);

    InitializeStatics();

    // Don't load extras
    m_pszExtraFilename = nullptr;

    nFileAmt = nUnitAmt = m_nTotalInternalUnits = ARRAYSIZE(UNICLRCharacterData);

    InitDataBuffer();

    nGameFlag = UNICLR_A;
    nImgGameFlag = IMGDAT_SECTION_FRENCHBREAD;
    m_prgGameImageSet = UNICLR_A_IMG_UNITS;
    nImgUnitAmt = ARRAYSIZE(UNICLR_A_IMG_UNITS);

    //Set the image out display type
    DisplayType = eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT;

    pButtonLabelSet = DEF_BUTTONLABEL_2_LEFTRIGHT;
    m_nNumberOfColorOptions = ARRAYSIZE(DEF_BUTTONLABEL_2_LEFTRIGHT);

    //Create the redirect buffer
    rgUnitRedir = new UINT16[nUnitAmt + 1];
    memset(rgUnitRedir, 0, sizeof(UINT16) * nUnitAmt);

    FlushChangeTrackingArray();
    PrepChangeTrackingArray();
}

CGame_UNICLR_A::~CGame_UNICLR_A()
{
    ClearDataBuffer();
    //Get rid of the file changed flag
    FlushChangeTrackingArray();
}

void CGame_UNICLR_A::InitializeStatics()
{
    MainDescTree.SetRootTree(CGame_UNICLR_A::InitDescTree());
}

sFileRule CGame_UNICLR_A::GetRule(UINT16 nUnitId)
{
    sFileRule NewFileRule;

    const UINT16 nAdjustedUnitId = (nUnitId & 0x00FF);
    _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, L"%s", UNICLRCharacterData[nAdjustedUnitId].pszFileName);
    NewFileRule.uUnitId = nUnitId;
    NewFileRule.uVerifyVar = UNICLRCharacterData[nAdjustedUnitId].nExpectedFileSize;

    return NewFileRule;
}

sFileRule CGame_UNICLR_A::GetNextRule()
{
    sFileRule NewFileRule = GetRule(uRuleCtr);

    uRuleCtr++;

    if (uRuleCtr >= ARRAYSIZE(UNICLRCharacterData))
    {
        uRuleCtr = INVALID_UNIT_VALUE;
    }

    return NewFileRule;
}

sDescTreeNode* CGame_UNICLR_A::InitDescTree()
{
    UINT32 nTotalPaletteCount = 0;
    UINT16 nUnitCt = ARRAYSIZE(UNICLRCharacterData);

    sDescTreeNode* NewDescTree = new sDescTreeNode;

    //Create the main character tree
    _snwprintf_s(NewDescTree->szDesc, ARRAYSIZE(NewDescTree->szDesc), _TRUNCATE, L"%s", g_GameFriendlyName[UNICLR_A]);
    NewDescTree->ChildNodes = new sDescTreeNode[nUnitCt];
    NewDescTree->uChildAmt = nUnitCt;
    //All units have tree children
    NewDescTree->uChildType = DESC_NODETYPE_TREE;

    CString strMsg;
    strMsg.Format(L"CGame_UNICLR_A_DIR::InitDescTree: Building desc tree for UNICLR_A...\n");
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
        _snwprintf_s(UnitNode->szDesc, ARRAYSIZE(UnitNode->szDesc), _TRUNCATE, L"%s", UNICLRCharacterData[iUnitCtr].pszCharacter);

        UnitNode->ChildNodes = new sDescTreeNode[nUnitChildCount];
        //All children have collection trees
        UnitNode->uChildType = DESC_NODETYPE_TREE;
        UnitNode->uChildAmt = nUnitChildCount;

#if UNICLR_A_DEBUG
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

#if UNICLR_A_DEBUG
            strMsg.Format(L"\tCollection: \"%s\", %u of %u, %u children\n", CollectionNode->szDesc, iCollectionCtr + 1, nUnitChildCount, nListedChildrenCount);
            OutputDebugString(strMsg);
#endif

            for (UINT16 nNodeIndex = 0; nNodeIndex < nListedChildrenCount; nNodeIndex++)
            {
                ChildNode = &((sDescNode*)CollectionNode->ChildNodes)[nNodeIndex];

                _snwprintf_s(ChildNode->szDesc, ARRAYSIZE(ChildNode->szDesc), _TRUNCATE, L"%s", UNICLRCharacterData[iUnitCtr].ppszPaletteList[nNodeIndex]);

                ChildNode->uUnitId = iUnitCtr;
                ChildNode->uPalId = nTotalPalettesUsedInUnit++;
                nTotalPaletteCount++;

#if UNICLR_A_DEBUG
                strMsg.Format(L"\t\tPalette: \"%s\", %u of %u\n", ChildNode->szDesc, nNodeIndex + 1, nListedChildrenCount);
                OutputDebugString(strMsg);
#endif
            }
        }
    }

    m_nTotalPaletteCount = nTotalPaletteCount;

    strMsg.Format(L"CGame_UNICLR_A_DIR::InitDescTree: Loaded %u palettes for UNICLR ROM\n", nTotalPaletteCount);
    OutputDebugString(strMsg);

    return NewDescTree;
}

UINT16 CGame_UNICLR_A::GetCollectionCountForUnit(UINT16 nUnitId)
{
    // Just one palette set per character
    return ARRAYSIZE(UNICLRPaletteNodes);
}

UINT16 CGame_UNICLR_A::GetNodeCountForCollection(UINT16 nUnitId, UINT16 /*nCollectionId*/)
{
    return UNICLRCharacterData[nUnitId].nPaletteListSize;
}

UINT16 CGame_UNICLR_A::GetPaletteCountForUnit(UINT16 nUnitId)
{
    return UNICLRCharacterData[nUnitId].nPaletteListSize * ARRAYSIZE(UNICLRPaletteNodes);
}

LPCWSTR CGame_UNICLR_A::GetDescriptionForCollection(UINT16 /*nUnitId */, UINT16 nCollectionId)
{
    return UNICLRPaletteNodes[nCollectionId].pszNodeName;
}

void CGame_UNICLR_A::LoadSpecificPaletteData(UINT16 nUnitId, UINT16 nPalId)
{
    // UNICLR palettes are all 0x400 long
    const int cbPaletteSizeOnDisc = 0x400;

    UINT16 nAdjustedPalId = nPalId % ARRAYSIZE(UNICLRPaletteNamesNormal);
    UINT16 nPaletteSet = nPalId / ARRAYSIZE(UNICLRPaletteNamesNormal);

    m_pszCurrentPaletteName = UNICLRCharacterData[nUnitId].ppszPaletteList[nAdjustedPalId];
    m_nCurrentPaletteROMLocation = UNICLRCharacterData[nUnitId].nInitialLocation + (cbPaletteSizeOnDisc * nAdjustedPalId) + (0x0 * nAdjustedPalId);
    m_nCurrentPaletteSizeInColors = cbPaletteSizeOnDisc / m_nSizeOfColorsInBytes;

    if (nPaletteSet)
    {
        m_nCurrentPaletteROMLocation += UNICLRPaletteNodes[nPaletteSet].nAdjustmentFromBaseNode;
    }
}

BOOL CGame_UNICLR_A::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
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
    UINT16 nImgUnitId = UNICLRCharacterData[NodeGet->uUnitId].nSpriteIndex;

    // This logic presumes that we are only showing core character palettes.  If we decide to handle
    // anything else, we'd want to validate that the palette in question is in the core lists
    UINT16 nSrcStart = (NodeGet->uPalId % UNICLRCharacterData[NodeGet->uUnitId].nPaletteListSize);
    UINT16 nSrcAmt = m_nNumberOfColorOptions;
    UINT16 nNodeIncrement = UNICLRCharacterData[NodeGet->uUnitId].nPaletteListSize;

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

BOOL CGame_UNICLR_A::LoadFile(CFile* LoadedFile, UINT16 nUnitNumber)
{
    BOOL fSuccess = TRUE;
    CString strInfo;

    strInfo.Format(L"CGame_UNICLR_A_DIR::LoadFile: Preparing to load data for unit number %u (character %s)\n", nUnitNumber, UNICLRCharacterData[nUnitNumber].pszCharacter);
    OutputDebugString(strInfo);

    strInfo.Format(L"\tCGame_UNICLR_A_DIR::LoadFile: Loaded palettes starting at location 0x%x\n", UNICLRCharacterData[nUnitNumber].nInitialLocation);
    OutputDebugString(strInfo);

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

#if UNICLR_A_DEBUG
        strInfo.Format(L"\tCGame_UNICLR_A_DIR::LoadFile: Loaded palette '%s' from location 0x%x\n", m_pszCurrentPaletteName, m_nCurrentPaletteROMLocation);
        OutputDebugString(strInfo);
#endif
    }

    rgUnitRedir[nUnitAmt] = INVALID_UNIT_VALUE;

    return fSuccess;
}

BOOL CGame_UNICLR_A::SaveFile(CFile* SaveFile, UINT16 nUnitId)
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
            else if (GameIsUsing32BitColor())
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

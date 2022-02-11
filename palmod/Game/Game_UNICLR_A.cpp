#include "StdAfx.h"
#include "Game_UNICLR_A.h"
#include "..\PalMod.h"

uint32_t CGame_UNICLR_A::uRuleCtr = 0;

CDescTree CGame_UNICLR_A::MainDescTree = nullptr;

#define UNICLR_A_DEBUG DEFAULT_GAME_DEBUG_STATE

const std::vector<UINT16> UNICLR_A_IMGIDS_USED =
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
    { L"Right", 0xA800 },
};

const std::vector<LPCWSTR> UNICLRPaletteNamesNormal =
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
	
    L"41",
    L"42",
};

struct UNICLRFileData
{
    LPCWSTR pszFileName = nullptr;
    LPCWSTR pszCharacter = nullptr;
    UINT32 nExpectedFileSize = 0;
    const std::vector <LPCWSTR> ppszPaletteList;
    UINT32 nInitialLocation = 0;
    UINT32 nSpriteIndex = 0;
};

const std::vector<UNICLRFileData> UNICLRCharacterData =
{
    { L"___English\\data\\_csel\\Aka.pal",    L"Akatsuki",          86032,    UNICLRPaletteNamesNormal,    0x10,  indexFrenchBreadSprites_UNICLR_Akat },
    { L"___English\\data\\_csel\\Bya.pal",    L"Byakuya",           86032,    UNICLRPaletteNamesNormal,    0x10,  indexFrenchBreadSprites_UNICLR_Byak },
    { L"___English\\data\\_csel\\Car.pal",    L"Carmine",           86032,    UNICLRPaletteNamesNormal,    0x10,  indexFrenchBreadSprites_UNICLR_Carm },
    { L"___English\\data\\_csel\\Cha.pal",    L"Chaos",             86032,    UNICLRPaletteNamesNormal,    0x10,  indexFrenchBreadSprites_UNICLR_Chao },
    { L"___English\\data\\_csel\\Elt.pal",    L"Eltnum",            86032,    UNICLRPaletteNamesNormal,    0x10,  indexFrenchBreadSprites_UNICLR_Eltn },
    { L"___English\\data\\_csel\\Enk.pal",    L"Enkidu",            86032,    UNICLRPaletteNamesNormal,    0x10,  indexFrenchBreadSprites_UNICLR_Enki },
    { L"___English\\data\\_csel\\Gor.pal",    L"Gordeau",           86032,    UNICLRPaletteNamesNormal,    0x10,  indexFrenchBreadSprites_UNICLR_Gord },
    { L"___English\\data\\_csel\\Hil.pal",    L"Hilda",             86032,    UNICLRPaletteNamesNormal,    0x10,  indexFrenchBreadSprites_UNICLR_Hild },
    { L"___English\\data\\_csel\\Hyd.pal",    L"Hyde",              86032,    UNICLRPaletteNamesNormal,    0x10,  indexFrenchBreadSprites_UNICLR_Hyde },
    { L"___English\\data\\_csel\\Lin.pal",    L"Linne",             86032,    UNICLRPaletteNamesNormal,    0x10,  indexFrenchBreadSprites_UNICLR_Linn },
    { L"___English\\data\\_csel\\Lnd.pal",    L"Londrekia",         86032,    UNICLRPaletteNamesNormal,    0x10,  indexFrenchBreadSprites_UNICLR_Lond },
    { L"___English\\data\\_csel\\Mer.pal",    L"Merkava",           86032,    UNICLRPaletteNamesNormal,    0x10,  indexFrenchBreadSprites_UNICLR_Merk },
    { L"___English\\data\\_csel\\Mik.pal",    L"Mika",              86032,    UNICLRPaletteNamesNormal,    0x10,  indexFrenchBreadSprites_UNICLR_Mika },
    { L"___English\\data\\_csel\\Nan.pal",    L"Nanase",            86032,    UNICLRPaletteNamesNormal,    0x10,  indexFrenchBreadSprites_UNICLR_Nana },
    { L"___English\\data\\_csel\\Ori.pal",    L"Orie",              86032,    UNICLRPaletteNamesNormal,    0x10,  indexFrenchBreadSprites_UNICLR_Orie },
    { L"___English\\data\\_csel\\Pho.pal",    L"Phonon",            86032,    UNICLRPaletteNamesNormal,    0x10,  indexFrenchBreadSprites_UNICLR_Phon },
    { L"___English\\data\\_csel\\Set.pal",    L"Seth",              86032,    UNICLRPaletteNamesNormal,    0x10,  indexFrenchBreadSprites_UNICLR_Seth },
    { L"___English\\data\\_csel\\Vat.pal",    L"Vatista",           86032,    UNICLRPaletteNamesNormal,    0x10,  indexFrenchBreadSprites_UNICLR_Vati },
    { L"___English\\data\\_csel\\Wag.pal",    L"Wagner",            86032,    UNICLRPaletteNamesNormal,    0x10,  indexFrenchBreadSprites_UNICLR_Wagn },
    { L"___English\\data\\_csel\\Wal.pal",    L"Waldstein",         86032,    UNICLRPaletteNamesNormal,    0x10,  indexFrenchBreadSprites_UNICLR_Wald },
    { L"___English\\data\\_csel\\Yuz.pal",    L"Yuzuriha",          86032,    UNICLRPaletteNamesNormal,    0x10,  indexFrenchBreadSprites_UNICLR_Yuzu },
};

CGame_UNICLR_A::CGame_UNICLR_A(UINT32 nConfirmedROMSize /* = -1 */)
{
    createPalOptions = { NO_SPECIAL_OPTIONS, WRITE_MAX };
    SetAlphaMode(AlphaMode::GameUsesFixedAlpha);
    m_fGameUsesAlphaValue = true;
    SetColorMode(ColMode::COLMODE_RGBA8888);

    InitializeStatics();

    // Don't load extras
    m_pszExtraFilename = nullptr;

    nFileAmt = nUnitAmt = m_nTotalInternalUnits = static_cast<uint32_t>(UNICLRCharacterData.size());

    InitDataBuffer();

    nGameFlag = UNICLR_A;
    nImgGameFlag = IMGDAT_SECTION_FRENCHBREAD;
    m_prgGameImageSet = UNICLR_A_IMGIDS_USED;

    //Set the image out display type
    DisplayType = eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT;

    pButtonLabelSet = DEF_BUTTONLABEL_2_LEFTRIGHT;

    //Create the redirect buffer
    rgUnitRedir = new uint32_t[nUnitAmt + 1];
    memset(rgUnitRedir, 0, sizeof(uint32_t) * nUnitAmt);

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

sFileRule CGame_UNICLR_A::GetRule(uint32_t nUnitId)
{
    sFileRule NewFileRule;

    const uint32_t nAdjustedUnitId = (nUnitId & RULE_COUNTER_DEMASK);
    _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, L"%s", UNICLRCharacterData[nAdjustedUnitId].pszFileName);
    NewFileRule.uUnitId = nUnitId;
    NewFileRule.uVerifyVar = UNICLRCharacterData[nAdjustedUnitId].nExpectedFileSize;

    return NewFileRule;
}

sFileRule CGame_UNICLR_A::GetNextRule()
{
    sFileRule NewFileRule = GetRule(uRuleCtr);

    uRuleCtr++;

    if (uRuleCtr >= UNICLRCharacterData.size())
    {
        uRuleCtr = INVALID_UNIT_VALUE;
    }

    return NewFileRule;
}

sDescTreeNode* CGame_UNICLR_A::InitDescTree()
{
    UINT32 nTotalPaletteCount = 0;
    uint32_t nUnitCt = static_cast<uint32_t>(UNICLRCharacterData.size());

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
    for (uint32_t iUnitCtr = 0; iUnitCtr < nUnitCt; iUnitCtr++)
    {
        sDescTreeNode* UnitNode = nullptr;
        sDescTreeNode* CollectionNode = nullptr;
        sDescNode* ChildNode = nullptr;

        uint32_t nUnitChildCount = GetCollectionCountForUnit(iUnitCtr);

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

        uint32_t nTotalPalettesUsedInUnit = 0;

        //Set data for each child group ("collection")
        for (uint32_t iCollectionCtr = 0; iCollectionCtr < nUnitChildCount; iCollectionCtr++)
        {
            CollectionNode = &((sDescTreeNode*)UnitNode->ChildNodes)[iCollectionCtr];

            //Set each collection data
            _snwprintf_s(CollectionNode->szDesc, ARRAYSIZE(CollectionNode->szDesc), _TRUNCATE, GetDescriptionForCollection(iUnitCtr, iCollectionCtr));
            //Collection children have nodes
            uint32_t nListedChildrenCount = GetNodeCountForCollection(iUnitCtr, iCollectionCtr);
            CollectionNode->uChildType = DESC_NODETYPE_NODE;
            CollectionNode->uChildAmt = nListedChildrenCount;
            CollectionNode->ChildNodes = (sDescTreeNode*)new sDescNode[nListedChildrenCount];

#if UNICLR_A_DEBUG
            strMsg.Format(L"\tCollection: \"%s\", %u of %u, %u children\n", CollectionNode->szDesc, iCollectionCtr + 1, nUnitChildCount, nListedChildrenCount);
            OutputDebugString(strMsg);
#endif

            for (uint32_t nNodeIndex = 0; nNodeIndex < nListedChildrenCount; nNodeIndex++)
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

uint32_t CGame_UNICLR_A::GetCollectionCountForUnit(uint32_t nUnitId)
{
    // Just one palette set per character
    return ARRAYSIZE(UNICLRPaletteNodes);
}

uint32_t CGame_UNICLR_A::GetNodeCountForCollection(uint32_t nUnitId, uint32_t /*nCollectionId*/)
{
    return static_cast<uint32_t>(UNICLRCharacterData[nUnitId].ppszPaletteList.size());
}

uint32_t CGame_UNICLR_A::GetPaletteCountForUnit(uint32_t nUnitId)
{
    return static_cast<uint32_t>(UNICLRCharacterData[nUnitId].ppszPaletteList.size()) * ARRAYSIZE(UNICLRPaletteNodes);
}

LPCWSTR CGame_UNICLR_A::GetDescriptionForCollection(uint32_t /*nUnitId */, uint32_t nCollectionId)
{
    return UNICLRPaletteNodes[nCollectionId].pszNodeName;
}

void CGame_UNICLR_A::LoadSpecificPaletteData(uint32_t nUnitId, uint32_t nPalId)
{
    // UNICLR palettes are all 0x400 long
    const int cbPaletteSizeOnDisc = 0x400;

    uint32_t nAdjustedPalId = nPalId % static_cast<uint32_t>(UNICLRPaletteNamesNormal.size());
    uint32_t nPaletteSet = nPalId / static_cast<uint32_t>(UNICLRPaletteNamesNormal.size());

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
    int nTargetImgId = 0;
    uint32_t nImgUnitId = UNICLRCharacterData[NodeGet->uUnitId].nSpriteIndex;

    // This logic presumes that we are only showing core character palettes.  If we decide to handle
    // anything else, we'd want to validate that the palette in question is in the core lists
    int nSrcStart = (int)(NodeGet->uPalId % UNICLRCharacterData[NodeGet->uUnitId].ppszPaletteList.size());
    uint32_t nSrcAmt = static_cast<uint32_t>(pButtonLabelSet.size());
    uint32_t nNodeIncrement = static_cast<uint32_t>(UNICLRCharacterData[NodeGet->uUnitId].ppszPaletteList.size());

    //Get rid of any palettes if there are any
    BasePalGroup.FlushPalAll();

    bool fShouldUseAlternateLoadLogic = false;

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

BOOL CGame_UNICLR_A::LoadFile(CFile* LoadedFile, uint32_t nUnitNumber)
{
    BOOL fSuccess = TRUE;
    CString strInfo;

    strInfo.Format(L"CGame_UNICLR_A_DIR::LoadFile: Preparing to load data for unit number %u (character %s)\n", nUnitNumber, UNICLRCharacterData[nUnitNumber].pszCharacter);
    OutputDebugString(strInfo);

    strInfo.Format(L"\tCGame_UNICLR_A_DIR::LoadFile: Loaded palettes starting at location 0x%x\n", UNICLRCharacterData[nUnitNumber].nInitialLocation);
    OutputDebugString(strInfo);

    uint32_t nPalAmt = GetPaletteCountForUnit(nUnitNumber);

    if (m_pppDataBuffer32[nUnitNumber] == nullptr)
    {
        m_pppDataBuffer32[nUnitNumber] = new UINT32 * [nPalAmt];
        memset(m_pppDataBuffer32[nUnitNumber], 0, sizeof(UINT32*) * nPalAmt);
    }

    // These are already sorted, no need to redirect
    rgUnitRedir[nUnitNumber] = nUnitNumber;

    for (uint32_t nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
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

BOOL CGame_UNICLR_A::SaveFile(CFile* SaveFile, uint32_t nUnitId)
{
    UINT32 nTotalPalettesSaved = 0;
    uint32_t nPalAmt = GetPaletteCountForUnit(nUnitId);

    for (uint32_t nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
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

void CGame_UNICLR_A::PostSetPal(uint32_t nUnitId, uint32_t nPalId)
{
    CString strMessage;
    strMessage.Format(L"CGame_UNICLR_A::PostSetPal : Updating left/right partner for unit %u palette %u.\n", nUnitId, nPalId);
    OutputDebugString(strMessage);

    static_assert(ARRAYSIZE(UNICLRPaletteNodes) == 2, "UNICLR post-processing presumes two paired nodes: update PostSetPal for your change.");

    uint32_t nPartnerId = nPalId;
    const uint32_t nNodeCount = GetNodeCountForCollection(nUnitId, 0);

    // Flip to the left/right partner
    if (nPalId >= nNodeCount)
    {
        nPartnerId -= nNodeCount;
        GetHost()->GetPalModDlg()->SetStatusText(L"Updated: updated Left partner palette as well.");
    }
    else
    {
        nPartnerId += nNodeCount;
        GetHost()->GetPalModDlg()->SetStatusText(L"Updated: updated Right partner palette as well.");
    }

    LoadSpecificPaletteData(nUnitId, nPalId);
    MarkPaletteDirty(nUnitId, nPartnerId);

    for (UINT16 nArrayIndex = 0; nArrayIndex < m_nCurrentPaletteSizeInColors; nArrayIndex++)
    {
        m_pppDataBuffer32[nUnitId][nPartnerId][nArrayIndex] = m_pppDataBuffer32[nUnitId][nPalId][nArrayIndex];
    }

    // Hilda uses flipped positioning: adjust for that here.
    if (wcscmp(UNICLRCharacterData[nUnitId].pszCharacter, L"Hilda") == 0)
    {
        const UINT16 nEye1Position = 26;
        const UINT16 nEye2Position = 42;
        const UINT16 nEyeLength = 3;

        for (UINT16 nArrayIndex = 0; nArrayIndex < nEyeLength; nArrayIndex++)
        {
            m_pppDataBuffer32[nUnitId][nPartnerId][nEye1Position + nArrayIndex] = m_pppDataBuffer32[nUnitId][nPalId][nEye2Position + nArrayIndex];
            m_pppDataBuffer32[nUnitId][nPartnerId][nEye2Position + nArrayIndex] = m_pppDataBuffer32[nUnitId][nPalId][nEye1Position + nArrayIndex];
        }

        const UINT16 nDress1Position = 64;
        const UINT16 nDress2Position = 70;
        const UINT16 nDressLength = 5;

        for (UINT16 nArrayIndex = 0; nArrayIndex < nDressLength; nArrayIndex++)
        {
            m_pppDataBuffer32[nUnitId][nPartnerId][nDress1Position + nArrayIndex] = m_pppDataBuffer32[nUnitId][nPalId][nDress2Position + nArrayIndex];
            m_pppDataBuffer32[nUnitId][nPartnerId][nDress2Position + nArrayIndex] = m_pppDataBuffer32[nUnitId][nPalId][nDress1Position + nArrayIndex];
        }

        const UINT16 nBelt1Position = 80;
        const UINT16 nBelt2Position = 85;
        const UINT16 nBeltLength = 4;

        for (UINT16 nArrayIndex = 0; nArrayIndex < nBeltLength; nArrayIndex++)
        {
            m_pppDataBuffer32[nUnitId][nPartnerId][nBelt1Position + nArrayIndex] = m_pppDataBuffer32[nUnitId][nPalId][nBelt2Position + nArrayIndex];
            m_pppDataBuffer32[nUnitId][nPartnerId][nBelt2Position + nArrayIndex] = m_pppDataBuffer32[nUnitId][nPalId][nBelt1Position + nArrayIndex];
        }
    }
    
    {
        // Seth uses flipped positioning: adjust for that here.
        if (wcscmp(UNICLRCharacterData[nUnitId].pszCharacter, L"Seth") == 0)
        {
            const UINT16 nSetEye1Position = 11;
            const UINT16 nSetEye2Position = 27;
            const UINT16 nSetEyeLength = 3;

            for (UINT16 nArrayIndex = 0; nArrayIndex < nSetEyeLength; nArrayIndex++)
            {
                m_pppDataBuffer32[nUnitId][nPartnerId][nSetEye1Position + nArrayIndex] = m_pppDataBuffer32[nUnitId][nPalId][nSetEye2Position + nArrayIndex];
                m_pppDataBuffer32[nUnitId][nPartnerId][nSetEye2Position + nArrayIndex] = m_pppDataBuffer32[nUnitId][nPalId][nSetEye1Position + nArrayIndex];
            }

            const UINT16 nKnife1Position = 144;
            const UINT16 nKnife2Position = 160;
            const UINT16 nKnifeLength = 10;

            for (UINT16 nArrayIndex = 0; nArrayIndex < nKnifeLength; nArrayIndex++)
            {
                m_pppDataBuffer32[nUnitId][nPartnerId][nKnife1Position + nArrayIndex] = m_pppDataBuffer32[nUnitId][nPalId][nKnife2Position + nArrayIndex];
                m_pppDataBuffer32[nUnitId][nPartnerId][nKnife2Position + nArrayIndex] = m_pppDataBuffer32[nUnitId][nPalId][nKnife1Position + nArrayIndex];
            }
        }
    }
}

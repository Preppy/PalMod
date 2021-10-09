#include "StdAfx.h"
#include "Game_MBTL_A.h"
#include "..\PalMod.h"

UINT16 CGame_MBTL_A::uRuleCtr = 0;

CDescTree CGame_MBTL_A::MainDescTree = nullptr;

struct MBTLNodeData
{
    LPCWSTR pszNodeName = L"uninit";
    UINT32 nAdjustmentFromBaseNode = 0;
};

const MBTLNodeData MBTLPaletteNodes[] =
{
    { L"Left",  0 },
    { L"Right", 0x7800 },
};

const LPCWSTR MBTLPaletteNamesNormal[] =
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
};

struct MBTLFileData
{
    LPCWSTR pszFileName = nullptr;
    LPCWSTR pszCharacter = nullptr;
    UINT32 nExpectedFileSize = 0;
    const LPCWSTR* ppszPaletteList = nullptr;
    UINT32 nPaletteListSize = 0;
    UINT32 nInitialLocation = 0;
    UINT32 nSpriteIndex = 0;
};

MBTLFileData MBTLCharacterData[] =
{
    { L"data//_csel//Chr002.pal",       L"Akiha Tohno",                                    61456,    MBTLPaletteNamesNormal,    ARRAYSIZE(MBTLPaletteNamesNormal), 0x10, },
    { L"data//_csel//Chr000.pal",       L"Arcueid",                                        61456,    MBTLPaletteNamesNormal,    ARRAYSIZE(MBTLPaletteNamesNormal), 0x10, },
    { L"data//_csel//Chr011.pal",       L"Ciel",                                           61456,    MBTLPaletteNamesNormal,    ARRAYSIZE(MBTLPaletteNamesNormal), 0x10, },
    { L"data//_csel//Chr001.pal",       L"Hisui",                                          61456,    MBTLPaletteNamesNormal,    ARRAYSIZE(MBTLPaletteNamesNormal), 0x10, },
    { L"data//_csel//Chr004.pal",       L"Kohaku",                                         61456,    MBTLPaletteNamesNormal,    ARRAYSIZE(MBTLPaletteNamesNormal), 0x10, },
    { L"data//_csel//Chr006.pal",       L"Kouma Kishima",                                  61456,    MBTLPaletteNamesNormal,    ARRAYSIZE(MBTLPaletteNamesNormal), 0x10, },
    { L"data//_csel//Chr013.pal",       L"Miyako Arima",                                   61456,    MBTLPaletteNamesNormal,    ARRAYSIZE(MBTLPaletteNamesNormal), 0x10, },
    { L"data//_csel//Chr008.pal",       L"Noel",                                           61456,    MBTLPaletteNamesNormal,    ARRAYSIZE(MBTLPaletteNamesNormal), 0x10, },
    { L"data//_csel//Chr010.pal",       L"Red Arcueid",                                    61456,    MBTLPaletteNamesNormal,    ARRAYSIZE(MBTLPaletteNamesNormal), 0x10, },
    { L"data//_csel//Chr005.pal",       L"Roa",                                            61456,    MBTLPaletteNamesNormal,    ARRAYSIZE(MBTLPaletteNamesNormal), 0x10, },
    { L"data//_csel//Chr012.pal",       L"Saber",                                          61456,    MBTLPaletteNamesNormal,    ARRAYSIZE(MBTLPaletteNamesNormal), 0x10, },
    { L"data//_csel//Chr003.pal",       L"Shiki Tohno",                                    61456,    MBTLPaletteNamesNormal,    ARRAYSIZE(MBTLPaletteNamesNormal), 0x10, },
    { L"data//_csel//Chr009.pal",       L"Volv",                                           61456,    MBTLPaletteNamesNormal,    ARRAYSIZE(MBTLPaletteNamesNormal), 0x10, },
    { L"data//chr011//Chr011_p1.pal",   L"Ciel (Extra)",                                   61456,    MBTLPaletteNamesNormal,    ARRAYSIZE(MBTLPaletteNamesNormal), 0x10, },
    { L"data//chr001//Chr001_p1.pal",   L"Hisui (Extra)",                                  61456,    MBTLPaletteNamesNormal,    ARRAYSIZE(MBTLPaletteNamesNormal), 0x10, },
};

CGame_MBTL_A::CGame_MBTL_A(UINT32 nConfirmedROMSize /* = -1 */)
{
    createPalOptions = { NO_SPECIAL_OPTIONS, WRITE_MAX };
    SetAlphaMode(AlphaMode::GameUsesFixedAlpha);
    m_fGameUsesAlphaValue = true;
    SetColorMode(ColMode::COLMODE_ARGB8888);

    InitializeStatics();

    // Don't load extras
    m_pszExtraFilename = nullptr;

    nFileAmt = nUnitAmt = m_nTotalInternalUnits = ARRAYSIZE(MBTLCharacterData);

    InitDataBuffer();

    nGameFlag = MBTL_A;

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

CGame_MBTL_A::~CGame_MBTL_A()
{
    ClearDataBuffer();
    //Get rid of the file changed flag
    FlushChangeTrackingArray();
}

void CGame_MBTL_A::InitializeStatics()
{
    MainDescTree.SetRootTree(CGame_MBTL_A::InitDescTree());
}

sFileRule CGame_MBTL_A::GetRule(UINT16 nUnitId)
{
    sFileRule NewFileRule;

    const UINT16 nAdjustedUnitId = (nUnitId & RULE_COUNTER_DEMASK);
    _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, L"%s", MBTLCharacterData[nAdjustedUnitId].pszFileName);
    NewFileRule.uUnitId = nUnitId;
    NewFileRule.uVerifyVar = MBTLCharacterData[nAdjustedUnitId].nExpectedFileSize;

    return NewFileRule;
}

sFileRule CGame_MBTL_A::GetNextRule()
{
    sFileRule NewFileRule = GetRule(uRuleCtr);

    uRuleCtr++;

    if (uRuleCtr >= ARRAYSIZE(MBTLCharacterData))
    {
        uRuleCtr = INVALID_UNIT_VALUE;
    }

    return NewFileRule;
}

sDescTreeNode* CGame_MBTL_A::InitDescTree()
{
    UINT32 nTotalPaletteCount = 0;
    UINT16 nUnitCt = ARRAYSIZE(MBTLCharacterData);

    sDescTreeNode* NewDescTree = new sDescTreeNode;

    //Create the main character tree
    _snwprintf_s(NewDescTree->szDesc, ARRAYSIZE(NewDescTree->szDesc), _TRUNCATE, L"%s", g_GameFriendlyName[MBTL_A]);
    NewDescTree->ChildNodes = new sDescTreeNode[nUnitCt];
    NewDescTree->uChildAmt = nUnitCt;
    //All units have tree children
    NewDescTree->uChildType = DESC_NODETYPE_TREE;

    CString strMsg;
    strMsg.Format(L"CGame_MBTL_A_DIR::InitDescTree: Building desc tree for MBTL_A...\n");
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
        _snwprintf_s(UnitNode->szDesc, ARRAYSIZE(UnitNode->szDesc), _TRUNCATE, L"%s", MBTLCharacterData[iUnitCtr].pszCharacter);

        UnitNode->ChildNodes = new sDescTreeNode[nUnitChildCount];
        //All children have collection trees
        UnitNode->uChildType = DESC_NODETYPE_TREE;
        UnitNode->uChildAmt = nUnitChildCount;

#if MBTL_A_DEBUG
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

#if MBTL_A_DEBUG
            strMsg.Format(L"\tCollection: \"%s\", %u of %u, %u children\n", CollectionNode->szDesc, iCollectionCtr + 1, nUnitChildCount, nListedChildrenCount);
            OutputDebugString(strMsg);
#endif

            for (UINT16 nNodeIndex = 0; nNodeIndex < nListedChildrenCount; nNodeIndex++)
            {
                ChildNode = &((sDescNode*)CollectionNode->ChildNodes)[nNodeIndex];

                _snwprintf_s(ChildNode->szDesc, ARRAYSIZE(ChildNode->szDesc), _TRUNCATE, L"%s", MBTLCharacterData[iUnitCtr].ppszPaletteList[nNodeIndex]);

                ChildNode->uUnitId = iUnitCtr;
                ChildNode->uPalId = nTotalPalettesUsedInUnit++;
                nTotalPaletteCount++;

#if MBTL_A_DEBUG
                strMsg.Format(L"\t\tPalette: \"%s\", %u of %u\n", ChildNode->szDesc, nNodeIndex + 1, nListedChildrenCount);
                OutputDebugString(strMsg);
#endif
            }
        }
    }

    m_nTotalPaletteCount = nTotalPaletteCount;

    strMsg.Format(L"CGame_MBTL_A_DIR::InitDescTree: Loaded %u palettes for MBTL ROM\n", nTotalPaletteCount);
    OutputDebugString(strMsg);

    return NewDescTree;
}

UINT16 CGame_MBTL_A::GetCollectionCountForUnit(UINT16 nUnitId)
{
    // Just one palette set per character
    return ARRAYSIZE(MBTLPaletteNodes);
}

UINT16 CGame_MBTL_A::GetNodeCountForCollection(UINT16 nUnitId, UINT16 /*nCollectionId*/)
{
    return MBTLCharacterData[nUnitId].nPaletteListSize;
}

UINT16 CGame_MBTL_A::GetPaletteCountForUnit(UINT16 nUnitId)
{
    return MBTLCharacterData[nUnitId].nPaletteListSize * ARRAYSIZE(MBTLPaletteNodes);
}

LPCWSTR CGame_MBTL_A::GetDescriptionForCollection(UINT16 /*nUnitId */, UINT16 nCollectionId)
{
    return MBTLPaletteNodes[nCollectionId].pszNodeName;
}

void CGame_MBTL_A::LoadSpecificPaletteData(UINT16 nUnitId, UINT16 nPalId)
{
    // MBTL palettes are all 0x400 long
    const int cbPaletteSizeOnDisc = 0x400;

    UINT16 nAdjustedPalId = nPalId % ARRAYSIZE(MBTLPaletteNamesNormal);
    UINT16 nPaletteSet = nPalId / ARRAYSIZE(MBTLPaletteNamesNormal);

    m_pszCurrentPaletteName = MBTLCharacterData[nUnitId].ppszPaletteList[nAdjustedPalId];
    m_nCurrentPaletteROMLocation = MBTLCharacterData[nUnitId].nInitialLocation + (cbPaletteSizeOnDisc * nAdjustedPalId) + (0x0 * nAdjustedPalId);
    m_nCurrentPaletteSizeInColors = cbPaletteSizeOnDisc / m_nSizeOfColorsInBytes;

    if (nPaletteSet)
    {
        m_nCurrentPaletteROMLocation += MBTLPaletteNodes[nPaletteSet].nAdjustmentFromBaseNode;
    }
}

BOOL CGame_MBTL_A::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
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
    UINT16 nImgUnitId = MBTLCharacterData[NodeGet->uUnitId].nSpriteIndex;

    // This logic presumes that we are only showing core character palettes.  If we decide to handle
    // anything else, we'd want to validate that the palette in question is in the core lists
    UINT16 nSrcStart = (NodeGet->uPalId % MBTLCharacterData[NodeGet->uUnitId].nPaletteListSize);
    UINT16 nSrcAmt = m_nNumberOfColorOptions;
    UINT16 nNodeIncrement = MBTLCharacterData[NodeGet->uUnitId].nPaletteListSize;

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

BOOL CGame_MBTL_A::LoadFile(CFile* LoadedFile, UINT16 nUnitNumber)
{
    BOOL fSuccess = TRUE;
    CString strInfo;

    strInfo.Format(L"CGame_MBTL_A_DIR::LoadFile: Preparing to load data for unit number %u (character %s)\n", nUnitNumber, MBTLCharacterData[nUnitNumber].pszCharacter);
    OutputDebugString(strInfo);

    strInfo.Format(L"\tCGame_MBTL_A_DIR::LoadFile: Loaded palettes starting at location 0x%x\n", MBTLCharacterData[nUnitNumber].nInitialLocation);
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

#if MBTL_A_DEBUG
        strInfo.Format(L"\tCGame_MBTL_A_DIR::LoadFile: Loaded palette '%s' from location 0x%x\n", m_pszCurrentPaletteName, m_nCurrentPaletteROMLocation);
        OutputDebugString(strInfo);
#endif
    }

    rgUnitRedir[nUnitAmt] = INVALID_UNIT_VALUE;

    return fSuccess;
}

BOOL CGame_MBTL_A::SaveFile(CFile* SaveFile, UINT16 nUnitId)
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

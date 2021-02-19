#include "StdAfx.h"
#include "Game_DBFCI_A.h"
#include "..\PalMod.h"

UINT16 CGame_DBFCI_A::uRuleCtr = 0;

CDescTree CGame_DBFCI_A::MainDescTree = nullptr;

#define DBFCI_A_DEBUG DEFAULT_GAME_DEBUG_STATE

const UINT16 DBFCI_A_IMG_UNITS[] =
{
    indexDBFCSprites_DBFCI_Akira,        // 0x00
    indexDBFCSprites_DBFCI_Ako,          // 0x01
    indexDBFCSprites_DBFCI_Asuna,        // 0x02
    indexDBFCSprites_DBFCI_Emi,          // 0x03
    indexDBFCSprites_DBFCI_Kirino,       // 0x04
    indexDBFCSprites_DBFCI_Kirito,       // 0x05
    indexDBFCSprites_DBFCI_Kuroko,       // 0x06
    indexDBFCSprites_DBFCI_Kuroyukihime, // 0x07
    indexDBFCSprites_DBFCI_Mikoto,       // 0x08
    indexDBFCSprites_DBFCI_Miyuki,       // 0x09
    indexDBFCSprites_DBFCI_Quenser,      // 0x0A
    indexDBFCSprites_DBFCI_Rentaro,      // 0x0B
    indexDBFCSprites_DBFCI_Selvaria,     // 0x0C
    indexDBFCSprites_DBFCI_Shana,        // 0x0D
    indexDBFCSprites_DBFCI_Shizuo,       // 0x0E
    indexDBFCSprites_DBFCI_Taiga,        // 0x0F
    indexDBFCSprites_DBFCI_Tatsuya,      // 0x10
    indexDBFCSprites_DBFCI_Tomoka,       // 0x11
    indexDBFCSprites_DBFCI_Yukina,       // 0x12
    indexDBFCSprites_DBFCI_Yuuki,        // 0x13
    // indexDBFCSprites_DBFCI_Support,      // 0x14
    // indexDBFCSprites_DBFCI_Bonus,        // 0x15

    indexDBFCSprites_DBFCI_AcceleratorLastOrder, // 0x14
    indexDBFCSprites_DBFCI_Alicia,        // 0x15
    indexDBFCSprites_DBFCI_Arita,         // 0x16
    indexDBFCSprites_DBFCI_Boogiepop,     // 0x17
    indexDBFCSprites_DBFCI_Celty,         // 0x18
    indexDBFCSprites_DBFCI_DokuroChan,    // 0x19
    indexDBFCSprites_DBFCI_Enju,          // 0x1A
    indexDBFCSprites_DBFCI_Erio,          // 0x1B
    indexDBFCSprites_DBFCI_Frolaytia,     // 0x1C
    indexDBFCSprites_DBFCI_Holo,          // 0x1D
    indexDBFCSprites_DBFCI_InnocentCharm, // 0x1E
    indexDBFCSprites_DBFCI_Izaya,         // 0x1F
    indexDBFCSprites_DBFCI_Kana,          // 0x20
    indexDBFCSprites_DBFCI_Kazari,        // 0x21
    indexDBFCSprites_DBFCI_Kino,          // 0x22
    indexDBFCSprites_DBFCI_Kojou,         // 0x23
    indexDBFCSprites_DBFCI_Kokou,         // 0x24
    indexDBFCSprites_DBFCI_Kuroneko,      // 0x25
    indexDBFCSprites_DBFCI_Leafa,         // 0x26
    indexDBFCSprites_DBFCI_Llenn,         // 0x27
    indexDBFCSprites_DBFCI_Mashiro,       // 0x28
    indexDBFCSprites_DBFCI_MiyukiAssist,  // 0x29
    indexDBFCSprites_DBFCI_PaiChan,       // 0x2A
    indexDBFCSprites_DBFCI_Rusian,        // 0x2B
    indexDBFCSprites_DBFCI_Ryuji,         // 0x2C
    indexDBFCSprites_DBFCI_Sadao,         // 0x2D
    indexDBFCSprites_DBFCI_TatsuyaAssist, // 0x2E
    indexDBFCSprites_DBFCI_Tomo,          // 0x2F
    indexDBFCSprites_DBFCI_Touma,         // 0x30
    indexDBFCSprites_DBFCI_Wilhelmina,    // 0x31
    indexDBFCSprites_DBFCI_Zero,          // 0x32
};

struct DBFCINodeData
{
    LPCWSTR pszNodeName = L"uninit";
    UINT32 nAdjustmentFromBaseNode = 0;
};

const DBFCINodeData DBFCIPaletteNodes[] =
{
    { L"Left",  0 },
    { L"Right", 0x8000 },
};

const LPCWSTR DBFCIPaletteNamesNormal[] =
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
};

struct DBFCIFileData
{
    LPCWSTR pszFileName = nullptr;
    LPCWSTR pszCharacter = nullptr;
    UINT32 nExpectedFileSize = 0;
    const LPCWSTR* ppszPaletteList = nullptr;
    UINT32 nPaletteListSize = 0;
    UINT32 nInitialLocation = 0;
    UINT32 nSpriteIndex = 0;
};

DBFCIFileData DBFCICharacterData[] =
{
    { L"Yak.pal",    L"Akira",          65540,    DBFCIPaletteNamesNormal,    ARRAYSIZE(DBFCIPaletteNamesNormal), 0x4,  indexDBFCSprites_DBFCI_Akira },
    { L"Ako.pal",    L"Ako",            65540,    DBFCIPaletteNamesNormal,    ARRAYSIZE(DBFCIPaletteNamesNormal), 0x4,  indexDBFCSprites_DBFCI_Ako },
    { L"Asu.pal",    L"Asuna",          65540,    DBFCIPaletteNamesNormal,    ARRAYSIZE(DBFCIPaletteNamesNormal), 0x4,  indexDBFCSprites_DBFCI_Asuna },
    { L"Emi.pal",    L"Emi",            65540,    DBFCIPaletteNamesNormal,    ARRAYSIZE(DBFCIPaletteNamesNormal), 0x4,  indexDBFCSprites_DBFCI_Emi },
    { L"Krn.pal",    L"Kirino",         65540,    DBFCIPaletteNamesNormal,    ARRAYSIZE(DBFCIPaletteNamesNormal), 0x4,  indexDBFCSprites_DBFCI_Kirino },
    { L"Krt.pal",    L"Kirito",         65540,    DBFCIPaletteNamesNormal,    ARRAYSIZE(DBFCIPaletteNamesNormal), 0x4,  indexDBFCSprites_DBFCI_Kirito },
    { L"Krk.pal",    L"Kuroko",         65540,    DBFCIPaletteNamesNormal,    ARRAYSIZE(DBFCIPaletteNamesNormal), 0x4,  indexDBFCSprites_DBFCI_Kuroko },
    { L"Kur.pal",    L"Kuroyukihime",   65540,    DBFCIPaletteNamesNormal,    ARRAYSIZE(DBFCIPaletteNamesNormal), 0x4,  indexDBFCSprites_DBFCI_Kuroyukihime },
    { L"Mis.pal",    L"Mikoto",         65540,    DBFCIPaletteNamesNormal,    ARRAYSIZE(DBFCIPaletteNamesNormal), 0x4,  indexDBFCSprites_DBFCI_Mikoto },
    { L"Sbm.pal",    L"Miyuki",         66564,    DBFCIPaletteNamesNormal,    ARRAYSIZE(DBFCIPaletteNamesNormal), 0x4,  indexDBFCSprites_DBFCI_Miyuki },
    { L"Qen.pal",    L"Quenser",        65540,    DBFCIPaletteNamesNormal,    ARRAYSIZE(DBFCIPaletteNamesNormal), 0x4,  indexDBFCSprites_DBFCI_Quenser },
    { L"Stm.pal",    L"Rentaro",        65540,    DBFCIPaletteNamesNormal,    ARRAYSIZE(DBFCIPaletteNamesNormal), 0x4,  indexDBFCSprites_DBFCI_Rentaro },
    { L"Slv.pal",    L"Selvaria",       65540,    DBFCIPaletteNamesNormal,    ARRAYSIZE(DBFCIPaletteNamesNormal), 0x4,  indexDBFCSprites_DBFCI_Selvaria },
    { L"Sha.pal",    L"Shana",          65540,    DBFCIPaletteNamesNormal,    ARRAYSIZE(DBFCIPaletteNamesNormal), 0x4,  indexDBFCSprites_DBFCI_Shana },
    { L"Hiw.pal",    L"Shizuo",         65540,    DBFCIPaletteNamesNormal,    ARRAYSIZE(DBFCIPaletteNamesNormal), 0x4,  indexDBFCSprites_DBFCI_Shizuo },
    { L"Tgr.pal",    L"Taiga",          65540,    DBFCIPaletteNamesNormal,    ARRAYSIZE(DBFCIPaletteNamesNormal), 0x4,  indexDBFCSprites_DBFCI_Taiga },
    { L"Oni.pal",    L"Tatsuya",        65540,    DBFCIPaletteNamesNormal,    ARRAYSIZE(DBFCIPaletteNamesNormal), 0x4,  indexDBFCSprites_DBFCI_Tatsuya },
    { L"Tmk.pal",    L"Tomoka",         65540,    DBFCIPaletteNamesNormal,    ARRAYSIZE(DBFCIPaletteNamesNormal), 0x4,  indexDBFCSprites_DBFCI_Tomoka },
    { L"Ykn.pal",    L"Yukina",         65540,    DBFCIPaletteNamesNormal,    ARRAYSIZE(DBFCIPaletteNamesNormal), 0x4,  indexDBFCSprites_DBFCI_Yukina },
    { L"Yuk.pal",    L"Yuuki",          65540,    DBFCIPaletteNamesNormal,    ARRAYSIZE(DBFCIPaletteNamesNormal), 0x4,  indexDBFCSprites_DBFCI_Yuuki },
};

CGame_DBFCI_A::CGame_DBFCI_A(UINT32 nConfirmedROMSize /* = -1 */)
{
    createPalOptions = { NO_SPECIAL_OPTIONS, WRITE_MAX };
    SetAlphaMode(AlphaMode::GameUsesFixedAlpha);
    m_fGameUsesAlphaValue = true;
    SetColorMode(ColMode::COLMODE_ARGB7888);

    //Set palette conversion mode
    BasePalGroup.SetMode(ePalType::PALTYPE_256STEPS);

    InitializeStatics();

    // Don't load extras
    m_pszExtraFilename = nullptr;

    nFileAmt = nUnitAmt = m_nTotalInternalUnits = ARRAYSIZE(DBFCICharacterData);

    InitDataBuffer();

    nGameFlag = DBFCI_A;
    nImgGameFlag = IMGDAT_SECTION_DBFC;
    m_prgGameImageSet = DBFCI_A_IMG_UNITS;
    nImgUnitAmt = ARRAYSIZE(DBFCI_A_IMG_UNITS);

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

CGame_DBFCI_A::~CGame_DBFCI_A()
{
    ClearDataBuffer();
    //Get rid of the file changed flag
    FlushChangeTrackingArray();
}

void CGame_DBFCI_A::InitializeStatics()
{
    MainDescTree.SetRootTree(CGame_DBFCI_A::InitDescTree());
}

sFileRule CGame_DBFCI_A::GetRule(UINT16 nUnitId)
{
    sFileRule NewFileRule;

    const UINT16 nAdjustedUnitId = (nUnitId & 0x00FF);
    _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, L"%s", DBFCICharacterData[nAdjustedUnitId].pszFileName);
    NewFileRule.uUnitId = nUnitId;
    NewFileRule.uVerifyVar = DBFCICharacterData[nAdjustedUnitId].nExpectedFileSize;

    return NewFileRule;
}

sFileRule CGame_DBFCI_A::GetNextRule()
{
    sFileRule NewFileRule = GetRule(uRuleCtr);

    uRuleCtr++;

    if (uRuleCtr >= ARRAYSIZE(DBFCICharacterData))
    {
        uRuleCtr = INVALID_UNIT_VALUE;
    }

    return NewFileRule;
}

sDescTreeNode* CGame_DBFCI_A::InitDescTree()
{
    UINT32 nTotalPaletteCount = 0;
    UINT16 nUnitCt = ARRAYSIZE(DBFCICharacterData);

    sDescTreeNode* NewDescTree = new sDescTreeNode;

    //Create the main character tree
    _snwprintf_s(NewDescTree->szDesc, ARRAYSIZE(NewDescTree->szDesc), _TRUNCATE, L"%s", g_GameFriendlyName[DBFCI_A]);
    NewDescTree->ChildNodes = new sDescTreeNode[nUnitCt];
    NewDescTree->uChildAmt = nUnitCt;
    //All units have tree children
    NewDescTree->uChildType = DESC_NODETYPE_TREE;

    CString strMsg;
    strMsg.Format(L"CGame_DBFCI_A_DIR::InitDescTree: Building desc tree for DBFCI_A...\n");
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
        _snwprintf_s(UnitNode->szDesc, ARRAYSIZE(UnitNode->szDesc), _TRUNCATE, L"%s", DBFCICharacterData[iUnitCtr].pszCharacter);

        UnitNode->ChildNodes = new sDescTreeNode[nUnitChildCount];
        //All children have collection trees
        UnitNode->uChildType = DESC_NODETYPE_TREE;
        UnitNode->uChildAmt = nUnitChildCount;

#if DBFCI_A_DEBUG
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

#if DBFCI_A_DEBUG
            strMsg.Format(L"\tCollection: \"%s\", %u of %u, %u children\n", CollectionNode->szDesc, iCollectionCtr + 1, nUnitChildCount, nListedChildrenCount);
            OutputDebugString(strMsg);
#endif

            for (UINT16 nNodeIndex = 0; nNodeIndex < nListedChildrenCount; nNodeIndex++)
            {
                ChildNode = &((sDescNode*)CollectionNode->ChildNodes)[nNodeIndex];

                _snwprintf_s(ChildNode->szDesc, ARRAYSIZE(ChildNode->szDesc), _TRUNCATE, L"%s", DBFCICharacterData[iUnitCtr].ppszPaletteList[nNodeIndex]);

                ChildNode->uUnitId = iUnitCtr;
                ChildNode->uPalId = nTotalPalettesUsedInUnit++;
                nTotalPaletteCount++;

#if DBFCI_A_DEBUG
                strMsg.Format(L"\t\tPalette: \"%s\", %u of %u\n", ChildNode->szDesc, nNodeIndex + 1, nListedChildrenCount);
                OutputDebugString(strMsg);
#endif
            }
        }
    }

    m_nTotalPaletteCount = nTotalPaletteCount;

    strMsg.Format(L"CGame_DBFCI_A_DIR::InitDescTree: Loaded %u palettes for DBFCI ROM\n", nTotalPaletteCount);
    OutputDebugString(strMsg);

    return NewDescTree;
}

UINT16 CGame_DBFCI_A::GetCollectionCountForUnit(UINT16 nUnitId)
{
    // Just one palette set per character
    return ARRAYSIZE(DBFCIPaletteNodes);
}

UINT16 CGame_DBFCI_A::GetNodeCountForCollection(UINT16 nUnitId, UINT16 /*nCollectionId*/)
{
    return DBFCICharacterData[nUnitId].nPaletteListSize;
}

UINT16 CGame_DBFCI_A::GetPaletteCountForUnit(UINT16 nUnitId)
{
    return DBFCICharacterData[nUnitId].nPaletteListSize * ARRAYSIZE(DBFCIPaletteNodes);
}

LPCWSTR CGame_DBFCI_A::GetDescriptionForCollection(UINT16 /*nUnitId */, UINT16 nCollectionId)
{
    return DBFCIPaletteNodes[nCollectionId].pszNodeName;
}

void CGame_DBFCI_A::LoadSpecificPaletteData(UINT16 nUnitId, UINT16 nPalId)
{
    // DBFCI palettes are all 0x400 long
    const int cbPaletteSizeOnDisc = 0x400;

    UINT16 nAdjustedPalId = nPalId % ARRAYSIZE(DBFCIPaletteNamesNormal);
    UINT16 nPaletteSet = nPalId / ARRAYSIZE(DBFCIPaletteNamesNormal);

    m_pszCurrentPaletteName = DBFCICharacterData[nUnitId].ppszPaletteList[nAdjustedPalId];
    m_nCurrentPaletteROMLocation = DBFCICharacterData[nUnitId].nInitialLocation + (cbPaletteSizeOnDisc * nAdjustedPalId) + (0x0 * nAdjustedPalId);
    m_nCurrentPaletteSizeInColors = cbPaletteSizeOnDisc / m_nSizeOfColorsInBytes;

    if (nPaletteSet)
    {
        m_nCurrentPaletteROMLocation += DBFCIPaletteNodes[nPaletteSet].nAdjustmentFromBaseNode;
    }
}

BOOL CGame_DBFCI_A::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
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
    UINT16 nImgUnitId = DBFCICharacterData[NodeGet->uUnitId].nSpriteIndex;

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

BOOL CGame_DBFCI_A::LoadFile(CFile* LoadedFile, UINT16 nUnitNumber)
{
    BOOL fSuccess = TRUE;
    CString strInfo;

    strInfo.Format(L"CGame_DBFCI_A_DIR::LoadFile: Preparing to load data for unit number %u (character %s)\n", nUnitNumber, DBFCICharacterData[nUnitNumber].pszCharacter);
    OutputDebugString(strInfo);

    strInfo.Format(L"\tCGame_DBFCI_A_DIR::LoadFile: Loaded palettes starting at location 0x%x\n", DBFCICharacterData[nUnitNumber].nInitialLocation);
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

#if DBFCI_A_DEBUG
        strInfo.Format(L"\tCGame_DBFCI_A_DIR::LoadFile: Loaded palette '%s' from location 0x%x\n", m_pszCurrentPaletteName, m_nCurrentPaletteROMLocation);
        OutputDebugString(strInfo);
#endif
    }

    rgUnitRedir[nUnitAmt] = INVALID_UNIT_VALUE;

    return fSuccess;
}

BOOL CGame_DBFCI_A::SaveFile(CFile* SaveFile, UINT16 nUnitId)
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

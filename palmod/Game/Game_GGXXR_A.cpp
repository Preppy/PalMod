#include "StdAfx.h"
#include "Game_GGXXR_A.h"
#include "..\PalMod.h"

UINT16 CGame_GGXXR_A::uRuleCtr = 0;

CDescTree CGame_GGXXR_A::MainDescTree = nullptr;

#define GGXXR_A_DEBUG DEFAULT_GAME_DEBUG_STATE

const UINT16 GGXX_ACR_A_IMG_UNITS[] =
{
    indexGGXXSprites_ACR_ABA,               // 0x00
    indexGGXXSprites_ACR_Anji,              // 0x01
    indexGGXXSprites_ACR_Axl,               // 0x02
    indexGGXXSprites_ACR_Baiken,            // 0x03
    indexGGXXSprites_ACR_Bridget,           // 0x04
    indexGGXXSprites_ACR_Chipp,             // 0x05
    indexGGXXSprites_ACR_Dizzy,             // 0x06
    indexGGXXSprites_ACR_Eddie,             // 0x07
    indexGGXXSprites_ACR_Faust,             // 0x08
    indexGGXXSprites_ACR_Ino,               // 0x09
    indexGGXXSprites_ACR_Jam,               // 0x0a
    indexGGXXSprites_ACR_Johnny,            // 0x0b
    indexGGXXSprites_ACR_Justice,           // 0x0c
    indexGGXXSprites_ACR_Kliff,             // 0x0d
    indexGGXXSprites_ACR_Ky,                // 0x0e
    indexGGXXSprites_ACR_May,               // 0x0f
    indexGGXXSprites_ACR_Millia,            // 0x10
    indexGGXXSprites_ACR_OrderSol,          // 0x11
    indexGGXXSprites_ACR_Potemkin,          // 0x12
    indexGGXXSprites_ACR_RoboKy,            // 0x13
    indexGGXXSprites_ACR_Slayer,            // 0x14
    indexGGXXSprites_ACR_Sol,               // 0x15
    indexGGXXSprites_ACR_Testament,         // 0x16
    indexGGXXSprites_ACR_Venom,             // 0x17
    indexGGXXSprites_ACR_Zappa,             // 0x18
    indexGGXXSprites_ACR_Bonus,             // 0x19
};

const LPCWSTR GGXXRPaletteNamesNormal[] =
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

const LPCWSTR GGXXRPaletteNamesEx[] =
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
};

struct GGXXRFileData
{
    LPCWSTR pszFileName = nullptr;
    LPCWSTR pszCharacter = nullptr;
    UINT32 nExpectedFileSize = 0;
    const LPCWSTR* ppszPaletteList = nullptr;
    UINT32 nPaletteListSize = 0;
    UINT32 nInitialLocation = 0;
    UINT32 nSpriteIndex = -1;
};

GGXXRFileData GGXXRCharacterData[] =
{
    { L"ab.bin",    L"A.B.A.",          5715300,    GGXXRPaletteNamesNormal,    ARRAYSIZE(GGXXRPaletteNamesNormal), 0x48ab50, indexGGXXSprites_ACR_ABA },
    { L"an.bin",    L"Anji",            4518932,    GGXXRPaletteNamesNormal,    ARRAYSIZE(GGXXRPaletteNamesNormal), 0x3ea460, indexGGXXSprites_ACR_Anji },
    { L"ax.bin",    L"Axl Low" ,        4225716,    GGXXRPaletteNamesNormal,    ARRAYSIZE(GGXXRPaletteNamesNormal), 0x35ebe0, indexGGXXSprites_ACR_Axl },
    { L"bk.bin",    L"Baiken",          3573668,    GGXXRPaletteNamesNormal,    ARRAYSIZE(GGXXRPaletteNamesNormal), 0x308c20, indexGGXXSprites_ACR_Baiken },
    { L"ch.bin",    L"Chipp Zanuff",    3113988,    GGXXRPaletteNamesNormal,    ARRAYSIZE(GGXXRPaletteNamesNormal), 0x293560, indexGGXXSprites_ACR_Chipp },
    { L"dz.bin",    L"Dizzy",           5352324,    GGXXRPaletteNamesNormal,    ARRAYSIZE(GGXXRPaletteNamesNormal), 0x45d720, indexGGXXSprites_ACR_Dizzy },
    { L"fa.bin",    L"Faust",           4773284,    GGXXRPaletteNamesNormal,    ARRAYSIZE(GGXXRPaletteNamesNormal), 0x3fe9a0, indexGGXXSprites_ACR_Faust },
    { L"fr.bin",    L"Order Sol",       5772356,    GGXXRPaletteNamesNormal,    ARRAYSIZE(GGXXRPaletteNamesNormal), 0x4377e0, indexGGXXSprites_ACR_OrderSol },
    { L"in.bin",    L"I-No",            5609060,    GGXXRPaletteNamesNormal,    ARRAYSIZE(GGXXRPaletteNamesNormal), 0x3e5370, indexGGXXSprites_ACR_Ino },
    { L"jm.bin",    L"Jam",             3827044,    GGXXRPaletteNamesNormal,    ARRAYSIZE(GGXXRPaletteNamesNormal), 0x2c4e80, indexGGXXSprites_ACR_Jam },
    { L"js.bin",    L"Justice",         4556788,    GGXXRPaletteNamesNormal,    ARRAYSIZE(GGXXRPaletteNamesNormal), 0x3789b0, indexGGXXSprites_ACR_Justice },
    { L"jy.bin",    L"Johnny",          4205892,    GGXXRPaletteNamesNormal,    ARRAYSIZE(GGXXRPaletteNamesNormal), 0x3b0620, indexGGXXSprites_ACR_Johnny },
    { L"kr.bin",    L"Kliff Undersn",   3114036,    GGXXRPaletteNamesNormal,    ARRAYSIZE(GGXXRPaletteNamesNormal), 0x28abf0, indexGGXXSprites_ACR_Kliff },
    { L"ky.bin",    L"Ky",              4571540,    GGXXRPaletteNamesNormal,    ARRAYSIZE(GGXXRPaletteNamesNormal), 0x38bbc0, indexGGXXSprites_ACR_Ky },
    { L"ml.bin",    L"Millia",          3034084,    GGXXRPaletteNamesNormal,    ARRAYSIZE(GGXXRPaletteNamesNormal), 0x2a4950, indexGGXXSprites_ACR_Millia },
    { L"my.bin",    L"May",             4311684,    GGXXRPaletteNamesNormal,    ARRAYSIZE(GGXXRPaletteNamesNormal), 0x363d50, indexGGXXSprites_ACR_May },
    { L"po.bin",    L"Potemkin",        5277348,    GGXXRPaletteNamesNormal,    ARRAYSIZE(GGXXRPaletteNamesNormal), 0x489c70, indexGGXXSprites_ACR_Potemkin },
    { L"rk.bin",    L"Robo-Ky",         4489668,    GGXXRPaletteNamesNormal,    ARRAYSIZE(GGXXRPaletteNamesNormal), 0x3a7450, indexGGXXSprites_ACR_RoboKy },
    { L"sl.bin",    L"Sol Badguy",      4613188,    GGXXRPaletteNamesNormal,    ARRAYSIZE(GGXXRPaletteNamesNormal), 0x339b60, indexGGXXSprites_ACR_Sol },
    { L"sy.bin",    L"Slayer",          6215652,    GGXXRPaletteNamesNormal,    ARRAYSIZE(GGXXRPaletteNamesNormal), 0x39c960, indexGGXXSprites_ACR_Slayer },
    { L"ts.bin",    L"Testament",       4817508,    GGXXRPaletteNamesNormal,    ARRAYSIZE(GGXXRPaletteNamesNormal), 0x3ee950, indexGGXXSprites_ACR_Testament },
    { L"ve.bin",    L"Venom",           2787412,    GGXXRPaletteNamesNormal,    ARRAYSIZE(GGXXRPaletteNamesNormal), 0x261c10, indexGGXXSprites_ACR_Venom },
    { L"yy.bin",    L"Bridget",         4127716,    GGXXRPaletteNamesNormal,    ARRAYSIZE(GGXXRPaletteNamesNormal), 0x34b210, indexGGXXSprites_ACR_Bridget },
    { L"zp.bin",    L"Zappa",           6019988,    GGXXRPaletteNamesNormal,    ARRAYSIZE(GGXXRPaletteNamesNormal), 0x2a54f0, indexGGXXSprites_ACR_Zappa },
    { L"zt.bin",    L"Eddie",           3289156,    GGXXRPaletteNamesNormal,    ARRAYSIZE(GGXXRPaletteNamesNormal), 0x24e560, indexGGXXSprites_ACR_Eddie },
    { L"eab.bin",   L"EX A.B.A.",       5912564,    GGXXRPaletteNamesEx,        ARRAYSIZE(GGXXRPaletteNamesEx),     0x4b3ca0, indexGGXXSprites_ACR_ABA },
    { L"ean.bin",   L"EX Anji",         4520900,    GGXXRPaletteNamesEx,        ARRAYSIZE(GGXXRPaletteNamesEx),     0x3eb460, indexGGXXSprites_ACR_Anji },
    { L"eax.bin",   L"EX Axl Low",      4217220,    GGXXRPaletteNamesEx,        ARRAYSIZE(GGXXRPaletteNamesEx),     0x35edf0, indexGGXXSprites_ACR_Axl },
    { L"ebk.bin",   L"EX Baiken",       3601604,    GGXXRPaletteNamesEx,        ARRAYSIZE(GGXXRPaletteNamesEx),     0x309920, indexGGXXSprites_ACR_Baiken },
    { L"ech.bin",   L"EX Chipp Zanuff", 3162804,    GGXXRPaletteNamesEx,        ARRAYSIZE(GGXXRPaletteNamesEx),     0x29f630, indexGGXXSprites_ACR_Chipp },
    { L"edz.bin",   L"EX Dizzy",        5594900,    GGXXRPaletteNamesEx,        ARRAYSIZE(GGXXRPaletteNamesEx),     0x49a2c0, indexGGXXSprites_ACR_Dizzy },
    { L"efa.bin",   L"EX Faust",        4784260,    GGXXRPaletteNamesEx,        ARRAYSIZE(GGXXRPaletteNamesEx),     0x3fe9f0, indexGGXXSprites_ACR_Faust },
    { L"efr.bin",   L"EX Order-Sol",    5965396,    GGXXRPaletteNamesEx,        ARRAYSIZE(GGXXRPaletteNamesEx),     0x45d9d0, indexGGXXSprites_ACR_OrderSol },
    { L"ein.bin",   L"EX I-No",         5762996,    GGXXRPaletteNamesEx,        ARRAYSIZE(GGXXRPaletteNamesEx),     0x3f9060, indexGGXXSprites_ACR_Ino },
    { L"ejm.bin",   L"EX Jam",          3812100,    GGXXRPaletteNamesEx,        ARRAYSIZE(GGXXRPaletteNamesEx),     0x2c46d0, indexGGXXSprites_ACR_Jam },
    { L"ejy.bin",   L"EX Johnny",       4210036,    GGXXRPaletteNamesEx,        ARRAYSIZE(GGXXRPaletteNamesEx),     0x3b2250, indexGGXXSprites_ACR_Johnny },
    { L"eky.bin",   L"EX Ky",           4859572,    GGXXRPaletteNamesEx,        ARRAYSIZE(GGXXRPaletteNamesEx),     0x3cafd0, indexGGXXSprites_ACR_Ky },
    { L"eml.bin",   L"EX Millia",       3003428,    GGXXRPaletteNamesEx,        ARRAYSIZE(GGXXRPaletteNamesEx),     0x29d9c0, indexGGXXSprites_ACR_Millia },
    { L"emy.bin",   L"EX May",          4675812,    GGXXRPaletteNamesEx,        ARRAYSIZE(GGXXRPaletteNamesEx),     0x399780, indexGGXXSprites_ACR_May },
    { L"epo.bin",   L"EX Potemkin",     5313412,    GGXXRPaletteNamesEx,        ARRAYSIZE(GGXXRPaletteNamesEx),     0x494170, indexGGXXSprites_ACR_Potemkin },
    { L"erk.bin",   L"EX Robo-Ky",      4599332,    GGXXRPaletteNamesEx,        ARRAYSIZE(GGXXRPaletteNamesEx),     0x3cfc80, indexGGXXSprites_ACR_RoboKy },
    { L"esl.bin",   L"EX Sol Badguy",   4679684,    GGXXRPaletteNamesEx,        ARRAYSIZE(GGXXRPaletteNamesEx),     0x33b380, indexGGXXSprites_ACR_Sol },
    { L"esy.bin",   L"EX Slayer",       6221972,    GGXXRPaletteNamesEx,        ARRAYSIZE(GGXXRPaletteNamesEx),     0x39ea30, indexGGXXSprites_ACR_Slayer },
    { L"ets.bin",   L"EX Testament",    4775796,    GGXXRPaletteNamesEx,        ARRAYSIZE(GGXXRPaletteNamesEx),     0x3f4780, indexGGXXSprites_ACR_Testament },
    { L"eve.bin",   L"EX Venom",        2848292,    GGXXRPaletteNamesEx,        ARRAYSIZE(GGXXRPaletteNamesEx),     0x271200, indexGGXXSprites_ACR_Venom },
    { L"eyy.bin",   L"EX Bridget",      4206820,    GGXXRPaletteNamesEx,        ARRAYSIZE(GGXXRPaletteNamesEx),     0x35d790, indexGGXXSprites_ACR_Bridget },
    { L"ezp.bin",   L"EX Zappa",        6044292,    GGXXRPaletteNamesEx,        ARRAYSIZE(GGXXRPaletteNamesEx),     0x2a2e90, indexGGXXSprites_ACR_Zappa },
    { L"ezt.bin",   L"EX Eddie",        3185140,    GGXXRPaletteNamesEx,        ARRAYSIZE(GGXXRPaletteNamesEx),     0x275d30, indexGGXXSprites_ACR_Eddie },
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
    nImgGameFlag = IMGDAT_SECTION_GUILTYGEAR;
    // no images yet
    m_prgGameImageSet = GGXX_ACR_A_IMG_UNITS;
    nImgUnitAmt = ARRAYSIZE(GGXX_ACR_A_IMG_UNITS);

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

            for (UINT16 nNodeIndex = 0; nNodeIndex < nListedChildrenCount; nNodeIndex++)
            {
                ChildNode = &((sDescNode*)CollectionNode->ChildNodes)[nNodeIndex];

                _snwprintf_s(ChildNode->szDesc, ARRAYSIZE(ChildNode->szDesc), _TRUNCATE, L"%s", GGXXRCharacterData[iUnitCtr].ppszPaletteList[nNodeIndex]);

                ChildNode->uUnitId = iUnitCtr;
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

UINT16 CGame_GGXXR_A::GetNodeCountForCollection(UINT16 nUnitId, UINT16 /*nCollectionId*/)
{
    return GGXXRCharacterData[nUnitId].nPaletteListSize;
}

UINT16 CGame_GGXXR_A::GetPaletteCountForUnit(UINT16 nUnitId)
{
    return GGXXRCharacterData[nUnitId].nPaletteListSize;
}

LPCWSTR CGame_GGXXR_A::GetDescriptionForCollection(UINT16 /*nUnitId */, UINT16 /*nCollectionId */)
{
    return L"Palettes";
}

void CGame_GGXXR_A::LoadSpecificPaletteData(UINT16 nUnitId, UINT16 nPalId)
{
    // GGXXR palettes are all 0x100 long
    const int cbPaletteSizeOnDisc = 0x400;

    m_pszCurrentPaletteName = GGXXRCharacterData[nUnitId].ppszPaletteList[nPalId];
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
    UINT16 nImgUnitId = GGXXRCharacterData[NodeGet->uUnitId].nSpriteIndex;

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

#ifdef USE_DYNAMIC_LOCATION_LOOKUP
    LONGLONG nPalettePointer = 0;

    LoadedFile->Seek(0, CFile::begin);
    LoadedFile->Read(&nPalettePointer, 0x02);
        
    UINT32 nPaletteStart = 0;

    LoadedFile->Seek(nPalettePointer + 0x0c, CFile::begin);
    LoadedFile->Read(&nPaletteStart, 0x04);

    GGXXRCharacterData[nUnitNumber].nInitialLocation = nPaletteStart + 0x90;
#endif

    strInfo.Format(L"\tCGame_GGXXR_A_DIR::LoadFile: Loaded palettes starting at location 0x%x\n", GGXXRCharacterData[nUnitNumber].nInitialLocation);
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

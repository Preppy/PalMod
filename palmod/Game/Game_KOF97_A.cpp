#include "StdAfx.h"
#include "GameDef.h"
#include "Game_KOF97_A.h"
#include "..\PalMod.h"
#include "..\RegProc.h"

#define KOF97_A_DEBUG DEFAULT_GAME_DEBUG_STATE

stExtraDef* CGame_KOF97_A::KOF97_A_EXTRA_CUSTOM = nullptr;

CDescTree CGame_KOF97_A::MainDescTree = nullptr;

int CGame_KOF97_A::rgExtraCountAll[KOF97_A_NUMUNIT + 1];
int CGame_KOF97_A::rgExtraLoc[KOF97_A_NUMUNIT + 1];

UINT32 CGame_KOF97_A::m_nTotalPaletteCountForKOF97 = 0;
UINT32 CGame_KOF97_A::m_nExpectedGameROMSize = 0x400000;  // 4194304 bytes
UINT32 CGame_KOF97_A::m_nConfirmedROMSize = -1;

void CGame_KOF97_A::InitializeStatics()
{
    safe_delete_array(CGame_KOF97_A::KOF97_A_EXTRA_CUSTOM);

    memset(rgExtraCountAll, -1, sizeof(rgExtraCountAll));
    memset(rgExtraLoc, -1, sizeof(rgExtraLoc));

    MainDescTree.SetRootTree(CGame_KOF97_A::InitDescTree());
}

CGame_KOF97_A::CGame_KOF97_A(UINT32 nConfirmedROMSize)
{
    CString strMessage;
    strMessage.Format(L"CGame_KOF97_A::CGame_KOF97_A: Loading ROM...\n");
    OutputDebugString(strMessage);

    createPalOptions = { NO_SPECIAL_OPTIONS, WRITE_16 };
    SetAlphaMode(AlphaMode::GameDoesNotUseAlpha);
    SetColorMode(ColMode::COLMODE_NEOGEO);

    // We need this set before we initialize so that corrupt Extras truncate correctly.
    // Otherwise the new user inadvertently corrupts their ROM.
    m_nConfirmedROMSize = nConfirmedROMSize;
    InitializeStatics();

    m_nTotalInternalUnits = KOF97_A_NUMUNIT;
    m_nExtraUnit = KOF97_A_EXTRALOC;

    m_nSafeCountForThisRom = GetExtraCt(m_nExtraUnit) + 2551;
    m_pszExtraFilename = EXTRA_FILENAME_KOF97_A;
    m_nTotalPaletteCount = m_nTotalPaletteCountForKOF97;
    // This magic number is used to warn users if their Extra file is trying to write somewhere potentially unusual
    m_nLowestKnownPaletteRomLocation = 0x2d1ff0;

    nUnitAmt = m_nTotalInternalUnits + (GetExtraCt(m_nExtraUnit) ? 1 : 0);

    InitDataBuffer();

    //Set game information
    nGameFlag = KOF97_A;
    nImgGameFlag = IMGDAT_SECTION_KOF;
    m_prgGameImageSet = KOF97_A_IMG_UNITS;
    nImgUnitAmt = ARRAYSIZE(KOF97_A_IMG_UNITS);

    nFileAmt = 1;

    //Set the image out display type
    DisplayType = eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT;
    // Button labels are used for the Export Image dialog
    pButtonLabelSet = DEF_BUTTONLABEL_NEOGEO;
    m_nNumberOfColorOptions = ARRAYSIZE(DEF_BUTTONLABEL_NEOGEO);

    //Create the redirect buffer
    rgUnitRedir = new UINT16[nUnitAmt + 1];
    memset(rgUnitRedir, NULL, sizeof(UINT16) * nUnitAmt);

    //Create the file changed flag
    PrepChangeTrackingArray();
}

CGame_KOF97_A::~CGame_KOF97_A(void)
{
    safe_delete_array(CGame_KOF97_A::KOF97_A_EXTRA_CUSTOM);
    ClearDataBuffer();
    //Get rid of the file changed flag
    FlushChangeTrackingArray();
}

CDescTree* CGame_KOF97_A::GetMainTree()
{
    return &CGame_KOF97_A::MainDescTree;
}

int CGame_KOF97_A::GetExtraCt(UINT16 nUnitId, BOOL bCountVisibleOnly)
{
    if (rgExtraCountAll[0] == -1)
    {
        int nDefCtr = 0;
        memset(rgExtraCountAll, 0, ((KOF97_A_NUMUNIT + 1) * sizeof(int)));

        stExtraDef* pCurrDef = GetExtraDefForKOF97(0);

        while (pCurrDef->uUnitN != INVALID_UNIT_VALUE)
        {
            if (!pCurrDef->isInvisible || !bCountVisibleOnly)
            {
                rgExtraCountAll[pCurrDef->uUnitN]++;
            }

            nDefCtr++;
            pCurrDef = GetExtraDefForKOF97(nDefCtr);
        }
    }

    return rgExtraCountAll[nUnitId];
}

int CGame_KOF97_A::GetExtraLoc(UINT16 nUnitId)
{
    if (rgExtraLoc[0] == -1)
    {
        int nDefCtr = 0;
        int nCurrUnit = UNIT_START_VALUE;
        memset(rgExtraLoc, 0, (KOF97_A_NUMUNIT + 1) * sizeof(int));

        stExtraDef* pCurrDef = GetExtraDefForKOF97(0);

        while (pCurrDef->uUnitN != INVALID_UNIT_VALUE)
        {
            if (pCurrDef->uUnitN != nCurrUnit)
            {
                rgExtraLoc[pCurrDef->uUnitN] = nDefCtr;
                nCurrUnit = pCurrDef->uUnitN;
            }

            nDefCtr++;
            pCurrDef = GetExtraDefForKOF97(nDefCtr);
        }
    }

    return rgExtraLoc[nUnitId];
}

sDescTreeNode* CGame_KOF97_A::InitDescTree()
{
    UINT32 nTotalPaletteCount = 0;

    //Load extra file if we're using it
    LoadExtraFileForGame(EXTRA_FILENAME_KOF97_A, KOF97_A_EXTRA, &KOF97_A_EXTRA_CUSTOM, KOF97_A_EXTRALOC, m_nConfirmedROMSize);

    UINT16 nUnitCt = KOF97_A_NUMUNIT + (GetExtraCt(KOF97_A_EXTRALOC) ? 1 : 0);
    
    sDescTreeNode* NewDescTree = new sDescTreeNode;

    //Create the main character tree
    _snwprintf_s(NewDescTree->szDesc, ARRAYSIZE(NewDescTree->szDesc), _TRUNCATE, L"%s", g_GameFriendlyName[KOF97_A]);
    NewDescTree->ChildNodes = new sDescTreeNode[nUnitCt];
    NewDescTree->uChildAmt = nUnitCt;
    //All units have tree children
    NewDescTree->uChildType = DESC_NODETYPE_TREE;

    CString strMsg;
    bool fHaveExtras = (GetExtraCt(KOF97_A_EXTRALOC) > 0);
    strMsg.Format(L"CGame_KOF97_A::InitDescTree: Building desc tree for KOF97_A %s extras...\n", fHaveExtras ? L"with" : L"without");
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

        if (iUnitCtr < KOF97_A_EXTRALOC)
        {
            //Set each description
            _snwprintf_s(UnitNode->szDesc, ARRAYSIZE(UnitNode->szDesc), _TRUNCATE, L"%s", KOF97_A_UNITS[iUnitCtr].szDesc);
            UnitNode->ChildNodes = new sDescTreeNode[nUnitChildCount];
            //All children have collection trees
            UnitNode->uChildType = DESC_NODETYPE_TREE;
            UnitNode->uChildAmt = nUnitChildCount;

#if KOF97_A_DEBUG
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

#if KOF97_A_DEBUG
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

#if KOF97_A_DEBUG
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

#if KOF97_A_DEBUG
            strMsg.Format(L"Unit (Extras): %s, %u of %u, %u total children\n", UnitNode->szDesc, iUnitCtr + 1, nUnitCt, nUnitChildCount);
            OutputDebugString(strMsg);
#endif
        }

        //Set up extra nodes
        if (bUseExtra)
        {
            int nExtraPos = GetExtraLoc(iUnitCtr);
            int nCurrExtra = 0;

            CollectionNode = &((sDescTreeNode*)UnitNode->ChildNodes)[(KOF97_A_EXTRALOC > iUnitCtr) ? (nUnitChildCount - 1) : 0]; //Extra node

            _snwprintf_s(CollectionNode->szDesc, ARRAYSIZE(CollectionNode->szDesc), _TRUNCATE, L"Extra");

            CollectionNode->ChildNodes = new sDescTreeNode[nExtraCt];

            CollectionNode->uChildType = DESC_NODETYPE_NODE;
            CollectionNode->uChildAmt = nExtraCt; //EX + Extra

#if KOF97_A_DEBUG
            strMsg.Format(L"\tCollection: %s, %u of %u, %u children\n", CollectionNode->szDesc, 1, nUnitChildCount, nExtraCt);
            OutputDebugString(strMsg);
#endif

            for (UINT16 nExtraCtr = 0; nExtraCtr < nExtraCt; nExtraCtr++)
            {
                ChildNode = &((sDescNode*)CollectionNode->ChildNodes)[nExtraCtr];

                stExtraDef* pCurrDef = GetExtraDefForKOF97(nExtraPos + nCurrExtra);

                while (pCurrDef->isInvisible)
                {
                    nCurrExtra++;

                    pCurrDef = GetExtraDefForKOF97(nExtraPos + nCurrExtra);
                }

                _snwprintf_s(ChildNode->szDesc, ARRAYSIZE(ChildNode->szDesc), _TRUNCATE, pCurrDef->szDesc);

                ChildNode->uUnitId = iUnitCtr;
                ChildNode->uPalId = (((KOF97_A_EXTRALOC > iUnitCtr) ? 1 : 0) * nUnitChildCount * 2) + nCurrExtra;

#if KOF97_A_DEBUG
                strMsg.Format(L"\t\tPalette: %s, %u of %u\n", ChildNode->szDesc, nExtraCtr + 1, nExtraCt);
                OutputDebugString(strMsg);
#endif

                nCurrExtra++;
                nTotalPaletteCount++;
            }
        }
    }

    strMsg.Format(L"CGame_KOF97_A::InitDescTree: Loaded %u palettes for KOF97\n", nTotalPaletteCount);
    OutputDebugString(strMsg);

    m_nTotalPaletteCountForKOF97 = nTotalPaletteCount;

    // For development use to speed things up
    //DumpPaletteHeaders();

    return NewDescTree;
}

struct sKOF97_A_PaletteData
{
    LPCWSTR pszCharacterName;
    UINT32 nROMOffset = 0;
    LPCWSTR pszImageSet = L"indexKOFSprites_98Kyo";
    bool rgIsEffectUsed[14];
    bool fIsPaired = false;
    bool fUsesEffects = true;
};

// This array is used to generate the palette headers
sKOF97_A_PaletteData KOF97_A_CharacterPalettes[] =
{
    // These effects use a random number of palettes per character.  The rgIsEffectUsed array keeps track of this for us.
    //                                                                            1  2  3  4  5  6  7  8  9  a  b  c  d  e
    { L"Kyo",       0x2D1FF0 + (0x800 *  0), L"indexKOFSprites_98Kyo",          { 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0 } },
    { L"Benimaru",  0x2D1FF0 + (0x800 *  1), L"indexKOF97Sprites_Benimaru",     { 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } },
    { L"Daimon",    0x2D1FF0 + (0x800 *  2), L"indexKOFSprites_98Daimon",       { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, false, false },
    { L"Terry",     0x2D1FF0 + (0x800 *  3), L"indexKOFSprites_98Terry",        { 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } },
    { L"Andy",      0x2D1FF0 + (0x800 *  4), L"indexKOF97Sprites_Andy",         { 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0 } },
    { L"Joe",       0x2D1FF0 + (0x800 *  5), L"indexKOFSprites_98Joe",          { 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0 } },
    { L"Ryo",       0x2D1FF0 + (0x800 *  6), L"indexKOFSprites_98Ryo",          { 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1 } },
    { L"Robert",    0x2D1FF0 + (0x800 *  7), L"indexKOFSprites_98Robert",       { 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } },
    { L"Yuri",      0x2D1FF0 + (0x800 *  8), L"indexKOFSprites_98Yuri",         { 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0 } },
    { L"Leona",     0x2D1FF0 + (0x800 *  9), L"indexKOFSprites_98Leona",        { 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0 } },
    { L"Ralf",      0x2D1FF0 + (0x800 * 10), L"indexKOFSprites_98Ralf",         { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, true, false },
    { L"Clark",     0x2D1FF0 + (0x800 * 11), L"indexKOFSprites_98Clark",        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, true, false },
    { L"Athena",    0x2D1FF0 + (0x800 * 12), L"indexKOF97Sprites_Athena",       { 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0 } },
    { L"Kensou",    0x2D1FF0 + (0x800 * 13), L"indexKOFSprites_98Kensou",       { 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } },
    { L"Chin",      0x2D1FF0 + (0x800 * 14), L"indexKOFSprites_98Chin",         { 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0 } },
    { L"Chizuru",   0x2D1FF0 + (0x800 * 15), L"indexKOFSprites_98Chizuru",      { 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } },
    { L"Mai",       0x2D1FF0 + (0x800 * 16), L"indexKOFSprites_98Mai",          { 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0 } },
    { L"King",      0x2D1FF0 + (0x800 * 17), L"indexKOFSprites_98King",         { 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } },
    { L"Kim",       0x2D1FF0 + (0x800 * 18), L"indexKOFSprites_98Kim",          { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, false, false },
    { L"Chang",     0x2D1FF0 + (0x800 * 19), L"indexKOFSprites_98Chang",        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, true, false },
    { L"Choi",      0x2D1FF0 + (0x800 * 20), L"indexKOFSprites_98Choi",         { 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } },
    { L"Yamazaki",  0x2D1FF0 + (0x800 * 21), L"indexKOFSprites_98Yamazaki",     { 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } },
    { L"Blue Mary", 0x2D1FF0 + (0x800 * 22), L"indexKOFSprites_98BlueMary",     { 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } },
    { L"Billy",     0x2D1FF0 + (0x800 * 23), L"indexKOFSprites_98Billy",        { 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } },
    { L"Yashiro",   0x2D1FF0 + (0x800 * 24), L"indexKOFSprites_98Yashiro",      { 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1 } },
    { L"Shermie",   0x2D1FF0 + (0x800 * 25), L"indexKOFSprites_98Shermie",      { 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 1, 0, 0, 1 } },
    { L"Chris",     0x2D1FF0 + (0x800 * 26), L"indexKOFSprites_98Chris",        { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0 } },
    { L"Iori",      0x2D1FF0 + (0x800 * 27), L"indexKOFSprites_98Iori",         { 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0 } },
    { L"Orochi Iori",   0x2D1FF0 + (0x800 * 28), L"indexKOFSprites_98Iori",     { 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0 } },
    { L"Orochi Leona",  0x2D1FF0 + (0x800 * 29), L"indexKOFSprites_98Leona",    { 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0 } },
    { L"Orochi",    0x2D1FF0 + (0x800 * 30), L"indexKOF97Sprites_Orochi",       { 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0 } },
    { L"Shingo",    0x2D1FF0 + (0x800 * 31), L"indexKOFSprites_98Shingo",       { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, false, false },
    { L"Orochi Yashiro",    0x2D1FF0 + (0x800 * 32), L"indexKOFSprites_98Yashiro", { 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1 } },
    { L"Orochi Shermie",    0x2D1FF0 + (0x800 * 33), L"indexKOFSprites_98Shermie", { 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 1, 0, 0, 1 } },
    { L"Orochi Chris",      0x2D1FF0 + (0x800 * 34), L"indexKOFSprites_98Chris",   { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0 } },
    // Full character sets end after Orochi Chris
    //                                                                            1  2  3  4  5  6  7  8  9  a  b  c  d  e
};

// These numbers reflect the used palette lines found in the portrait region
// We only want to expose used lines
UINT16  KOF97_A_CharacterPortraitLineLength[] =
{
    8, // kyo
    4, // benimaru
    1, // daimon
    6, // terry
    8, // andy
    1, // joe
    8, // ryo
    8, // robert
    6, // yuri
    5, // Leona
    8, // Ralf
    6, // Clark
    8, // Athena
    5, // Kensou
    4, // Chin
    5, // Chizuru
    6, // Mai
    8, // King
    8, // Kim
    8, // Chang
    8, // Choi
    8, // Yamazaki
    7, // Blue Mary
    6, // Billy
    8, // Yashiro
    8, // Shermie
    8, // Chris
    8, // Iori
    6, // Orochi Iori
    6, // Orochi Leona
    3, // Orochi
    5, // Shingo
    8, // Orochi Yashiro
    8, // Orochi Shermie
    8, // Orochi Chris
};

void CGame_KOF97_A::DumpPaletteHeaders()
{
    CString strOutput;
    const UINT16 nColorOptionsPerCharacter = 4;
    constexpr UINT32 KOF97_PALETTE_LENGTH = 0x20;
    const UINT16 nCountPalettes = 16;

    for (UINT16 nCharIndex = 0; nCharIndex < ARRAYSIZE(KOF97_A_CharacterPalettes); nCharIndex++)
    {
        WCHAR szCodeDesc[MAX_DESCRIPTION_LENGTH];
        StrRemoveNonASCII(szCodeDesc, ARRAYSIZE(szCodeDesc), KOF97_A_CharacterPalettes[nCharIndex].pszCharacterName);

        for (UINT16 nColorIndex = 0; nColorIndex < ARRAYSIZE(DEF_BUTTONLABEL_NEOGEO); nColorIndex++)
        {
            strOutput.Format(L"const sGame_PaletteDataset KOF97_A_%s_PALETTES_%s[] = \r\n{\r\n", szCodeDesc, DEF_BUTTONLABEL_NEOGEO[nColorIndex]);
            OutputDebugString(strOutput);

            for (UINT16 nPaletteIndex = 0; nPaletteIndex < nCountPalettes; nPaletteIndex++)
            {
                UINT32 nCurrentOffset = KOF97_A_CharacterPalettes[nCharIndex].nROMOffset + (nPaletteIndex * KOF97_PALETTE_LENGTH) + (nCountPalettes * KOF97_PALETTE_LENGTH * nColorIndex);

                switch (nPaletteIndex)
                {

                case 0:
                    if (KOF97_A_CharacterPalettes[nCharIndex].fIsPaired)
                    {
                        strOutput.Format(L"    { L\"%s %s - Main\", 0x%x, 0x%x, %s, 0x00, &pairNext },\r\n", KOF97_A_CharacterPalettes[nCharIndex].pszCharacterName, DEF_BUTTONLABEL_NEOGEO[nColorIndex],
                            nCurrentOffset, nCurrentOffset + KOF97_PALETTE_LENGTH, KOF97_A_CharacterPalettes[nCharIndex].pszImageSet);
                    }
                    else
                    {
                        strOutput.Format(L"    { L\"%s %s - Main\", 0x%x, 0x%x, %s },\r\n", KOF97_A_CharacterPalettes[nCharIndex].pszCharacterName, DEF_BUTTONLABEL_NEOGEO[nColorIndex],
                            nCurrentOffset, nCurrentOffset + KOF97_PALETTE_LENGTH, KOF97_A_CharacterPalettes[nCharIndex].pszImageSet);
                    }
                    break;
                case 1: // possible main pair
                case 4: // possible max mode pair
                    if (KOF97_A_CharacterPalettes[nCharIndex].fIsPaired)
                    {
                        strOutput.Format(L"    { L\"%s %s - Extra %u\", 0x%x, 0x%x, %s, 0x01 },\r\n", KOF97_A_CharacterPalettes[nCharIndex].pszCharacterName, DEF_BUTTONLABEL_NEOGEO[nColorIndex], nPaletteIndex,
                            nCurrentOffset, nCurrentOffset + KOF97_PALETTE_LENGTH, KOF97_A_CharacterPalettes[nCharIndex].pszImageSet);
                        break;
                    }
                    __fallthrough;
                case 7: // possible super trail pair
                    if (KOF97_A_CharacterPalettes[nCharIndex].fIsPaired)
                    {
                        strOutput.Format(L"    { L\"%s %s - Super Trail 2\", 0x%x, 0x%x, %s, 0x01 },\r\n", KOF97_A_CharacterPalettes[nCharIndex].pszCharacterName, DEF_BUTTONLABEL_NEOGEO[nColorIndex],
                            nCurrentOffset, nCurrentOffset + KOF97_PALETTE_LENGTH, KOF97_A_CharacterPalettes[nCharIndex].pszImageSet);
                        break;
                    }
                    __fallthrough;
                case 2:
                case 5:
                default:
                    strOutput.Format(L"    { L\"%s %s - Extra %u\", 0x%x, 0x%x, %s },\r\n", KOF97_A_CharacterPalettes[nCharIndex].pszCharacterName, DEF_BUTTONLABEL_NEOGEO[nColorIndex], nPaletteIndex,
                        nCurrentOffset, nCurrentOffset + KOF97_PALETTE_LENGTH, KOF97_A_CharacterPalettes[nCharIndex].pszImageSet);
                    break;
                case 3:
                    if (KOF97_A_CharacterPalettes[nCharIndex].fIsPaired)
                    {
                        strOutput.Format(L"    { L\"%s %s - Max Mode\", 0x%x, 0x%x, %s, 0x00, &pairNext },\r\n", KOF97_A_CharacterPalettes[nCharIndex].pszCharacterName, DEF_BUTTONLABEL_NEOGEO[nColorIndex],
                            nCurrentOffset, nCurrentOffset + KOF97_PALETTE_LENGTH, KOF97_A_CharacterPalettes[nCharIndex].pszImageSet);
                    }
                    else
                    {
                        strOutput.Format(L"    { L\"%s %s - Max Mode\", 0x%x, 0x%x, %s },\r\n", KOF97_A_CharacterPalettes[nCharIndex].pszCharacterName, DEF_BUTTONLABEL_NEOGEO[nColorIndex],
                            nCurrentOffset, nCurrentOffset + KOF97_PALETTE_LENGTH, KOF97_A_CharacterPalettes[nCharIndex].pszImageSet);

                    }
                    break;
                case 6:
                    if (KOF97_A_CharacterPalettes[nCharIndex].fIsPaired)
                    {
                        strOutput.Format(L"    { L\"%s %s - Super Trail 1\", 0x%x, 0x%x, %s, 0x00, &pairNext },\r\n", KOF97_A_CharacterPalettes[nCharIndex].pszCharacterName, DEF_BUTTONLABEL_NEOGEO[nColorIndex],
                            nCurrentOffset, nCurrentOffset + KOF97_PALETTE_LENGTH, KOF97_A_CharacterPalettes[nCharIndex].pszImageSet);
                    }
                    else
                    {
                        strOutput.Format(L"    { L\"%s %s - Super Trail\", 0x%x, 0x%x, %s },\r\n", KOF97_A_CharacterPalettes[nCharIndex].pszCharacterName, DEF_BUTTONLABEL_NEOGEO[nColorIndex],
                            nCurrentOffset, nCurrentOffset + KOF97_PALETTE_LENGTH, KOF97_A_CharacterPalettes[nCharIndex].pszImageSet);
                    }
                    break;
                case 15:
                    strOutput.Format(L"    { L\"%s %s - Life Bar Portrait\", 0x%x, 0x%x, indexKOFSprites_98Lifebar, %s },\r\n", KOF97_A_CharacterPalettes[nCharIndex].pszCharacterName, DEF_BUTTONLABEL_NEOGEO[nColorIndex],
                        nCurrentOffset, nCurrentOffset + KOF97_PALETTE_LENGTH, KOF97_A_CharacterPalettes[nCharIndex].pszImageSet);
                    break;
                }

                OutputDebugString(strOutput);
            }

            UINT32 nWinPortraitOffset = 0x2e7df0 + (nColorIndex * 0x100) + (0x400 * nCharIndex);
            strOutput.Format(L"    { L\"%s %s - Win Portrait\", 0x%x, 0x%x },\r\n", KOF97_A_CharacterPalettes[nCharIndex].pszCharacterName, DEF_BUTTONLABEL_NEOGEO[nColorIndex],
                nWinPortraitOffset, nWinPortraitOffset + (KOF97_A_CharacterPortraitLineLength[nCharIndex] * KOF97_PALETTE_LENGTH));
            OutputDebugString(strOutput);

            OutputDebugString(L"};\r\n\r\n");
        }
    }

    // 15 and 16 are never used
    const UINT16 nCountStatusEffects = 14;

    for (UINT16 nCharIndex = 0; nCharIndex < ARRAYSIZE(KOF97_A_CharacterPalettes); nCharIndex++)
    {
        if (KOF97_A_CharacterPalettes[nCharIndex].fUsesEffects)
        {
            WCHAR szCodeDesc[MAX_DESCRIPTION_LENGTH];
            StrRemoveNonASCII(szCodeDesc, ARRAYSIZE(szCodeDesc), KOF97_A_CharacterPalettes[nCharIndex].pszCharacterName);

            strOutput.Format(L"const sGame_PaletteDataset KOF97_A_%s_EFFECT_PALETTES[] = \r\n{\r\n", szCodeDesc);
            OutputDebugString(strOutput);

            // Status effects
            for (UINT16 nStatusIndex = 0; nStatusIndex < nCountStatusEffects; nStatusIndex++)
            {
                // base is 0x2e37f0
                UINT32 nCurrentOffset = (0x2e37f0 + (0x200 * nCharIndex)) + (nStatusIndex * KOF97_PALETTE_LENGTH);

                if (KOF97_A_CharacterPalettes[nCharIndex].rgIsEffectUsed[nStatusIndex])
                {
                    strOutput.Format(L"    { L\"Effect %u\", 0x%x, 0x%x },\r\n", nStatusIndex, nCurrentOffset, nCurrentOffset + KOF97_PALETTE_LENGTH);
                    OutputDebugString(strOutput);
                }
            }

            OutputDebugString(L"};\r\n\r\n");
        }
    }

    for (UINT16 nCharIndex = 0; nCharIndex < ARRAYSIZE(KOF97_A_CharacterPalettes); nCharIndex++)
    {
        WCHAR szCodeDesc[MAX_DESCRIPTION_LENGTH];
        StrRemoveNonASCII(szCodeDesc, ARRAYSIZE(szCodeDesc), KOF97_A_CharacterPalettes[nCharIndex].pszCharacterName);

        strOutput.Format(L"const sDescTreeNode KOF97_A_%s_COLLECTION[] = \r\n{\r\n", szCodeDesc);
        OutputDebugString(strOutput);

        for (UINT16 nColorIndex = 0; nColorIndex < nColorOptionsPerCharacter; nColorIndex++)
        {
            WCHAR szColorOptionCodeDesc[MAX_DESCRIPTION_LENGTH];
            StrRemoveNonASCII(szColorOptionCodeDesc, ARRAYSIZE(szColorOptionCodeDesc), DEF_BUTTONLABEL_NEOGEO[nColorIndex]);

            strOutput.Format(L"    { L\"%s\", DESC_NODETYPE_TREE, (void*)KOF97_A_%s_PALETTES_%s, ARRAYSIZE(KOF97_A_%s_PALETTES_%s) },\r\n", DEF_BUTTONLABEL_NEOGEO[nColorIndex], szCodeDesc, szColorOptionCodeDesc, szCodeDesc, szColorOptionCodeDesc);
            OutputDebugString(strOutput);
        }

        if (KOF97_A_CharacterPalettes[nCharIndex].fUsesEffects)
        {
            strOutput.Format(L"    { L\"Effects\", DESC_NODETYPE_TREE, (void*)KOF97_A_%s_EFFECT_PALETTES, ARRAYSIZE(KOF97_A_%s_EFFECT_PALETTES) },\r\n", szCodeDesc, szCodeDesc);
            OutputDebugString(strOutput);
        }

        OutputDebugString(L"};\r\n\r\n");
    }

    OutputDebugString(L"const sDescTreeNode KOF97_A_UNITS[] = \r\n{\r\n");

    for (UINT16 nCharIndex = 0; nCharIndex < ARRAYSIZE(KOF97_A_CharacterPalettes); nCharIndex++)
    {
        WCHAR szCodeDesc[MAX_DESCRIPTION_LENGTH];
        StrRemoveNonASCII(szCodeDesc, ARRAYSIZE(szCodeDesc), KOF97_A_CharacterPalettes[nCharIndex].pszCharacterName);

        strOutput.Format(L"    { L\"%s\", DESC_NODETYPE_TREE, (void*)KOF97_A_%s_COLLECTION, ARRAYSIZE(KOF97_A_%s_COLLECTION) },\r\n", KOF97_A_CharacterPalettes[nCharIndex].pszCharacterName,
            szCodeDesc, szCodeDesc);
        OutputDebugString(strOutput);
    }

    OutputDebugString(L"    { L\"Bonus\", DESC_NODETYPE_TREE, (void*)KOF97_A_BONUS_COLLECTION, ARRAYSIZE(KOF97_A_BONUS_COLLECTION) },\r\n");
    OutputDebugString(L"};\r\n\r\n");
}

sFileRule CGame_KOF97_A::GetRule(UINT16 nUnitId)
{
    sFileRule NewFileRule;

    // This value is only used for directory-based games
    _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, L"232-p2.sp2");

    NewFileRule.uUnitId = 0;
    NewFileRule.uVerifyVar = m_nExpectedGameROMSize;

    return NewFileRule;
}

UINT32 CGame_KOF97_A::GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet, bool* pfNeedToValidateCRCs)
{
    static sCRC32ValueSet knownROMs[] =
    {
        { L"KOF '97 (Neo-Geo)", L"232-p2.sp2", 0x158b23f6, 0 },
        { L"KOF '97 (Neo-Geo)", L"KOF97_p2.rom", 0x158b23f6, 0 },
        { L"KOF '97AE (Neo-Geo)", L"232ae.p2", -1, 0 },
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

UINT16 CGame_KOF97_A::GetCollectionCountForUnit(UINT16 nUnitId)
{
    if (nUnitId == KOF97_A_EXTRALOC)
    {
        return GetExtraCt(nUnitId);
    }
    else
    {
        return KOF97_A_UNITS[nUnitId].uChildAmt;
    }
}

UINT16 CGame_KOF97_A::GetNodeCountForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    if (nUnitId == KOF97_A_EXTRALOC)
    {
        return GetExtraCt(nUnitId);
    }
    else
    {
        const sDescTreeNode* pCollectionNode = (const sDescTreeNode*)(KOF97_A_UNITS[nUnitId].ChildNodes);

        return pCollectionNode[nCollectionId].uChildAmt;
    }
}

LPCWSTR CGame_KOF97_A::GetDescriptionForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    if (nUnitId == KOF97_A_EXTRALOC)
    {
        return L"Extra Palettes";
    }
    else
    {
        const sDescTreeNode* pCollection = (const sDescTreeNode*)KOF97_A_UNITS[nUnitId].ChildNodes;
        return pCollection[nCollectionId].szDesc;
    }
}

UINT16 CGame_KOF97_A::GetPaletteCountForUnit(UINT16 nUnitId)
{
    if (nUnitId == KOF97_A_EXTRALOC)
    {
        return GetExtraCt(nUnitId);
    }
    else
    {
        UINT16 nCompleteCount = 0;
        const sDescTreeNode* pCompleteROMTree = KOF97_A_UNITS;
        UINT16 nCollectionCount = pCompleteROMTree[nUnitId].uChildAmt;

        const sDescTreeNode* pCurrentCollection = (const sDescTreeNode*)(pCompleteROMTree[nUnitId].ChildNodes);

        for (UINT16 nCollectionIndex = 0; nCollectionIndex < nCollectionCount; nCollectionIndex++)
        {
            nCompleteCount += pCurrentCollection[nCollectionIndex].uChildAmt;
        }

#if KOF97_A_DEBUG
        CString strMsg;
        strMsg.Format(L"CGame_KOF97_A::GetPaletteCountForUnit: %u for unit %u which has %u collections.\n", nCompleteCount, nUnitId, nCollectionCount);
        OutputDebugString(strMsg);
#endif

        return nCompleteCount;
    }
}

const sGame_PaletteDataset* CGame_KOF97_A::GetPaletteSet(UINT16 nUnitId, UINT16 nCollectionId)
{
    // Don't use this for Extra palettes.
    const sDescTreeNode* pCurrentSet = (const sDescTreeNode*)KOF97_A_UNITS[nUnitId].ChildNodes;
    return ((sGame_PaletteDataset*)(pCurrentSet[nCollectionId].ChildNodes));
}

const sDescTreeNode* CGame_KOF97_A::GetNodeFromPaletteId(UINT16 nUnitId, UINT16 nPaletteId, bool fReturnBasicNodesOnly)
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

        if (nUnitId == KOF97_A_EXTRALOC)
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
            const sDescTreeNode* pCollectionNodeToCheck = (const sDescTreeNode*)(KOF97_A_UNITS[nUnitId].ChildNodes);
            
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

const sGame_PaletteDataset* CGame_KOF97_A::GetSpecificPalette(UINT16 nUnitId, UINT16 nPaletteId)
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

void CGame_KOF97_A::LoadSpecificPaletteData(UINT16 nUnitId, UINT16 nPalId)
{
     if (nUnitId != KOF97_A_EXTRALOC)
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
    else // KOF97_A_EXTRALOC
    {
        // This is where we handle all the palettes added in via Extra.
        stExtraDef* pCurrDef = GetExtraDefForKOF97(GetExtraLoc(nUnitId) + nPalId);

        m_nCurrentPaletteROMLocation = pCurrDef->uOffset;
        m_nCurrentPaletteSizeInColors = (pCurrDef->cbPaletteSize / m_nSizeOfColorsInBytes);
        m_pszCurrentPaletteName = pCurrDef->szDesc;
    }
}

BOOL CGame_KOF97_A::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
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
    if (NodeGet->uUnitId != KOF97_A_EXTRALOC)
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

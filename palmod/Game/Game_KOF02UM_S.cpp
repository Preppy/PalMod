#include "StdAfx.h"
#include "GameDef.h"
#include "Game_KOF02UM_S.h"
#include "..\PalMod.h"
#include "..\RegProc.h"

#define KOF02UM_S_DEBUG DEFAULT_GAME_DEBUG_STATE

stExtraDef* CGame_KOF02UM_S::KOF02UM_S_EXTRA_CUSTOM_MAIN = nullptr;
stExtraDef* CGame_KOF02UM_S::KOF02UM_S_EXTRA_CUSTOM_BAR = nullptr;
stExtraDef* CGame_KOF02UM_S::KOF02UM_S_EXTRA_CUSTOM_CLEAR = nullptr;
stExtraDef* CGame_KOF02UM_S::KOF02UM_S_EXTRA_CUSTOM_MAX2 = nullptr;
stExtraDef* CGame_KOF02UM_S::KOF02UM_S_EXTRA_CUSTOM_PSEL = nullptr;

CDescTree CGame_KOF02UM_S::MainDescTree_Main = nullptr;
CDescTree CGame_KOF02UM_S::MainDescTree_Bar = nullptr;
CDescTree CGame_KOF02UM_S::MainDescTree_Clear = nullptr;
CDescTree CGame_KOF02UM_S::MainDescTree_MAX2 = nullptr;
CDescTree CGame_KOF02UM_S::MainDescTree_PSel = nullptr;

int CGame_KOF02UM_S::rgExtraCountAll_Main[KOF02UM_S_NUMUNIT_MAIN + 1];
int CGame_KOF02UM_S::rgExtraCountAll_Bar[KOF02UM_S_NUMUNIT_BAR + 1];
int CGame_KOF02UM_S::rgExtraCountAll_Clear[KOF02UM_S_NUMUNIT_CLEAR + 1];
int CGame_KOF02UM_S::rgExtraCountAll_MAX2[KOF02UM_S_NUMUNIT_MAX2 + 1];
int CGame_KOF02UM_S::rgExtraCountAll_PSel[KOF02UM_S_NUMUNIT_PSEL + 1];
int CGame_KOF02UM_S::rgExtraLoc_Main[KOF02UM_S_NUMUNIT_MAIN + 1];
int CGame_KOF02UM_S::rgExtraLoc_Bar[KOF02UM_S_NUMUNIT_BAR + 1];
int CGame_KOF02UM_S::rgExtraLoc_Clear[KOF02UM_S_NUMUNIT_CLEAR + 1];
int CGame_KOF02UM_S::rgExtraLoc_MAX2[KOF02UM_S_NUMUNIT_MAX2 + 1];
int CGame_KOF02UM_S::rgExtraLoc_PSel[KOF02UM_S_NUMUNIT_PSEL + 1];

int CGame_KOF02UM_S::m_nSelectedRom = 0;
UINT32 CGame_KOF02UM_S::m_nExpectedGameROMSize = 0x606E0;  // 394976 bytes for the main rom
UINT32 CGame_KOF02UM_S::m_nTotalPaletteCountForKOF02UM_Main = 0;
UINT32 CGame_KOF02UM_S::m_nTotalPaletteCountForKOF02UM_Bar = 0;
UINT32 CGame_KOF02UM_S::m_nTotalPaletteCountForKOF02UM_Clear = 0;
UINT32 CGame_KOF02UM_S::m_nTotalPaletteCountForKOF02UM_MAX2 = 0;
UINT32 CGame_KOF02UM_S::m_nTotalPaletteCountForKOF02UM_PSel = 0;
UINT32 CGame_KOF02UM_S::m_nConfirmedROMSize = -1;

void CGame_KOF02UM_S::InitializeStatics()
{
    safe_delete_array(CGame_KOF02UM_S::KOF02UM_S_EXTRA_CUSTOM_MAIN);
    safe_delete_array(CGame_KOF02UM_S::KOF02UM_S_EXTRA_CUSTOM_BAR);
    safe_delete_array(CGame_KOF02UM_S::KOF02UM_S_EXTRA_CUSTOM_CLEAR);
    safe_delete_array(CGame_KOF02UM_S::KOF02UM_S_EXTRA_CUSTOM_MAX2);
    safe_delete_array(CGame_KOF02UM_S::KOF02UM_S_EXTRA_CUSTOM_PSEL);

    memset(rgExtraCountAll_Main, -1, sizeof(rgExtraCountAll_Main));
    memset(rgExtraCountAll_Bar, -1, sizeof(rgExtraCountAll_Bar));
    memset(rgExtraCountAll_Clear, -1, sizeof(rgExtraCountAll_Clear));
    memset(rgExtraCountAll_MAX2, -1, sizeof(rgExtraCountAll_MAX2));
    memset(rgExtraCountAll_PSel, -1, sizeof(rgExtraCountAll_PSel));
    memset(rgExtraLoc_Main, -1, sizeof(rgExtraLoc_Main));
    memset(rgExtraLoc_Bar, -1, sizeof(rgExtraLoc_Bar));
    memset(rgExtraLoc_Clear, -1, sizeof(rgExtraLoc_Clear));
    memset(rgExtraLoc_MAX2, -1, sizeof(rgExtraLoc_MAX2));
    memset(rgExtraLoc_PSel, -1, sizeof(rgExtraLoc_PSel));

    MainDescTree_Main.SetRootTree(CGame_KOF02UM_S::InitDescTree(0));
    MainDescTree_Bar.SetRootTree(CGame_KOF02UM_S::InitDescTree(1));
    MainDescTree_MAX2.SetRootTree(CGame_KOF02UM_S::InitDescTree(2));
    MainDescTree_Clear.SetRootTree(CGame_KOF02UM_S::InitDescTree(3));
    MainDescTree_PSel.SetRootTree(CGame_KOF02UM_S::InitDescTree(4));
}

CGame_KOF02UM_S::CGame_KOF02UM_S(UINT32 nConfirmedROMSize, int nRomToLoad)
{
    OutputDebugString(L"CGame_KOF02UM_S::CGame_KOF02UM_S: Loading ROM...\n");

    // We need this set before we initialize so that corrupt Extras truncate correctly.
    // Otherwise the new user inadvertently corrupts their ROM.
    m_nConfirmedROMSize = nConfirmedROMSize;
    InitializeStatics();

    m_nSelectedRom = (nRomToLoad < MAX_ROM_OPTIONS) ? nRomToLoad : 0;

    switch (m_nSelectedRom)
    {
    case 0:
        m_nTotalInternalUnits = KOF02UM_S_NUMUNIT_MAIN;
        m_nExtraUnit = KOF02UM_S_EXTRALOC_MAIN;

        m_nSafeCountForThisRom = GetExtraCt(m_nExtraUnit) + 2743;
        m_pszExtraFilename = EXTRA_FILENAME_KOF02UM_S_MAIN;
        m_nTotalPaletteCount = m_nTotalPaletteCountForKOF02UM_Main;
        // This magic number is used to warn users if their Extra file is trying to write somewhere potentially unusual
        m_nLowestKnownPaletteRomLocation = 0x2a0;
        break;
    case 1:
        m_nTotalInternalUnits = KOF02UM_S_NUMUNIT_BAR;
        m_nExtraUnit = KOF02UM_S_EXTRALOC_BAR;

        m_nSafeCountForThisRom = 10;
        m_pszExtraFilename = EXTRA_FILENAME_KOF02UM_S_BAR;
        m_nTotalPaletteCount = m_nTotalPaletteCountForKOF02UM_Bar;
        // This magic number is used to warn users if their Extra file is trying to write somewhere potentially unusual
        m_nLowestKnownPaletteRomLocation = 0;
        break;
    case 2:
        m_nTotalInternalUnits = KOF02UM_S_NUMUNIT_MAX2;
        m_nExtraUnit = KOF02UM_S_EXTRALOC_MAX2;

        m_nSafeCountForThisRom = 2;
        m_pszExtraFilename = EXTRA_FILENAME_KOF02UM_S_MAX2;
        m_nTotalPaletteCount = m_nTotalPaletteCountForKOF02UM_MAX2;
        // This magic number is used to warn users if their Extra file is trying to write somewhere potentially unusual
        m_nLowestKnownPaletteRomLocation = 0;
        break;
    case 3:
        m_nTotalInternalUnits = KOF02UM_S_NUMUNIT_CLEAR;
        m_nExtraUnit = KOF02UM_S_EXTRALOC_CLEAR;

        m_nSafeCountForThisRom = 3;
        m_pszExtraFilename = EXTRA_FILENAME_KOF02UM_S_CLEAR;
        m_nTotalPaletteCount = m_nTotalPaletteCountForKOF02UM_Clear;
        // This magic number is used to warn users if their Extra file is trying to write somewhere potentially unusual
        m_nLowestKnownPaletteRomLocation = 0x80;
        break;
    case 4:
        m_nTotalInternalUnits = KOF02UM_S_NUMUNIT_PSEL;
        m_nExtraUnit = KOF02UM_S_EXTRALOC_PSEL;

        m_nSafeCountForThisRom = 10;
        m_pszExtraFilename = EXTRA_FILENAME_KOF02UM_S_PSEL;
        m_nTotalPaletteCount = m_nTotalPaletteCountForKOF02UM_PSel;
        // This magic number is used to warn users if their Extra file is trying to write somewhere potentially unusual
        m_nLowestKnownPaletteRomLocation = 0x1c0;
        break;
    }

    nUnitAmt = m_nTotalInternalUnits + (GetExtraCt(m_nExtraUnit) ? 1 : 0);

    createPalOptions = { NO_SPECIAL_OPTIONS, WRITE_MAX };
    SetAlphaMode(AlphaMode::GameUsesFixedAlpha);

    if (UseMainPaletteSet())
    {
        SetColorMode(ColMode::COLMODE_RGB555_BE);
    }
    else if (UseClearPaletteSet() || UsePSelPaletteSet())
    {
        SetColorMode(ColMode::COLMODE_ARGB7888);
    }
    else
    {
        SetColorMode(ColMode::COLMODE_BGR555_LE);
    }

    InitDataBuffer();

    //Set game information
    nGameFlag = KOF02UM_S;
    nImgGameFlag = IMGDAT_SECTION_KOF;
    m_prgGameImageSet = KOF02UM_S_IMGIDS_USED;
    nImgUnitAmt = ARRAYSIZE(KOF02UM_S_IMGIDS_USED);

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

CGame_KOF02UM_S::~CGame_KOF02UM_S()
{
    safe_delete_array(CGame_KOF02UM_S::KOF02UM_S_EXTRA_CUSTOM_MAIN);
    safe_delete_array(CGame_KOF02UM_S::KOF02UM_S_EXTRA_CUSTOM_BAR);
    safe_delete_array(CGame_KOF02UM_S::KOF02UM_S_EXTRA_CUSTOM_CLEAR);
    safe_delete_array(CGame_KOF02UM_S::KOF02UM_S_EXTRA_CUSTOM_MAX2);
    safe_delete_array(CGame_KOF02UM_S::KOF02UM_S_EXTRA_CUSTOM_PSEL);
    ClearDataBuffer();
    //Get rid of the file changed flag
    FlushChangeTrackingArray();
}

CDescTree* CGame_KOF02UM_S::GetMainTree()
{
    if (UseMainPaletteSet())
    {
        return &CGame_KOF02UM_S::MainDescTree_Main;
    }
    else if (UseBarPaletteSet())
    {
        return &CGame_KOF02UM_S::MainDescTree_Bar;
    }
    else if (UseClearPaletteSet())
    {
        return &CGame_KOF02UM_S::MainDescTree_Clear;
    }
    else if (UsePSelPaletteSet())
    {
        return &CGame_KOF02UM_S::MainDescTree_PSel;
    }
    else
    {
        return &CGame_KOF02UM_S::MainDescTree_MAX2;
    }
}

int CGame_KOF02UM_S::GetExtraCt(UINT16 nUnitId, BOOL bCountVisibleOnly)
{
    int* rgExtraCt;
    int nUnitCount;

    if (UseMainPaletteSet())
    {
        rgExtraCt = rgExtraCountAll_Main;
        nUnitCount = KOF02UM_S_NUMUNIT_MAIN;
    }
    else if (UseBarPaletteSet())
    {
        rgExtraCt =  rgExtraCountAll_Bar;
        nUnitCount = KOF02UM_S_NUMUNIT_BAR;
    }
    else if (UseClearPaletteSet())
    {
        rgExtraCt = rgExtraCountAll_Clear;
        nUnitCount = KOF02UM_S_NUMUNIT_CLEAR;
    }
    else if (UsePSelPaletteSet())
    {
        rgExtraCt = rgExtraCountAll_PSel;
        nUnitCount = KOF02UM_S_NUMUNIT_PSEL;
    }
    else
    {
        rgExtraCt = rgExtraCountAll_MAX2;
        nUnitCount = KOF02UM_S_NUMUNIT_MAX2;
    }

    if (rgExtraCt[0] == -1)
    {
        int nDefCtr = 0;
        memset(rgExtraCt, 0, ((nUnitCount + 1) * sizeof(int)));

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

int CGame_KOF02UM_S::GetExtraLoc(UINT16 nUnitId)
{
    int* rgExtraLoc;
    int nUnitCount;

    if (UseMainPaletteSet())
    {
        rgExtraLoc = rgExtraLoc_Main;
        nUnitCount = KOF02UM_S_NUMUNIT_MAIN;
    }
    else if (UseBarPaletteSet())
    {
        rgExtraLoc = rgExtraLoc_Bar;
        nUnitCount = KOF02UM_S_NUMUNIT_BAR;
    }
    else if (UseClearPaletteSet())
    {
        rgExtraLoc = rgExtraLoc_Clear;
        nUnitCount = KOF02UM_S_NUMUNIT_CLEAR;
    }
    else if (UsePSelPaletteSet())
    {
        rgExtraLoc = rgExtraLoc_PSel;
        nUnitCount = KOF02UM_S_NUMUNIT_PSEL;
    }
    else
    {
        rgExtraLoc = rgExtraLoc_MAX2;
        nUnitCount = KOF02UM_S_NUMUNIT_MAX2;
    }

    if (rgExtraLoc[0] == -1)
    {
        int nDefCtr = 0;
        int nCurrUnit = UNIT_START_VALUE;
        memset(rgExtraLoc, 0, (nUnitCount + 1) * sizeof(int));

        stExtraDef* pCurrDef = GetCurrentExtraDef(0);

        while (pCurrDef->uUnitN != INVALID_UNIT_VALUE)
        {
            if (pCurrDef->uUnitN != nCurrUnit)
            {
                rgExtraLoc[pCurrDef->uUnitN] = nDefCtr;
                nCurrUnit = pCurrDef->uUnitN;
            }

            nDefCtr++;
            pCurrDef = GetCurrentExtraDef(nDefCtr);
        }
    }

    return rgExtraLoc[nUnitId];
}

const sDescTreeNode* CGame_KOF02UM_S::GetCurrentUnitSet()
{
    if (UseMainPaletteSet())
    {
        return KOF02UM_S_UNITS_MAIN;
    }
    else if (UseBarPaletteSet())
    {
        return KOF02UM_S_UNITS_BAR;
    }
    else if (UseClearPaletteSet())
    {
        return KOF02UM_S_UNITS_CLEAR;
    }
    else if (UsePSelPaletteSet())
    {
        return KOF02UM_S_UNITS_PSEL;
    }
    else
    {
        return KOF02UM_S_UNITS_MAX2;
    }
}

UINT16 CGame_KOF02UM_S::GetCurrentExtraLoc()
{
    if (UseMainPaletteSet())
    {
        return KOF02UM_S_EXTRALOC_MAIN;
    }
    else if (UseBarPaletteSet())
    {
        return KOF02UM_S_EXTRALOC_BAR;
    }
    else if (UseClearPaletteSet())
    {
        return KOF02UM_S_EXTRALOC_CLEAR;
    }
    else if (UsePSelPaletteSet())
    {
        return KOF02UM_S_EXTRALOC_PSEL;
    }
    else
    {
        return KOF02UM_S_EXTRALOC_MAX2;
    }
}

stExtraDef* CGame_KOF02UM_S::GetCurrentExtraDef(int nDefCtr)
{
    if (UseMainPaletteSet())
    {
        return (stExtraDef*)&KOF02UM_S_EXTRA_CUSTOM_MAIN[nDefCtr];
    }
    else if (UseBarPaletteSet())
    {
        return (stExtraDef*)&KOF02UM_S_EXTRA_CUSTOM_BAR[nDefCtr];
    }
    else if (UseClearPaletteSet())
    {
        return (stExtraDef*)&KOF02UM_S_EXTRA_CUSTOM_CLEAR[nDefCtr];
    }
    else if (UsePSelPaletteSet())
    {
        return (stExtraDef*)&KOF02UM_S_EXTRA_CUSTOM_PSEL[nDefCtr];
    }
    else
    {
        return (stExtraDef*)&KOF02UM_S_EXTRA_CUSTOM_MAX2[nDefCtr];
    }
}

sDescTreeNode* CGame_KOF02UM_S::InitDescTree(int nROMPaletteSetToUse)
{
    UINT32 nTotalPaletteCount = 0;
    m_nSelectedRom = nROMPaletteSetToUse;

    UINT16 nUnitCt;
    UINT8 nExtraUnitLocation;

    if (UseMainPaletteSet())
    {
        nExtraUnitLocation = KOF02UM_S_EXTRALOC_MAIN;
        LoadExtraFileForGame(EXTRA_FILENAME_KOF02UM_S_MAIN, KOF02UM_S_EXTRA, &KOF02UM_S_EXTRA_CUSTOM_MAIN, nExtraUnitLocation, m_nConfirmedROMSize);
        nUnitCt = KOF02UM_S_NUMUNIT_MAIN + (GetExtraCt(nExtraUnitLocation) ? 1 : 0);
    }
    else if (UseBarPaletteSet())
    {
        nExtraUnitLocation = KOF02UM_S_EXTRALOC_BAR;
        LoadExtraFileForGame(EXTRA_FILENAME_KOF02UM_S_BAR, KOF02UM_S_EXTRA, &KOF02UM_S_EXTRA_CUSTOM_BAR, nExtraUnitLocation, m_nConfirmedROMSize);
        nUnitCt = KOF02UM_S_NUMUNIT_BAR + (GetExtraCt(nExtraUnitLocation) ? 1 : 0);
    }
    else if (UseClearPaletteSet())
    {
        nExtraUnitLocation = KOF02UM_S_EXTRALOC_CLEAR;
        LoadExtraFileForGame(EXTRA_FILENAME_KOF02UM_S_CLEAR, KOF02UM_S_EXTRA, &KOF02UM_S_EXTRA_CUSTOM_CLEAR, nExtraUnitLocation, m_nConfirmedROMSize);
        nUnitCt = KOF02UM_S_NUMUNIT_CLEAR + (GetExtraCt(nExtraUnitLocation) ? 1 : 0);
    }
    else if (UsePSelPaletteSet())
    {
        nExtraUnitLocation = KOF02UM_S_EXTRALOC_PSEL;
        LoadExtraFileForGame(EXTRA_FILENAME_KOF02UM_S_PSEL, KOF02UM_S_EXTRA, &KOF02UM_S_EXTRA_CUSTOM_PSEL, nExtraUnitLocation, m_nConfirmedROMSize);
        nUnitCt = KOF02UM_S_NUMUNIT_PSEL + (GetExtraCt(nExtraUnitLocation) ? 1 : 0);
    }
    else
    {
        nExtraUnitLocation = KOF02UM_S_EXTRALOC_MAX2;
        LoadExtraFileForGame(EXTRA_FILENAME_KOF02UM_S_MAX2, KOF02UM_S_EXTRA, &KOF02UM_S_EXTRA_CUSTOM_MAX2, nExtraUnitLocation, m_nConfirmedROMSize);
        nUnitCt = KOF02UM_S_NUMUNIT_MAX2 + (GetExtraCt(nExtraUnitLocation) ? 1 : 0);
    }

    sDescTreeNode* NewDescTree = new sDescTreeNode;

    //Create the main character tree
    _snwprintf_s(NewDescTree->szDesc, ARRAYSIZE(NewDescTree->szDesc), _TRUNCATE, L"%s", g_GameFriendlyName[KOF02UM_S]);
    NewDescTree->ChildNodes = new sDescTreeNode[nUnitCt];
    NewDescTree->uChildAmt = nUnitCt;
    //All units have tree children
    NewDescTree->uChildType = DESC_NODETYPE_TREE;

    CString strMsg = L"CGame_KOF02UM_S::InitDescTree: Building desc tree for KOF02UM_S ...\n";
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

#if KOF02UM_S_DEBUG
            strMsg.Format(L";Unit: \"%s\", %u of %u (%s), %u total children\n", UnitNode->szDesc, iUnitCtr + 1, nUnitCt, bUseExtra ? L"with extras" : L"no extras", nUnitChildCount);
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

#if KOF02UM_S_DEBUG
                strMsg.Format(L";\tCollection: \"%s\", %u of %u, %u children\n", CollectionNode->szDesc, iCollectionCtr + 1, nUnitChildCount, nListedChildrenCount);
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

#if KOF02UM_S_DEBUG
                    strMsg.Format(L";\t\tPalette: \"%s\", %u of %u", ChildNode->szDesc, nNodeIndex + 1, nListedChildrenCount);
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

                    strMsg.Format(L"%s :: %s :: %s\n0x%X\n0x%X\n\n", UnitNode->szDesc, CollectionNode->szDesc, ChildNode->szDesc, paletteSetToUse[nNodeIndex].nPaletteOffset, paletteSetToUse[nNodeIndex].nPaletteOffsetEnd);
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

#if KOF02UM_S_DEBUG
            strMsg.Format(L";Unit (Extras): %s, %u of %u, %u total children\n", UnitNode->szDesc, iUnitCtr + 1, nUnitCt, nUnitChildCount);
            OutputDebugString(strMsg);
#endif
        }

        //Set up extra nodes
        if (bUseExtra)
        {
            int nExtraPos = GetExtraLoc(iUnitCtr);
            int nCurrExtra = 0;

            CollectionNode = &((sDescTreeNode*)UnitNode->ChildNodes)[(GetCurrentExtraLoc() > iUnitCtr) ? (nUnitChildCount - 1) : 0]; //Extra node

            _snwprintf_s(CollectionNode->szDesc, ARRAYSIZE(CollectionNode->szDesc), _TRUNCATE, L"Extra");

            CollectionNode->ChildNodes = new sDescTreeNode[nExtraCt];

            CollectionNode->uChildType = DESC_NODETYPE_NODE;
            CollectionNode->uChildAmt = nExtraCt; //EX + Extra

#if KOF02UM_S_DEBUG
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
                ChildNode->uPalId = (((GetCurrentExtraLoc() > iUnitCtr) ? 1 : 0) * nUnitChildCount * 2) + nCurrExtra;

#if KOF02UM_S_DEBUG
                strMsg.Format(L"\t\tPalette: %s, %u of %u\n", ChildNode->szDesc, nExtraCtr + 1, nExtraCt);
                OutputDebugString(strMsg);
#endif

                nCurrExtra++;
                nTotalPaletteCount++;
            }
        }
    }

    strMsg.Format(L"CGame_KOF02UM_S::InitDescTree: Loaded %u palettes for KOF02UM\n", nTotalPaletteCount);
    OutputDebugString(strMsg);

    if (UseMainPaletteSet())
    {
        m_nTotalPaletteCountForKOF02UM_Main = nTotalPaletteCount;
    }
    else if (UseBarPaletteSet())
    {
        m_nTotalPaletteCountForKOF02UM_Bar = nTotalPaletteCount;
    }
    else if (UseClearPaletteSet())
    {
        m_nTotalPaletteCountForKOF02UM_Clear = nTotalPaletteCount;
    }
    else if (UsePSelPaletteSet())
    {
        m_nTotalPaletteCountForKOF02UM_PSel = nTotalPaletteCount;
    }
    else
    {
        m_nTotalPaletteCountForKOF02UM_MAX2 = nTotalPaletteCount;
    }

    return NewDescTree;
}

sFileRule CGame_KOF02UM_S::GetRule(UINT16 nUnitId)
{
    sFileRule NewFileRule;

    if (nUnitId == 2) // MAX2BG.BIN palettes
    {
        m_nExpectedGameROMSize = 0x9800;
        _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, L"MAX2BG.bin");
    }
    else if (nUnitId == 1) // BAR.BIN palettes
    {
        m_nExpectedGameROMSize = 0x2200;
        _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, L"bar.bin");
    }
    else if (nUnitId == 3) // CLEAR.BIN palettes
    {
        m_nExpectedGameROMSize = 0x218ce;
        _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, L"clear.bin");
    }
    else if (nUnitId == 4) // psel.bin-n palettes
    {
        m_nExpectedGameROMSize = 0x56f024;
        _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, L"psel.bin-n");
    }
    else // main palettes
    {
        m_nExpectedGameROMSize = 0x606e0;
        _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, L"pal_a.bin");
    }

    NewFileRule.uUnitId = 0;
    NewFileRule.uVerifyVar = m_nExpectedGameROMSize;

    return NewFileRule;
}

UINT16 CGame_KOF02UM_S::GetCollectionCountForUnit(UINT16 nUnitId)
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

UINT16 CGame_KOF02UM_S::GetNodeCountForCollection(UINT16 nUnitId, UINT16 nCollectionId)
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

LPCWSTR CGame_KOF02UM_S::GetDescriptionForCollection(UINT16 nUnitId, UINT16 nCollectionId)
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

UINT16 CGame_KOF02UM_S::GetPaletteCountForUnit(UINT16 nUnitId)
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

#if KOF02UM_S_DEBUG
        CString strMsg;
        strMsg.Format(L"CGame_KOF02UM_S::GetPaletteCountForUnit: %u for unit %u which has %u collections.\n", nCompleteCount, nUnitId, nCollectionCount);
        OutputDebugString(strMsg);
#endif

        return nCompleteCount;
    }
}

const sGame_PaletteDataset* CGame_KOF02UM_S::GetPaletteSet(UINT16 nUnitId, UINT16 nCollectionId)
{
    // Don't use this for Extra palettes.
    const sDescTreeNode* pCurrentSet = (const sDescTreeNode*)GetCurrentUnitSet()[nUnitId].ChildNodes;
    return ((sGame_PaletteDataset*)(pCurrentSet[nCollectionId].ChildNodes));
}

const sDescTreeNode* CGame_KOF02UM_S::GetNodeFromPaletteId(UINT16 nUnitId, UINT16 nPaletteId, bool fReturnBasicNodesOnly)
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

const sGame_PaletteDataset* CGame_KOF02UM_S::GetSpecificPalette(UINT16 nUnitId, UINT16 nPaletteId)
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

void CGame_KOF02UM_S::LoadSpecificPaletteData(UINT16 nUnitId, UINT16 nPalId)
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
    else // KOF02UM_S_EXTRALOC
    {
        // This is where we handle all the palettes added in via Extra.
        stExtraDef* pCurrDef = GetCurrentExtraDef(GetExtraLoc(nUnitId) + nPalId);

        m_nCurrentPaletteROMLocation = pCurrDef->uOffset;
        m_nCurrentPaletteSizeInColors = (pCurrDef->cbPaletteSize / m_nSizeOfColorsInBytes);
        m_pszCurrentPaletteName = pCurrDef->szDesc;
    }
}

BOOL CGame_KOF02UM_S::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
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
                if ((_wcsicmp(pCurrentNode->szDesc, L"A") == 0) || (_wcsicmp(pCurrentNode->szDesc, L"B") == 0) ||
                    (_wcsicmp(pCurrentNode->szDesc, L"C") == 0) || (_wcsicmp(pCurrentNode->szDesc, L"D") == 0))
                {
                    nSrcAmt = 4;
                    nNodeIncrement = pCurrentNode->uChildAmt;

                    while (nSrcStart >= nNodeIncrement)
                    {
                        // The starting point is the absolute first palette for the sprite in question which is found in P1/A
                        nSrcStart -= nNodeIncrement;
                    }
                }
                else if (_wcsicmp(pCurrentNode->szDesc, L"Portraits") == 0) // Portraits is last
                {
                    nSrcAmt = 4;
                    nSrcStart = GetPaletteCountForUnit(NodeGet->uUnitId) - pCurrentNode->uChildAmt;
                    nNodeIncrement = 1;
                }
            }

            if (paletteDataSet->pPalettePairingInfo)
            {
                if (paletteDataSet->pPalettePairingInfo->nPalettesToJoin == 3)
                {
                    const INT8 nPeerPaletteDistance1 = paletteDataSet->pPalettePairingInfo->nNodeIncrementToPartner;
                    const INT8 nPeerPaletteDistance2 = paletteDataSet->pPalettePairingInfo->nOverallNodeIncrementTo2ndPartner;
                    const sGame_PaletteDataset* paletteDataSetToJoin1 = GetSpecificPalette(NodeGet->uUnitId, NodeGet->uPalId + nPeerPaletteDistance1);
                    const sGame_PaletteDataset* paletteDataSetToJoin2 = GetSpecificPalette(NodeGet->uUnitId, NodeGet->uPalId + nPeerPaletteDistance2);
                    fShouldUseAlternateLoadLogic = true;

                    ClearSetImgTicket(
                        CreateImgTicket(paletteDataSet->indexImgToUse, paletteDataSet->indexOffsetToUse,
                            CreateImgTicket(paletteDataSetToJoin1->indexImgToUse, paletteDataSetToJoin1->indexOffsetToUse,
                                CreateImgTicket(paletteDataSetToJoin2->indexImgToUse, paletteDataSetToJoin2->indexOffsetToUse)
                            ))
                    );

                    //Set each palette
                    sDescNode* JoinedNode[] = {
                        GetMainTree()->GetDescNode(Node01, Node02, Node03, -1),
                        GetMainTree()->GetDescNode(Node01, Node02, Node03 + nPeerPaletteDistance1, -1),
                        GetMainTree()->GetDescNode(Node01, Node02, Node03 + nPeerPaletteDistance2, -1)
                    };

                    //Set each palette
                    CreateDefPal(JoinedNode[0], 0);
                    CreateDefPal(JoinedNode[1], 1);
                    CreateDefPal(JoinedNode[2], 2);

                    SetSourcePal(0, NodeGet->uUnitId, nSrcStart, nSrcAmt, nNodeIncrement);
                    SetSourcePal(1, NodeGet->uUnitId, nSrcStart + nPeerPaletteDistance1, nSrcAmt, nNodeIncrement);
                    SetSourcePal(2, NodeGet->uUnitId, nSrcStart + nPeerPaletteDistance2, nSrcAmt, nNodeIncrement);
                }
                else if (paletteDataSet->pPalettePairingInfo->nPalettesToJoin == 4)
                {
                    const INT8 nPeerPaletteDistance1 = paletteDataSet->pPalettePairingInfo->nNodeIncrementToPartner;
                    const INT8 nPeerPaletteDistance2 = paletteDataSet->pPalettePairingInfo->nOverallNodeIncrementTo2ndPartner;
                    const INT8 nPeerPaletteDistance3 = paletteDataSet->pPalettePairingInfo->nOverallNodeIncrementTo3rdPartner;
                    const sGame_PaletteDataset* paletteDataSetToJoin1 = GetSpecificPalette(NodeGet->uUnitId, NodeGet->uPalId + nPeerPaletteDistance1);
                    const sGame_PaletteDataset* paletteDataSetToJoin2 = GetSpecificPalette(NodeGet->uUnitId, NodeGet->uPalId + nPeerPaletteDistance2);
                    const sGame_PaletteDataset* paletteDataSetToJoin3 = GetSpecificPalette(NodeGet->uUnitId, NodeGet->uPalId + nPeerPaletteDistance3);
                    fShouldUseAlternateLoadLogic = true;

                    ClearSetImgTicket(
                        CreateImgTicket(paletteDataSet->indexImgToUse, paletteDataSet->indexOffsetToUse,
                            CreateImgTicket(paletteDataSetToJoin1->indexImgToUse, paletteDataSetToJoin1->indexOffsetToUse,
                                CreateImgTicket(paletteDataSetToJoin2->indexImgToUse, paletteDataSetToJoin2->indexOffsetToUse,
                                    CreateImgTicket(paletteDataSetToJoin3->indexImgToUse, paletteDataSetToJoin3->indexOffsetToUse)
                                )))
                    );

                    //Set each palette
                    sDescNode* JoinedNode[] = {
                        GetMainTree()->GetDescNode(Node01, Node02, Node03, -1),
                        GetMainTree()->GetDescNode(Node01, Node02, Node03 + nPeerPaletteDistance1, -1),
                        GetMainTree()->GetDescNode(Node01, Node02, Node03 + nPeerPaletteDistance2, -1),
                        GetMainTree()->GetDescNode(Node01, Node02, Node03 + nPeerPaletteDistance3, -1)
                    };

                    //Set each palette
                    CreateDefPal(JoinedNode[0], 0);
                    CreateDefPal(JoinedNode[1], 1);
                    CreateDefPal(JoinedNode[2], 2);
                    CreateDefPal(JoinedNode[3], 3);

                    SetSourcePal(0, NodeGet->uUnitId, nSrcStart, nSrcAmt, nNodeIncrement);
                    SetSourcePal(1, NodeGet->uUnitId, nSrcStart + nPeerPaletteDistance1, nSrcAmt, nNodeIncrement);
                    SetSourcePal(2, NodeGet->uUnitId, nSrcStart + nPeerPaletteDistance2, nSrcAmt, nNodeIncrement);
                    SetSourcePal(3, NodeGet->uUnitId, nSrcStart + nPeerPaletteDistance3, nSrcAmt, nNodeIncrement);
                }
                else
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

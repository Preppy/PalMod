#include "StdAfx.h"
#include "GameDef.h"
#include "Game_SFA2_A.h"
#include "..\PalMod.h"
#include "..\RegProc.h"

#define SFA2_DEBUG DEFAULT_GAME_DEBUG_STATE

stExtraDef* CGame_SFA2_A::SFA2_A_EXTRA_CUSTOM_07 = nullptr;
stExtraDef* CGame_SFA2_A::SFA2_A_EXTRA_CUSTOM_08 = nullptr;

CDescTree CGame_SFA2_A::MainDescTree_07 = nullptr;
CDescTree CGame_SFA2_A::MainDescTree_08 = nullptr;

int CGame_SFA2_A::rgExtraCountAll_07[SFA2_A_NUM_IND_07 + 1] = { -1 };
int CGame_SFA2_A::rgExtraCountAll_08[SFA2_A_NUM_IND_08 + 1] = { -1 };
int CGame_SFA2_A::rgExtraLoc_07[SFA2_A_NUM_IND_07 + 1] = { -1 };
int CGame_SFA2_A::rgExtraLoc_08[SFA2_A_NUM_IND_08 + 1] = { -1 };

int CGame_SFA2_A::m_nSFA2SelectedRom = 7;
UINT32 CGame_SFA2_A::m_nTotalPaletteCountForSFA2_07 = 0;
UINT32 CGame_SFA2_A::m_nTotalPaletteCountForSFA2_08 = 0;

UINT32 CGame_SFA2_A::m_nGameROMSize = 0x80000; // 524288 bytes
UINT32 CGame_SFA2_A::m_nConfirmedROMSize = -1;

void CGame_SFA2_A::InitializeStatics()
{
    safe_delete_array(CGame_SFA2_A::SFA2_A_EXTRA_CUSTOM_07);
    safe_delete_array(CGame_SFA2_A::SFA2_A_EXTRA_CUSTOM_08);

    memset(rgExtraCountAll_07, -1, sizeof(rgExtraCountAll_07));
    memset(rgExtraCountAll_08, -1, sizeof(rgExtraCountAll_08));
    memset(rgExtraLoc_07, -1, sizeof(rgExtraLoc_07));
    memset(rgExtraLoc_08, -1, sizeof(rgExtraLoc_08));

    MainDescTree_07.SetRootTree(CGame_SFA2_A::InitDescTree(7));
    MainDescTree_08.SetRootTree(CGame_SFA2_A::InitDescTree(8));
}

CGame_SFA2_A::CGame_SFA2_A(UINT32 nConfirmedROMSize, int nSFA2RomToLoad)
{
    // We need this set before we initialize so that corrupt Extras truncate correctly.
    // Otherwise the new user inadvertently corrupts their ROM.
    m_nConfirmedROMSize = nConfirmedROMSize;

    InitializeStatics();

    m_nSFA2SelectedRom = (nSFA2RomToLoad == 7) ? 7 : 8;
    m_pszExtraFilename = UsePaletteSetForCharacters() ? EXTRA_FILENAME_SFA2_07 : EXTRA_FILENAME_SFA2_08;

    CString strMessage;
    strMessage.Format(_T("CGame_SFA2_A::CGame_SFA2_A: Loading for the %s ROM\n"), (m_nSFA2SelectedRom == 7) ? _T("07") : _T("08"));
    OutputDebugString(strMessage);

    m_nTotalInternalUnits = UsePaletteSetForCharacters() ? SFA2_A_NUM_IND_07 : SFA2_A_NUM_IND_08;
    m_nExtraUnit = UsePaletteSetForCharacters() ? SFA2_A_EXTRALOC_07 : SFA2_A_EXTRALOC_08;

    const UINT32 nSafeCountFor07 = 874;
    const UINT32 nSafeCountFor08 = 259;

    const UINT32 nLowestPaletteIn07 = 0x2C000;
    const UINT32 nLowestPaletteIn08 = 0x1adc0;

    m_nSafeCountForThisRom = GetExtraCt(m_nExtraUnit) + (UsePaletteSetForCharacters() ? nSafeCountFor07 : nSafeCountFor08);

    m_nTotalPaletteCount = UsePaletteSetForCharacters() ? m_nTotalPaletteCountForSFA2_07 : m_nTotalPaletteCountForSFA2_08;
    m_nLowestKnownPaletteRomLocation = UsePaletteSetForCharacters() ? nLowestPaletteIn07 : nLowestPaletteIn08;

    //We need the proper unit amt before we init the main buffer
    nUnitAmt = m_nTotalInternalUnits + (GetExtraCt(m_nExtraUnit) ? 1 : 0);

    InitDataBuffer();

    //Set color mode
    SetColMode(COLMODE_12A);

    //Set palette conversion mode
    BasePalGroup.SetMode(PALTYPE_17);

    //Set game information
    nGameFlag = SFA2_A;
    nImgGameFlag = IMGDAT_SECTION_CPS2;
    nImgUnitAmt = SFA2_A_NUM_IMG_UNITS;

    nDisplayW = 8;
    nFileAmt = 1;

    //Set the image out display type
    DisplayType = DISP_DEF;
    pButtonLabel = const_cast<TCHAR*>((TCHAR*)DEF_BUTTONLABEL_SFA2);
    m_nNumberOfColorOptions = ARRAYSIZE(DEF_BUTTONLABEL_SFA2);

    //Create the redirect buffer
    rgUnitRedir = new UINT16[nUnitAmt + 1];
    memset(rgUnitRedir, NULL, sizeof(UINT16) * nUnitAmt);

    //Create the file changed flag
    rgFileChanged = new UINT16;

    nRGBIndexAmt = 15;
    nAIndexAmt = 0;

    nRGBIndexMul = 17.0f;
    nAIndexMul = 0.0f;
}

CGame_SFA2_A::~CGame_SFA2_A(void)
{
    safe_delete_array(CGame_SFA2_A::SFA2_A_EXTRA_CUSTOM_07);
    safe_delete_array(CGame_SFA2_A::SFA2_A_EXTRA_CUSTOM_08);
    ClearDataBuffer();
    //Get rid of the file changed flag
    safe_delete(rgFileChanged);
}

int CGame_SFA2_A::GetExtraCt(UINT16 nUnitId, BOOL bCountVisibleOnly)
{
    if (UsePaletteSetForCharacters())
    {
        if (rgExtraCountAll_07[0] == -1)
        {
            int nDefCtr = 0;
            memset(rgExtraCountAll_07, 0, (SFA2_A_NUM_IND_07 + 1) * sizeof(int));

            stExtraDef* pCurrDef = GetExtraDefForSFA2(0);

            while (pCurrDef->uUnitN != INVALID_UNIT_VALUE)
            {
                rgExtraCountAll_07[pCurrDef->uUnitN]++;

                nDefCtr++;
                pCurrDef = GetExtraDefForSFA2(nDefCtr);
            }
        }

        return rgExtraCountAll_07[nUnitId];
    }
    else
    {
        if (rgExtraCountAll_08[0] == -1)
        {
            int nDefCtr = 0;
            memset(rgExtraCountAll_08, 0, (SFA2_A_NUM_IND_08 + 1) * sizeof(int));

            stExtraDef* pCurrDef = GetExtraDefForSFA2(0);

            while (pCurrDef->uUnitN != INVALID_UNIT_VALUE)
            {
                rgExtraCountAll_08[pCurrDef->uUnitN]++;

                nDefCtr++;
                pCurrDef = GetExtraDefForSFA2(nDefCtr);
            }
        }

        return rgExtraCountAll_08[nUnitId];
    }
}

int CGame_SFA2_A::GetExtraLoc(UINT16 nUnitId)
{
    if (UsePaletteSetForCharacters())
    {
        if (rgExtraLoc_07[0] == -1)
        {
            int nDefCtr = 0;
            int nCurrUnit = UNIT_START_VALUE;
            memset(rgExtraLoc_07, 0, (SFA2_A_NUM_IND_07 + 1) * sizeof(int));

            stExtraDef* pCurrDef = GetExtraDefForSFA2(0);

            while (pCurrDef->uUnitN != INVALID_UNIT_VALUE)
            {
                if (pCurrDef->uUnitN != nCurrUnit)
                {
                    rgExtraLoc_07[pCurrDef->uUnitN] = nDefCtr;
                    nCurrUnit = pCurrDef->uUnitN;
                }

                nDefCtr++;
                pCurrDef = GetExtraDefForSFA2(nDefCtr);
            }
        }

        return rgExtraLoc_07[nUnitId];
    }
    else
    {
        if (rgExtraLoc_08[0] == -1)
        {
            int nDefCtr = 0;
            int nCurrUnit = UNIT_START_VALUE;
            memset(rgExtraLoc_08, 0, (SFA2_A_NUM_IND_08 + 1) * sizeof(int));

            stExtraDef* pCurrDef = GetExtraDefForSFA2(0);

            while (pCurrDef->uUnitN != INVALID_UNIT_VALUE)
            {
                if (pCurrDef->uUnitN != nCurrUnit)
                {
                    rgExtraLoc_08[pCurrDef->uUnitN] = nDefCtr;
                    nCurrUnit = pCurrDef->uUnitN;
                }

                nDefCtr++;
                pCurrDef = GetExtraDefForSFA2(nDefCtr);
            }
        }

        return rgExtraLoc_08[nUnitId];
    }
}

CDescTree* CGame_SFA2_A::GetMainTree()
{
    if (UsePaletteSetForCharacters())
    {
        return &CGame_SFA2_A::MainDescTree_07;;
    }
    else
    {
        return &CGame_SFA2_A::MainDescTree_08;
    }
}

sDescTreeNode* CGame_SFA2_A::InitDescTree(int nROMPaletteSetToUse)
{
    UINT32 nTotalPaletteCount = 0;
    m_nSFA2SelectedRom = nROMPaletteSetToUse;

    //Load extra file if we're using it
    if (UsePaletteSetForCharacters())
    {
        LoadExtraFileForGame(EXTRA_FILENAME_SFA2_07, SFA2_A_EXTRA, &SFA2_A_EXTRA_CUSTOM_07, SFA2_A_EXTRALOC_07, m_nConfirmedROMSize);
    }
    else
    {
        LoadExtraFileForGame(EXTRA_FILENAME_SFA2_08, SFA2_A_EXTRA, &SFA2_A_EXTRA_CUSTOM_08, SFA2_A_EXTRALOC_08, m_nConfirmedROMSize);
    }

    bool fHaveExtras = (GetExtraCt(UsePaletteSetForCharacters() ? SFA2_A_EXTRALOC_07 : SFA2_A_EXTRALOC_08) > 0);
    UINT16 nUnitCt = (UsePaletteSetForCharacters() ? SFA2_A_NUM_IND_07 : SFA2_A_NUM_IND_08) + (fHaveExtras ? 1 : 0);

    sDescTreeNode* NewDescTree = new sDescTreeNode;

    //Create the main character tree
    _stprintf(NewDescTree->szDesc, _T("%s"), g_GameFriendlyName[SFA2_A]);
    NewDescTree->ChildNodes = new sDescTreeNode[nUnitCt];
    NewDescTree->uChildAmt = nUnitCt;
    //All units have tree children
    NewDescTree->uChildType = DESC_NODETYPE_TREE;

    CString strMsg;
    strMsg.Format(_T("CGame_SFA2_A::InitDescTree: Building desc tree for SFA2 ROM %u %s extras...\n"), m_nSFA2SelectedRom, fHaveExtras ? _T("with") : _T("without"));
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

        if (UsePaletteSetForCharacters() ? (iUnitCtr < SFA2_A_EXTRALOC_07) : (iUnitCtr < SFA2_A_EXTRALOC_08))
        {
            //Set each description
            _stprintf(UnitNode->szDesc, _T("%s"), UsePaletteSetForCharacters() ? SFA2_A_UNITS_07[iUnitCtr].szDesc : SFA2_A_UNITS_08[iUnitCtr].szDesc);
            UnitNode->ChildNodes = new sDescTreeNode[nUnitChildCount];
            //All children have collection trees
            UnitNode->uChildType = DESC_NODETYPE_TREE;
            UnitNode->uChildAmt = nUnitChildCount;

#if SFA2_DEBUG
            strMsg.Format(_T("Unit: \"%s\", %u of %u (%s), %u total children\n"), UnitNode->szDesc, iUnitCtr + 1, nUnitCt, bUseExtra ? _T("with extras") : _T("no extras"), nUnitChildCount);
            OutputDebugString(strMsg);
#endif

            UINT16 nTotalPalettesUsedInUnit = 0;

            //Set data for each child group ("collection")
            for (UINT16 iCollectionCtr = 0; iCollectionCtr < nUnitChildCount; iCollectionCtr++)
            {
                CollectionNode = &((sDescTreeNode*)UnitNode->ChildNodes)[iCollectionCtr];

                //Set each collection data

                // Default label, since these aren't associated to collections
                _stprintf(CollectionNode->szDesc, GetDescriptionForCollection(iUnitCtr, iCollectionCtr));
                //Collection children have nodes
                UINT16 nListedChildrenCount = GetNodeCountForCollection(iUnitCtr, iCollectionCtr);
                CollectionNode->uChildType = DESC_NODETYPE_NODE;
                CollectionNode->uChildAmt = nListedChildrenCount;
                CollectionNode->ChildNodes = (sDescTreeNode*)new sDescNode[nListedChildrenCount];

#if SFA2_DEBUG
                strMsg.Format(_T("\tCollection: \"%s\", %u of %u, %u children\n"), CollectionNode->szDesc, iCollectionCtr + 1, nUnitChildCount, nListedChildrenCount);
                OutputDebugString(strMsg);
#endif

                const sGame_PaletteDataset* paletteSetToUse = GetPaletteSet(iUnitCtr, iCollectionCtr);

                //Set each collection's extra nodes: convert the sGame_PaletteDataset to sDescTreeNodes
                for (UINT16 nNodeIndex = 0; nNodeIndex < nListedChildrenCount; nNodeIndex++)
                {
                    ChildNode = &((sDescNode*)CollectionNode->ChildNodes)[nNodeIndex];

                    _stprintf(ChildNode->szDesc, _T("%s"), paletteSetToUse[nNodeIndex].szPaletteName);

                    ChildNode->uUnitId = iUnitCtr; // but this doesn't work in the new layout does it...?
                    ChildNode->uPalId = nTotalPalettesUsedInUnit++;
                    nTotalPaletteCount++;

#if SFA2_DEBUG
                    strMsg.Format(_T("\t\tPalette: \"%s\", %u of %u"), ChildNode->szDesc, nNodeIndex + 1, nListedChildrenCount);
                    OutputDebugString(strMsg);
                    strMsg.Format(_T(", 0x%06x to 0x%06x (%u colors),"), paletteSetToUse[nNodeIndex].nPaletteOffset, paletteSetToUse[nNodeIndex].nPaletteOffsetEnd, (paletteSetToUse[nNodeIndex].nPaletteOffsetEnd - paletteSetToUse[nNodeIndex].nPaletteOffset) / 2);
                    OutputDebugString(strMsg);

                    if (paletteSetToUse[nNodeIndex].indexImgToUse != INVALID_UNIT_VALUE)
                    {
                        strMsg.Format(_T(" image unit 0x%02x image index 0x%02x.\n"), paletteSetToUse[nNodeIndex].indexImgToUse, paletteSetToUse[nNodeIndex].indexOffsetToUse);
                    }
                    else
                    {
                        strMsg.Format(_T(" no image available.\n"));
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
            _stprintf(UnitNode->szDesc, _T("Extra Palettes"));
            UnitNode->ChildNodes = new sDescTreeNode[1];
            UnitNode->uChildType = DESC_NODETYPE_TREE;
            UnitNode->uChildAmt = 1;

#if SFA2_DEBUG
            strMsg.Format(_T("Unit (Extras): %s, %u of %u, %u total children\n"), UnitNode->szDesc, iUnitCtr + 1, nUnitCt, nUnitChildCount);
            OutputDebugString(strMsg);
#endif
        }

        //Set up extra nodes
        if (bUseExtra)
        {
            int nExtraPos = GetExtraLoc(iUnitCtr);
            int nCurrExtra = 0;

            CollectionNode = &((sDescTreeNode*)UnitNode->ChildNodes)[((UsePaletteSetForCharacters() ? SFA2_A_EXTRALOC_07 : SFA2_A_EXTRALOC_08) > iUnitCtr) ? (nUnitChildCount - 1) : 0]; //Extra node
            _stprintf(CollectionNode->szDesc, _T("Extra"));

            CollectionNode->ChildNodes = new sDescTreeNode[nExtraCt];

            CollectionNode->uChildType = DESC_NODETYPE_NODE;
            CollectionNode->uChildAmt = nExtraCt; //EX + Extra

#if SFA2_DEBUG
            strMsg.Format(_T("\tCollection: %s, %u of %u, %u children\n"), CollectionNode->szDesc, 1, nUnitChildCount, nExtraCt);
            OutputDebugString(strMsg);
#endif

            for (UINT16 nExtraCtr = 0; nExtraCtr < nExtraCt; nExtraCtr++)
            {
                ChildNode = &((sDescNode*)CollectionNode->ChildNodes)[nExtraCtr];

                stExtraDef* pCurrDef = GetExtraDefForSFA2(nExtraPos + nCurrExtra);

                while (pCurrDef->isInvisible)
                {
                    nCurrExtra++;

                    pCurrDef = GetExtraDefForSFA2(nExtraPos + nCurrExtra);
                }

                _stprintf(ChildNode->szDesc, pCurrDef->szDesc);

                ChildNode->uUnitId = iUnitCtr;
                ChildNode->uPalId = ((((UsePaletteSetForCharacters() ? SFA2_A_EXTRALOC_07 : SFA2_A_EXTRALOC_08) > iUnitCtr) ? 1 : 0) * nUnitChildCount * 2) + nCurrExtra;

#if SFA2_DEBUG
                strMsg.Format(_T("\t\tPalette: %s, %u of %u\n"), ChildNode->szDesc, nExtraCtr + 1, nExtraCt);
                OutputDebugString(strMsg);
#endif

                nCurrExtra++;
                nTotalPaletteCount++;
            }
        }
    }

    strMsg.Format(_T("CGame_SFA2_A::InitDescTree: Loaded %u palettes for SFA2 ROM %u\n"), nTotalPaletteCount, m_nSFA2SelectedRom);
    OutputDebugString(strMsg);

    if (UsePaletteSetForCharacters())
    {
        m_nTotalPaletteCountForSFA2_07 = nTotalPaletteCount;
    }
    else
    {
        m_nTotalPaletteCountForSFA2_08 = nTotalPaletteCount;
    }

    // For development use to speed things up
    static bool s_fShouldOutputOnce = false;

    if (s_fShouldOutputOnce)
    {
        s_fShouldOutputOnce = false;
        DumpPaletteHeaders();
    }

    return NewDescTree;
}

struct sSFA2_A_PaletteData
{
    LPCTSTR pszCharacterName = nullptr;
    UINT32 nROMOffset = 0;
    LPCTSTR pszImageSet = _T("indexCPS2_SFA3Assets"); // SFA2_Unique
    UINT32 nImageSetIndex = 0;
};

const sSFA2_A_PaletteData SFA2_A_CharacterPalettes[] =
{
    { _T("Ryu"),    0x6e2c0 + (0x3c0 * 0), _T("indexCPS2_Ryu") }, // Ryu
    { _T("Ken"),    0x6e2c0 + (0x3c0 * 1), _T("indexCPS2_Ken") }, // Ken
    { _T("Akuma"),  0x6e2c0 + (0x3c0 * 2), _T("indexCPS2_Akuma") }, // Akuma
    { _T("Charlie"), 0x6e2c0 + (0x3c0 * 3), _T("indexCPS2_Charlie") }, // Charlie
    { _T("Chun-Li"), 0x6e2c0 + (0x3c0 * 4), _T("indexCPS2_ChunLi"), 0x0c }, // Chun
    { _T("Adon"),   0x6e2c0 + (0x3c0 * 5), _T("indexCPS2_Adon") }, // Adon
    { _T("Sodom"),  0x6e2c0 + (0x3c0 * 6), _T("indexCPS2_Sodom") }, // Sodom
    { _T("Guy"),    0x6e2c0 + (0x3c0 * 7), _T("indexCPS2_Guy") }, // Guy
    { _T("Birdie"), 0x6e2c0 + (0x3c0 * 8), _T("indexCPS2_Birdie") }, // Birdie
    { _T("Rose"),   0x6e2c0 + (0x3c0 * 9), _T("indexCPS2_Rose") }, // Rose
    { _T("M.Bison"), 0x6e2c0 + (0x3c0 * 10), _T("indexCPS2_Bison") }, // Dict
    { _T("Sagat"),  0x6e2c0 + (0x3c0 * 11), _T("indexCPS2_Sagat") }, // Sagat
    { _T("Dan"),    0x6e2c0 + (0x3c0 * 12), _T("indexCPS2_Dan") }, // Dan
    { _T("Sakura"), 0x6e2c0 + (0x3c0 * 13), _T("indexCPS2_Sakura") }, // Sakura
    { _T("Rolento"), 0x6e2c0 + (0x3c0 * 14), _T("indexCPS2_Rolento") }, // Rolento
    { _T("Dhalsim"), 0x6e2c0 + (0x3c0 * 15), _T("indexCPS2_Dhalsim") }, // Dhalsim
    { _T("Zangief"), 0x6e2c0 + (0x3c0 * 16), _T("indexCPS2_Zangief") }, // Zangief
    { _T("Gen"),    0x6e2c0 + (0x3c0 * 17), _T("indexCPS2_Gen") }, // Gen

    { _T("Chun-Li (Original)"),   0x6e2c0 + (0x3c0 * 18), _T("indexCPS2_ChunLi") }, // Chun
    { _T("Gen (alt costume)"),       0x6e2c0 + (0x3c0 * 19), _T("indexCPS2_Gen") }, // Gen
//  { _T("Shin Gouki (alt costume)"),    0x6e2c0 + (0x3c0 * 20), _T("indexCPS2_Gen") }, // Gen
};

struct sSFA2_A_EffectPaletteData
{
    LPCTSTR pszCharacterName = nullptr;
    LPCTSTR pszEffectName = nullptr;
    UINT32 nROMOffset = 0;
    LPCTSTR pszImageSet = _T("indexCPS2_SFA3Assets"); // SFA2_Unique
    UINT32 nImageSetIndex = 0;
    UINT16 nEffectCount = 1;
};

const sSFA2_A_EffectPaletteData SFA2_EffectsPaletteSets[] =
{
    { _T("Akuma"),      _T("Extra"),            0x1adc0, _T("indexCPS2_Akuma"), 0, 5 },
    { _T("Birdie"),     _T("Bullrush"),         0x1b180, _T("indexCPS2_Birdie"), 0, 3 },
    { _T("Rose"),       _T("Dress winpose"),    0x1b3c0, _T("indexCPS2_Rose"), 1, 1 },
    { _T("M.Bison"),    _T("Teleport"),         0x1b480, _T("indexCPS2_Bison"), 0, 4 },
    // Dan: single entry at 0x1b780
    { _T("Dhalsim"),    _T("Teleport"),         0x1b820, _T("indexCPS2_Dhalsim"), 0, 5 },
    // Single entry : { _T("Shin Akuma"), _T("Teleport"),         0x1bbe0, _T("indexCPS2_Akuma"), 0, 5 },
    { _T("Evil Ryu"),   _T("Extra"),            0x1bc80, _T("indexCPS2_Ryu"), 0, 5 },
};

const sSFA2_A_PaletteData SFA2_A_PortraitPalettes[] =
{
    { _T("Ryu"),        0x1c7c0 + (0x60 *  0), _T("indexCPS2_SFA2Portraits"), indexCPS2_Ryu },
    { _T("Ken"),        0x1c7c0 + (0x60 *  1), _T("indexCPS2_SFA2Portraits"), indexCPS2_Ken },
    { _T("Akuma"),      0x1c7c0 + (0x60 *  2), _T("indexCPS2_SFA2Portraits"), indexCPS2_Akuma },
    { _T("Charlie"),    0x1c7c0 + (0x60 *  3), _T("indexCPS2_SFA2Portraits"), indexCPS2_Charlie },
    { _T("Chun-Li"),    0x1c7c0 + (0x60 *  4), _T("indexCPS2_SFA2Portraits"), indexCPS2_ChunLi },
    { _T("Adon"),       0x1c7c0 + (0x60 *  5), _T("indexCPS2_SFA2Portraits"), indexCPS2_Adon },
    { _T("Sodom"),      0x1c7c0 + (0x60 *  6), _T("indexCPS2_SFA2Portraits"), indexCPS2_Sodom },
    { _T("Guy"),        0x1c7c0 + (0x60 *  7), _T("indexCPS2_SFA2Portraits"), indexCPS2_Guy },
    { _T("Birdie"),     0x1c7c0 + (0x60 *  8), _T("indexCPS2_SFA2Portraits"), indexCPS2_Birdie },
    { _T("Rose"),       0x1c7c0 + (0x60 *  9), _T("indexCPS2_SFA2Portraits"), indexCPS2_Rose },
    { _T("M.Bison"),    0x1c7c0 + (0x60 * 10), _T("indexCPS2_SFA2Portraits"), indexCPS2_Bison },
    { _T("Sagat"),      0x1c7c0 + (0x60 * 11), _T("indexCPS2_SFA2Portraits"), indexCPS2_Sagat },
    { _T("Dan"),        0x1c7c0 + (0x60 * 12), _T("indexCPS2_SFA2Portraits"), indexCPS2_Dan },
    { _T("Sakura"),     0x1c7c0 + (0x60 * 13), _T("indexCPS2_SFA2Portraits"), indexCPS2_Sakura },
    { _T("Rolento"),    0x1c7c0 + (0x60 * 14), _T("indexCPS2_SFA2Portraits"), indexCPS2_Rolento },
    { _T("Dhalsim"),    0x1c7c0 + (0x60 * 15), _T("indexCPS2_SFA2Portraits"), indexCPS2_Dhalsim },
    { _T("Zangief"),    0x1c7c0 + (0x60 * 16), _T("indexCPS2_SFA2Portraits"), indexCPS2_Zangief },
    { _T("Gen"),        0x1c7c0 + (0x60 * 17), _T("indexCPS2_SFA2Portraits"), indexCPS2_Gen },
    { _T("Chun-Li (Original)"),   0x1c7c0 + (0x60 * 18), _T("indexCPS2_SFA2Portraits"), indexCPS2_ChunLi + 1 },
};

const LPCTSTR SFA2_ColorOptionNames[] =
{
    _T("Punch"),
    _T("Kick"),
    _T("2 Punches"),
    _T("2 Kicks"),
    _T("Auto Guard Punch"),
    _T("Auto Guard Kick"),
};

const LPCTSTR SFA2_StatusEffectNames[] =
{
    _T("Burned 1"),
    _T("Burned 2"),
    _T("Psycho Power Burned 1"),
    _T("Psycho Power Burned 2"),
    _T("Punch CC Shadow 1"),
    _T("Punch CC Shadow 2"),
    _T("Kick CC Shadow 1"),
    _T("Kick CC Shadow 2"),
    _T("2 Punches CC Shadow 1"),
    _T("2 Punches CC Shadow 2"),
    _T("2 Kicks CC Shadow 1"),
    _T("2 Kicks CC Shadow 2"),
    _T("Auto Guard Punch CC Shadow 1"),
    _T("Auto Guard Punch CC Shadow 2"),
    _T("Auto Guard Kick CC Shadow 1"),
    _T("Auto Guard Kick CC Shadow 2"),
};

void CGame_SFA2_A::DumpPaletteHeaders()
{
    CString strOutput;
    const UINT16 nColorOptionsPerCharacter = 6;
    constexpr UINT32 SFA2_PALETTE_LENGTH = 0x20;

    bool fShouldDumpPalettesFor7 = false;

    if (fShouldDumpPalettesFor7)
    {
        const UINT32 nStatusEffectBase = 0x72e60;
        const UINT16 nCountStatusEffects = 16; // ... O_o
        const UINT16 nPalettesPerColor = 5;

        for (UINT16 nCharIndex = 0; nCharIndex < ARRAYSIZE(SFA2_A_CharacterPalettes); nCharIndex++)
        {
            TCHAR szCodeDesc[MAX_DESCRIPTION_LENGTH];
            StrRemoveNonASCII(szCodeDesc, ARRAYSIZE(szCodeDesc), SFA2_A_CharacterPalettes[nCharIndex].pszCharacterName);

            for (UINT16 nColorIndex = 0; nColorIndex < nColorOptionsPerCharacter; nColorIndex++)
            {
                TCHAR szColorOptionCodeDesc[MAX_DESCRIPTION_LENGTH];
                StrRemoveNonASCII(szColorOptionCodeDesc, ARRAYSIZE(szColorOptionCodeDesc), SFA2_ColorOptionNames[nColorIndex]);

                strOutput.Format(_T("const sGame_PaletteDataset SFA2_A_%s_%s_PALETTES[] = \r\n{\r\n"), szCodeDesc, szColorOptionCodeDesc);
                OutputDebugString(strOutput);

                UINT32 nCurrentOffset = SFA2_A_CharacterPalettes[nCharIndex].nROMOffset + (nColorIndex * (SFA2_PALETTE_LENGTH * nPalettesPerColor));
                strOutput.Format(_T("    { _T(\"%s\"), 0x%x, 0x%x, %s, 0x%02x },\r\n"), SFA2_ColorOptionNames[nColorIndex], nCurrentOffset, nCurrentOffset + SFA2_PALETTE_LENGTH, SFA2_A_CharacterPalettes[nCharIndex].pszImageSet, SFA2_A_CharacterPalettes[nCharIndex].nImageSetIndex);
                OutputDebugString(strOutput);

                for (UINT16 nMoveIndex = 1; nMoveIndex < nPalettesPerColor; nMoveIndex++)
                {
                    nCurrentOffset += SFA2_PALETTE_LENGTH;
                    strOutput.Format(_T("    { _T(\"%s Extra %u\"), 0x%x, 0x%x, %s, 0x%02x },\r\n"), SFA2_ColorOptionNames[nColorIndex], nMoveIndex, nCurrentOffset, nCurrentOffset + SFA2_PALETTE_LENGTH, SFA2_A_CharacterPalettes[nCharIndex].pszImageSet, SFA2_A_CharacterPalettes[nCharIndex].nImageSetIndex);
                    OutputDebugString(strOutput);
                }

                OutputDebugString(_T("};\r\n\r\n"));
            }

            strOutput.Format(_T("const sGame_PaletteDataset SFA2_A_%s_STATUS_PALETTES[] = \r\n{\r\n"), szCodeDesc);
            OutputDebugString(strOutput);

            // Status effects
            for (UINT16 nStatusIndex = 0; nStatusIndex < nCountStatusEffects; nStatusIndex++)
            {
                UINT32 nCurrentOffset = 0x72e60 + (nStatusIndex * SFA2_PALETTE_LENGTH) + (nCharIndex * (nCountStatusEffects * SFA2_PALETTE_LENGTH));
                strOutput.Format(_T("    { _T(\"%s\"), 0x%x, 0x%x, %s, 0x%02x },\r\n"), SFA2_StatusEffectNames[nStatusIndex], nCurrentOffset, nCurrentOffset + SFA2_PALETTE_LENGTH, SFA2_A_CharacterPalettes[nCharIndex].pszImageSet, SFA2_A_CharacterPalettes[nCharIndex].nImageSetIndex);
                OutputDebugString(strOutput);
            }

            OutputDebugString(_T("};\r\n\r\n"));
        }

        for (UINT16 nCharIndex = 0; nCharIndex < ARRAYSIZE(SFA2_A_CharacterPalettes); nCharIndex++)
        {
            TCHAR szCodeDesc[MAX_DESCRIPTION_LENGTH];
            StrRemoveNonASCII(szCodeDesc, ARRAYSIZE(szCodeDesc), SFA2_A_CharacterPalettes[nCharIndex].pszCharacterName);

            strOutput.Format(_T("const sDescTreeNode SFA2_A_%s_COLLECTION[] = \r\n{\r\n"), szCodeDesc);
            OutputDebugString(strOutput);

            for (UINT16 nColorIndex = 0; nColorIndex < nColorOptionsPerCharacter; nColorIndex++)
            {
                TCHAR szColorOptionCodeDesc[MAX_DESCRIPTION_LENGTH];
                StrRemoveNonASCII(szColorOptionCodeDesc, ARRAYSIZE(szColorOptionCodeDesc), SFA2_ColorOptionNames[nColorIndex]);

                strOutput.Format(_T("    { _T(\"%s\"), DESC_NODETYPE_TREE, (void*)SFA2_A_%s_%s_PALETTES, ARRAYSIZE(SFA2_A_%s_%s_PALETTES) },\r\n"), SFA2_ColorOptionNames[nColorIndex], szCodeDesc, szColorOptionCodeDesc, szCodeDesc, szColorOptionCodeDesc);
                OutputDebugString(strOutput);
            }

            strOutput.Format(_T("    { _T(\"Status Effects\"), DESC_NODETYPE_TREE, (void*)SFA2_A_%s_STATUS_PALETTES, ARRAYSIZE(SFA2_A_%s_STATUS_PALETTES) },\r\n"), szCodeDesc, szCodeDesc);
            OutputDebugString(strOutput);
            OutputDebugString(_T("};\r\n\r\n"));
        }
    }

    // ROM8 headers
    OutputDebugString(_T("\n\nHeaders for ROM8 data...\n\n"));

    for (UINT16 nCharIndex = 0; nCharIndex < ARRAYSIZE(SFA2_EffectsPaletteSets); nCharIndex++)
    {
        TCHAR szCodeDesc[MAX_DESCRIPTION_LENGTH];
        StrRemoveNonASCII(szCodeDesc, ARRAYSIZE(szCodeDesc), SFA2_EffectsPaletteSets[nCharIndex].pszCharacterName);

        for (UINT16 nColorIndex = 0; nColorIndex < nColorOptionsPerCharacter; nColorIndex++)
        {
            TCHAR szEffectCodeDescription[MAX_DESCRIPTION_LENGTH];
            StrRemoveNonASCII(szEffectCodeDescription, ARRAYSIZE(szEffectCodeDescription), SFA2_ColorOptionNames[nColorIndex]);

            strOutput.Format(_T("const sGame_PaletteDataset SFA2_A_%s_%s_MOVE_PALETTES[] = \r\n{\r\n"), szCodeDesc, szEffectCodeDescription);
            OutputDebugString(strOutput);

            UINT32 nCurrentOffset = SFA2_EffectsPaletteSets[nCharIndex].nROMOffset + (nColorIndex * (SFA2_PALETTE_LENGTH * SFA2_EffectsPaletteSets[nCharIndex].nEffectCount));

            for (UINT16 nMoveIndex = 0; nMoveIndex < SFA2_EffectsPaletteSets[nCharIndex].nEffectCount; nMoveIndex++)
            {
                strOutput.Format(_T("    { _T(\"%s %u\"), 0x%x, 0x%x, %s, 0x%02x },\r\n"), SFA2_EffectsPaletteSets[nCharIndex].pszEffectName, nMoveIndex + 1, nCurrentOffset, nCurrentOffset + SFA2_PALETTE_LENGTH, SFA2_EffectsPaletteSets[nCharIndex].pszImageSet, SFA2_EffectsPaletteSets[nCharIndex].nImageSetIndex);
                OutputDebugString(strOutput);
                nCurrentOffset += SFA2_PALETTE_LENGTH;
            }

            OutputDebugString(_T("};\r\n\r\n"));
        }

        strOutput.Format(_T("const sDescTreeNode SFA2_A_%s_MOVE_COLLECTION[] = \r\n{\r\n"), szCodeDesc);
        OutputDebugString(strOutput);

        for (UINT16 nColorIndex = 0; nColorIndex < nColorOptionsPerCharacter; nColorIndex++)
        {
            TCHAR szColorOptionCodeDesc[MAX_DESCRIPTION_LENGTH];
            StrRemoveNonASCII(szColorOptionCodeDesc, ARRAYSIZE(szColorOptionCodeDesc), SFA2_ColorOptionNames[nColorIndex]);

            strOutput.Format(_T("    { _T(\"%s\"), DESC_NODETYPE_TREE, (void*)SFA2_A_%s_%s_MOVE_PALETTES, ARRAYSIZE(SFA2_A_%s_%s_MOVE_PALETTES) },\r\n"), SFA2_ColorOptionNames[nColorIndex], szCodeDesc, szColorOptionCodeDesc, szCodeDesc, szColorOptionCodeDesc);
            OutputDebugString(strOutput);
        }

        OutputDebugString(_T("};\r\n\r\n"));
    }

    const UINT32 SFA2_PORTRAIT_LENGTH = 0x60;
    const UINT32 SFA2_PORTRAIT_SET_LENGTH = 0x720;

    for (UINT16 nCharIndex = 0; nCharIndex < ARRAYSIZE(SFA2_A_PortraitPalettes); nCharIndex++)
    {
        TCHAR szCodeDesc[MAX_DESCRIPTION_LENGTH];
        StrRemoveNonASCII(szCodeDesc, ARRAYSIZE(szCodeDesc), SFA2_A_PortraitPalettes[nCharIndex].pszCharacterName);

        for (UINT16 nColorIndex = 0; nColorIndex < nColorOptionsPerCharacter; nColorIndex++)
        {
            TCHAR szColorOptionCodeDesc[MAX_DESCRIPTION_LENGTH];
            StrRemoveNonASCII(szColorOptionCodeDesc, ARRAYSIZE(szColorOptionCodeDesc), SFA2_ColorOptionNames[nColorIndex]);

            strOutput.Format(_T("const sGame_PaletteDataset SFA2_A_%s_%s_PORTRAIT_PALETTES[] = \r\n{\r\n"), szCodeDesc, szColorOptionCodeDesc);
            OutputDebugString(strOutput);

            UINT32 nCurrentOffset = SFA2_A_PortraitPalettes[nCharIndex].nROMOffset + (nColorIndex * SFA2_PORTRAIT_SET_LENGTH);

            strOutput.Format(_T("    { _T(\"%s Portrait\"), 0x%x, 0x%x, %s, 0x%02x },\r\n"), SFA2_A_PortraitPalettes[nCharIndex].pszCharacterName, nCurrentOffset, nCurrentOffset + SFA2_PORTRAIT_LENGTH,
                                                                                             SFA2_A_PortraitPalettes[nCharIndex].pszImageSet, SFA2_A_PortraitPalettes[nCharIndex].nImageSetIndex);
            OutputDebugString(strOutput);

            OutputDebugString(_T("};\r\n\r\n"));
        }

        strOutput.Format(_T("const sDescTreeNode SFA2_A_%s_PORTRAIT_COLLECTION[] = \r\n{\r\n"), szCodeDesc);
        OutputDebugString(strOutput);

        for (UINT16 nColorIndex = 0; nColorIndex < nColorOptionsPerCharacter; nColorIndex++)
        {
            TCHAR szColorOptionCodeDesc[MAX_DESCRIPTION_LENGTH];
            StrRemoveNonASCII(szColorOptionCodeDesc, ARRAYSIZE(szColorOptionCodeDesc), SFA2_ColorOptionNames[nColorIndex]);

            strOutput.Format(_T("    { _T(\"%s\"), DESC_NODETYPE_TREE, (void*)SFA2_A_%s_%s_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_%s_%s_PORTRAIT_PALETTES) },\r\n"), SFA2_ColorOptionNames[nColorIndex], szCodeDesc, szColorOptionCodeDesc, szCodeDesc, szColorOptionCodeDesc);
            OutputDebugString(strOutput);
        }

        OutputDebugString(_T("};\r\n\r\n"));
    }

    for (UINT16 nCharIndex = 0; nCharIndex < ARRAYSIZE(SFA2_A_PortraitPalettes); nCharIndex++)
    {
        TCHAR szCodeDesc[MAX_DESCRIPTION_LENGTH];
        StrRemoveNonASCII(szCodeDesc, ARRAYSIZE(szCodeDesc), SFA2_A_PortraitPalettes[nCharIndex].pszCharacterName);

        strOutput.Format(_T("    { _T(\"%s\"), DESC_NODETYPE_TREE, (void*)SFA2_A_%s_PORTRAIT_COLLECTION, ARRAYSIZE(SFA2_A_%s_PORTRAIT_COLLECTION) },\r\n"), SFA2_A_PortraitPalettes[nCharIndex].pszCharacterName, szCodeDesc, szCodeDesc);
        OutputDebugString(strOutput);
    }
}

sFileRule CGame_SFA2_A::GetRule(UINT16 nUnitId)
{
    sFileRule NewFileRule;

    _stprintf_s(NewFileRule.szFileName, MAX_FILENAME_LENGTH, (nUnitId == 7) ? _T("sz2.07") : _T("sz2.08"));

    NewFileRule.uUnitId = 0;
    NewFileRule.uVerifyVar = m_nGameROMSize;

    return NewFileRule;
}

UINT16 CGame_SFA2_A::GetCollectionCountForUnit(UINT16 nUnitId)
{
    if (UsePaletteSetForCharacters())
    {
        if (nUnitId == SFA2_A_EXTRALOC_07)
        {
            return GetExtraCt(nUnitId);
        }
        else
        {
            return SFA2_A_UNITS_07[nUnitId].uChildAmt;
        }
    }
    else
    {
        if (nUnitId == SFA2_A_EXTRALOC_08)
        {
            return GetExtraCt(nUnitId);
        }
        else
        {
            return SFA2_A_UNITS_08[nUnitId].uChildAmt;
        }
    }
}

UINT16 CGame_SFA2_A::GetNodeCountForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    if (UsePaletteSetForCharacters())
    {
        if (nUnitId == SFA2_A_EXTRALOC_07)
        {
            return GetExtraCt(nUnitId);
        }
        else
        {
            const sDescTreeNode* pCollectionNode = (const sDescTreeNode*)(SFA2_A_UNITS_07[nUnitId].ChildNodes);
            return pCollectionNode[nCollectionId].uChildAmt;
        }
    }
    else
    {
        if (nUnitId == SFA2_A_EXTRALOC_08)
        {
            return GetExtraCt(nUnitId);
        }
        else
        {
            const sDescTreeNode* pCollectionNode = (const sDescTreeNode*)(SFA2_A_UNITS_08[nUnitId].ChildNodes);
            return pCollectionNode[nCollectionId].uChildAmt;
        }
    }
}

LPCTSTR CGame_SFA2_A::GetDescriptionForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    if (UsePaletteSetForCharacters())
    {
        if (nUnitId == SFA2_A_EXTRALOC_07)
        {
            return _T("Extra Palettes");
        }
        else
        {
            const sDescTreeNode* pCollection = (const sDescTreeNode*)SFA2_A_UNITS_07[nUnitId].ChildNodes;
            return pCollection[nCollectionId].szDesc;
        }
    }
    else
    {
        if (nUnitId == SFA2_A_EXTRALOC_08)
        {
            return _T("Extra Palettes");
        }
        else
        {
            const sDescTreeNode* pCollection = (const sDescTreeNode*)SFA2_A_UNITS_08[nUnitId].ChildNodes;
            return pCollection[nCollectionId].szDesc;
        }
    }
}

UINT16 CGame_SFA2_A::GetPaletteCountForUnit(UINT16 nUnitId)
{
    if (UsePaletteSetForCharacters())
    {
        if (nUnitId == SFA2_A_EXTRALOC_07)
        {
            return GetExtraCt(nUnitId);
        }
        else
        {
            UINT16 nCompleteCount = 0;
            UINT16 nCollectionCount = SFA2_A_UNITS_07[nUnitId].uChildAmt;
            const sDescTreeNode* pCurrentCollection = (const sDescTreeNode*)(SFA2_A_UNITS_07[nUnitId].ChildNodes);

            for (UINT16 nCollectionIndex = 0; nCollectionIndex < nCollectionCount; nCollectionIndex++)
            {
                nCompleteCount += pCurrentCollection[nCollectionIndex].uChildAmt;
            }

#if SFA2_DEBUG
            CString strMsg;
            strMsg.Format(_T("CGame_SFA2_A::GetPaletteCountForUnit: %u for unit %u which has %u collections.\n"), nCompleteCount, nUnitId, nCollectionCount);
            OutputDebugString(strMsg);
#endif

            return nCompleteCount;
        }
    }
    else
    {
        if (nUnitId == SFA2_A_EXTRALOC_08)
        {
            return GetExtraCt(nUnitId);
        }
        else
        {
            UINT16 nCompleteCount = 0;
            UINT16 nCollectionCount = SFA2_A_UNITS_08[nUnitId].uChildAmt;
            const sDescTreeNode* pCurrentCollection = (const sDescTreeNode*)(SFA2_A_UNITS_08[nUnitId].ChildNodes);

            for (UINT16 nCollectionIndex = 0; nCollectionIndex < nCollectionCount; nCollectionIndex++)
            {
                nCompleteCount += pCurrentCollection[nCollectionIndex].uChildAmt;
            }

#if SFA2_DEBUG
            CString strMsg;
            strMsg.Format(_T("CGame_SFA2_A::GetPaletteCountForUnit: %u for unit %u which has %u collections.\n"), nCompleteCount, nUnitId, nCollectionCount);
            OutputDebugString(strMsg);
#endif

            return nCompleteCount;
        }
    }

}

const sGame_PaletteDataset* CGame_SFA2_A::GetPaletteSet(UINT16 nUnitId, UINT16 nCollectionId)
{
    // Don't use this for Extra palettes.
    if (UsePaletteSetForCharacters())
    {
        const sDescTreeNode* pCurrentSet = (const sDescTreeNode*)SFA2_A_UNITS_07[nUnitId].ChildNodes;
        return ((sGame_PaletteDataset*)(pCurrentSet[nCollectionId].ChildNodes));
    }
    else
    {
        const sDescTreeNode* pCurrentSet = (const sDescTreeNode*)SFA2_A_UNITS_08[nUnitId].ChildNodes;
        return ((sGame_PaletteDataset*)(pCurrentSet[nCollectionId].ChildNodes));
    }
}

const sGame_PaletteDataset* CGame_SFA2_A::GetSpecificPalette(UINT16 nUnitId, UINT16 nPaletteId)
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

UINT16 CGame_SFA2_A::GetNodeSizeFromPaletteId(UINT16 nUnitId, UINT16 nPaletteId)
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

const sDescTreeNode* CGame_SFA2_A::GetNodeFromPaletteId(UINT16 nUnitId, UINT16 nPaletteId, bool fReturnBasicNodesOnly)
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

        if (nUnitId == (UsePaletteSetForCharacters() ? SFA2_A_EXTRALOC_07 : SFA2_A_EXTRALOC_08))
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
            const sDescTreeNode* pCollectionNodeToCheck = (const sDescTreeNode*)(UsePaletteSetForCharacters() ? SFA2_A_UNITS_07[nUnitId].ChildNodes : SFA2_A_UNITS_08[nUnitId].ChildNodes);

            nNodeCount = pCollectionNodeToCheck[nCollectionIndex].uChildAmt;

            if (nDistanceFromZero < nNodeCount)
            {
                // We know it's within this group.  Now: is it basic?
                if (!fReturnBasicNodesOnly || (nCollectionIndex < 6)) // 3 sets of P/K Isms
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

void CGame_SFA2_A::InitDataBuffer()
{
    m_nBufferSelectedRom = m_nSFA2SelectedRom;
    pppDataBuffer = new UINT16 * *[nUnitAmt];
    memset(pppDataBuffer, NULL, sizeof(UINT16**) * nUnitAmt);
}

void CGame_SFA2_A::ClearDataBuffer()
{
    int nCurrentROMMode = m_nSFA2SelectedRom;

    m_nSFA2SelectedRom = m_nBufferSelectedRom;

    if (pppDataBuffer)
    {
        for (UINT16 nUnitCtr = 0; nUnitCtr < nUnitAmt; nUnitCtr++)
        {
            if (pppDataBuffer[nUnitCtr])
            {
                UINT16 nPalAmt = GetPaletteCountForUnit(nUnitCtr);

                for (UINT16 nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
                {
                    safe_delete_array(pppDataBuffer[nUnitCtr][nPalCtr]);
                }

                safe_delete_array(pppDataBuffer[nUnitCtr]);
            }
        }

        safe_delete_array(pppDataBuffer);
    }

    m_nSFA2SelectedRom = nCurrentROMMode;
}

void CGame_SFA2_A::LoadSpecificPaletteData(UINT16 nUnitId, UINT16 nPalId)
{
    if (nUnitId != (UsePaletteSetForCharacters() ? SFA2_A_EXTRALOC_07 : SFA2_A_EXTRALOC_08))
    {
        int cbPaletteSizeOnDisc = 0;
        const sGame_PaletteDataset* paletteData = GetSpecificPalette(nUnitId, nPalId);

        cbPaletteSizeOnDisc = (int)max(0, (paletteData->nPaletteOffsetEnd - paletteData->nPaletteOffset));

        nCurrPalOffs = paletteData->nPaletteOffset;

        if (UsePaletteSetForCharacters() && (m_currentSFA2ROMVersion == SFA2_960306))
        {
            // 0306 ROMs have a different location for palettes
            nCurrPalOffs -= 0x11e0;
        }
        else if (!UsePaletteSetForCharacters() && (m_currentSFA2ROMVersion == SFA2_960229))  //   229 starts at 0x1bb40, 306 at 0x1adc0
        {
            if (nCurrPalOffs < 0x1c7c0)
            {
                // Early bonus/extra range
                nCurrPalOffs += 0xD80;
            }
            else
            {
                // Later portrait range
                nCurrPalOffs += 0x900;
            }
        }

        m_nCurrentPaletteSize = cbPaletteSizeOnDisc / 2;
        m_pszCurrentPaletteName = paletteData->szPaletteName;
    }
    else // SFA2_A_EXTRALOC
    {
        // This is where we handle all the palettes added in via Extra.
        stExtraDef* pCurrDef = GetExtraDefForSFA2(GetExtraLoc(nUnitId) + nPalId);

        nCurrPalOffs = pCurrDef->uOffset;
        m_nCurrentPaletteSize = (pCurrDef->cbPaletteSize / 2);
        m_pszCurrentPaletteName = pCurrDef->szDesc;
    }

    m_nCurrentPaletteROMLocation = nCurrPalOffs;
}

SFA2_SupportedROMVersion CGame_SFA2_A::GetSFA2ROMVersion(CFile* LoadedFile)
{
    // There are a number of SFA2 ROMs floating around for different game versions.
    // We chiefly support 960229 and 960306.  Sniff the ROM to make sure we use the right logic.
    const size_t nFileLengthToCheck = 32;
    UINT16* prgFileStart = new UINT16[nFileLengthToCheck];
    SFA2_SupportedROMVersion detectedROMVersion = SFA2_960229;
    UINT16 rgSFA2_07_960229Start[nFileLengthToCheck] = {  0x0, 0x8, 0x0, 0x20,      0x775c, 0x0, 0x0, 0x0,
                                                          0x0, 0x8, 0x0, 0x20,      0x776c, 0x0, 0x0, 0x0,
                                                          0x0, 0x8, 0x0, 0x20,      0x774c, 0x0, 0x0, 0x0,
                                                          0x0, 0x8, 0x0, 0x20,      0x7714, 0x0, 0x0, 0x0 };

    UINT16 rgSFA2_07_960306Start[nFileLengthToCheck] = {  0xB, 0x0, 0x0, 0xff,              0x1f, 0xfff0, 0x4, 0x0,
                                                          0x20, 0x1358, 0x2222, 0x1800,     0x400,  0xb216, 0xa, 0x0,
                                                          0x0, 0xff, 0x4, 0x0,              0x20, 0x127c, 0x2020, 0x1900,
                                                          0x400, 0x3a16, 0x6, 0x0,          0x0, 0xff, 0x9, 0x0 };

    UINT16 rgSFA2_08_960229Start[nFileLengthToCheck] = { 0x111, 0x222, 0x333, 0x444,    0x555, 0x666, 0x777, 0x888,
                                                         0x999, 0xaaa, 0xbbb, 0xccc,    0xddd, 0xeee, 0xfff, 0x000,
                                                         0x111, 0x222, 0x333, 0x444,    0x555, 0x666, 0x777, 0x888,
                                                         0x999, 0xaaa, 0xbbb, 0xccc,    0xddd, 0xeee, 0xfff, 0x000 };

    UINT16 rgSFA2_08_960306Start[nFileLengthToCheck] = { 0x625, 0xfff, 0xffd, 0xdfa,    0xaf7, 0x6f4, 0x1e4, 0x1d9,
                                                         0x111, 0x333, 0x555, 0x888,    0xaaa, 0xccc, 0xfff, 0x000,
                                                         0x413, 0xfff, 0xfef, 0xece,    0xead, 0xe8d, 0xd6c, 0xc5b,
                                                         0x111, 0x333, 0x555, 0x888,    0xaaa, 0xccc, 0xfff, 0x000 };

    LoadedFile->Seek(UsePaletteSetForCharacters() ? 0 : 0xc0, CFile::begin);
    LoadedFile->Read(prgFileStart, nFileLengthToCheck * 2);

    bool fFoundMatch = true;

    UINT16* pSFA29_960229_Validation = UsePaletteSetForCharacters() ? rgSFA2_07_960229Start : rgSFA2_08_960229Start;
    UINT16* pSFA29_960306_Validation = UsePaletteSetForCharacters() ? rgSFA2_07_960306Start : rgSFA2_08_960306Start;

    for (UINT16 nIndex = 0; nIndex < nFileLengthToCheck; nIndex++)
    {
        if (prgFileStart[nIndex] != pSFA29_960229_Validation[nIndex])
        {
            detectedROMVersion = SFA2_960306;
            fFoundMatch = false;
            break;
        }
    }

    if (fFoundMatch)
    {
        OutputDebugString(_T("Confirming this is a 960229 ROM.\n"));
    }
    else
    {
        fFoundMatch = true;

        for (UINT16 nIndex = 0; nIndex < nFileLengthToCheck; nIndex++)
        {
            if (prgFileStart[nIndex] != pSFA29_960306_Validation[nIndex])
            {
                detectedROMVersion = SFA2_Unsupported;
                fFoundMatch = false;
                break;
            }
        }

        if (fFoundMatch)
        {
            OutputDebugString(_T("Confirming this is a 960306 ROM.\n"));
        }
        else
        {
            OutputDebugString(_T("This is an unknown SFA2 ROM.\n"));
            MessageBox(g_appHWnd, _T("This doesn't look like a supported SFA2 ROM.  We'll try, but if it doesn't look right please don't use this ROM."), GetHost()->GetAppName(), MB_ICONWARNING);
        }
    }

    safe_delete_array(prgFileStart);

    return detectedROMVersion;
}

BOOL CGame_SFA2_A::LoadFile(CFile* LoadedFile, UINT16 nUnitId)
{
    m_currentSFA2ROMVersion = GetSFA2ROMVersion(LoadedFile);

    for (UINT16 nUnitCtr = 0; nUnitCtr < nUnitAmt; nUnitCtr++)
    {
        UINT16 nPalAmt = GetPaletteCountForUnit(nUnitCtr);

        pppDataBuffer[nUnitCtr] = new UINT16 * [nPalAmt];

        rgUnitRedir[nUnitCtr] = nUnitCtr;

        for (UINT16 nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
        {
            LoadSpecificPaletteData(nUnitCtr, nPalCtr);

            pppDataBuffer[nUnitCtr][nPalCtr] = new UINT16[m_nCurrentPaletteSize];

            LoadedFile->Seek(nCurrPalOffs, CFile::begin);

            LoadedFile->Read(pppDataBuffer[nUnitCtr][nPalCtr], m_nCurrentPaletteSize * 2);
        }
    }

    rgUnitRedir[nUnitAmt] = INVALID_UNIT_VALUE;

    CheckForErrorsInTables();

    return TRUE;
}

BOOL CGame_SFA2_A::SaveFile(CFile* SaveFile, UINT16 nUnitId)
{
    UINT32 nTotalPalettesSaved = 0;
    bool fShownOnce = false;

    for (UINT16 nUnitCtr = 0; nUnitCtr < nUnitAmt; nUnitCtr++)
    {
        UINT16 nPalAmt = GetPaletteCountForUnit(nUnitCtr);

        for (UINT16 nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
        {
            LoadSpecificPaletteData(nUnitCtr, nPalCtr);

            if (!fShownOnce && (nCurrPalOffs < m_nLowestKnownPaletteRomLocation)) // This magic number is the lowest known ROM location.
            {
                CString strMsg;
                strMsg.Format(_T("Warning: Unit %u palette %u is trying to write to ROM location 0x%06x which is lower than we usually write to."), nUnitCtr, nPalCtr, nCurrPalOffs);
                MessageBox(g_appHWnd, strMsg, GetHost()->GetAppName(), MB_ICONERROR);
                fShownOnce = true;
            }

            SaveFile->Seek(nCurrPalOffs, CFile::begin);
            SaveFile->Write(pppDataBuffer[nUnitCtr][nPalCtr], m_nCurrentPaletteSize * 2);
            nTotalPalettesSaved++;
        }
    }

    CString strMsg;
    strMsg.Format(_T("CGame_SFA2_A::SaveFile: Saved 0x%x palettes to disk for %u units\n"), nTotalPalettesSaved, nUnitAmt);
    OutputDebugString(strMsg);

    return TRUE;
}

void CGame_SFA2_A::CreateDefPal(sDescNode* srcNode, UINT16 nSepId)
{
    UINT16 nUnitId = srcNode->uUnitId;
    UINT16 nPalId = srcNode->uPalId;
    static UINT16 s_nColorsPerPage = CRegProc::GetMaxPalettePageSize();

    LoadSpecificPaletteData(nUnitId, nPalId);

    const UINT8 nTotalPagesNeeded = (UINT8)ceil(m_nCurrentPaletteSize / s_nColorsPerPage);
    const bool fCanFitWithinCurrentPageLayout = (nTotalPagesNeeded <= MAX_PALETTE_PAGES);

    if (!fCanFitWithinCurrentPageLayout)
    {
        CString strWarning;
        strWarning.Format(_T("ERROR: The UI currently only supports %u pages. \"%s\" is trying to use %u pages which will not work.\n"), MAX_PALETTE_PAGES, srcNode->szDesc, nTotalPagesNeeded);
        OutputDebugString(strWarning);
    }

    BasePalGroup.AddPal(CreatePal(nUnitId, nPalId), m_nCurrentPaletteSize, nUnitId, nPalId);

    if (fCanFitWithinCurrentPageLayout && (m_nCurrentPaletteSize > s_nColorsPerPage))
    {
        CString strPageDescription;
        UINT16 nColorsRemaining = m_nCurrentPaletteSize;

        for (UINT16 nCurrentPage = 0; (nCurrentPage * s_nColorsPerPage) < m_nCurrentPaletteSize; nCurrentPage++)
        {
            strPageDescription.Format(_T("%s (%u/%u)"), srcNode->szDesc, nCurrentPage + 1, nTotalPagesNeeded);
            BasePalGroup.AddSep(0, strPageDescription, nCurrentPage * s_nColorsPerPage, min(s_nColorsPerPage, (DWORD)nColorsRemaining));
            nColorsRemaining -= s_nColorsPerPage;
        }
    }
    else
    {
        BasePalGroup.AddSep(nSepId, srcNode->szDesc, 0, m_nCurrentPaletteSize);
    }
}

BOOL CGame_SFA2_A::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
{
    //Reset palette sources
    ClearSrcPal();

    if (Node01 == -1)
    {
        return FALSE;
    }

    sDescNode* NodeGet = UsePaletteSetForCharacters() ? MainDescTree_07.GetDescNode(Node01, Node02, Node03, Node04) : MainDescTree_08.GetDescNode(Node01, Node02, Node03, Node04);

    if (NodeGet == nullptr)
    {
        return FALSE;
    }

    // Default values for multisprite image display for Export
    UINT16 nSrcStart = 0;
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
    if (m_nExtraUnit != NodeGet->uUnitId)
    {
        const sGame_PaletteDataset* paletteDataSet = GetSpecificPalette(NodeGet->uUnitId, NodeGet->uPalId);
        const sDescTreeNode* pCurrentNode = GetNodeFromPaletteId(NodeGet->uUnitId, NodeGet->uPalId, true);

        nSrcStart = NodeGet->uPalId;

        if (pCurrentNode) // For Basic nodes, we can allow multisprite view in the Export dialog
        {
            // Right now most of SFA2 is all six palettes within one node.
            if ((_tcsicmp(pCurrentNode->szDesc, SFA2_ColorOptionNames[0]) == 0) ||
                (_tcsicmp(pCurrentNode->szDesc, SFA2_ColorOptionNames[1]) == 0) ||
                (_tcsicmp(pCurrentNode->szDesc, SFA2_ColorOptionNames[2]) == 0) ||
                (_tcsicmp(pCurrentNode->szDesc, SFA2_ColorOptionNames[3]) == 0) ||
                (_tcsicmp(pCurrentNode->szDesc, SFA2_ColorOptionNames[4]) == 0) ||
                (_tcsicmp(pCurrentNode->szDesc, SFA2_ColorOptionNames[5]) == 0))
            {
                nSrcAmt = 6;
                nNodeIncrement = GetNodeSizeFromPaletteId(NodeGet->uUnitId, NodeGet->uPalId);

                while (nSrcStart >= nNodeIncrement)
                {
                    // The starting point is the absolute first palette for the sprite in question which is found in X-Ism 1
                    nSrcStart -= nNodeIncrement;
                }
            }
            else
            {
                // Status effects and etc have no peer palettes
                nSrcAmt = 1;
            }
        }

        if (paletteDataSet)
        {
            nImgUnitId = paletteDataSet->indexImgToUse;
            nTargetImgId = paletteDataSet->indexOffsetToUse;

            if (paletteDataSet->pPalettePairingInfo)
            {
                int nXOffs = 0, nYOffs = 0;
                UINT16 nPeerPaletteDistance = 1;
                UINT16 nPeerPaletteIdInNode = Node03;

                if (paletteDataSet->indexImgToUse == indexCPS2_Vega)
                {
                    fShouldUseAlternateLoadLogic = true;
                    nPeerPaletteDistance = paletteDataSet->pPalettePairingInfo->nNodeIncrementToPartner;
                    nPeerPaletteIdInNode += nPeerPaletteDistance;
                }

                UINT16 nPeerPaletteIdInUnit = NodeGet->uPalId + nPeerPaletteDistance;

                if (fShouldUseAlternateLoadLogic)
                {
                    const sGame_PaletteDataset* paletteDataSetToJoin = GetSpecificPalette(NodeGet->uUnitId, nPeerPaletteIdInUnit);

                    if (paletteDataSetToJoin)
                    {
                        ClearSetImgTicket(
                            CreateImgTicket(paletteDataSet->indexImgToUse, paletteDataSet->indexOffsetToUse,
                                CreateImgTicket(paletteDataSetToJoin->indexImgToUse, paletteDataSetToJoin->indexOffsetToUse, nullptr, nXOffs, nYOffs)
                            )
                        );

                        //Set each palette
                        sDescNode* JoinedNode[2] = {
                            MainDescTree_07.GetDescNode(NodeGet->uUnitId, Node02, Node03, -1),
                            MainDescTree_07.GetDescNode(NodeGet->uUnitId, Node02, nPeerPaletteIdInNode, -1)
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
    else
    {
        // We don't have multisprite export for Extras.
        nSrcAmt = 1;
        nNodeIncrement = 1;
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

COLORREF* CGame_SFA2_A::CreatePal(UINT16 nUnitId, UINT16 nPalId)
{
    LoadSpecificPaletteData(nUnitId, nPalId);

    COLORREF* NewPal = new COLORREF[m_nCurrentPaletteSize];

    for (UINT16 i = 0; i < m_nCurrentPaletteSize - 1; i++)
    {
        NewPal[i + 1] = ConvPal(pppDataBuffer[nUnitId][nPalId][i]) | 0xFF000000;
    }

    NewPal[0] = 0xFF000000;

    return NewPal;
}

void CGame_SFA2_A::UpdatePalData()
{
    for (int nPalCtr = 0; nPalCtr < MAX_PAL; nPalCtr++)
    {
        sPalDef* srcDef = BasePalGroup.GetPalDef(nPalCtr);

        if (srcDef->bAvail)
        {
            COLORREF* crSrc = srcDef->pPal;

            int nTotalColorsRemaining = srcDef->uPalSz;
            UINT16 nCurrentTotalWrites = 0;
            // Every 16 colors there is another counter WORD (color length) to preserve.
            const UINT16 nMaxSafeColorsToWrite = 16;
            const UINT16 iFixedCounterPosition = 0; // The lead 'color' is a counter and needs to be preserved.

            while (nTotalColorsRemaining > 0)
            {
                UINT16 nCurrentColorCountToWrite = min(nMaxSafeColorsToWrite, nTotalColorsRemaining);

                for (int nPICtr = 0; nPICtr < nCurrentColorCountToWrite; nPICtr++)
                {
                    if (nPICtr == iFixedCounterPosition)
                    {
                        continue;
                    }

                    UINT16 iCurrentArrayOffset = nPICtr + nCurrentTotalWrites;
                    pppDataBuffer[srcDef->uUnitId][srcDef->uPalId][iCurrentArrayOffset - 1] = (ConvCol(crSrc[iCurrentArrayOffset]) & 0x0FFF);
                }

                nCurrentTotalWrites += nMaxSafeColorsToWrite;
                nTotalColorsRemaining -= nMaxSafeColorsToWrite;
            }

            srcDef->bChanged = FALSE;
            rgFileChanged[0] = TRUE;
        }
    }
}

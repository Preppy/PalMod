#include "StdAfx.h"
#include "Game_SFA3_A.h"
#include "GameDef.h"
#include "..\PalMod.h"
#include "..\RegProc.h"

#define SFA3_DEBUG DEFAULT_GAME_DEBUG_STATE

stExtraDef* CGame_SFA3_A::SFA3_A_EXTRA_CUSTOM = nullptr;

CDescTree CGame_SFA3_A::MainDescTree = nullptr;

UINT32 CGame_SFA3_A::m_nTotalPaletteCountForSFA3 = 0;

int CGame_SFA3_A::rgExtraCountAll[SFA3_A_NUM_IND + 1] = { -1 };
int CGame_SFA3_A::rgExtraCountVisibleOnly[SFA3_A_NUM_IND + 1] = { -1 };
int CGame_SFA3_A::rgExtraLoc[SFA3_A_NUM_IND + 1] = { -1 };
UINT32 CGame_SFA3_A::m_nExpectedGameROMSize = 0x80000; // 524288 bytes
UINT32 CGame_SFA3_A::m_nConfirmedROMSize = -1;

void CGame_SFA3_A::InitializeStatics()
{
    safe_delete_array(CGame_SFA3_A::SFA3_A_EXTRA_CUSTOM);

    memset(rgExtraCountAll, -1, sizeof(rgExtraCountAll));
    memset(rgExtraCountVisibleOnly, -1, sizeof(rgExtraCountVisibleOnly));
    memset(rgExtraLoc, -1, sizeof(rgExtraLoc));

    MainDescTree.SetRootTree(CGame_SFA3_A::InitDescTree());
}

CGame_SFA3_A::CGame_SFA3_A(UINT32 nConfirmedROMSize)
{
    // We need this set before we initialize so that corrupt Extras truncate correctly.
    // Otherwise the new user inadvertently corrupts their ROM.
    m_nConfirmedROMSize = nConfirmedROMSize;
    InitializeStatics();

    //We need the proper unit amt before we init the main buffer
    nUnitAmt = SFA3_A_NUM_IND + (GetExtraCt(SFA3_A_EXTRALOC) ? 1 : 0);

    m_nTotalInternalUnits = SFA3_A_NUM_IND;
    m_nExtraUnit = SFA3_A_EXTRALOC;
    m_nSafeCountForThisRom = 1893 + GetExtraCt(SFA3_A_EXTRALOC);
    m_pszExtraFilename = EXTRA_FILENAME_SFA3;
    m_nTotalPaletteCount = m_nTotalPaletteCountForSFA3;
    m_nLowestKnownPaletteRomLocation = 0x2C000;

    createPalOptions = { SKIP_FIRST_COLOR, FORCE_ALPHA_ON_EVERY_COLOR, FORCE_ALPHA_ON_FIRST_COLOR };

    InitDataBuffer();

    //Set color mode
    SetColMode(ColMode::COLMODE_12A);

    //Set palette conversion mode
    BasePalGroup.SetMode(ePalType::PALTYPE_17);

    //Set game information
    nGameFlag = SFA3_A;
    nImgGameFlag = IMGDAT_SECTION_CPS2;
    nImgUnitAmt = SFA3_A_NUM_IMG_UNITS;

    nFileAmt = 1;

    //Set the image out display type
    DisplayType = eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT;
    pButtonLabelSet = DEF_BUTTONLABEL_ISMS;

    //Create the redirect buffer
    rgUnitRedir = new UINT16[nUnitAmt + 1];
    memset(rgUnitRedir, NULL, sizeof(UINT16) * nUnitAmt);

    //Create the file changed flag
    PrepChangeTrackingArray();
}

CGame_SFA3_A::~CGame_SFA3_A(void)
{
    safe_delete_array(CGame_SFA3_A::SFA3_A_EXTRA_CUSTOM);
    ClearDataBuffer();
    //Get rid of the file changed flag
    FlushChangeTrackingArray();
}

UINT32 CGame_SFA3_A::GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet, bool* pfNeedToValidateCRCs)
{
    static const sCRC32ValueSet knownROMs[] =
    {
        // Street Fighter Alpha 3 variants...
        { _T("SFA3 980904 (Arcade)"), _T("sz3.09c"), 0xb29e5199, 0 },
        { _T("SFA3 (Arcade)"), _T("sz3.09"), 0xc5589553, -0x28 }, 
        { _T("SFZ3 980726 (Japan Arcade)"), _T("sz3.09a"), 0x2180892, -0x28 },

        // We are aligned to the character sprites here, but not the portraits/stages.
        // Accordingly, we don't actually expose this in the file picker UI.
        { _T("SFA3 980616 (Prototype)"), _T("sz3-usam_09.8d"), 0x822fc451, 0x2ff9a },
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

#ifdef NOTES
    // These are the MAME values...
        ROM_START(sfa3) // 04/09/1998 (c) 1998 (USA)
        ROM_LOAD16_WORD_SWAP("sz3.09c", 0x300000, 0x80000, CRC(b29e5199) SHA1(c6c215eb5aa37f678a9cafcbd8620969fb5ca12f))

        ROM_START(sfa3u)    // 04/09/1998 (c) 1998 (USA)
        ROM_LOAD16_WORD_SWAP("sz3.09c", 0x300000, 0x80000, CRC(b29e5199) SHA1(c6c215eb5aa37f678a9cafcbd8620969fb5ca12f))

        ROM_START(sfz3j)    // 04/09/1998 (c) 1998 (Japan)
        ROM_LOAD16_WORD_SWAP("sz3.09c", 0x300000, 0x80000, CRC(b29e5199) SHA1(c6c215eb5aa37f678a9cafcbd8620969fb5ca12f))

        ROM_START(sfz3a)    // 04/09/1998 (c) 1998 (Asia)
        ROM_LOAD16_WORD_SWAP("sz3.09c", 0x300000, 0x80000, CRC(b29e5199) SHA1(c6c215eb5aa37f678a9cafcbd8620969fb5ca12f))

        ROM_START(sfa3h)    // 04/09/1998 (c) 1998 (Hispanic)
        ROM_LOAD16_WORD_SWAP("sz3.09c", 0x300000, 0x80000, CRC(b29e5199) SHA1(c6c215eb5aa37f678a9cafcbd8620969fb5ca12f))


        ROM_START(sfa3ur1)  // 29/06/1998 (c) 1998 (USA)
        ROM_LOAD16_WORD_SWAP("sz3.09", 0x300000, 0x80000, CRC(c5589553) SHA1(cda1fdc2ab2f390a2358defd9923a2796093926d))

        ROM_START(sfz3jr2)  // 29/06/1998 (c) 1998 (Japan)
        ROM_LOAD16_WORD_SWAP("sz3.09", 0x300000, 0x80000, CRC(c5589553) SHA1(cda1fdc2ab2f390a2358defd9923a2796093926d))

        ROM_START(sfz3ar1)  // 01/07/1998 (c) 1998 (Asia)
        ROM_LOAD16_WORD_SWAP("sz3.09", 0x300000, 0x80000, CRC(c5589553) SHA1(cda1fdc2ab2f390a2358defd9923a2796093926d))

        ROM_START(sfa3hr1)  // 29/06/1998 (c) 1998 (Hispanic)
        ROM_LOAD16_WORD_SWAP("sz3.09", 0x300000, 0x80000, CRC(c5589553) SHA1(cda1fdc2ab2f390a2358defd9923a2796093926d))

        ROM_START(sfa3b)    // 29/06/1998 (c) 1998 (Brazil)
        ROM_LOAD16_WORD_SWAP("sz3.09", 0x300000, 0x80000, CRC(c5589553) SHA1(cda1fdc2ab2f390a2358defd9923a2796093926d))


        ROM_START(sfa3us)   // 16/06/1998 (c) 1998 (USA)
        ROM_LOAD16_WORD_SWAP("sz3-usam_09.8d", 0x300000, 0x80000, CRC(822fc451) SHA1(49ec9e3f33d6023b59b350a79fe2299f6ac90251))


        ROM_START(sfz3jr1)   // 27/07/1998 (c) 1998 (Japan)
        ROM_LOAD16_WORD_SWAP("sz3.09a", 0x300000, 0x80000, CRC(2180892c) SHA1(65a44c612b1c6dd527b306c262caa5040897ce7b))

#endif
}

int CGame_SFA3_A::GetExtraCt(UINT16 nUnitId, BOOL bCountVisibleOnly)
{
    int* rgExtraCt = bCountVisibleOnly ? (int*)rgExtraCountVisibleOnly : (int*)rgExtraCountAll;

    if (rgExtraCountAll[0] == -1)
    {
        int nDefCtr = 0;
        memset(rgExtraCountAll, 0, (SFA3_A_NUM_IND + 1) * sizeof(int));
        memset(rgExtraCountVisibleOnly, 0, (SFA3_A_NUM_IND + 1) * sizeof(int));

        stExtraDef* pCurrDef = GetExtraDefForSFA3(0);

        while (pCurrDef->uUnitN != INVALID_UNIT_VALUE)
        {
            rgExtraCountAll[pCurrDef->uUnitN]++;

            if (!pCurrDef->isInvisible)
            {
                rgExtraCountVisibleOnly[pCurrDef->uUnitN]++;
            }

            nDefCtr++;
            pCurrDef = GetExtraDefForSFA3(nDefCtr);
        }
    }

    return rgExtraCt[nUnitId];
}

int CGame_SFA3_A::GetExtraLoc(UINT16 nUnitId)
{
    if (rgExtraLoc[0] == -1)
    {
        int nDefCtr = 0;
        int nCurrUnit = UNIT_START_VALUE;
        memset(rgExtraLoc, 0, (SFA3_A_NUM_IND + 1) * sizeof(int));

        stExtraDef* pCurrDef = GetExtraDefForSFA3(0);

        while (pCurrDef->uUnitN != INVALID_UNIT_VALUE)
        {
            if (pCurrDef->uUnitN != nCurrUnit)
            {
                rgExtraLoc[pCurrDef->uUnitN] = nDefCtr;
                nCurrUnit = pCurrDef->uUnitN;
            }

            nDefCtr++;
            pCurrDef = GetExtraDefForSFA3(nDefCtr);
        }
    }

    return rgExtraLoc[nUnitId];
}

CDescTree* CGame_SFA3_A::GetMainTree()
{
    return &CGame_SFA3_A::MainDescTree;
}

sDescTreeNode* CGame_SFA3_A::InitDescTree()
{
    UINT32 nTotalPaletteCount = 0;

    //Load extra file if we're using it
    LoadExtraFileForGame(EXTRA_FILENAME_SFA3, SFA3_A_EXTRA, &SFA3_A_EXTRA_CUSTOM, SFA3_A_EXTRALOC, m_nConfirmedROMSize);

    bool fHaveExtras = (GetExtraCt(SFA3_A_EXTRALOC) > 0);
    UINT16 nUnitCt = SFA3_A_NUM_IND + (fHaveExtras ? 1 : 0);

    sDescTreeNode* NewDescTree = new sDescTreeNode;

    //Create the main character tree
    _stprintf(NewDescTree->szDesc, _T("%s"), g_GameFriendlyName[SFA3_A]);
    NewDescTree->ChildNodes = new sDescTreeNode[nUnitCt];
    NewDescTree->uChildAmt = nUnitCt;
    //All units have tree children
    NewDescTree->uChildType = DESC_NODETYPE_TREE;

    CString strMsg;
    strMsg.Format(_T("CGame_SFA3_A::InitDescTree: Building desc tree for SFA3 %s extras...\n"), fHaveExtras ? _T("with") : _T("without"));
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

        if (iUnitCtr < SFA3_A_EXTRALOC)
        {
            //Set each description
            _stprintf(UnitNode->szDesc, _T("%s"), SFA3_A_UNITS[iUnitCtr].szDesc);
            UnitNode->ChildNodes = new sDescTreeNode[nUnitChildCount];
            //All children have collection trees
            UnitNode->uChildType = DESC_NODETYPE_TREE;
            UnitNode->uChildAmt = nUnitChildCount;

#if SFA3_DEBUG
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

#if SFA3_DEBUG
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

#if SFA3_DEBUG
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

#if SFA3_DEBUG
            strMsg.Format(_T("Unit (Extras): %s, %u of %u, %u total children\n"), UnitNode->szDesc, iUnitCtr + 1, nUnitCt, nUnitChildCount);
            OutputDebugString(strMsg);
#endif
        }

        //Set up extra nodes
        if (bUseExtra)
        {
            int nExtraPos = GetExtraLoc(iUnitCtr);
            int nCurrExtra = 0;

            CollectionNode = &((sDescTreeNode*)UnitNode->ChildNodes)[(SFA3_A_EXTRALOC > iUnitCtr) ? (nUnitChildCount - 1) : 0]; //Extra node
            _stprintf(CollectionNode->szDesc, _T("Extra"));

            CollectionNode->ChildNodes = new sDescTreeNode[nExtraCt];

            CollectionNode->uChildType = DESC_NODETYPE_NODE;
            CollectionNode->uChildAmt = nExtraCt; //EX + Extra

#if SFA3_DEBUG
            strMsg.Format(_T("\tCollection: %s, %u of %u, %u children\n"), CollectionNode->szDesc, 1, nUnitChildCount, nExtraCt);
            OutputDebugString(strMsg);
#endif

            for (UINT16 nExtraCtr = 0; nExtraCtr < nExtraCt; nExtraCtr++)
            {
                ChildNode = &((sDescNode*)CollectionNode->ChildNodes)[nExtraCtr];

                stExtraDef* pCurrDef = GetExtraDefForSFA3(nExtraPos + nCurrExtra);

                while (pCurrDef->isInvisible)
                {
                    nCurrExtra++;

                    pCurrDef = GetExtraDefForSFA3(nExtraPos + nCurrExtra);
                }

                _stprintf(ChildNode->szDesc, pCurrDef->szDesc);

                ChildNode->uUnitId = iUnitCtr;
                ChildNode->uPalId = (((SFA3_A_EXTRALOC > iUnitCtr) ? 1 : 0)* nUnitChildCount * 2) + nCurrExtra;

#if SFA3_DEBUG
                strMsg.Format(_T("\t\tPalette: %s, %u of %u\n"), ChildNode->szDesc, nExtraCtr + 1, nExtraCt);
                OutputDebugString(strMsg);
#endif

                nCurrExtra++;
                nTotalPaletteCount++;
            }
        }
    }

    strMsg.Format(_T("CGame_SFA3_A::InitDescTree: Loaded %u palettes for SFA3\n"), nTotalPaletteCount);
    OutputDebugString(strMsg);

    m_nTotalPaletteCountForSFA3 = nTotalPaletteCount;

    // For development use to speed things up
    //DumpHeaderPalettes();

    return NewDescTree;
}

struct sSFA3_A_PortraitData
{
    LPCTSTR pszCharacterName = nullptr;
    LPCTSTR pszCodeName = nullptr;
    UINT32 nROMOffset = 0;
    LPCTSTR pszImageSet = _T("indexCPS2_SFA3Assets"); // SFA3_Unique
    UINT32 nImageSetIndex = 0;
};

sSFA3_A_PortraitData SFA3_A_PortraitDataArray[] =
{
    { _T("Ryu"), _T("RYU"), 0x4ce14, _T("indexCPS2_SFA3Assets"), 0xB4 }, // Ryu
    { _T("Ken"), _T("KEN"), 0x4d114, _T("indexCPS2_SFA3Assets"), 0xAF }, // Ken
    { _T("Akuma"), _T("AKUMA"), 0x4d414, _T("indexCPS2_SFA3Assets"), 0xA1 }, // Akuma
    { _T("Charlie"), _T("CHARLIE"), 0x4d714, _T("indexCPS2_SFA3Assets"), 0xA5 }, // Charlie
    { _T("Chun-Li"), _T("CHUNLI"), 0x4da14, _T("indexCPS2_SFA3Assets"), 0xA6 }, // Chun (NOTE: Chun has a special non-X-ISM portrait, A7)
    { _T("Adon"), _T("ADON"), 0x4dd14, _T("indexCPS2_SFA3Assets"), 0xA0 }, // Adon
    { _T("Sodom"), _T("SODOM"), 0x4e014, _T("indexCPS2_SFA3Assets"), 0xB7 }, // Sodom
    { _T("Guy"), _T("GUY"), 0x4e314, _T("indexCPS2_SFA3Assets"), 0xAD }, // Guy
    { _T("Birdie"), _T("BIRDIE"), 0x4e614, _T("indexCPS2_SFA3Assets"), 0xA2 }, // Birdie
    { _T("Rose"), _T("ROSE"), 0x4e914, _T("indexCPS2_SFA3Assets"), 0xB3 }, // Rose
    { _T("M.Bison"), _T("MBISON"), 0x4ec14, _T("indexCPS2_SFA3Assets"), 0xB0 }, // Dict
    { _T("Sagat"), _T("SAGAT"), 0x4ef14, _T("indexCPS2_SFA3Assets"), 0xB5 }, // Sagat
    { _T("Dan"), _T("DAN"), 0x4f214, _T("indexCPS2_SFA3Assets"), 0xA9 }, // Dan
    { _T("Sakura"), _T("SAKURA"), 0x4f514, _T("indexCPS2_SFA3Assets"), 0xB6 }, // Sakura
    { _T("Rolento"), _T("ROLENTO"), 0x4f814, _T("indexCPS2_SFA3Assets"), 0xB2 }, // Rolento
    { _T("Dhalsim"), _T("DHALSIM"), 0x4fb14, _T("indexCPS2_SFA3Assets"), 0xAA }, // Dhalsim
    { _T("Zangief"), _T("ZANGIEF"), 0x4fe14, _T("indexCPS2_SFA3Assets"), 0xB9 }, // Zangief
    { _T("Gen"), _T("GEN"), 0x50114, _T("indexCPS2_SFA3Assets"), 0xAC }, // Gen
    { _T("Cammy"), _T("CAMMY"), 0x50a14, _T("indexCPS2_SFA3Assets"), 0xA4 }, // Cammy
    { _T("E.Honda"), _T("EHONDA"), 0x50d14, _T("indexCPS2_SFA3Assets"), 0xAB }, // E.Honda
    { _T("Blanka"), _T("BLANKA"), 0x51014, _T("indexCPS2_SFA3Assets"), 0xA3 }, // Blanka
    { _T("R.Mika"), _T("RMIKA"), 0x51314, _T("indexCPS2_SFA3Assets"), 0xB1 }, // R.Mika
    { _T("Cody"), _T("CODY"), 0x51614, _T("indexCPS2_SFA3Assets"), 0xA8 }, // Cody
    { _T("Vega"), _T("VEGA"), 0x51914, _T("indexCPS2_SFA3Assets"), 0xB8 }, // Vega
    { _T("Karin"), _T("KARIN"), 0x51c14, _T("indexCPS2_SFA3Assets"), 0xAE }, // Karin
};

void CGame_SFA3_A::DumpHeaderPalettes()
{
    CString strOutput;

    for (UINT16 nIndex = 0; nIndex < ARRAYSIZE(SFA3_A_PortraitDataArray); nIndex++)
    {
        const UINT16 nPortraitsPerCharacter = 6;
        strOutput.Format(_T("const sGame_PaletteDataset SFA3_A_%s_PORTRAIT_PALETTES[] = \r\n{\r\n"), SFA3_A_PortraitDataArray[nIndex].pszCodeName);
        OutputDebugString(strOutput);
        for (UINT16 nColorIndex = 0; nColorIndex < nPortraitsPerCharacter; nColorIndex++)
        {
            constexpr UINT32 PORTRAIT_OFFSET = 0x80;
            CString strColorName;

            switch (nColorIndex)
            {
            case 0:
                strColorName = _T("X-Ism Punch");
                break;
            case 1:
                strColorName = _T("X-Ism Kick");
                break;
            case 2:
                strColorName = _T("A-Ism Punch");
                break;
            case 3:
                strColorName = _T("A-Ism Kick");
                break;
            case 4:
                strColorName = _T("V-Ism Punch");
                break;
            case 5:
                strColorName = _T("V-Ism Kick");
                break;
            }

            strOutput.Format(_T("    { \"%s\", 0x%x, 0x%x, %s, 0x%02x },\r\n"), strColorName.GetString(), SFA3_A_PortraitDataArray[nIndex].nROMOffset + (PORTRAIT_OFFSET * nColorIndex), SFA3_A_PortraitDataArray[nIndex].nROMOffset + (PORTRAIT_OFFSET * (nColorIndex + 1)), SFA3_A_PortraitDataArray[nIndex].pszImageSet, SFA3_A_PortraitDataArray[nIndex].nImageSetIndex);
            OutputDebugString(strOutput);
        }

        OutputDebugString(_T("};\r\n\r\n"));
    }

    for (UINT16 nIndex = 0; nIndex < ARRAYSIZE(SFA3_A_PortraitDataArray); nIndex++)
    {
        const UINT16 nPortraitsPerCharacter = 6;
        strOutput.Format(_T("    { \"Select Portraits\", DESC_NODETYPE_TREE, (void*)SFA3_A_%s_PORTRAIT_PALETTES, ARRAYSIZE(SFA3_A_%s_PORTRAIT_PALETTES) },\r\n"), SFA3_A_PortraitDataArray[nIndex].pszCodeName, SFA3_A_PortraitDataArray[nIndex].pszCodeName);
        OutputDebugString(strOutput);
    }
}

sFileRule CGame_SFA3_A::GetRule(UINT16 nUnitId)
{
    sFileRule NewFileRule;

    _stprintf_s(NewFileRule.szFileName, MAX_FILENAME_LENGTH, _T("sz3.09c"));

    NewFileRule.uUnitId = 0;
    NewFileRule.uVerifyVar = m_nExpectedGameROMSize;

    return NewFileRule;
}

UINT16 CGame_SFA3_A::GetCollectionCountForUnit(UINT16 nUnitId)
{
    if (nUnitId == SFA3_A_EXTRALOC)
    {
        return GetExtraCt(nUnitId);
    }
    else
    {
        return SFA3_A_UNITS[nUnitId].uChildAmt;
    }
}

UINT16 CGame_SFA3_A::GetNodeCountForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    if (nUnitId == SFA3_A_EXTRALOC)
    {
        return GetExtraCt(nUnitId);
    }
    else
    {
        const sDescTreeNode* pCollectionNode = (const sDescTreeNode*)(SFA3_A_UNITS[nUnitId].ChildNodes);

        return pCollectionNode[nCollectionId].uChildAmt;
    }
}

LPCTSTR CGame_SFA3_A::GetDescriptionForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    if (nUnitId == SFA3_A_EXTRALOC)
    {
        return _T("Extra Palettes");
    }
    else
    {
        const sDescTreeNode* pCollection = (const sDescTreeNode*)SFA3_A_UNITS[nUnitId].ChildNodes;
        return pCollection[nCollectionId].szDesc;
    }
}

UINT16 CGame_SFA3_A::GetPaletteCountForUnit(UINT16 nUnitId)
{
    if (nUnitId == SFA3_A_EXTRALOC)
    {
        return GetExtraCt(nUnitId);
    }
    else
    {
        UINT16 nCompleteCount = 0;
        UINT16 nCollectionCount = SFA3_A_UNITS[nUnitId].uChildAmt;
        const sDescTreeNode* pCurrentCollection = (const sDescTreeNode*)(SFA3_A_UNITS[nUnitId].ChildNodes);

        for (UINT16 nCollectionIndex = 0; nCollectionIndex < nCollectionCount; nCollectionIndex++)
        {
            nCompleteCount += pCurrentCollection[nCollectionIndex].uChildAmt;
        }

#if SFA3_DEBUG
        CString strMsg;
        strMsg.Format(_T("CGame_SFA3_A::GetPaletteCountForUnit: %u for unit %u which has %u collections.\n"), nCompleteCount, nUnitId, nCollectionCount);
        OutputDebugString(strMsg);
#endif

        return nCompleteCount;
    }
}

const sGame_PaletteDataset* CGame_SFA3_A::GetPaletteSet(UINT16 nUnitId, UINT16 nCollectionId)
{
    // Don't use this for Extra palettes.
    const sDescTreeNode* pCurrentSet = (const sDescTreeNode*)SFA3_A_UNITS[nUnitId].ChildNodes;
    return ((sGame_PaletteDataset*)(pCurrentSet[nCollectionId].ChildNodes));
}

const sGame_PaletteDataset* CGame_SFA3_A::GetSpecificPalette(UINT16 nUnitId, UINT16 nPaletteId)
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

UINT16 CGame_SFA3_A::GetNodeSizeFromPaletteId(UINT16 nUnitId, UINT16 nPaletteId)
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

const sDescTreeNode* CGame_SFA3_A::GetNodeFromPaletteId(UINT16 nUnitId, UINT16 nPaletteId, bool fReturnBasicNodesOnly)
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

        if (nUnitId == SFA3_A_EXTRALOC)
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
            const sDescTreeNode* pCollectionNodeToCheck = (const sDescTreeNode*)(SFA3_A_UNITS[nUnitId].ChildNodes);

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

void CGame_SFA3_A::LoadSpecificPaletteData(UINT16 nUnitId, UINT16 nPalId)
{
    if (nUnitId != SFA3_A_EXTRALOC)
    {
        int cbPaletteSizeOnDisc = 0;
        const sGame_PaletteDataset* paletteData = GetSpecificPalette(nUnitId, nPalId);

        cbPaletteSizeOnDisc = (int)max(0, (paletteData->nPaletteOffsetEnd - paletteData->nPaletteOffset));

        m_nCurrentPaletteROMLocation = paletteData->nPaletteOffset;
        m_nCurrentPaletteSize = cbPaletteSizeOnDisc / 2;
        m_pszCurrentPaletteName = paletteData->szPaletteName;

        // Adjust for ROM-specific variant locations
        if (m_pCRC32SpecificData)
        {
            m_nCurrentPaletteROMLocation += m_pCRC32SpecificData->nROMSpecificOffset;
        }

    }
    else // SFA3_A_EXTRALOC
    {
        // This is where we handle all the palettes added in via Extra.
        stExtraDef* pCurrDef = GetExtraDefForSFA3(GetExtraLoc(nUnitId) + nPalId);

        m_nCurrentPaletteROMLocation = pCurrDef->uOffset;
        m_nCurrentPaletteSize = (pCurrDef->cbPaletteSize / 2);
        m_pszCurrentPaletteName = pCurrDef->szDesc;
    }
}

BOOL CGame_SFA3_A::LoadFile(CFile* LoadedFile, UINT16 nUnitId)
{
    for (UINT16 nUnitCtr = 0; nUnitCtr < nUnitAmt; nUnitCtr++)
    {
        UINT16 nPalAmt = GetPaletteCountForUnit(nUnitCtr);

        m_pppDataBuffer[nUnitCtr] = new UINT16 * [nPalAmt];

        // These are already sorted: no need to reorder
        rgUnitRedir[nUnitCtr] = nUnitCtr;

        for (UINT16 nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
        {
            LoadSpecificPaletteData(nUnitCtr, nPalCtr);

            m_pppDataBuffer[nUnitCtr][nPalCtr] = new UINT16[m_nCurrentPaletteSize];

            LoadedFile->Seek(m_nCurrentPaletteROMLocation, CFile::begin);

            LoadedFile->Read(m_pppDataBuffer[nUnitCtr][nPalCtr], m_nCurrentPaletteSize * 2);
        }
    }

    rgUnitRedir[nUnitAmt] = INVALID_UNIT_VALUE;

    CheckForErrorsInTables();

    return TRUE;
}

void CGame_SFA3_A::CreateDefPal(sDescNode* srcNode, UINT16 nSepId)
{
    UINT16 nUnitId = srcNode->uUnitId;
    UINT16 nPalId = srcNode->uPalId;
    static UINT16 s_nColorsPerPage = CRegProc::GetMaxPalettePageSize();

    LoadSpecificPaletteData(nUnitId, nPalId);

    const UINT8 nTotalPagesNeeded = (UINT8)ceil((double)m_nCurrentPaletteSize / (double)s_nColorsPerPage);
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
        INT16 nColorsRemaining = m_nCurrentPaletteSize;

        for (UINT16 nCurrentPage = 0; (nCurrentPage * s_nColorsPerPage) < m_nCurrentPaletteSize; nCurrentPage++)
        {
            strPageDescription.Format(_T("%s (%u/%u)"), srcNode->szDesc, nCurrentPage + 1, nTotalPagesNeeded);
            BasePalGroup.AddSep(nSepId, strPageDescription, nCurrentPage * s_nColorsPerPage, min(s_nColorsPerPage, (DWORD)nColorsRemaining));
            nColorsRemaining -= s_nColorsPerPage;
        }
    }
    else
    {
        BasePalGroup.AddSep(nSepId, srcNode->szDesc, 0, m_nCurrentPaletteSize);
    }
}

BOOL CGame_SFA3_A::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
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
    if (SFA3_A_EXTRALOC != NodeGet->uUnitId)
    {
        const sGame_PaletteDataset* paletteDataSet = GetSpecificPalette(NodeGet->uUnitId, NodeGet->uPalId);
        const sDescTreeNode* pCurrentNode = GetNodeFromPaletteId(NodeGet->uUnitId, NodeGet->uPalId, false);

        if (pCurrentNode) // For Basic nodes, we can allow multisprite view in the Export dialog
        {
            if ((_tcsicmp(pCurrentNode->szDesc, _T("Select Portraits")) == 0) ||
                (_tcsicmp(pCurrentNode->szDesc, _T("Win Portraits")) == 0))
            {
                // Hm.  These start at an abstract position within the node.  Let's derive that.
                int nProspectiveStart = NodeGet->uPalId;

                if (_tcsstr(paletteDataSet->szPaletteName, _T("Kick")) != nullptr)
                {
                    // Ordering is punch/kick: correct this across all pairs.
                    nProspectiveStart = (nProspectiveStart > 0) ? nProspectiveStart - 1 : nProspectiveStart;
                }

                if (_tcsstr(paletteDataSet->szPaletteName, _T("V-Ism")) != nullptr)
                {
                    nProspectiveStart = (nProspectiveStart > 4) ? nProspectiveStart - 4 : nProspectiveStart;
                }
                else if (_tcsstr(paletteDataSet->szPaletteName, _T("A-Ism")) != nullptr)
                {
                    nProspectiveStart = (nProspectiveStart > 2) ? nProspectiveStart - 2 : nProspectiveStart;
                }

                const sGame_PaletteDataset* prospectivePalette = GetSpecificPalette(NodeGet->uUnitId, nProspectiveStart);

                if (_tcsicmp(prospectivePalette->szPaletteName, _T("X-Ism Punch")) == 0)
                {
                    if ((SFA3_A_UNITSORT[NodeGet->uUnitId] != index_SFA3_ChunLi) && // different portraits for X vs non-X
                        (SFA3_A_UNITSORT[NodeGet->uUnitId] != index_SFA3_Sodom)) // different win portraits for X vs non-X
                    {
                        // OK, we've arrived where we expected to
                        nSrcAmt = 6;
                        nSrcStart = nProspectiveStart;
                        nNodeIncrement = 1;
                    }
                }
                else
                {
                    OutputDebugString(_T("CGame_SFA3_A::UpdatePalImg: Possible error: we couldn't map a portrait correctly for multisprite export.\n"));
                }
            }
            else if ((_tcsicmp(pCurrentNode->szDesc, _T("X-Ism Punch")) == 0) ||
                     (_tcsicmp(pCurrentNode->szDesc, _T("X-Ism Kick")) == 0) ||
                     (_tcsicmp(pCurrentNode->szDesc, _T("A-Ism Punch")) == 0) ||
                     (_tcsicmp(pCurrentNode->szDesc, _T("A-Ism Kick")) == 0) ||
                     (_tcsicmp(pCurrentNode->szDesc, _T("V-Ism Punch")) == 0) ||
                     (_tcsicmp(pCurrentNode->szDesc, _T("V-Ism Kick")) == 0))
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
                if (paletteDataSet->pPalettePairingInfo == &pairFullyLinkedNode)
                {
                    const UINT16 nStageCount = GetNodeSizeFromPaletteId(NodeGet->uUnitId, NodeGet->uPalId);

                    fShouldUseAlternateLoadLogic = true;
                    sImgTicket* pImgArray = nullptr;

                    for (INT16 nStageIndex = 0; nStageIndex < nStageCount; nStageIndex++)
                    {
                        // The palettes get added forward, but the image tickets need to be generated in reverse order
                        const sGame_PaletteDataset* paletteDataSetToJoin = GetSpecificPalette(NodeGet->uUnitId, NodeGet->uPalId + (nStageCount - 1 - nStageIndex));
                        if (paletteDataSetToJoin)
                        {
                            pImgArray = CreateImgTicket(paletteDataSetToJoin->indexImgToUse, paletteDataSetToJoin->indexOffsetToUse, pImgArray);

                            //Set each palette
                            sDescNode* JoinedNode = GetMainTree()->GetDescNode(Node01, Node02, Node03 + nStageIndex, -1);
                            CreateDefPal(JoinedNode, nStageIndex);
                            SetSourcePal(nStageIndex, NodeGet->uUnitId, nSrcStart + nStageIndex, nSrcAmt, nNodeIncrement);
                        }
                    }

                    ClearSetImgTicket(pImgArray);
                }
                else
                {
                    UINT16 nDeltaToSecondElement = paletteDataSet->pPalettePairingInfo->nNodeIncrementToPartner;
                    int nXOffs = paletteDataSet->pPalettePairingInfo->nXOffs;
                    int nYOffs = paletteDataSet->pPalettePairingInfo->nYOffs;

                    UINT16 nPeerPaletteIdInNode = Node03;

                    if (paletteDataSet->indexImgToUse == indexCPS2_SFA3Assets)
                    {
                        if (paletteDataSet->indexOffsetToUse == 0x01) // Waterfall landing
                        {
                            nXOffs = 86;
                            nYOffs = -31;
                            nDeltaToSecondElement = 4;
                            nPeerPaletteIdInNode += 4;
                            fShouldUseAlternateLoadLogic = true;
                        }
                        else if (paletteDataSet->indexOffsetToUse == 0x02) // Waterfall stream
                        {
                            nXOffs = -86;
                            nYOffs = 31;
                            nDeltaToSecondElement = -4;
                            nPeerPaletteIdInNode -= 4;
                            fShouldUseAlternateLoadLogic = true;
                        }
                    }
                    else
                    {
                        fShouldUseAlternateLoadLogic = true;
                        nPeerPaletteIdInNode += nDeltaToSecondElement;
                    }

                    UINT16 nPeerPaletteIdInUnit = NodeGet->uPalId + nDeltaToSecondElement;

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
                                GetMainTree()->GetDescNode(NodeGet->uUnitId, Node02, Node03, -1),
                                GetMainTree()->GetDescNode(NodeGet->uUnitId, Node02, nPeerPaletteIdInNode, -1)
                            };

                            //Set each palette
                            CreateDefPal(JoinedNode[0], 0);
                            CreateDefPal(JoinedNode[1], 1);

                            SetSourcePal(0, NodeGet->uUnitId, nSrcStart, nSrcAmt, nNodeIncrement);
                            SetSourcePal(1, NodeGet->uUnitId, nSrcStart + nDeltaToSecondElement, nSrcAmt, nNodeIncrement);
                        }
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

void CGame_SFA3_A::UpdatePalData()
{
    for (UINT16 nPalCtr = 0; nPalCtr < MAX_PALETTES_DISPLAYABLE; nPalCtr++)
    {
        sPalDef* srcDef = BasePalGroup.GetPalDef(nPalCtr);

        if (srcDef->bAvail)
        {
            COLORREF* crSrc = srcDef->pPal;

            INT16 nTotalColorsRemaining = srcDef->uPalSz;
            UINT16 nCurrentTotalWrites = 0;
            // Every 16 colors there is another counter WORD (color length) to preserve.
            const UINT16 nMaxSafeColorsToWrite = 16;
            const UINT16 iFixedCounterPosition = 0; // The lead 'color' is a counter and needs to be preserved.

            while (nTotalColorsRemaining > 0)
            {
                UINT16 nCurrentColorCountToWrite = min(nMaxSafeColorsToWrite, nTotalColorsRemaining);

                for (UINT16 nPICtr = 0; nPICtr < nCurrentColorCountToWrite; nPICtr++)
                {
                    if (nPICtr == iFixedCounterPosition)
                    {
                        continue;
                    }

                    UINT16 iCurrentArrayOffset = nPICtr + nCurrentTotalWrites;
                    m_pppDataBuffer[srcDef->uUnitId][srcDef->uPalId][iCurrentArrayOffset - 1] = (ConvCol(crSrc[iCurrentArrayOffset]) & 0x0FFF);
                }

                nCurrentTotalWrites += nMaxSafeColorsToWrite;
                nTotalColorsRemaining -= nMaxSafeColorsToWrite;
            }

            MarkPaletteDirty(srcDef->uUnitId, srcDef->uPalId);
            srcDef->bChanged = FALSE;
            rgFileChanged[0] = TRUE;
        }
    }
}

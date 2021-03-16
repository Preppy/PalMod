#include "StdAfx.h"
#include "GameDef.h"
#include "Game_SAMSHO5SP_A.h"
#include "..\PalMod.h"
#include "..\RegProc.h"

#define SAMSHO5SP_A_DEBUG DEFAULT_GAME_DEBUG_STATE

stExtraDef* CGame_SAMSHO5SP_A::SAMSHO5SP_A_EXTRA_CUSTOM = nullptr;

CDescTree CGame_SAMSHO5SP_A::MainDescTree = nullptr;

int CGame_SAMSHO5SP_A::rgExtraCountAll[SAMSHO5SP_A_NUMUNIT + 1];
int CGame_SAMSHO5SP_A::rgExtraLoc[SAMSHO5SP_A_NUMUNIT + 1];

UINT32 CGame_SAMSHO5SP_A::m_nTotalPaletteCountForSAMSHO5SP = 0;
UINT32 CGame_SAMSHO5SP_A::m_nExpectedGameROMSize = -1;  // Figure this out dynamically
UINT32 CGame_SAMSHO5SP_A::m_nConfirmedROMSize = -1;

void CGame_SAMSHO5SP_A::InitializeStatics()
{
    safe_delete_array(CGame_SAMSHO5SP_A::SAMSHO5SP_A_EXTRA_CUSTOM);

    memset(rgExtraCountAll, -1, sizeof(rgExtraCountAll));
    memset(rgExtraLoc, -1, sizeof(rgExtraLoc));

    MainDescTree.SetRootTree(CGame_SAMSHO5SP_A::InitDescTree());
}

CGame_SAMSHO5SP_A::CGame_SAMSHO5SP_A(UINT32 nConfirmedROMSize)
{
    CString strMessage;
    strMessage.Format(L"CGame_SAMSHO5SP_A::CGame_SAMSHO5SP_A: Loading ROM...\n");
    OutputDebugString(strMessage);

    createPalOptions = { NO_SPECIAL_OPTIONS, WRITE_16 };
    SetAlphaMode(AlphaMode::GameDoesNotUseAlpha);
    SetColorMode(ColMode::COLMODE_NEOGEO);

    //Set palette conversion mode
    BasePalGroup.SetMode(ePalType::PALTYPE_32STEPS);

    // We need this set before we initialize so that corrupt Extras truncate correctly.
    // Otherwise the new user inadvertently corrupts their ROM.
    m_nConfirmedROMSize = nConfirmedROMSize;
    InitializeStatics();

    m_nTotalInternalUnits = SAMSHO5SP_A_NUMUNIT;
    m_nExtraUnit = SAMSHO5SP_A_EXTRALOC;

    m_nSafeCountForThisRom = GetExtraCt(m_nExtraUnit) + 1184;
    m_pszExtraFilename = EXTRA_FILENAME_SAMSHO5SP_A;
    m_nTotalPaletteCount = m_nTotalPaletteCountForSAMSHO5SP;
    // This magic number is used to warn users if their Extra file is trying to write somewhere potentially unusual
    m_nLowestKnownPaletteRomLocation = 0xd4000;

    nUnitAmt = m_nTotalInternalUnits + (GetExtraCt(m_nExtraUnit) ? 1 : 0);

    InitDataBuffer();

    //Set game information
    nGameFlag = SAMSHO5SP_A;
    nImgGameFlag = IMGDAT_SECTION_SAMSHO;
    nImgUnitAmt = ARRAYSIZE(SAMSHO5SP_A_IMG_UNITS);
    m_prgGameImageSet = SAMSHO5SP_A_IMG_UNITS;

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

CGame_SAMSHO5SP_A::~CGame_SAMSHO5SP_A(void)
{
    safe_delete_array(CGame_SAMSHO5SP_A::SAMSHO5SP_A_EXTRA_CUSTOM);
    ClearDataBuffer();
    //Get rid of the file changed flag
    FlushChangeTrackingArray();
}

CDescTree* CGame_SAMSHO5SP_A::GetMainTree()
{
    return &CGame_SAMSHO5SP_A::MainDescTree;
}

int CGame_SAMSHO5SP_A::GetExtraCt(UINT16 nUnitId, BOOL bCountVisibleOnly)
{
    if (rgExtraCountAll[0] == -1)
    {
        int nDefCtr = 0;
        memset(rgExtraCountAll, 0, ((SAMSHO5SP_A_NUMUNIT + 1) * sizeof(int)));

        stExtraDef* pCurrDef = GetExtraDefForSAMSHO5SP(0);

        while (pCurrDef->uUnitN != INVALID_UNIT_VALUE)
        {
            if (!pCurrDef->isInvisible || !bCountVisibleOnly)
            {
                rgExtraCountAll[pCurrDef->uUnitN]++;
            }

            nDefCtr++;
            pCurrDef = GetExtraDefForSAMSHO5SP(nDefCtr);
        }
    }

    return rgExtraCountAll[nUnitId];
}

int CGame_SAMSHO5SP_A::GetExtraLoc(UINT16 nUnitId)
{
    if (rgExtraLoc[0] == -1)
    {
        int nDefCtr = 0;
        int nCurrUnit = UNIT_START_VALUE;
        memset(rgExtraLoc, 0, (SAMSHO5SP_A_NUMUNIT + 1) * sizeof(int));

        stExtraDef* pCurrDef = GetExtraDefForSAMSHO5SP(0);

        while (pCurrDef->uUnitN != INVALID_UNIT_VALUE)
        {
            if (pCurrDef->uUnitN != nCurrUnit)
            {
                rgExtraLoc[pCurrDef->uUnitN] = nDefCtr;
                nCurrUnit = pCurrDef->uUnitN;
            }

            nDefCtr++;
            pCurrDef = GetExtraDefForSAMSHO5SP(nDefCtr);
        }
    }

    return rgExtraLoc[nUnitId];
}

sDescTreeNode* CGame_SAMSHO5SP_A::InitDescTree()
{
    UINT32 nTotalPaletteCount = 0;

    //Load extra file if we're using it
    LoadExtraFileForGame(EXTRA_FILENAME_SAMSHO5SP_A, SAMSHO5SP_A_EXTRA, &SAMSHO5SP_A_EXTRA_CUSTOM, SAMSHO5SP_A_EXTRALOC, m_nConfirmedROMSize);

    UINT16 nUnitCt = SAMSHO5SP_A_NUMUNIT + (GetExtraCt(SAMSHO5SP_A_EXTRALOC) ? 1 : 0);
    
    sDescTreeNode* NewDescTree = new sDescTreeNode;

    //Create the main character tree
    _snwprintf_s(NewDescTree->szDesc, ARRAYSIZE(NewDescTree->szDesc), _TRUNCATE, L"%s", g_GameFriendlyName[SAMSHO5SP_A]);
    NewDescTree->ChildNodes = new sDescTreeNode[nUnitCt];
    NewDescTree->uChildAmt = nUnitCt;
    //All units have tree children
    NewDescTree->uChildType = DESC_NODETYPE_TREE;

    CString strMsg;
    bool fHaveExtras = (GetExtraCt(SAMSHO5SP_A_EXTRALOC) > 0);
    strMsg.Format(L"CGame_SAMSHO5SP_A::InitDescTree: Building desc tree for SAMSHO5SP_A %s extras...\n", fHaveExtras ? L"with" : L"without");
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

        if (iUnitCtr < SAMSHO5SP_A_EXTRALOC)
        {
            //Set each description
            _snwprintf_s(UnitNode->szDesc, ARRAYSIZE(UnitNode->szDesc), _TRUNCATE, L"%s", SAMSHO5SP_A_UNITS[iUnitCtr].szDesc);
            UnitNode->ChildNodes = new sDescTreeNode[nUnitChildCount];
            //All children have collection trees
            UnitNode->uChildType = DESC_NODETYPE_TREE;
            UnitNode->uChildAmt = nUnitChildCount;

#if SAMSHO5SP_A_DEBUG
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

#if SAMSHO5SP_A_DEBUG
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

#if SAMSHO5SP_A_DEBUG
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

#if SAMSHO5SP_A_DEBUG
            strMsg.Format(L"Unit (Extras): %s, %u of %u, %u total children\n", UnitNode->szDesc, iUnitCtr + 1, nUnitCt, nUnitChildCount);
            OutputDebugString(strMsg);
#endif
        }

        //Set up extra nodes
        if (bUseExtra)
        {
            int nExtraPos = GetExtraLoc(iUnitCtr);
            int nCurrExtra = 0;

            CollectionNode = &((sDescTreeNode*)UnitNode->ChildNodes)[(SAMSHO5SP_A_EXTRALOC > iUnitCtr) ? (nUnitChildCount - 1) : 0]; //Extra node

            _snwprintf_s(CollectionNode->szDesc, ARRAYSIZE(CollectionNode->szDesc), _TRUNCATE, L"Extra");

            CollectionNode->ChildNodes = new sDescTreeNode[nExtraCt];

            CollectionNode->uChildType = DESC_NODETYPE_NODE;
            CollectionNode->uChildAmt = nExtraCt; //EX + Extra

#if SAMSHO5SP_A_DEBUG
            strMsg.Format(L"\tCollection: %s, %u of %u, %u children\n", CollectionNode->szDesc, 1, nUnitChildCount, nExtraCt);
            OutputDebugString(strMsg);
#endif

            for (UINT16 nExtraCtr = 0; nExtraCtr < nExtraCt; nExtraCtr++)
            {
                ChildNode = &((sDescNode*)CollectionNode->ChildNodes)[nExtraCtr];

                stExtraDef* pCurrDef = GetExtraDefForSAMSHO5SP(nExtraPos + nCurrExtra);

                while (pCurrDef->isInvisible)
                {
                    nCurrExtra++;

                    pCurrDef = GetExtraDefForSAMSHO5SP(nExtraPos + nCurrExtra);
                }

                _snwprintf_s(ChildNode->szDesc, ARRAYSIZE(ChildNode->szDesc), _TRUNCATE, pCurrDef->szDesc);

                ChildNode->uUnitId = iUnitCtr;
                ChildNode->uPalId = (((SAMSHO5SP_A_EXTRALOC > iUnitCtr) ? 1 : 0) * nUnitChildCount * 2) + nCurrExtra;

#if SAMSHO5SP_A_DEBUG
                strMsg.Format(L"\t\tPalette: %s, %u of %u\n", ChildNode->szDesc, nExtraCtr + 1, nExtraCt);
                OutputDebugString(strMsg);
#endif

                nCurrExtra++;
                nTotalPaletteCount++;
            }
        }
    }

    strMsg.Format(L"CGame_SAMSHO5SP_A::InitDescTree: Loaded %u palettes for SAMSHO5SP\n", nTotalPaletteCount);
    OutputDebugString(strMsg);

    m_nTotalPaletteCountForSAMSHO5SP = nTotalPaletteCount;

    // For development use to speed things up
    //DumpPaletteHeaders();

    return NewDescTree;
}

struct sSAMSHO5SP_A_PaletteData
{
    LPCWSTR pszCharacterName;
    UINT32 nCoreOffset = 0;
    UINT32 nEffectsOffset = 0;
    UINT32 nWinPortraitOffset = 0;
    UINT32 nIntroPortraitOffset = 0;
    LPCWSTR pszImageSet = L"";
    //bool rgIsEffectUsed[11];
};

//NORMY 0x364538 + 24000
//FX    0x388538 + 1F400
//INTRO 0x3a7938 + 2000
//WIN   0x3a9938

sSAMSHO5SP_A_PaletteData SAMSHO5SP_A_CharacterPalettes[] =
{
    { L"Kyo",            0x364538, 0x388538, 0x3a9938, 0x3a7938, L"indexSVCSprites_Kyo" },
    { L"Iori",           0x365538, 0x388d38, 0x3a99b8, 0x3a79b8, L"indexSVCSprites_Iori" },
    { L"Ryo",            0x366538, 0x389538, 0x3a9a38, 0x3a7a38, L"indexSVCSprites_Ryo" },
    { L"Terry",          0x367538, 0x389d38, 0x3a9ab8, 0x3a7ab8, L"indexSVCSprites_Terry" },
    { L"Mai",            0x368538, 0x38a538, 0x3a9b38, 0x3a7b38, L"indexSVCSprites_Mai" },
    { L"Kasumi",         0x369538, 0x38ad38, 0x3a9bb8, 0x3a7bb8, L"indexSVCSprites_Kasumi" },
    { L"Kim",            0x36a538,        0, 0x3a9c38, 0x3a7c38, L"indexSVCSprites_Kim" },
    { L"Mr. Karate",     0x36b538, 0x38bd38, 0x3a9cb8, 0x3a7cb8, L"indexSVCSprites_MrKarate" },
    { L"Choi",           0x36c538, 0x38c538, 0x3a9d38, 0x3a7d38, L"indexSVCSprites_Choi" },
    { L"Earthquake",     0x36d538, 0x38cd38, 0x3a9db8, 0x3a7db8, L"indexSVCSprites_Earthquake" },
    { L"Genjuro",        0x36e538, 0x38d538, 0x3a9e38, 0x3a7e38, L"indexSVCSprites_Genjuro" },
    { L"Shiki",          0x36f538, 0x38dd38, 0x3a9eb8, 0x3a7eb8, L"indexSVCSprites_Shiki" },
    { L"Geese Howard",   0x370538, 0x38e538, 0x3a9f38, 0x3a7f38, L"indexSVCSprites_GeeseHoward" },
    { L"Mars People",    0x371538, 0x38ed38, 0x3a9fb8, 0x3a7fb8, L"indexSVCSprites_MarsPeople" },
    { L"Goenitz",        0x372538, 0x38f538, 0x3aa038, 0x3a8038, L"indexSVCSprites_Goenitz" },
    { L"Princess Athena", 0x373538, 0x38fd38, 0x3aa0b8, 0x3a80b8, L"indexSVCSprites_PrincessAthena" },

    { L"Ryu",            0x374538, 0x390538, 0x3aa138, 0x3a8138, L"indexSVCSprites_Ryu" },
    { L"Ken",            0x375538, 0x390d38, 0x3aa1b8, 0x3a81b8, L"indexSVCSprites_Ken" },
    { L"Chun-Li",        0x376538, 0x391538, 0x3aa238, 0x3a8238, L"indexSVCSprites_ChunLi" },
    { L"Guile",          0x377538, 0x391d38, 0x3aa2b8, 0x3a82b8, L"indexSVCSprites_Guile" },
    { L"Dhalsim",        0x378538, 0x392538, 0x3aa338, 0x3a8338, L"indexSVCSprites_Dhalsim" },
    { L"Boxer",          0x379538, 0x392d38, 0x3aa3b8, 0x3a83b8, L"indexSVCSprites_Boxer" },
    { L"Claw",           0x37a538, 0x393538, 0x3aa438, 0x3a8438, L"indexSVCSprites_Claw" },
    { L"Sagat",          0x37b538, 0x393d38, 0x3aa4b8, 0x3a84b8, L"indexSVCSprites_Sagat" },
    { L"Dictator",       0x37c538, 0x394538, 0x3aa538, 0x3a8538, L"indexSVCSprites_Dictator" },
    { L"Akuma",          0x37d538, 0x394d38, 0x3aa5b8, 0x3a85b8, L"indexSVCSprites_Akuma" },
    { L"Hugo",           0x37e538, 0x395538, 0x3aa638, 0x3a8638, L"indexSVCSprites_Hugo" },
        { L"Poison",            0,        0, 0x3aab38, 0x3a8c38, L"indexSVCSprites_Poison" },
    { L"Tessa",          0x37f538, 0x395d38, 0x3aa6b8, 0x3a86b8, L"indexSVCSprites_Tessa" },
    { L"Zero",           0x380538, 0x396538, 0x3aa738, 0x3a8738, L"indexSVCSprites_Zero" },
        { L"Ciel",              0,        0,        0, 0x3a8bb8, L"indexSVCSprites_Ciel" },
    { L"Demitri",        0x381538, 0x396d38, 0x3aa7b8, 0x3a87b8, L"indexSVCSprites_Demitri" },
    { L"Dan",            0x382538, 0x397538, 0x3aa838, 0x3a8838, L"indexSVCSprites_Dan" },
    { L"Red Arremer",    0x383538, 0x397d38, 0x3aa8b8, 0x3a88b8, L"indexSVCSprites_RedArremer" },

    { L"Orochi Iori",    0x384538, 0x398538, 0x3aa938, 0x3a8938, L"indexSVCSprites_OrochiIori" },
    { L"Serious Mr. Karate", 0x385538, 0x398d38, 0x3aa9b8, 0x3a89b8, L"indexSVCSprites_SeriousMrKarate" },
    { L"Violent Ken",    0x386538, 0x399538, 0x3aaa38, 0x3a8a38, L"indexSVCSprites_ViolentKen" },
    { L"Shin Akuma",     0x387538, 0x399d38, 0x3aaab8, 0x3a8ab8, L"indexSVCSprites_ShinAkuma" },
};

const LPCWSTR SVC_CharacterEffectNames[] =
{
    L"Fire Effect 1",
    L"Fire Effect 2",
    L"Electric Shock Effect",
    L"Red Arremer Transformation",
    L"Athena Transformation",
    L"Soul Palette",
    L"Midnight Bliss",
};

void CGame_SAMSHO5SP_A::DumpPaletteHeaders()
{
    CString strOutput;
    const UINT16 nColorOptionsPerCharacter = 2;
    constexpr UINT32 SAMSHO5SP_PALETTE_LENGTH = 0x20;
    constexpr UINT16 c_nEffectsPerCharacter = 7;
    constexpr UINT32 c_nSVCDistanceBetweenColorss = 0x200;

    for (UINT16 nCharIndex = 0; nCharIndex < ARRAYSIZE(SAMSHO5SP_A_CharacterPalettes); nCharIndex++)
    {
        WCHAR szCodeDesc[MAX_DESCRIPTION_LENGTH];
        StrRemoveNonASCII(szCodeDesc, ARRAYSIZE(szCodeDesc), SAMSHO5SP_A_CharacterPalettes[nCharIndex].pszCharacterName);
        UINT32 nCurrentOffset = 0;

        nCurrentOffset = SAMSHO5SP_A_CharacterPalettes[nCharIndex].nCoreOffset;

        if (nCurrentOffset != 0)
        {
            // First handle the core sprite and moves.
            for (UINT16 iButtonIndex = 0; iButtonIndex < ARRAYSIZE(DEF_BUTTONLABEL_2_PK); iButtonIndex++)
            {
                if (iButtonIndex != 0)
                {
                    nCurrentOffset = SAMSHO5SP_A_CharacterPalettes[nCharIndex].nCoreOffset + (iButtonIndex * 0x200);
                }

                WCHAR szCodeButtonLabel[MAX_DESCRIPTION_LENGTH];
                StrRemoveNonASCII(szCodeButtonLabel, ARRAYSIZE(szCodeButtonLabel), DEF_BUTTONLABEL_2_PK[iButtonIndex]);

                strOutput.Format(L"const sGame_PaletteDataset SAMSHO5SP_A_%s_%s_PALETTES[] = \r\n{\r\n", szCodeDesc, szCodeButtonLabel);
                OutputDebugString(strOutput);

                strOutput.Format(L"    { L\"%s\", 0x%x, 0x%x, %s },\r\n", SAMSHO5SP_A_CharacterPalettes[nCharIndex].pszCharacterName, nCurrentOffset, nCurrentOffset + SAMSHO5SP_PALETTE_LENGTH, SAMSHO5SP_A_CharacterPalettes[nCharIndex].pszImageSet);
                OutputDebugString(strOutput);

                nCurrentOffset += SAMSHO5SP_PALETTE_LENGTH;

                for (UINT16 nEffectIndex = 0; nEffectIndex < c_nEffectsPerCharacter; nEffectIndex++)
                {
                    strOutput.Format(L"    { L\"%s\", 0x%x, 0x%x, %s },\r\n", SVC_CharacterEffectNames[nEffectIndex], nCurrentOffset, nCurrentOffset + SAMSHO5SP_PALETTE_LENGTH, SAMSHO5SP_A_CharacterPalettes[nCharIndex].pszImageSet);
                    OutputDebugString(strOutput);

                    nCurrentOffset += SAMSHO5SP_PALETTE_LENGTH;
                }

                OutputDebugString(L"};\r\n\r\n");
            }
        } 

        nCurrentOffset = SAMSHO5SP_A_CharacterPalettes[nCharIndex].nEffectsOffset;

        if (nCurrentOffset != 0)
        {
            constexpr UINT16 c_nExtraEffectsPerCharacter = 8;
            strOutput.Format(L"const sGame_PaletteDataset SAMSHO5SP_A_%s_%s_PALETTES[] = \r\n{\r\n", szCodeDesc, L"EFFECTS");
            OutputDebugString(strOutput);

            for (UINT16 nEffectIndex = 0; nEffectIndex < c_nExtraEffectsPerCharacter; nEffectIndex++)
            {
                strOutput.Format(L"    { L\"Effect %u\", 0x%x, 0x%x },\r\n", nEffectIndex, nCurrentOffset, nCurrentOffset + SAMSHO5SP_PALETTE_LENGTH);
                OutputDebugString(strOutput);

                nCurrentOffset += SAMSHO5SP_PALETTE_LENGTH;
            }

            OutputDebugString(L"};\r\n\r\n");
        }

        nCurrentOffset = SAMSHO5SP_A_CharacterPalettes[nCharIndex].nWinPortraitOffset;

        if (nCurrentOffset != 0)
        {
            constexpr auto c_nWinPortraitPaletteLength = 0x40;
            constexpr auto c_nWinPortraitImageOffset = 0x21;

            strOutput.Format(L"const sGame_PaletteDataset SAMSHO5SP_A_%s_%s_PALETTES[] = \r\n{\r\n", szCodeDesc, L"WIN_PORTRAITS");
            OutputDebugString(strOutput);

            for (UINT16 iButtonIndex = 0; iButtonIndex < ARRAYSIZE(DEF_BUTTONLABEL_2_PK); iButtonIndex++)
            {
                strOutput.Format(L"    { L\"%s %s\", 0x%x, 0x%x, %s, 0x%02x },\r\n", SAMSHO5SP_A_CharacterPalettes[nCharIndex].pszCharacterName, DEF_BUTTONLABEL_2_PK[iButtonIndex], nCurrentOffset, nCurrentOffset + c_nWinPortraitPaletteLength,
                                                                                SAMSHO5SP_A_CharacterPalettes[nCharIndex].pszImageSet, c_nWinPortraitImageOffset);
                OutputDebugString(strOutput);

                nCurrentOffset += c_nWinPortraitPaletteLength;
            }

            OutputDebugString(L"};\r\n\r\n");
        }

        nCurrentOffset = SAMSHO5SP_A_CharacterPalettes[nCharIndex].nIntroPortraitOffset;

        if (nCurrentOffset != 0)
        {
            constexpr auto c_nIntroPortraitPaletteLength = 0x40;
            constexpr auto c_nIntroPortraitImageOffset = 0x20;

            strOutput.Format(L"const sGame_PaletteDataset SAMSHO5SP_A_%s_%s_PALETTES[] = \r\n{\r\n", szCodeDesc, L"INTRO_PORTRAITS");
            OutputDebugString(strOutput);

            for (UINT16 iButtonIndex = 0; iButtonIndex < ARRAYSIZE(DEF_BUTTONLABEL_2_PK); iButtonIndex++)
            {
                strOutput.Format(L"    { L\"%s %s\", 0x%x, 0x%x, %s, 0x%02x },\r\n", SAMSHO5SP_A_CharacterPalettes[nCharIndex].pszCharacterName, DEF_BUTTONLABEL_2_PK[iButtonIndex], nCurrentOffset, nCurrentOffset + c_nIntroPortraitPaletteLength,
                                                                                SAMSHO5SP_A_CharacterPalettes[nCharIndex].pszImageSet, c_nIntroPortraitImageOffset);
                OutputDebugString(strOutput);

                nCurrentOffset += c_nIntroPortraitPaletteLength;
            }

            OutputDebugString(L"};\r\n\r\n");
        }
    }

    // All the collections...
    for (UINT16 nCharIndex = 0; nCharIndex < ARRAYSIZE(SAMSHO5SP_A_CharacterPalettes); nCharIndex++)
    {
        WCHAR szCodeDesc[MAX_DESCRIPTION_LENGTH];
        StrRemoveNonASCII(szCodeDesc, ARRAYSIZE(szCodeDesc), SAMSHO5SP_A_CharacterPalettes[nCharIndex].pszCharacterName);

        strOutput.Format(L"const sDescTreeNode SAMSHO5SP_A_%s_COLLECTION[] = \r\n{\r\n", szCodeDesc);
        OutputDebugString(strOutput);

        if (SAMSHO5SP_A_CharacterPalettes[nCharIndex].nCoreOffset != 0)
        {
            for (UINT16 nColorIndex = 0; nColorIndex < nColorOptionsPerCharacter; nColorIndex++)
            {
                WCHAR szColorOptionCodeDesc[MAX_DESCRIPTION_LENGTH];
                StrRemoveNonASCII(szColorOptionCodeDesc, ARRAYSIZE(szColorOptionCodeDesc), DEF_BUTTONLABEL_2_PK[nColorIndex]);

                strOutput.Format(L"    { L\"%s\", DESC_NODETYPE_TREE, (void*)SAMSHO5SP_A_%s_%s_PALETTES, ARRAYSIZE(SAMSHO5SP_A_%s_%s_PALETTES) },\r\n", DEF_BUTTONLABEL_2_PK[nColorIndex], szCodeDesc, szColorOptionCodeDesc, szCodeDesc, szColorOptionCodeDesc);
                OutputDebugString(strOutput);
            }
        }

        if (SAMSHO5SP_A_CharacterPalettes[nCharIndex].nEffectsOffset != 0)
        {
            strOutput.Format(L"    { L\"Effects\", DESC_NODETYPE_TREE, (void*)SAMSHO5SP_A_%s_%s_PALETTES, ARRAYSIZE(SAMSHO5SP_A_%s_%s_PALETTES) },\r\n", szCodeDesc, L"EFFECTS", szCodeDesc, L"EFFECTS");
            OutputDebugString(strOutput);
        }

        if (SAMSHO5SP_A_CharacterPalettes[nCharIndex].nWinPortraitOffset != 0)
        {
            strOutput.Format(L"    { L\"Win Portraits\", DESC_NODETYPE_TREE, (void*)SAMSHO5SP_A_%s_%s_PALETTES, ARRAYSIZE(SAMSHO5SP_A_%s_%s_PALETTES) },\r\n", szCodeDesc, L"WIN_PORTRAITS", szCodeDesc, L"WIN_PORTRAITS");
            OutputDebugString(strOutput);
        }

        if (SAMSHO5SP_A_CharacterPalettes[nCharIndex].nIntroPortraitOffset != 0)
        {
            strOutput.Format(L"    { L\"Intro Portraits\", DESC_NODETYPE_TREE, (void*)SAMSHO5SP_A_%s_%s_PALETTES, ARRAYSIZE(SAMSHO5SP_A_%s_%s_PALETTES) },\r\n", szCodeDesc, L"INTRO_PORTRAITS", szCodeDesc, L"INTRO_PORTRAITS");
            OutputDebugString(strOutput);
        }

        OutputDebugString(L"};\r\n\r\n");
    }

    // And now the units...
    OutputDebugString(L"const sDescTreeNode SAMSHO5SP_A_UNITS[SAMSHO5SP_A_NUMUNIT] =\n{\n");

    for (UINT16 nCharIndex = 0; nCharIndex < ARRAYSIZE(SAMSHO5SP_A_CharacterPalettes); nCharIndex++)
    {
        WCHAR szCodeDesc[MAX_DESCRIPTION_LENGTH];
        StrRemoveNonASCII(szCodeDesc, ARRAYSIZE(szCodeDesc), SAMSHO5SP_A_CharacterPalettes[nCharIndex].pszCharacterName);

        strOutput.Format(L"    { L\"%s\", DESC_NODETYPE_TREE, (void*)SAMSHO5SP_A_%s_COLLECTION, ARRAYSIZE(SAMSHO5SP_A_%s_COLLECTION) },\r\n", SAMSHO5SP_A_CharacterPalettes[nCharIndex].pszCharacterName, szCodeDesc, szCodeDesc);
        OutputDebugString(strOutput);
    }

    OutputDebugString(L"};\r\n\r\n");
}

sFileRule CGame_SAMSHO5SP_A::GetRule(UINT16 nUnitId)
{
    sFileRule NewFileRule;

    // This value is only used for directory-based games
    _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, (nUnitId == 0) ? L"272-p1.bin" : L"p1.bin");

    // The arcade and Steam versions of 5SP are identical other than ROM size.  Thankfully the offsets are unchanged.
    m_nExpectedGameROMSize = (nUnitId == 0) ? m_nExpectedGameROMSizeArcade : m_nExpectedGameROMSizeSteam;

    NewFileRule.uUnitId = 0;
    NewFileRule.uVerifyVar = m_nExpectedGameROMSize;

    return NewFileRule;
}

UINT16 CGame_SAMSHO5SP_A::GetCollectionCountForUnit(UINT16 nUnitId)
{
    if (nUnitId == SAMSHO5SP_A_EXTRALOC)
    {
        return GetExtraCt(nUnitId);
    }
    else
    {
        return SAMSHO5SP_A_UNITS[nUnitId].uChildAmt;
    }
}

UINT16 CGame_SAMSHO5SP_A::GetNodeCountForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    if (nUnitId == SAMSHO5SP_A_EXTRALOC)
    {
        return GetExtraCt(nUnitId);
    }
    else
    {
        const sDescTreeNode* pCollectionNode = (const sDescTreeNode*)(SAMSHO5SP_A_UNITS[nUnitId].ChildNodes);

        return pCollectionNode[nCollectionId].uChildAmt;
    }
}

LPCWSTR CGame_SAMSHO5SP_A::GetDescriptionForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    if (nUnitId == SAMSHO5SP_A_EXTRALOC)
    {
        return L"Extra Palettes";
    }
    else
    {
        const sDescTreeNode* pCollection = (const sDescTreeNode*)SAMSHO5SP_A_UNITS[nUnitId].ChildNodes;
        return pCollection[nCollectionId].szDesc;
    }
}

UINT16 CGame_SAMSHO5SP_A::GetPaletteCountForUnit(UINT16 nUnitId)
{
    if (nUnitId == SAMSHO5SP_A_EXTRALOC)
    {
        return GetExtraCt(nUnitId);
    }
    else
    {
        UINT16 nCompleteCount = 0;
        const sDescTreeNode* pCompleteROMTree = SAMSHO5SP_A_UNITS;
        UINT16 nCollectionCount = pCompleteROMTree[nUnitId].uChildAmt;

        const sDescTreeNode* pCurrentCollection = (const sDescTreeNode*)(pCompleteROMTree[nUnitId].ChildNodes);

        for (UINT16 nCollectionIndex = 0; nCollectionIndex < nCollectionCount; nCollectionIndex++)
        {
            nCompleteCount += pCurrentCollection[nCollectionIndex].uChildAmt;
        }

#if SAMSHO5SP_A_DEBUG
        CString strMsg;
        strMsg.Format(L"CGame_SAMSHO5SP_A::GetPaletteCountForUnit: %u for unit %u which has %u collections.\n", nCompleteCount, nUnitId, nCollectionCount);
        OutputDebugString(strMsg);
#endif

        return nCompleteCount;
    }
}

const sGame_PaletteDataset* CGame_SAMSHO5SP_A::GetPaletteSet(UINT16 nUnitId, UINT16 nCollectionId)
{
    // Don't use this for Extra palettes.
    const sDescTreeNode* pCurrentSet = (const sDescTreeNode*)SAMSHO5SP_A_UNITS[nUnitId].ChildNodes;
    return ((sGame_PaletteDataset*)(pCurrentSet[nCollectionId].ChildNodes));
}

UINT16 CGame_SAMSHO5SP_A::GetNodeSizeFromPaletteId(UINT16 nUnitId, UINT16 nPaletteId)
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

const sDescTreeNode* CGame_SAMSHO5SP_A::GetNodeFromPaletteId(UINT16 nUnitId, UINT16 nPaletteId, bool fReturnBasicNodesOnly)
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

        if (nUnitId == SAMSHO5SP_A_EXTRALOC)
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
            const sDescTreeNode* pCollectionNodeToCheck = (const sDescTreeNode*)(SAMSHO5SP_A_UNITS[nUnitId].ChildNodes);
            
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

const sGame_PaletteDataset* CGame_SAMSHO5SP_A::GetSpecificPalette(UINT16 nUnitId, UINT16 nPaletteId)
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

void CGame_SAMSHO5SP_A::LoadSpecificPaletteData(UINT16 nUnitId, UINT16 nPalId)
{
     if (nUnitId != SAMSHO5SP_A_EXTRALOC)
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
    else // SAMSHO5SP_A_EXTRALOC
    {
        // This is where we handle all the palettes added in via Extra.
        stExtraDef* pCurrDef = GetExtraDefForSAMSHO5SP(GetExtraLoc(nUnitId) + nPalId);

        m_nCurrentPaletteROMLocation = pCurrDef->uOffset;
        m_nCurrentPaletteSizeInColors = (pCurrDef->cbPaletteSize / m_nSizeOfColorsInBytes);
        m_pszCurrentPaletteName = pCurrDef->szDesc;
    }
}

BOOL CGame_SAMSHO5SP_A::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
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
    if (NodeGet->uUnitId != SAMSHO5SP_A_EXTRALOC)
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
            }

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

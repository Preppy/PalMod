#include "StdAfx.h"
#include "GameDef.h"
#include "Game_NGBC_A.h"
#include "..\PalMod.h"
#include "..\RegProc.h"

#define NGBC_A_DEBUG DEFAULT_GAME_DEBUG_STATE

stExtraDef* CGame_NGBC_A::NGBC_A_EXTRA_CUSTOM = nullptr;

CDescTree CGame_NGBC_A::MainDescTree = nullptr;

int CGame_NGBC_A::rgExtraCountAll[NGBC_A_NUMUNIT + 1];
int CGame_NGBC_A::rgExtraLoc[NGBC_A_NUMUNIT + 1];

UINT32 CGame_NGBC_A::m_nTotalPaletteCountForNGBC = 0;
UINT32 CGame_NGBC_A::m_nExpectedGameROMSize = 0xf000000;
UINT32 CGame_NGBC_A::m_nConfirmedROMSize = -1;

void CGame_NGBC_A::InitializeStatics()
{
    safe_delete_array(CGame_NGBC_A::NGBC_A_EXTRA_CUSTOM);

    memset(rgExtraCountAll, -1, sizeof(rgExtraCountAll));
    memset(rgExtraLoc, -1, sizeof(rgExtraLoc));

    MainDescTree.SetRootTree(CGame_NGBC_A::InitDescTree());
}

CGame_NGBC_A::CGame_NGBC_A(UINT32 nConfirmedROMSize)
{
    OutputDebugString(L"CGame_NGBC_A::CGame_NGBC_A: Loading ROM...\n");

    //Set color mode
    createPalOptions = { NO_SPECIAL_OPTIONS, WRITE_MAX };
    SetAlphaMode(AlphaMode::GameUsesFixedAlpha);
    SetColorMode(ColMode::COLMODE_RGB555_BE);

    // We need this set before we initialize so that corrupt Extras truncate correctly.
    // Otherwise the new user inadvertently corrupts their ROM.
    m_nConfirmedROMSize = nConfirmedROMSize;
    InitializeStatics();

    m_nTotalInternalUnits = NGBC_A_NUMUNIT;
    m_nExtraUnit = NGBC_A_EXTRALOC;

    m_nSafeCountForThisRom = GetExtraCt(m_nExtraUnit) + 3840;
    m_pszExtraFilename = EXTRA_FILENAME_NGBC_A;
    m_nTotalPaletteCount = m_nTotalPaletteCountForNGBC;
    // This magic number is used to warn users if their Extra file is trying to write somewhere potentially unusual
    m_nLowestKnownPaletteRomLocation = 0x1013000;

    nUnitAmt = m_nTotalInternalUnits + (GetExtraCt(m_nExtraUnit) ? 1 : 0);

    InitDataBuffer();

    //Set game information
    nGameFlag = NGBC_A;
    nImgGameFlag = IMGDAT_SECTION_KOF;
    nImgUnitAmt = ARRAYSIZE(NGBC_A_IMGIDS_USED);
    m_prgGameImageSet = NGBC_A_IMGIDS_USED;

    nFileAmt = 1;

    //Set the image out display type
    DisplayType = eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT;
    // Button labels are used for the Export Image dialog
    pButtonLabelSet = DEF_BUTTONLABEL_KOFXI;
    m_nNumberOfColorOptions = ARRAYSIZE(DEF_BUTTONLABEL_KOFXI);

    //Create the redirect buffer
    rgUnitRedir = new UINT16[nUnitAmt + 1];
    memset(rgUnitRedir, NULL, sizeof(UINT16) * nUnitAmt);

    //Create the file changed flag
    PrepChangeTrackingArray();
}

CGame_NGBC_A::~CGame_NGBC_A(void)
{
    safe_delete_array(CGame_NGBC_A::NGBC_A_EXTRA_CUSTOM);
    ClearDataBuffer();
    //Get rid of the file changed flag
    FlushChangeTrackingArray();
}

CDescTree* CGame_NGBC_A::GetMainTree()
{
    return &CGame_NGBC_A::MainDescTree;
}

int CGame_NGBC_A::GetExtraCt(UINT16 nUnitId, BOOL bCountVisibleOnly)
{
    return _GetExtraCount(rgExtraCountAll, NGBC_A_NUMUNIT, nUnitId, NGBC_A_EXTRA_CUSTOM);
}

int CGame_NGBC_A::GetExtraLoc(UINT16 nUnitId)
{
    return _GetExtraLocation(rgExtraLoc, NGBC_A_NUMUNIT, nUnitId, NGBC_A_EXTRA_CUSTOM);
}

struct sNGBC_CharacterDump
{
    LPCWSTR pszCharacterName = nullptr;
    UINT32 baseLocation = 0;
    LPCWSTR pszImageRefName = nullptr;
};

sNGBC_CharacterDump NGBCCharacterList[] =
{
    { L"Yuuki",             0x1013000, L"indexNGBCSprites_Yuuki" }, // 0x1014000
    { L"Ai",                0x1250000, L"indexNGBCSprites_Ai" }, // 0x1251000
    { L"Kyo",               0x13fe800, L"indexNGBCSprites_Kyo" }, // 0x13ff800
    { L"Iori",              0x15d9800, L"indexNGBCSprites_Iori" }, // 0x15da800
    { L"Mr. Karate",        0x17cb000, L"indexNGBCSprites_MrKarate" }, // 0x17cc000
    { L"Terry",             0x190a000, L"indexNGBCSprites_Terry" }, // 0x190b000
    { L"Haohmaru",          0x1aa8800, L"indexNGBCSprites_Haohmaru" }, // 0x1aa9800
    { L"Genjuro",           0x1c71000, L"indexNGBCSprites_Genjuro" }, // 0x1c72000
    { L"Kaede",             0x1e32800, L"indexNGBCSprites_Kaede" }, // 0x1e33800
    { L"Moriya",            0x1fd7800, L"indexNGBCSprites_Moriya" }, // 0x1fd8800
    { L"K'",                0x21b0800, L"indexNGBCSprites_K" }, // 0x21b1800
    { L"Rock",              0x2338000, L"indexNGBCSprites_Rock" }, // 0x2339000
    { L"Mai",               0x2552000, L"indexNGBCSprites_Mai" }, // 0x2553000
    { L"Shermie",           0x26d3800, L"indexNGBCSprites_Shermie" }, // 0x26d4800
    { L"Geese",             0x2867000, L"indexNGBCSprites_Geese" }, // 0x2868000
    { L"Mr. Big",           0x2a0a800, L"indexNGBCSprites_MrBig" }, // 0x2a0b800
    { L"Nakoruru",          0x2b6b800, L"indexNGBCSprites_Nakoruru" }, // 0x2b6c800
    { L"Hotaru",            0x2cad000, L"indexNGBCSprites_Hotaru" }, // 0x2cae000
    { L"Keiichiro",         0x2e13000, L"indexNGBCSprites_Keiichiro" }, // 0x2e14000
    { L"Kim",               0x2fc0800, L"indexNGBCSprites_Kim" }, // 0x2fc1800
    { L"Akari",             0x30d3800, L"indexNGBCSprites_Akari" }, // 0x30d4800
    { L"Shiki",             0x32e1000, L"indexNGBCSprites_Shiki" }, // 0x32e2000
    { L"Hanzo",             0x344d800, L"indexNGBCSprites_Hanzo" }, // 0x344e800
    { L"Fuuma",             0x35f0800, L"indexNGBCSprites_Fuuma" }, // 0x35f1800
    { L"Mudman",            0x37d6000, L"indexNGBCSprites_Mudman" }, // 0x37d7000
    { L"Tung Fu Rue",       0x399d800, L"indexNGBCSprites_TungFuRue" }, // 0x399e800
    { L"Marco",             0x3b12000, L"indexNGBCSprites_Marco" }, // 0x3b13000
    { L"Mars People",       0x3ce5800, L"indexNGBCSprites_MarsPeople" }, // 0x3ce6800
    { L"King Lion",         0x3e95000, L"indexNGBCSprites_KingLion" }, // 0x3e96000
    { L"Cyber Woo",         0x406f000, L"indexNGBCSprites_CyberWoo" }, // 0x4070000
    { L"Goddess Athena",    0x4236000, L"indexNGBCSprites_GoddessAthena" }, // 0x4237000
    { L"Kisarah",           0x43f0800, L"indexNGBCSprites_Kisarah" }, // 0x43f1800
    { L"Chonshu",           0x455a000, L"indexNGBCSprites_Chonshu" }, // 0x455b000
    { L"Chonrei",           0x46a4800, L"indexNGBCSprites_Chonrei" }, // 0x46a5800
    { L"Neo Dio",           0x47f1000, L"indexNGBCSprites_NeoDio" }, // 0x47f2000
    { L"Asura",             0x49a4800, L"indexNGBCSprites_Asura" }, // 0x49a5800
    { L"Mizuchi",           0x4b77800, L"indexNGBCSprites_Mizuchi" }, // 0x4b78800
    { L"Robert",            0x4d01800, L"indexNGBCSprites_Robert" }, // 0x4d02800
    { L"Lee Pai Long",      0x4e77000, L"indexNGBCSprites_LeePaiLong" }, // 0x4e78000
    { L"Goodman",           0x4f7b800, L"indexNGBCSprites_Goodman" }, // 0x4f7c800
};

const LPCWSTR DEF_BUTTONLABEL_KOFXI_FOR_UI[] =
{
    L"A", L"B", L"C", L"D", L"E + A", L"E + B", L"E + C", L"E + D", L"Start + A", L"Start + B", L"Start + C", L"Start + D"
};

void CGame_NGBC_A::DumpAllCharacters()
{
    const LPCWSTR DEF_BUTTONLABEL_KOFXI_FOR_CODE[] =
    {
        L"A", L"B", L"C", L"D", L"EA", L"EB", L"EC", L"ED", L"SA", L"SB", L"SC", L"SD"
    };

    //Go through each character
    for (UINT16 iUnitCtr = 0; iUnitCtr < ARRAYSIZE(NGBCCharacterList); iUnitCtr++)
    {
        UINT32 nCurrentCharacterOffset = 0;
        UINT16 nPaletteCount = 0;
        CString strOutput;
        WCHAR szCodeDesc[MAX_DESCRIPTION_LENGTH];

        StruprRemoveNonASCII(szCodeDesc, ARRAYSIZE(szCodeDesc), NGBCCharacterList[iUnitCtr].pszCharacterName);

        for (UINT16 iButtonIndex = 0; iButtonIndex < ARRAYSIZE(DEF_BUTTONLABEL_KOFXI); iButtonIndex++)
        {
            nCurrentCharacterOffset = NGBCCharacterList[iUnitCtr].baseLocation + (0x100 * iButtonIndex);

            strOutput.Format(L"const sGame_PaletteDataset NGBC_A_%s_PALETTES_%s[] =\r\n{\r\n", szCodeDesc, DEF_BUTTONLABEL_KOFXI_FOR_CODE[iButtonIndex]);
            OutputDebugString(strOutput);

            if (NGBCCharacterList[iUnitCtr].pszImageRefName)
            {
                strOutput.Format(L"    { L\"%s %s\", 0x%07x, 0x%07x, %s },\r\n", NGBCCharacterList[iUnitCtr].pszCharacterName, DEF_BUTTONLABEL_KOFXI_FOR_CODE[iButtonIndex],
                    nCurrentCharacterOffset, nCurrentCharacterOffset + 0x20,
                    NGBCCharacterList[iUnitCtr].pszImageRefName);
            }
            else
            {
                strOutput.Format(L"    { L\"%s %s\", 0x%07x, 0x%07x },\r\n", NGBCCharacterList[iUnitCtr].pszCharacterName, DEF_BUTTONLABEL_KOFXI_FOR_CODE[iButtonIndex],
                    nCurrentCharacterOffset, nCurrentCharacterOffset + 0x20);
            }

            OutputDebugString(strOutput);
            nCurrentCharacterOffset += 0x20;
            nPaletteCount++;

            const LPCWSTR pszMoveNames[] =
            {
                L"Super Trail",
                L"Extra Move 1",
                L"Extra Move 2",
                L"Extra Move 3",
                L"Extra Move 4",
                L"Extra Move 5",
                L"Extra Move 6",
            };

            for (UINT16 iCurrentExtra = 0; iCurrentExtra < ARRAYSIZE(pszMoveNames); iCurrentExtra++)
            {
                LPCWSTR pszCurrentMoveName = pszMoveNames[iCurrentExtra];
                UINT32 nCurrentImageToUse = iCurrentExtra; // Starts at Super trail, which wants main sprite, then moves to Extras

                if (NGBCCharacterList[iUnitCtr].pszImageRefName)
                {
                    strOutput.Format(L"    { L\"%s - %s\", 0x%07x, 0x%07x, %s, 0x%02x },\r\n", DEF_BUTTONLABEL_KOFXI[iButtonIndex], pszCurrentMoveName,
                        nCurrentCharacterOffset, nCurrentCharacterOffset + 0x20,
                        NGBCCharacterList[iUnitCtr].pszImageRefName, nCurrentImageToUse);
                }
                else
                {
                    strOutput.Format(L"    { L\"%s - %s\", 0x%07x, 0x%07x },\r\n", DEF_BUTTONLABEL_KOFXI[iButtonIndex], pszCurrentMoveName,
                        nCurrentCharacterOffset, nCurrentCharacterOffset + 0x20);
                }

                OutputDebugString(strOutput);
                nCurrentCharacterOffset += 0x20;
                nPaletteCount++;
            }

            OutputDebugString(L"};\r\n\r\n");
        }
    }

    // Now create the collections...
    for (UINT16 iUnitCtr = 0; iUnitCtr < ARRAYSIZE(NGBCCharacterList); iUnitCtr++)
    {
        CString strOutput;
        WCHAR szCodeDesc[MAX_DESCRIPTION_LENGTH];

        StruprRemoveNonASCII(szCodeDesc, ARRAYSIZE(szCodeDesc), NGBCCharacterList[iUnitCtr].pszCharacterName);

        strOutput.Format(L"const sDescTreeNode NGBC_A_%s_COLLECTION[] =\r\n{\r\n", szCodeDesc);
        OutputDebugString(strOutput);

        for (UINT16 nButtonNameIndex = 0; nButtonNameIndex < ARRAYSIZE(DEF_BUTTONLABEL_KOFXI_FOR_UI); nButtonNameIndex++)
        {
            strOutput.Format(L"    { L\"%s\", DESC_NODETYPE_TREE, (void*)NGBC_A_%s_PALETTES_%s, ARRAYSIZE(NGBC_A_%s_PALETTES_%s) },\r\n", DEF_BUTTONLABEL_KOFXI_FOR_UI[nButtonNameIndex], szCodeDesc, DEF_BUTTONLABEL_KOFXI_FOR_CODE[nButtonNameIndex],
                                                                                                                                            szCodeDesc, DEF_BUTTONLABEL_KOFXI_FOR_CODE[nButtonNameIndex] );
            OutputDebugString(strOutput);
        }
        
        OutputDebugString(L"};\r\n\r\n");
    }

    for (UINT16 iUnitCtr = 0; iUnitCtr < ARRAYSIZE(NGBCCharacterList); iUnitCtr++)
    {
        UINT32 nCurrentCharacterOffset = 0;
        UINT16 nPaletteCount = 0;
        CString strOutput;
        WCHAR szCodeDesc[MAX_DESCRIPTION_LENGTH];

        StruprRemoveNonASCII(szCodeDesc, ARRAYSIZE(szCodeDesc), NGBCCharacterList[iUnitCtr].pszCharacterName);

        strOutput.Format(L"    { L\"%s\", DESC_NODETYPE_TREE, (void*)NGBC_A_%s_COLLECTION, ARRAYSIZE(NGBC_A_%s_COLLECTION) },\r\n", NGBCCharacterList[iUnitCtr].pszCharacterName, szCodeDesc, szCodeDesc);
        OutputDebugString(strOutput);
    }
}

sDescTreeNode* CGame_NGBC_A::InitDescTree()
{
    UINT32 nTotalPaletteCount = 0;

    //Load extra file if we're using it
    LoadExtraFileForGame(EXTRA_FILENAME_NGBC_A, NGBC_A_EXTRA, &NGBC_A_EXTRA_CUSTOM, NGBC_A_EXTRALOC, m_nConfirmedROMSize);

    UINT16 nUnitCt = NGBC_A_NUMUNIT + (GetExtraCt(NGBC_A_EXTRALOC) ? 1 : 0);
    
    sDescTreeNode* NewDescTree = new sDescTreeNode;

    //Create the main character tree
    _snwprintf_s(NewDescTree->szDesc, ARRAYSIZE(NewDescTree->szDesc), _TRUNCATE, L"%s", g_GameFriendlyName[NGBC_A]);
    NewDescTree->ChildNodes = new sDescTreeNode[nUnitCt];
    NewDescTree->uChildAmt = nUnitCt;
    //All units have tree children
    NewDescTree->uChildType = DESC_NODETYPE_TREE;

    m_nTotalPaletteCountForNGBC = _InitDescTree(NewDescTree,
        NGBC_A_UNITS,
        NGBC_A_EXTRALOC,
        NGBC_A_NUMUNIT,
        rgExtraCountAll,
        rgExtraLoc,
        NGBC_A_EXTRA_CUSTOM
    );

    // This is used during development to produce the palette data for the header
    // Please note you'll want to reinsert the pairing (pairHandledInCode) for Goddess Athena
    //DumpAllCharacters();

    return NewDescTree;
}

sFileRule CGame_NGBC_A::GetRule(UINT16 nUnitId)
{
    sFileRule NewFileRule;

    // This value is only used for directory-based games
    _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, L"NeoGeoBattleColliseum.bin");

    NewFileRule.uUnitId = 0;
    NewFileRule.uVerifyVar = m_nExpectedGameROMSize;

    return NewFileRule;
}

UINT16 CGame_NGBC_A::GetCollectionCountForUnit(UINT16 nUnitId)
{
    return _GetCollectionCountForUnit(NGBC_A_UNITS, rgExtraCountAll, NGBC_A_NUMUNIT, NGBC_A_EXTRALOC, nUnitId, NGBC_A_EXTRA_CUSTOM);
}

UINT16 CGame_NGBC_A::GetNodeCountForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetNodeCountForCollection(NGBC_A_UNITS, rgExtraCountAll, NGBC_A_NUMUNIT, NGBC_A_EXTRALOC, nUnitId, nCollectionId, NGBC_A_EXTRA_CUSTOM);
}

LPCWSTR CGame_NGBC_A::GetDescriptionForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetDescriptionForCollection(NGBC_A_UNITS, NGBC_A_EXTRALOC, nUnitId, nCollectionId);
}

UINT16 CGame_NGBC_A::GetPaletteCountForUnit(UINT16 nUnitId)
{
    return _GetPaletteCountForUnit(NGBC_A_UNITS, rgExtraCountAll, NGBC_A_NUMUNIT, NGBC_A_EXTRALOC, nUnitId, NGBC_A_EXTRA_CUSTOM);
}

const sGame_PaletteDataset* CGame_NGBC_A::GetPaletteSet(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetPaletteSet(NGBC_A_UNITS, nUnitId, nCollectionId);
}

const sDescTreeNode* CGame_NGBC_A::GetNodeFromPaletteId(UINT16 nUnitId, UINT16 nPaletteId, bool fReturnBasicNodesOnly)
{
    return _GetNodeFromPaletteId(NGBC_A_UNITS, rgExtraCountAll, NGBC_A_NUMUNIT, NGBC_A_EXTRALOC, nUnitId, nPaletteId, NGBC_A_EXTRA_CUSTOM, fReturnBasicNodesOnly);
}

const sGame_PaletteDataset* CGame_NGBC_A::GetSpecificPalette(UINT16 nUnitId, UINT16 nPaletteId)
{
    return _GetSpecificPalette(NGBC_A_UNITS, rgExtraCountAll, NGBC_A_NUMUNIT, NGBC_A_EXTRALOC, nUnitId, nPaletteId, NGBC_A_EXTRA_CUSTOM);
}

void CGame_NGBC_A::LoadSpecificPaletteData(UINT16 nUnitId, UINT16 nPalId)
{
     if (nUnitId != NGBC_A_EXTRALOC)
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
    else // NGBC_A_EXTRALOC
    {
        // This is where we handle all the palettes added in via Extra.
        stExtraDef* pCurrDef = GetExtraDefForNGBC(GetExtraLoc(nUnitId) + nPalId);

        m_nCurrentPaletteROMLocation = pCurrDef->uOffset;
        m_nCurrentPaletteSizeInColors = (pCurrDef->cbPaletteSize / m_nSizeOfColorsInBytes);
        m_pszCurrentPaletteName = pCurrDef->szDesc;
    }
}

BOOL CGame_NGBC_A::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
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
    if (NodeGet->uUnitId != NGBC_A_EXTRALOC)
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
                        // The starting point is the absolute first palette for the sprite in question which is found in P1/A
                        nSrcStart -= nNodeIncrement;
                    }
                }
            }

            if (paletteDataSet->pPalettePairingInfo)
            {
                sDescTreeNode* charUnit = GetMainTree()->GetDescTree(Node01, -1);

                if (wcscmp(charUnit->szDesc, k_ngbcNameKey_GoddessAthena) == 0)
                {
                    fShouldUseAlternateLoadLogic = true;

                    int nPaletteTwoDelta = 2;
                    int nPaletteThreeDelta = 3;

                    const sGame_PaletteDataset* paletteDataSetOne = GetSpecificPalette(NodeGet->uUnitId, NodeGet->uPalId);
                    const sGame_PaletteDataset* paletteDataSetTwo = GetSpecificPalette(NodeGet->uUnitId, NodeGet->uPalId + nPaletteTwoDelta);
                    const sGame_PaletteDataset* paletteDataSetThree = GetSpecificPalette(NodeGet->uUnitId, NodeGet->uPalId + nPaletteThreeDelta);

                    ClearSetImgTicket(
                        CreateImgTicket(paletteDataSetOne->indexImgToUse, paletteDataSetOne->indexOffsetToUse,
                            CreateImgTicket(paletteDataSetTwo->indexImgToUse, paletteDataSetTwo->indexOffsetToUse,
                                CreateImgTicket(paletteDataSetThree->indexImgToUse, paletteDataSetThree->indexOffsetToUse
                                    ))));


                    //Set each palette
                    sDescNode* JoinedNode[] = {
                        GetMainTree()->GetDescNode(Node01, Node02, Node03, -1),
                        GetMainTree()->GetDescNode(Node01, Node02, Node03 + nPaletteTwoDelta, -1),
                        GetMainTree()->GetDescNode(Node01, Node02, Node03 + nPaletteThreeDelta, -1),
                    };

                    //Set each palette
                    CreateDefPal(JoinedNode[0], 0);
                    CreateDefPal(JoinedNode[1], 1);
                    CreateDefPal(JoinedNode[2], 2);

                    SetSourcePal(0, NodeGet->uUnitId, nSrcStart, nSrcAmt, nNodeIncrement);
                    SetSourcePal(1, NodeGet->uUnitId, nSrcStart + nPaletteTwoDelta, nSrcAmt, nNodeIncrement);
                    SetSourcePal(2, NodeGet->uUnitId, nSrcStart + nPaletteThreeDelta, nSrcAmt, nNodeIncrement);
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

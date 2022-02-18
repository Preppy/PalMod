#include "StdAfx.h"
#include "GameDef.h"
#include "Game_SAMSHO3_A.h"
#include "..\PalMod.h"
#include "..\RegProc.h"

stExtraDef* CGame_SAMSHO3_A::SAMSHO3_A_EXTRA_CUSTOM = nullptr;

CDescTree CGame_SAMSHO3_A::MainDescTree = nullptr;

uint32_t CGame_SAMSHO3_A::rgExtraCountAll[SAMSHO3_A_NUMUNIT + 1];
uint32_t CGame_SAMSHO3_A::rgExtraLoc[SAMSHO3_A_NUMUNIT + 1];

UINT32 CGame_SAMSHO3_A::m_nTotalPaletteCountForSAMSHO3 = 0;
UINT32 CGame_SAMSHO3_A::m_nExpectedGameROMSize = 0x100000;  // 1,048,576 bytes
UINT32 CGame_SAMSHO3_A::m_nConfirmedROMSize = -1;

void CGame_SAMSHO3_A::InitializeStatics()
{
    safe_delete_array(CGame_SAMSHO3_A::SAMSHO3_A_EXTRA_CUSTOM);

    memset(rgExtraCountAll, -1, sizeof(rgExtraCountAll));
    memset(rgExtraLoc, -1, sizeof(rgExtraLoc));

    MainDescTree.SetRootTree(CGame_SAMSHO3_A::InitDescTree());
}

CGame_SAMSHO3_A::CGame_SAMSHO3_A(UINT32 nConfirmedROMSize)
{
    OutputDebugString(L"CGame_SAMSHO3_A::CGame_SAMSHO3_A: Loading ROM...\n");

    createPalOptions = { NO_SPECIAL_OPTIONS, WRITE_16 };
    SetAlphaMode(AlphaMode::GameDoesNotUseAlpha);
    SetColorMode(ColMode::COLMODE_RGB666_NEOGEO);

    // We need this set before we initialize so that corrupt Extras truncate correctly.
    // Otherwise the new user inadvertently corrupts their ROM.
    m_nConfirmedROMSize = nConfirmedROMSize;
    InitializeStatics();

    m_nTotalInternalUnits = SAMSHO3_A_NUMUNIT;
    m_nExtraUnit = SAMSHO3_A_EXTRALOC;

    m_nSafeCountForThisRom = GetExtraCt(m_nExtraUnit) + 898;
    m_pszExtraFilename = EXTRA_FILENAME_SAMSHO3_A;
    m_nTotalPaletteCount = m_nTotalPaletteCountForSAMSHO3;
    // This magic number is used to warn users if their Extra file is trying to write somewhere potentially unusual
    m_nLowestKnownPaletteRomLocation = 0x360;

    nUnitAmt = m_nTotalInternalUnits + (GetExtraCt(m_nExtraUnit) ? 1 : 0);

    InitDataBuffer();

    //Set game information
    nGameFlag = SAMSHO3_A;
    nImgGameFlag = IMGDAT_SECTION_SAMSHO;
    m_prgGameImageSet = SAMSHO3_A_IMGIDS_USED;

    nFileAmt = 1;

    //Set the image out display type
    DisplayType = eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT;
    // Button labels are used for the Export Image dialog
    pButtonLabelSet = DEF_BUTTONLABEL_SAMSHO3;

    //Create the redirect buffer
    rgUnitRedir = new uint32_t[nUnitAmt + 1];
    memset(rgUnitRedir, NULL, sizeof(uint32_t) * nUnitAmt);

    //Create the file changed flag
    PrepChangeTrackingArray();
}

CGame_SAMSHO3_A::~CGame_SAMSHO3_A(void)
{
    safe_delete_array(CGame_SAMSHO3_A::SAMSHO3_A_EXTRA_CUSTOM);
    ClearDataBuffer();
    //Get rid of the file changed flag
    FlushChangeTrackingArray();
}

CDescTree* CGame_SAMSHO3_A::GetMainTree()
{
    return &CGame_SAMSHO3_A::MainDescTree;
}

uint32_t CGame_SAMSHO3_A::GetExtraCt(uint32_t nUnitId, BOOL fCountVisibleOnly)
{
    return _GetExtraCount(rgExtraCountAll, SAMSHO3_A_NUMUNIT, nUnitId, SAMSHO3_A_EXTRA_CUSTOM);
}

uint32_t CGame_SAMSHO3_A::GetExtraLoc(uint32_t nUnitId)
{
    return _GetExtraLocation(rgExtraLoc, SAMSHO3_A_NUMUNIT, nUnitId, SAMSHO3_A_EXTRA_CUSTOM);
}

sDescTreeNode* CGame_SAMSHO3_A::InitDescTree()
{
    //Load extra file if we're using it
    LoadExtraFileForGame(EXTRA_FILENAME_SAMSHO3_A, &SAMSHO3_A_EXTRA_CUSTOM, SAMSHO3_A_EXTRALOC, m_nConfirmedROMSize);

    UINT16 nUnitCt = SAMSHO3_A_NUMUNIT + (GetExtraCt(SAMSHO3_A_EXTRALOC) ? 1 : 0);
    
    sDescTreeNode* NewDescTree = new sDescTreeNode;

    //Create the main character tree
    _snwprintf_s(NewDescTree->szDesc, ARRAYSIZE(NewDescTree->szDesc), _TRUNCATE, L"%s", g_GameFriendlyName[SAMSHO3_A]);
    NewDescTree->ChildNodes = new sDescTreeNode[nUnitCt];
    NewDescTree->uChildAmt = nUnitCt;
    //All units have tree children
    NewDescTree->uChildType = DESC_NODETYPE_TREE;

    m_nTotalPaletteCountForSAMSHO3 = _InitDescTree(NewDescTree,
        SAMSHO3_A_UNITS,
        SAMSHO3_A_EXTRALOC,
        SAMSHO3_A_NUMUNIT,
        rgExtraCountAll,
        rgExtraLoc,
        SAMSHO3_A_EXTRA_CUSTOM
    );

    // For development use to speed things up
    //DumpPaletteHeaders();

    return NewDescTree;
}

void CGame_SAMSHO3_A::DumpPaletteHeaders()
{
    CString strOutput;
    const UINT32 SAMSHO_PALETTE_LENGTH = 0x40;

    struct sSamSho3CharacterInfo
    {
        std::wstring strCharacter;
        std::wstring strImageId;
        std::wstring strPetName;
        std::wstring strPetNameBImageOverride;
        bool shouldShowSpriteForExtra2;
    };

    const std::vector<sSamSho3CharacterInfo> rgCharacters = {
        { L"Haohmaru",  L"indexSamSho3Sprites_Haohmaru",    L"",            L"",        1 },
        { L"Nakoruru",  L"indexSamSho5Sprites_Nakoruru",    L"Mamahaha",    L"Shikuru", 1 },
        { L"Rimururu",  L"indexSamSho5Sprites_Rimururu",    L"",            L"",        0 },
        { L"Hanzo",     L"indexSamSho3Sprites_Hanzo",       L"",            L"",        0 },
        { L"Galford",   L"indexSamSho5Sprites_Galford",     L"Poppy",       L"",        0 },
        { L"Kyoshiro",  L"indexSamSho5Sprites_Kyoshiro",    L"Toad",        L"",        0 },
        { L"Ukyo",      L"indexSamSho3Sprites_Ukyo",        L"",            L"",        0 },
        { L"Genjuro",   L"indexSamSho3Sprites_Genjuro",     L"",            L"",        0 },
        { L"Basara",    L"indexSamSho3Sprites_Basara",      L"",            L"",        1 },
        { L"Shizumaru", L"indexSamSho5Sprites_Shizumaru",   L"",            L"",        0 },
        { L"Gaira",     L"indexSamSho5Sprites_Gaira",       L"",            L"",        0 },
        { L"Amakusa",   L"indexSamSho5Sprites_Amakusa",     L"",            L"",        0 },
        // Unused
        { L"",          L"",                                L"",            L"",        0 },
        { L"Zankuro",   L"indexSamSho5Sprites_Zankuro",     L"",            L"",        0 },
    };

    const UINT32 k_nBasePalette = 0x01000;
    UINT32 nCurrentPalettePosition = k_nBasePalette;

    for (UINT16 nCharIndex = 0; nCharIndex < rgCharacters.size(); nCharIndex++)
    {
        WCHAR szCodeDesc[MAX_DESCRIPTION_LENGTH];
        StruprRemoveNonASCII(szCodeDesc, ARRAYSIZE(szCodeDesc), rgCharacters[nCharIndex].strCharacter.c_str());

        // Character effects
        for (UINT16 nStatusIndex = 0; nStatusIndex < 64; nStatusIndex++)
        {
            if (rgCharacters[nCharIndex].strCharacter.length())
            {

                CString strPaletteName;
                CString strImageString;

                if ((nStatusIndex % 16) == 0)
                {
                    switch (nStatusIndex)
                    {
                    case 0:
                        strOutput.Format(L"const sGame_PaletteDataset SAMSHO3_A_%s_PALETTES_S1[] = \r\n{\r\n", szCodeDesc);
                        break;
                    case 16:
                        strOutput.Format(L"const sGame_PaletteDataset SAMSHO3_A_%s_PALETTES_S2[] = \r\n{\r\n", szCodeDesc);
                        break;
                    case 32:
                        strOutput.Format(L"const sGame_PaletteDataset SAMSHO3_A_%s_PALETTES_B1[] = \r\n{\r\n", szCodeDesc);
                        break;
                    case 48:
                        strOutput.Format(L"const sGame_PaletteDataset SAMSHO3_A_%s_PALETTES_B2[] = \r\n{\r\n", szCodeDesc);
                        break;
                    }

                    OutputDebugString(strOutput);
                }

                UINT32 nAdjustedIndex = nStatusIndex % 16;

                strImageString.Format(L", %s", rgCharacters[nCharIndex].strImageId.c_str());

                UINT32 nPaletteStart = nCurrentPalettePosition;
                UINT32 nPaletteEnd = nCurrentPalettePosition + SAMSHO_PALETTE_LENGTH;

                switch (nAdjustedIndex)
                {
                case 0:
                    strPaletteName = L"Main";

                    // Pair for all pets except if they have a unique "B" pet
                    if (rgCharacters[nCharIndex].strPetName.length())
                    {
                        if (!rgCharacters[nCharIndex].strPetNameBImageOverride.length() || (nStatusIndex < 32))
                        {
                            strImageString += ", 0, &pairNext10";
                        }
                        else
                        {
                            strImageString += ", 0";
                        }
                    }
                    break;
                case 1:
                    strPaletteName = L"Rage Flash";

                    // Pair for all pets except if they have a unique "B" pet
                    if (rgCharacters[nCharIndex].strPetName.length())
                    {
                        if (!rgCharacters[nCharIndex].strPetNameBImageOverride.length() || (nStatusIndex < 32))
                        {
                            strImageString += ", 0, &pairNext10";
                        }
                        else
                        {
                            strImageString += ", 0";
                        }
                    }
                    break;
                case 2: // Extra palette 2
                    if (!rgCharacters[nCharIndex].shouldShowSpriteForExtra2)
                    {
                        strImageString = L"";
                    }
                    __fallthrough;
                case 3:
                    strPaletteName.Format(L"Extra Palette %u", nAdjustedIndex);
                    break;
                case 4:
                    strPaletteName = L"Shocked";
                    break;
                case 5:
                    strPaletteName = L"Frozen";
                    break;
                case 6:
                    strPaletteName = L"Burning";
                    break;
                case 8:
                    strPaletteName = L"Daylight";
                    break;
                case 9:
                    strPaletteName = L"Moonlight";
                    break;
                case 10:
                case 11:
                case 12:
                    strPaletteName.Format(L"Extra Palette %u", nAdjustedIndex);

                    if (rgCharacters[nCharIndex].strPetName.length())
                    {
                        strPaletteName += L": ";
                        if ((nStatusIndex >= 32) && rgCharacters[nCharIndex].strPetNameBImageOverride.length())
                        {
                            // This is Nakoruru B which is a little odd.
                            strPaletteName += rgCharacters[nCharIndex].strPetNameBImageOverride.c_str();
                            strImageString = L", indexSamSho5Sprites_Rera";
                            nPaletteStart += 0x20;
                        }
                        else
                        {
                            strPaletteName += rgCharacters[nCharIndex].strPetName.c_str();
                        }
                        strImageString += ", 1";
                    }
                    else
                    {
                        strImageString = L"";
                    }
                    break;
                case 13:
                    // Slashes are three sets of 16 colors each
                    strPaletteName = L"Slashes (1/3)";
                    strImageString = L"";
                    nPaletteEnd -= 0x20;

                    strOutput.Format(L"    { L\"%s\", 0x%x, 0x%x%s },\r\n", strPaletteName.GetString(),
                        nPaletteStart, nPaletteEnd,
                        strImageString.GetString());
                    OutputDebugString(strOutput);

                    nPaletteStart += 0x20;
                    nPaletteEnd += 0x20;
                    strPaletteName = L"Slashes (2/3)";

                    break;
                case 14:
                    strPaletteName = L"Slashes (3/3)";
                    strImageString = L"";
                    nPaletteEnd -= 0x20;
                    break;
                case 15:
                    // Portrait is the last "half" of slash 3
                    strPaletteName = L"Portrait";
                    strImageString = L"";
                    nPaletteStart -= 0x20;
                    nPaletteEnd -= 0x20;
                    break;
                default:
                    strPaletteName.Format(L"Extra Palette %u", nAdjustedIndex);
                    strImageString = L"";
                    break;
                }

                strOutput.Format(L"    { L\"%s\", 0x%x, 0x%x%s },\r\n", strPaletteName.GetString(),
                    nPaletteStart, nPaletteEnd,
                    strImageString.GetString());
                OutputDebugString(strOutput);

                if (nAdjustedIndex == 15)
                {
                    strOutput.Format(L"};\r\n\r\n");
                    OutputDebugString(strOutput);
                }
            }

            nCurrentPalettePosition += SAMSHO_PALETTE_LENGTH;
        }
    }

    for (UINT16 nCharIndex = 0; nCharIndex < rgCharacters.size(); nCharIndex++)
    {
        if (!rgCharacters[nCharIndex].strCharacter.length())
        {
            continue;
        }

        WCHAR szCodeDesc[MAX_DESCRIPTION_LENGTH];
        StruprRemoveNonASCII(szCodeDesc, ARRAYSIZE(szCodeDesc), rgCharacters[nCharIndex].strCharacter.c_str());

        strOutput.Format(L"const sDescTreeNode SAMSHO3_A_%s_COLLECTION[] = \r\n{\r\n", szCodeDesc);
        OutputDebugString(strOutput);
        strOutput.Format(L"    { L\"Slash 1\", DESC_NODETYPE_TREE, (void*)SAMSHO3_A_%s_PALETTES_S1, ARRAYSIZE(SAMSHO3_A_%s_PALETTES_S1) },\r\n", szCodeDesc, szCodeDesc);
        OutputDebugString(strOutput);
        strOutput.Format(L"    { L\"Slash 2\", DESC_NODETYPE_TREE, (void*)SAMSHO3_A_%s_PALETTES_S2, ARRAYSIZE(SAMSHO3_A_%s_PALETTES_S2) },\r\n", szCodeDesc, szCodeDesc);
        OutputDebugString(strOutput);
        strOutput.Format(L"    { L\"Bust 1\", DESC_NODETYPE_TREE, (void*)SAMSHO3_A_%s_PALETTES_B1, ARRAYSIZE(SAMSHO3_A_%s_PALETTES_B1) },\r\n", szCodeDesc, szCodeDesc);
        OutputDebugString(strOutput);
        strOutput.Format(L"    { L\"Bust 2\", DESC_NODETYPE_TREE, (void*)SAMSHO3_A_%s_PALETTES_B2, ARRAYSIZE(SAMSHO3_A_%s_PALETTES_B2) },\r\n", szCodeDesc, szCodeDesc);
        OutputDebugString(strOutput);
        strOutput.Format(L"};\r\n\r\n");
        OutputDebugString(strOutput);
    }

    strOutput.Format(L"const sDescTreeNode SAMSHO3_A_UNITS[] = \r\n{\r\n");
    OutputDebugString(strOutput);

    for (UINT16 nCharIndex = 0; nCharIndex < rgCharacters.size(); nCharIndex++)
    {
        if (!rgCharacters[nCharIndex].strCharacter.length())
        {
            continue;
        }

        WCHAR szCodeDesc[MAX_DESCRIPTION_LENGTH];
        StruprRemoveNonASCII(szCodeDesc, ARRAYSIZE(szCodeDesc), rgCharacters[nCharIndex].strCharacter.c_str());

        strOutput.Format(L"    { L\"%s\", DESC_NODETYPE_TREE, (void*)SAMSHO3_A_%s_COLLECTION, ARRAYSIZE(SAMSHO3_A_%s_COLLECTION) },\r\n", rgCharacters[nCharIndex].strCharacter.c_str(), szCodeDesc, szCodeDesc);
        OutputDebugString(strOutput);
    }

    strOutput.Format(L"};\r\n\r\n");
    OutputDebugString(strOutput);
}

sFileRule CGame_SAMSHO3_A::GetRule(uint32_t nUnitId)
{
    sFileRule NewFileRule;

    // This value is only used for directory-based games
    _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, L"087-p5.p5");
    NewFileRule.uUnitId = 0;
    NewFileRule.uVerifyVar = m_nExpectedGameROMSize;

    return NewFileRule;
}

uint32_t CGame_SAMSHO3_A::GetCollectionCountForUnit(uint32_t nUnitId)
{
    return _GetCollectionCountForUnit(SAMSHO3_A_UNITS, rgExtraCountAll, SAMSHO3_A_NUMUNIT, SAMSHO3_A_EXTRALOC, nUnitId, SAMSHO3_A_EXTRA_CUSTOM);
}

uint32_t CGame_SAMSHO3_A::GetNodeCountForCollection(uint32_t nUnitId, uint32_t nCollectionId)
{
    return _GetNodeCountForCollection(SAMSHO3_A_UNITS, rgExtraCountAll, SAMSHO3_A_NUMUNIT, SAMSHO3_A_EXTRALOC, nUnitId, nCollectionId, SAMSHO3_A_EXTRA_CUSTOM);
}

LPCWSTR CGame_SAMSHO3_A::GetDescriptionForCollection(uint32_t nUnitId, uint32_t nCollectionId)
{
    return _GetDescriptionForCollection(SAMSHO3_A_UNITS, SAMSHO3_A_EXTRALOC, nUnitId, nCollectionId);
}

uint32_t CGame_SAMSHO3_A::GetPaletteCountForUnit(uint32_t nUnitId)
{
    return _GetPaletteCountForUnit(SAMSHO3_A_UNITS, rgExtraCountAll, SAMSHO3_A_NUMUNIT, SAMSHO3_A_EXTRALOC, nUnitId, SAMSHO3_A_EXTRA_CUSTOM);
}

const sGame_PaletteDataset* CGame_SAMSHO3_A::GetPaletteSet(uint32_t nUnitId, uint32_t nCollectionId)
{
    return _GetPaletteSet(SAMSHO3_A_UNITS, nUnitId, nCollectionId);
}

uint32_t CGame_SAMSHO3_A::GetNodeSizeFromPaletteId(uint32_t nUnitId, uint32_t nPaletteId)
{
    return _GetNodeSizeFromPaletteId(SAMSHO3_A_UNITS, rgExtraCountAll, SAMSHO3_A_NUMUNIT, SAMSHO3_A_EXTRALOC, nUnitId, nPaletteId, SAMSHO3_A_EXTRA_CUSTOM);
}

const sDescTreeNode* CGame_SAMSHO3_A::GetNodeFromPaletteId(uint32_t nUnitId, uint32_t nPaletteId, bool fReturnBasicNodesOnly)
{
    return _GetNodeFromPaletteId(SAMSHO3_A_UNITS, rgExtraCountAll, SAMSHO3_A_NUMUNIT, SAMSHO3_A_EXTRALOC, nUnitId, nPaletteId, SAMSHO3_A_EXTRA_CUSTOM, fReturnBasicNodesOnly);
}

const sGame_PaletteDataset* CGame_SAMSHO3_A::GetSpecificPalette(uint32_t nUnitId, uint32_t nPaletteId)
{
    return _GetSpecificPalette(SAMSHO3_A_UNITS, rgExtraCountAll, SAMSHO3_A_NUMUNIT, SAMSHO3_A_EXTRALOC, nUnitId, nPaletteId, SAMSHO3_A_EXTRA_CUSTOM);
}

void CGame_SAMSHO3_A::LoadSpecificPaletteData(uint32_t nUnitId, uint32_t nPalId)
{
    if (nUnitId != SAMSHO3_A_EXTRALOC)
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
    else // SAMSHO3_A_EXTRALOC
    {
        // This is where we handle all the palettes added in via Extra.
        stExtraDef* pCurrDef = GetExtraDefForSAMSHO3(GetExtraLoc(nUnitId) + nPalId);

        m_nCurrentPaletteROMLocation = pCurrDef->uOffset;
        m_nCurrentPaletteSizeInColors = (pCurrDef->cbPaletteSize / m_nSizeOfColorsInBytes);
        m_pszCurrentPaletteName = pCurrDef->szDesc;
    }
}

BOOL CGame_SAMSHO3_A::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
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
    uint32_t nSrcStart = NodeGet->uPalId;
    uint32_t nSrcAmt = 1;
    uint32_t nNodeIncrement = 1;

    //Get rid of any palettes if there are any
    BasePalGroup.FlushPalAll();

    // Make sure to reset the image id
    int nTargetImgId = 0;
    uint32_t nImgUnitId = INVALID_UNIT_VALUE;

    bool fShouldUseAlternateLoadLogic = false;

    // Only load images for internal units, since we don't currently have a methodology for associating
    // external loads to internal sprites.
    if (NodeGet->uUnitId != SAMSHO3_A_EXTRALOC)
    {
        const sGame_PaletteDataset* paletteDataSet = GetSpecificPalette(NodeGet->uUnitId, NodeGet->uPalId);

        if (paletteDataSet)
        {
            nImgUnitId = paletteDataSet->indexImgToUse;
            nTargetImgId = paletteDataSet->indexOffsetToUse;

            const sDescTreeNode* pCurrentNode = GetNodeFromPaletteId(NodeGet->uUnitId, NodeGet->uPalId, false);

            if (pCurrentNode)
            {
                if ( (paletteDataSet->indexImgToUse == indexSamSho5Sprites_Nakoruru) &&
                    ((_wcsicmp(paletteDataSet->szPaletteName, L"Main") == 0) ||
                     (_wcsicmp(paletteDataSet->szPaletteName, L"Rage Flash") == 0)))
                {
                    if ((_wcsicmp(pCurrentNode->szDesc, L"Slash 1") == 0) || (_wcsicmp(pCurrentNode->szDesc, L"Slash 2") == 0) ||
                        (_wcsicmp(pCurrentNode->szDesc, L"Bust 1") == 0) || (_wcsicmp(pCurrentNode->szDesc, L"Bust 2") == 0))
                    {
                        nSrcAmt = 2;
                        nNodeIncrement = pCurrentNode->uChildAmt;

                        if (((nSrcStart >= nNodeIncrement) && (nSrcStart < (nNodeIncrement * 2))) ||
                            ((nSrcStart >= (nNodeIncrement * 3)) && (nSrcStart < (nNodeIncrement * 4))))
                        {
                            nSrcStart -= nNodeIncrement;
                        }
                    }
                }
                else if ((_wcsicmp(pCurrentNode->szDesc, L"Slash 1") == 0) || (_wcsicmp(pCurrentNode->szDesc, L"Slash 2") == 0) ||
                         (_wcsicmp(pCurrentNode->szDesc, L"Bust 1") == 0) || (_wcsicmp(pCurrentNode->szDesc, L"Bust 2") == 0))
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
                    const uint32_t nStageCount = GetNodeSizeFromPaletteId(NodeGet->uUnitId, NodeGet->uPalId);

                    fShouldUseAlternateLoadLogic = true;
                    sImgTicket* pImgArray = nullptr;

                    for (uint32_t nStageIndex = 0; nStageIndex < nStageCount; nStageIndex++)
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
                    INT8 nPeerPaletteDistance = paletteDataSet->pPalettePairingInfo->nNodeIncrementToPartner;

                    const sGame_PaletteDataset* paletteDataSetToJoin = GetSpecificPalette(NodeGet->uUnitId, NodeGet->uPalId + nPeerPaletteDistance);

                    if (paletteDataSetToJoin)
                    {
                        fShouldUseAlternateLoadLogic = true;

                        ClearSetImgTicket(
                            CreateImgTicket(paletteDataSet->indexImgToUse, paletteDataSet->indexOffsetToUse,
                                CreateImgTicket(paletteDataSetToJoin->indexImgToUse, paletteDataSetToJoin->indexOffsetToUse)
                            )
                        );

                        //Set each palette
                        std::vector<sDescNode*> JoinedNode = {
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

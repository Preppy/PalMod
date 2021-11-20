#include "StdAfx.h"
#include "Game_MAAB_A.h"
#include "MAAB_A_DEF.h"
#include "..\PalMod.h"

size_t CGame_MAAB_A::uRuleCtr = 0;

CDescTree CGame_MAAB_A::MainDescTree = nullptr;

//#define MAAB_A_DEBUG DEFAULT_GAME_DEBUG_STATE
#define MAAB_A_DEBUG 1

CGame_MAAB_A::CGame_MAAB_A(UINT32 nConfirmedROMSize /* = -1 */)
{
    createPalOptions = { NO_SPECIAL_OPTIONS, WRITE_MAX, 0 };
    SetAlphaMode(AlphaMode::GameUsesFixedAlpha);
    m_fGameUsesAlphaValue = true;
    SetColorMode(ColMode::COLMODE_ABGR8888);

    InitializeStatics();

    // Don't load extras
    m_pszExtraFilename = nullptr;

    nFileAmt = GetFileCount();
    nUnitAmt = m_nTotalInternalUnits = GetUniqueUnitCount();

    InitDataBuffer();

    nGameFlag = MAAB_A;
    nImgGameFlag = IMGDAT_SECTION_ARCANA;
    m_prgGameImageSet = MAAB_A_IMGIDS_USED;

    //Set the image out display type
    DisplayType = eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT;

    // The label set is variable, so set correctly each time we load that specific unit
    pButtonLabelSet = DEF_NOBUTTONS;

    //Create the redirect buffer: size it to the file count so that LoadFile works as needed
    rgUnitRedir = new size_t[nFileAmt + 1];
    memset(rgUnitRedir, 0, sizeof(size_t) * nFileAmt);

    FlushChangeTrackingArray();
    PrepChangeTrackingArray();
}

CGame_MAAB_A::~CGame_MAAB_A()
{
    ClearDataBuffer();
    //Get rid of the file changed flag
    FlushChangeTrackingArray();
}

void CGame_MAAB_A::InitializeStatics()
{
    MainDescTree.SetRootTree(CGame_MAAB_A::InitDescTree());
}

sFileRule CGame_MAAB_A::GetRule(size_t nUnitId)
{
    sFileRule NewFileRule;

    const size_t nAdjustedUnitId = (nUnitId & RULE_COUNTER_DEMASK);
    _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, L"%s", MAAB_A_CharacterData[nAdjustedUnitId].pszFileName);
    NewFileRule.uUnitId = nUnitId;
    NewFileRule.uVerifyVar = MAAB_A_CharacterData[nAdjustedUnitId].nExpectedFileSize;

    return NewFileRule;
}

sFileRule CGame_MAAB_A::GetNextRule()
{
    sFileRule NewFileRule = GetRule(uRuleCtr);

    uRuleCtr++;

    if (uRuleCtr >= GetFileCount())
    {
        uRuleCtr = INVALID_UNIT_VALUE;
    }

    return NewFileRule;
}

sDescTreeNode* CGame_MAAB_A::InitDescTree()
{
    size_t nTotalPaletteCount = 0;
    size_t nUnitCt = GetUniqueUnitCount();

    sDescTreeNode* NewDescTree = new sDescTreeNode;

    //Create the main character tree
    _snwprintf_s(NewDescTree->szDesc, ARRAYSIZE(NewDescTree->szDesc), _TRUNCATE, L"%s", g_GameFriendlyName[MAAB_A]);
    NewDescTree->ChildNodes = new sDescTreeNode[nUnitCt];
    NewDescTree->uChildAmt = nUnitCt;
    //All units have tree children
    NewDescTree->uChildType = DESC_NODETYPE_TREE;

    CString strMsg;
    OutputDebugString(L"CGame_MAAB_A_DIR::InitDescTree: Building desc tree for MAAB_A...\n");

    //Go through each character
    for (size_t nUnitCtrByFile = 0; nUnitCtrByFile < nUnitCt; nUnitCtrByFile++)
    {
        sDescTreeNode* UnitNode = nullptr;
        sDescTreeNode* CollectionNode = nullptr;
        sDescNode* ChildNode = nullptr;

        size_t nUnitChildCount = GetCollectionCountForUnit(nUnitCtrByFile);

        UnitNode = &((sDescTreeNode*)NewDescTree->ChildNodes)[nUnitCtrByFile];

        //Set each description
        _snwprintf_s(UnitNode->szDesc, ARRAYSIZE(UnitNode->szDesc), _TRUNCATE, L"%s", MAAB_A_CharacterData[nUnitCtrByFile].pszCharacter);

        UnitNode->ChildNodes = new sDescTreeNode[nUnitChildCount];
        //All children have collection trees
        UnitNode->uChildType = DESC_NODETYPE_TREE;
        UnitNode->uChildAmt = nUnitChildCount;

#if MAAB_A_DEBUG
        strMsg.Format(L"Unit: \"%s\", %u of %u, %u total children\n", UnitNode->szDesc, nUnitCtrByFile + 1, nUnitCt, UnitNode->uChildAmt);
        OutputDebugString(strMsg);
#endif

        size_t nTotalPalettesUsedInUnit = 0;

        //Set data for each child group ("collection")
        for (size_t iCollectionCtr = 0; iCollectionCtr < nUnitChildCount; iCollectionCtr++)
        {
            CollectionNode = &((sDescTreeNode*)UnitNode->ChildNodes)[iCollectionCtr];

            //Set each collection data
            _snwprintf_s(CollectionNode->szDesc, ARRAYSIZE(CollectionNode->szDesc), _TRUNCATE, GetDescriptionForCollection(nUnitCtrByFile, iCollectionCtr));
            //Collection children have nodes
            size_t nListedChildrenCount = GetNodeCountForCollection(nUnitCtrByFile, iCollectionCtr);
            CollectionNode->uChildType = DESC_NODETYPE_NODE;
            CollectionNode->uChildAmt = nListedChildrenCount;
            CollectionNode->ChildNodes = (sDescTreeNode*)new sDescNode[nListedChildrenCount];

#if MAAB_A_DEBUG
            strMsg.Format(L"\tCollection: \"%s\", %u of %u, %u children\n", CollectionNode->szDesc, iCollectionCtr + 1, nUnitChildCount, nListedChildrenCount);
            OutputDebugString(strMsg);
#endif

            UINT16 nHandledChildren = 0;
            UINT16 nNodeIndexForCharacter = 0;
            size_t nUnitCtrByCharacter = nUnitCtrByFile;

            for (size_t nNodeIndexForUnit = 0; nNodeIndexForUnit < nListedChildrenCount; nNodeIndexForUnit++)
            {
                bool fShouldUseBasicPalettes = ShouldUseBasePaletteSet(nUnitCtrByFile, iCollectionCtr);
                ChildNode = &((sDescNode*)CollectionNode->ChildNodes)[nNodeIndexForUnit];

                size_t nFileUnitId = 0;
                size_t nFilePalId = 0;

                GetFileIndexFromCharacterIndex(nUnitCtrByCharacter, nNodeIndexForUnit, &nFileUnitId, &nFilePalId);

                if (fShouldUseBasicPalettes)
                {
                    _snwprintf_s(ChildNode->szDesc, ARRAYSIZE(ChildNode->szDesc), _TRUNCATE, L"%s", MAAB_A_CharacterData[nFileUnitId].ppszPaletteList[nFilePalId]);
                }
                else
                {
                    _snwprintf_s(ChildNode->szDesc, ARRAYSIZE(ChildNode->szDesc), _TRUNCATE, L"%s", MAAB_A_CharacterData[nFileUnitId].prgExtraPalettes[nFilePalId].szPaletteName);
                }

                ChildNode->uUnitId = nUnitCtrByFile;
                ChildNode->uPalId = nTotalPalettesUsedInUnit++;
                nTotalPaletteCount++;

                nHandledChildren++;

                const size_t nTotalPalettesThisCharacter = MAAB_A_CharacterData[nUnitCtrByCharacter].ppszPaletteList.size() + MAAB_A_CharacterData[nUnitCtrByCharacter].prgExtraPalettes.size();

                if ((nHandledChildren == nTotalPalettesThisCharacter) && MAAB_A_CharacterData[nUnitCtrByCharacter].pszNodeName)
                {
                    // Step forward to the next part of this collection
                    for (size_t nNextIndex = nUnitCtrByCharacter + 1; nNextIndex < ARRAYSIZE(MAAB_A_CharacterData); nNextIndex++)
                    {
                        if (MAAB_A_CharacterData[nNextIndex].pszNodeName && (_wcsicmp(MAAB_A_CharacterData[nNextIndex].pszCharacter, MAAB_A_CharacterData[nUnitCtrByCharacter].pszCharacter) == 0))
                        {
                            nUnitCtrByCharacter = nNextIndex;
                            nHandledChildren = 0;
                            break;
                        }                    
                    }
                }

#if MAAB_A_DEBUG
                strMsg.Format(L"\t\tPalette: \"%s\", %u of %u\n", ChildNode->szDesc, nNodeIndexForUnit + 1, nListedChildrenCount);
                OutputDebugString(strMsg);
#endif
            }
        }
    }

    m_nTotalPaletteCount = nTotalPaletteCount;

    strMsg.Format(L"CGame_MAAB_A_DIR::InitDescTree: Loaded %u palettes for MAAB ROM\n", nTotalPaletteCount);
    OutputDebugString(strMsg);

    return NewDescTree;
}

size_t CGame_MAAB_A::GetCollectionCountForUnit(size_t nUnitId)
{
    // One core set per character, plus optional extras
    size_t nCollectionCount = 0;

    if (MAAB_A_CharacterData[nUnitId].pszNodeName == nullptr)
    {
        // This is the simple path for units with no crossfile subunits
        if (!MAAB_A_CharacterData[nUnitId].ppszPaletteList.empty())
        {
            nCollectionCount++;
        }

        if (!MAAB_A_CharacterData[nUnitId].prgExtraPalettes.empty())
        {
            nCollectionCount++;
        }
    }
    else
    {
        for (size_t nIndex = 0; nIndex < ARRAYSIZE(MAAB_A_CharacterData); nIndex++)
        {
            // This is a crossfile unit: the collection count is equal to files also sharing this unit name
            if (MAAB_A_CharacterData[nIndex].pszNodeName && (_wcsicmp(MAAB_A_CharacterData[nUnitId].pszCharacter, MAAB_A_CharacterData[nIndex].pszCharacter) == 0))
            {
                nCollectionCount++;
            }
        }
    }

    return nCollectionCount;
}

bool CGame_MAAB_A::ShouldUseBasePaletteSet(size_t nCharacterUnitId, size_t nCollectionId)
{
    size_t nFileUnitId = 0;
    size_t nAdjustedCollectionId = 0;

    GetFileIndexFromCharacterCollection(nCharacterUnitId, nCollectionId, &nFileUnitId, &nAdjustedCollectionId);

    if ((nAdjustedCollectionId == 0) && (!MAAB_A_CharacterData[nFileUnitId].ppszPaletteList.empty()))
    {
        return true;
    }
    else
    {
        return false;
    }
}

size_t CGame_MAAB_A::GetNodeCountForCollection(size_t nCharacterUnitId, size_t nCollectionId)
{
    if (MAAB_A_CharacterData[nCharacterUnitId].pszNodeName == nullptr)
    {
        if (ShouldUseBasePaletteSet(nCharacterUnitId, nCollectionId))
        {
            return MAAB_A_CharacterData[nCharacterUnitId].ppszPaletteList.size();
        }
        else
        {
            return MAAB_A_CharacterData[nCharacterUnitId].prgExtraPalettes.size();
        }
    }
    else
    {
        size_t nCurrentCollection = 0;

        for (size_t nIndex = 0; nIndex < ARRAYSIZE(MAAB_A_CharacterData); nIndex++)
        {
            // This is a crossfile unit: the collection count is equal to files also sharing this unit name
            if (!MAAB_A_CharacterData[nIndex].pszNodeName || (_wcsicmp(MAAB_A_CharacterData[nCharacterUnitId].pszCharacter, MAAB_A_CharacterData[nIndex].pszCharacter) != 0))
            {
                continue;
            }

            if (nCurrentCollection == nCollectionId)
            {
                if (ShouldUseBasePaletteSet(nCharacterUnitId, nCollectionId))
                {
                    return MAAB_A_CharacterData[nIndex].ppszPaletteList.size();
                }
                else
                {
                    return MAAB_A_CharacterData[nIndex].prgExtraPalettes.size();
                }
            }

            nCurrentCollection++;
        }

        return 0;
    }
}

size_t CGame_MAAB_A::GetPaletteCountForUnit(size_t nUnitId)
{
    if (MAAB_A_CharacterData[nUnitId].pszNodeName == nullptr)
    {
        return MAAB_A_CharacterData[nUnitId].ppszPaletteList.size() + MAAB_A_CharacterData[nUnitId].prgExtraPalettes.size();
    }
    else
    {
        size_t nPaletteCount = 0;

        for (int nIndex = 0; nIndex < ARRAYSIZE(MAAB_A_CharacterData); nIndex++)
        {
            // This is a crossfile unit: the collection count is equal to files also sharing this unit name
            if (MAAB_A_CharacterData[nIndex].pszNodeName && (_wcsicmp(MAAB_A_CharacterData[nUnitId].pszCharacter, MAAB_A_CharacterData[nIndex].pszCharacter) == 0))
            {
                nPaletteCount += MAAB_A_CharacterData[nIndex].ppszPaletteList.size() + MAAB_A_CharacterData[nIndex].prgExtraPalettes.size();
            }
        }

        return nPaletteCount;
    }
}

LPCWSTR CGame_MAAB_A::GetDescriptionForCollection(size_t nUnitId, size_t nCollectionId)
{
    if (ShouldUseBasePaletteSet(nUnitId, nCollectionId))
    {
        if (MAAB_A_CharacterData[nUnitId].pszNodeName == nullptr)
        {
            return L"Core Palettes";
        }
        else
        {
            UINT16 nCurrentCollection = 0;

            for (int nIndex = 0; nIndex < ARRAYSIZE(MAAB_A_CharacterData); nIndex++)
            {
                // This is a crossfile unit: the collection count is equal to files also sharing this unit name
                if (!MAAB_A_CharacterData[nIndex].pszNodeName || (_wcsicmp(MAAB_A_CharacterData[nUnitId].pszCharacter, MAAB_A_CharacterData[nIndex].pszCharacter) != 0))
                {
                    continue;
                }

                if (nCurrentCollection == nCollectionId)
                {
                    return MAAB_A_CharacterData[nIndex].pszNodeName;
                }

                nCurrentCollection++;
            }
            
            return L"(internal error)";
        }
    }
    else
    {
        if (MAAB_A_CharacterData[nUnitId].ppszPaletteList.empty())
        {
            return L"Support Knights";
        }
        else
        {
            return L"Extras";
        }
    }
}

size_t CGame_MAAB_A::GetUniqueUnitCount()
{
    size_t nUniqueCount = 0;

    for (size_t nIndex = 0; nIndex < ARRAYSIZE(MAAB_A_CharacterData); nIndex++)
    {
        bool fIsUnique = true;

        for (size_t nCheckIndex = 0; nCheckIndex < nIndex; nCheckIndex++)
        {
            if (_wcsicmp(MAAB_A_CharacterData[nIndex].pszCharacter, MAAB_A_CharacterData[nCheckIndex].pszCharacter) == 0)
            {
                fIsUnique = false;
                break;
            }
        }

        if (fIsUnique)
        {
            nUniqueCount++;
        }
    }

    return nUniqueCount;
}

size_t CGame_MAAB_A::GetFileCount()
{
    return ARRAYSIZE(MAAB_A_CharacterData);
}

bool CGame_MAAB_A::PaletteIsInFileUnit(size_t nTargetFileUnitId, size_t nDisplayUnitId, size_t nDisplayPalId)
{
    size_t nActualFileUnitId = 0;
    size_t nFilePalId = 0;

    GetFileIndexFromCharacterIndex(nDisplayUnitId, nDisplayPalId, &nActualFileUnitId, &nFilePalId);

    return (nTargetFileUnitId == nActualFileUnitId);
}

void CGame_MAAB_A::GetFileIndexFromCharacterCollection(size_t nCharacterUnitId, size_t nCollectionId, size_t* pnFileUnitId, size_t* pnFilePaletteId)
{
    *pnFileUnitId = nCharacterUnitId;
    // Collections map to the 0 entry in files for now.
    *pnFilePaletteId = 0;

    if (MAAB_A_CharacterData[nCharacterUnitId].pszNodeName != nullptr)
    {
        UINT16 nTotalMatches = 0;

        for (UINT16 nIndex = 0; nIndex < ARRAYSIZE(MAAB_A_CharacterData); nIndex++)
        {
            if (MAAB_A_CharacterData[nIndex].pszNodeName && (_wcsicmp(MAAB_A_CharacterData[nIndex].pszCharacter, MAAB_A_CharacterData[nCharacterUnitId].pszCharacter) == 0))
            {
                if (nTotalMatches++ == nCollectionId)
                {
                    *pnFileUnitId = nIndex;
                    break;
                }
            }
        }
    }
}

void CGame_MAAB_A::GetFileIndexFromCharacterIndex(size_t nCharacterUnitId, size_t nCharacterPalId, size_t* pnFileUnitId, size_t* pnFilePalId)
{
    *pnFileUnitId = nCharacterUnitId;
    *pnFilePalId = nCharacterPalId;

    if (MAAB_A_CharacterData[nCharacterUnitId].pszNodeName != nullptr)
    {
        for (size_t nIndex = 0; nIndex < ARRAYSIZE(MAAB_A_CharacterData); nIndex++)
        {
            if (MAAB_A_CharacterData[nIndex].pszNodeName && (_wcsicmp(MAAB_A_CharacterData[nIndex].pszCharacter, MAAB_A_CharacterData[nCharacterUnitId].pszCharacter) == 0))
            {
                *pnFileUnitId = nIndex;

                size_t nPalettesThisUnit = MAAB_A_CharacterData[nIndex].ppszPaletteList.size() + MAAB_A_CharacterData[nIndex].prgExtraPalettes.size();
                if (nPalettesThisUnit > *pnFilePalId)
                {
                    break;
                }

                *pnFilePalId -= nPalettesThisUnit;
            }
        }
    }
}

void CGame_MAAB_A::GetCharacterIndexFromFileIndex(size_t nFileUnitId, size_t nFilePalId, size_t* nCharacterUnitId, size_t* nCharacterPalId)
{
    *nCharacterUnitId = nFileUnitId;
    *nCharacterPalId = nFilePalId;

    if (MAAB_A_CharacterData[*nCharacterUnitId].pszNodeName != nullptr)
    {
        bool fFoundCharacterUnit = false;

        for (size_t nIndex = 0; nIndex < nFileUnitId; nIndex++)
        {
            if (MAAB_A_CharacterData[nIndex].pszNodeName && (_wcsicmp(MAAB_A_CharacterData[nIndex].pszCharacter, MAAB_A_CharacterData[nFileUnitId].pszCharacter) == 0))
            {
                if (!fFoundCharacterUnit)
                {
                    // Use the first instance of the character unit found
                    *nCharacterUnitId = nIndex;
                    fFoundCharacterUnit = true;
                }

                *nCharacterPalId += MAAB_A_CharacterData[nIndex].ppszPaletteList.size() + MAAB_A_CharacterData[nIndex].prgExtraPalettes.size();
            }
        }
    }
}

void CGame_MAAB_A::LoadSpecificPaletteDataByFileUnit(size_t nFileUnitId, size_t nFilePalId)
{
    if (nFilePalId < MAAB_A_CharacterData[nFileUnitId].ppszPaletteList.size())
    {
        // MAAB palettes are all 0x400 long
        const int cbPaletteSizeOnDisc = 0x400;

        m_pszCurrentPaletteName = MAAB_A_CharacterData[nFileUnitId].ppszPaletteList[nFilePalId];
        m_nCurrentPaletteROMLocation = MAAB_A_CharacterData[nFileUnitId].nInitialLocation + (cbPaletteSizeOnDisc * nFilePalId) + (0x0 * nFilePalId);
        m_nCurrentPaletteSizeInColors = cbPaletteSizeOnDisc / m_nSizeOfColorsInBytes;
    }
    else // effects palettes
    {
        size_t nAdjustedPaletteId = nFilePalId - MAAB_A_CharacterData[nFileUnitId].ppszPaletteList.size();

        int cbPaletteSizeOnDisc = MAAB_A_CharacterData[nFileUnitId].prgExtraPalettes[nAdjustedPaletteId].nPaletteOffsetEnd - MAAB_A_CharacterData[nFileUnitId].prgExtraPalettes[nAdjustedPaletteId].nPaletteOffset;

        m_pszCurrentPaletteName = MAAB_A_CharacterData[nFileUnitId].prgExtraPalettes[nAdjustedPaletteId].szPaletteName;
        m_nCurrentPaletteROMLocation = MAAB_A_CharacterData[nFileUnitId].prgExtraPalettes[nAdjustedPaletteId].nPaletteOffset;
        m_nCurrentPaletteSizeInColors = cbPaletteSizeOnDisc / m_nSizeOfColorsInBytes;
    }

    // The portrait palettes don't actually use a transparency color: we'll use this check to handle this for now.
    if (MAAB_A_CharacterData[nFileUnitId].ppszPaletteList.empty())
    {
        createPalOptions.nTransparencyColorPosition = 257;

    }
    else
    {
        createPalOptions.nTransparencyColorPosition = 0;
    }
}

void CGame_MAAB_A::LoadSpecificPaletteData(size_t nDisplayUnitId, size_t nDisplayPalId)
{
    size_t nFileUnitId = 0;
    size_t nFilePalId = 0;

    GetFileIndexFromCharacterIndex(nDisplayUnitId, nDisplayPalId, &nFileUnitId, &nFilePalId);

    LoadSpecificPaletteDataByFileUnit(nFileUnitId, nFilePalId);
}

BOOL CGame_MAAB_A::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
{
    //Reset palette sources
    ClearSrcPal();

    if (Node01 == -1)
    {
        return FALSE;
    }

    sDescNode* CharacterNodeGet = GetMainTree()->GetDescNode(Node01, Node02, Node03, Node04);

    if (CharacterNodeGet == NULL)
    {
        return FALSE;
    }

    //Change the image id if we need to
    nTargetImgId = 0;
    size_t nImgUnitId = INVALID_UNIT_VALUE;
    int nSrcStart = (int)0;
    size_t nSrcAmt = 1;
    int nNodeIncrement = 1;

    size_t nFileUnitId = 0;
    size_t nFilePalId = 0;

    GetFileIndexFromCharacterIndex(CharacterNodeGet->uUnitId, CharacterNodeGet->uPalId, &nFileUnitId, &nFilePalId);

    //Get rid of any palettes if there are any
    BasePalGroup.FlushPalAll();

    bool fShouldUseAlternateLoadLogic = false;

    if (nFilePalId < MAAB_A_CharacterData[nFileUnitId].ppszPaletteList.size())
    {
        // core palettes
        nSrcStart = 0;
        nSrcAmt = MAAB_A_CharacterData[nFileUnitId].ppszPaletteList.size();
        pButtonLabelSet = MAAB_A_CharacterData[nFileUnitId].ppszPaletteList;
        nImgUnitId = MAAB_A_CharacterData[nFileUnitId].nSpriteUnitIndex;
        nTargetImgId = MAAB_A_CharacterData[nFileUnitId].nSpriteImageIndex;
    }
    else
    {
        // effects palettes
        size_t nPalIdInNode = nFilePalId - MAAB_A_CharacterData[nFileUnitId].ppszPaletteList.size();
        nSrcStart = nFilePalId;
        nSrcAmt = 1;
        pButtonLabelSet = DEF_NOBUTTONS;
        const sGame_PaletteDataset* paletteDataSet = &MAAB_A_CharacterData[nFileUnitId].prgExtraPalettes[nPalIdInNode];
        nImgUnitId = paletteDataSet->indexImgToUse;
        nTargetImgId = paletteDataSet->indexOffsetToUse;
    }

    if (!fShouldUseAlternateLoadLogic)
    {
        //Create the default palette
        CreateDefPal(CharacterNodeGet, 0);

        // Only internal units get sprites
        ClearSetImgTicket(CreateImgTicket(nImgUnitId, nTargetImgId));

        SetSourcePal(0, nFileUnitId, nSrcStart, nSrcAmt, nNodeIncrement);
    }

    return TRUE;
}

BOOL CGame_MAAB_A::LoadFile(CFile* LoadedFile, size_t nFileUnitNumber)
{
    BOOL fSuccess = TRUE;
    CString strInfo;

    strInfo.Format(L"CGame_MAAB_A_DIR::LoadFile: Preparing to load data for file unit number %u (character %s)\n", nFileUnitNumber, MAAB_A_CharacterData[nFileUnitNumber].pszCharacter);
    OutputDebugString(strInfo);

    strInfo.Format(L"\tCGame_MAAB_A_DIR::LoadFile: Loaded palettes starting at location 0x%x\n", MAAB_A_CharacterData[nFileUnitNumber].nInitialLocation);
    OutputDebugString(strInfo);

    size_t nPalAmt = GetPaletteCountForUnit(nFileUnitNumber);

    size_t nCharacterUnitId = 0;
    size_t nTrash = 0;

    GetCharacterIndexFromFileIndex(nFileUnitNumber, 0, &nCharacterUnitId, &nTrash);

    if (m_pppDataBuffer32[nCharacterUnitId] == nullptr)
    {
        m_pppDataBuffer32[nCharacterUnitId] = new UINT32 * [nPalAmt];
        memset(m_pppDataBuffer32[nCharacterUnitId], 0, sizeof(UINT32*) * nPalAmt);
    }

    // These are already sorted, no need to redirect
    rgUnitRedir[nCharacterUnitId] = nCharacterUnitId;

    for (size_t nCharacterPalCtr = 0; nCharacterPalCtr < nPalAmt; nCharacterPalCtr++)
    {
        size_t nFileUnitId = 0;
        size_t nFilePalId = 0;

        GetFileIndexFromCharacterIndex(nCharacterUnitId, nCharacterPalCtr, &nFileUnitId, &nFilePalId);

        if (PaletteIsInFileUnit(nFileUnitNumber, nCharacterUnitId, nCharacterPalCtr))
        {
            LoadSpecificPaletteDataByFileUnit(nFileUnitId, nFilePalId);

            m_pppDataBuffer32[nCharacterUnitId][nCharacterPalCtr] = new UINT32[m_nCurrentPaletteSizeInColors];

            LoadedFile->Seek(m_nCurrentPaletteROMLocation, CFile::begin);
            LoadedFile->Read(m_pppDataBuffer32[nCharacterUnitId][nCharacterPalCtr], m_nCurrentPaletteSizeInColors * m_nSizeOfColorsInBytes);

#if MAAB_A_DEBUG
            strInfo.Format(L"\tLoaded palette '%s' for file unit 0x%x palette 0x%x from location 0x%x to display unit 0x%x display palette 0x%x\n",
                m_pszCurrentPaletteName, nFileUnitId, nFilePalId, m_nCurrentPaletteROMLocation, nCharacterUnitId, nCharacterPalCtr);
            OutputDebugString(strInfo);
#endif
        }
    }

    rgUnitRedir[nUnitAmt] = INVALID_UNIT_VALUE;

    return fSuccess;
}

BOOL CGame_MAAB_A::SaveFile(CFile* SaveFile, size_t nFileUnitNumber)
{
    UINT32 nTotalPalettesSaved = 0;
    size_t nPalAmt = GetPaletteCountForUnit(nFileUnitNumber);

    size_t nCharacterUnitId = 0;
    size_t nTrash = 0;

    GetCharacterIndexFromFileIndex(nFileUnitNumber, 0, &nCharacterUnitId, &nTrash);

    for (size_t nCharacterPalCtr = 0; nCharacterPalCtr < nPalAmt; nCharacterPalCtr++)
    {
        size_t nFileUnitId = 0;
        size_t nFilePalId = 0;

        GetFileIndexFromCharacterIndex(nCharacterUnitId, nCharacterPalCtr, &nFileUnitId, &nFilePalId);

        if (PaletteIsInFileUnit(nFileUnitNumber, nCharacterUnitId, nCharacterPalCtr))
        {
            if (IsPaletteDirty(nCharacterUnitId, nCharacterPalCtr))
            {
                LoadSpecificPaletteData(nCharacterUnitId, nCharacterPalCtr);

                SaveFile->Seek(m_nCurrentPaletteROMLocation, CFile::begin);
                if (GameIsUsing16BitColor())
                {
                    SaveFile->Write(m_pppDataBuffer[nCharacterUnitId][nCharacterPalCtr], m_nCurrentPaletteSizeInColors * m_nSizeOfColorsInBytes);
                }
                else if (GameIsUsing32BitColor())
                {
                    SaveFile->Write(m_pppDataBuffer32[nCharacterUnitId][nCharacterPalCtr], m_nCurrentPaletteSizeInColors * m_nSizeOfColorsInBytes);
                }

                nTotalPalettesSaved++;
            }
        }
    }

    CString strMsg;
    strMsg.Format(L"CGameClass::SaveFile: Saved 0x%x palettes to disk for unit %u\n", nTotalPalettesSaved, nFileUnitNumber);
    OutputDebugString(strMsg);

    return TRUE;
}

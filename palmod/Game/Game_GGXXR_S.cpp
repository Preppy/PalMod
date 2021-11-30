#include "StdAfx.h"
#include "Game_GGXXR_S.h"
#include "GGXXR_S_DEF.h"
#include "..\PalMod.h"

size_t CGame_GGXXR_S::uRuleCtr = 0;

CDescTree CGame_GGXXR_S::MainDescTree = nullptr;

#define GGXXR_S_DEBUG DEFAULT_GAME_DEBUG_STATE

CGame_GGXXR_S::CGame_GGXXR_S(UINT32 nConfirmedROMSize /* = -1 */)
{
    createPalOptions = { NO_SPECIAL_OPTIONS, WRITE_MAX };
    SetAlphaMode(AlphaMode::GameUsesVariableAlpha);
    m_fGameUsesAlphaValue = true;
    SetColorMode(ColMode::COLMODE_RGBA8887);

    InitializeStatics();

    // Don't load extras
    m_pszExtraFilename = nullptr;

    nFileAmt = nUnitAmt = m_nTotalInternalUnits = ARRAYSIZE(GGXXR_S_CharacterData);

    InitDataBuffer();

    nGameFlag = GGXXR_S;
    nImgGameFlag = IMGDAT_SECTION_GUILTYGEAR;
    m_prgGameImageSet = GGXX_ACR_IMGIDS_USED;

    //Set the image out display type
    DisplayType = eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT;

    // The label set is variable, so set correctly each time we load that specific unit
    pButtonLabelSet = DEF_NOBUTTONS;

    //Create the redirect buffer
    rgUnitRedir = new size_t[nUnitAmt + 1];
    memset(rgUnitRedir, 0, sizeof(size_t) * nUnitAmt);

    FlushChangeTrackingArray();
    PrepChangeTrackingArray();
}

CGame_GGXXR_S::~CGame_GGXXR_S()
{
    ClearDataBuffer();
    //Get rid of the file changed flag
    FlushChangeTrackingArray();
}

void CGame_GGXXR_S::InitializeStatics()
{
    MainDescTree.SetRootTree(CGame_GGXXR_S::InitDescTree());
}

sFileRule CGame_GGXXR_S::GetRule(size_t nUnitId)
{
    sFileRule NewFileRule;

    const size_t nAdjustedUnitId = (nUnitId & RULE_COUNTER_DEMASK);
    _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, L"%s", GGXXR_S_CharacterData[nAdjustedUnitId].pszFileName);
    NewFileRule.uUnitId = nUnitId;
    NewFileRule.uVerifyVar = GGXXR_S_CharacterData[nAdjustedUnitId].nExpectedFileSize;

    return NewFileRule;
}

sFileRule CGame_GGXXR_S::GetNextRule()
{
    sFileRule NewFileRule = GetRule(uRuleCtr);

    uRuleCtr++;

    if (uRuleCtr >= ARRAYSIZE(GGXXR_S_CharacterData))
    {
        uRuleCtr = INVALID_UNIT_VALUE;
    }

    return NewFileRule;
}

sDescTreeNode* CGame_GGXXR_S::InitDescTree()
{
    UINT32 nTotalPaletteCount = 0;
    size_t nUnitCt = ARRAYSIZE(GGXXR_S_CharacterData);

    sDescTreeNode* NewDescTree = new sDescTreeNode;

    //Create the main character tree
    _snwprintf_s(NewDescTree->szDesc, ARRAYSIZE(NewDescTree->szDesc), _TRUNCATE, L"%s", g_GameFriendlyName[GGXXR_S]);
    NewDescTree->ChildNodes = new sDescTreeNode[nUnitCt];
    NewDescTree->uChildAmt = nUnitCt;
    //All units have tree children
    NewDescTree->uChildType = DESC_NODETYPE_TREE;

    CString strMsg;
    strMsg.Format(L"CGame_GGXXR_S_DIR::InitDescTree: Building desc tree for GGXXR_S...\n");
    OutputDebugString(strMsg);

    //Go through each character
    for (size_t iUnitCtr = 0; iUnitCtr < nUnitCt; iUnitCtr++)
    {
        sDescTreeNode* UnitNode = nullptr;
        sDescTreeNode* CollectionNode = nullptr;
        sDescNode* ChildNode = nullptr;

        size_t nUnitChildCount = GetCollectionCountForUnit(iUnitCtr);

        UnitNode = &((sDescTreeNode*)NewDescTree->ChildNodes)[iUnitCtr];

        //Set each description
        _snwprintf_s(UnitNode->szDesc, ARRAYSIZE(UnitNode->szDesc), _TRUNCATE, L"%s", GGXXR_S_CharacterData[iUnitCtr].pszCharacter);

        UnitNode->ChildNodes = new sDescTreeNode[nUnitChildCount];
        //All children have collection trees
        UnitNode->uChildType = DESC_NODETYPE_TREE;
        UnitNode->uChildAmt = nUnitChildCount;

#if GGXXR_S_DEBUG
        strMsg.Format(L"Unit: \"%s\", %u of %u, %u total children\n", UnitNode->szDesc, iUnitCtr + 1, nUnitCt, UnitNode->uChildAmt);
        OutputDebugString(strMsg);
#endif

        size_t nTotalPalettesUsedInUnit = 0;

        //Set data for each child group ("collection")
        for (size_t iCollectionCtr = 0; iCollectionCtr < nUnitChildCount; iCollectionCtr++)
        {
            CollectionNode = &((sDescTreeNode*)UnitNode->ChildNodes)[iCollectionCtr];

            //Set each collection data
            _snwprintf_s(CollectionNode->szDesc, ARRAYSIZE(CollectionNode->szDesc), _TRUNCATE, GetDescriptionForCollection(iUnitCtr, iCollectionCtr));
            //Collection children have nodes
            size_t nListedChildrenCount = GetNodeCountForCollection(iUnitCtr, iCollectionCtr);
            CollectionNode->uChildType = DESC_NODETYPE_NODE;
            CollectionNode->uChildAmt = nListedChildrenCount;
            CollectionNode->ChildNodes = (sDescTreeNode*)new sDescNode[nListedChildrenCount];

#if GGXXR_S_DEBUG
            strMsg.Format(L"\tCollection: \"%s\", %u of %u, %u children\n", CollectionNode->szDesc, iCollectionCtr + 1, nUnitChildCount, nListedChildrenCount);
            OutputDebugString(strMsg);
#endif

            for (size_t nNodeIndex = 0; nNodeIndex < nListedChildrenCount; nNodeIndex++)
            {
                ChildNode = &((sDescNode*)CollectionNode->ChildNodes)[nNodeIndex];

                if (iCollectionCtr == 0)
                {
                    _snwprintf_s(ChildNode->szDesc, ARRAYSIZE(ChildNode->szDesc), _TRUNCATE, L"%s", GGXXR_S_CharacterData[iUnitCtr].ppszPaletteList[nNodeIndex]);
                }
                else
                {
                    _snwprintf_s(ChildNode->szDesc, ARRAYSIZE(ChildNode->szDesc), _TRUNCATE, L"%s", GGXXR_S_CharacterData[iUnitCtr].prgExtraPalettes[nNodeIndex].szPaletteName);
                }

                ChildNode->uUnitId = iUnitCtr;
                ChildNode->uPalId = nTotalPalettesUsedInUnit++;
                nTotalPaletteCount++;

#if GGXXR_S_DEBUG
                strMsg.Format(L"\t\tPalette: \"%s\", %u of %u\n", ChildNode->szDesc, nNodeIndex + 1, nListedChildrenCount);
                OutputDebugString(strMsg);
#endif
            }
        }
    }

    m_nTotalPaletteCount = nTotalPaletteCount;

    strMsg.Format(L"CGame_GGXXR_S_DIR::InitDescTree: Loaded %u palettes for GGXXR ROM\n", nTotalPaletteCount);
    OutputDebugString(strMsg);

    return NewDescTree;
}

size_t CGame_GGXXR_S::GetCollectionCountForUnit(size_t nUnitId)
{
    // One core set per character, plus optional extras
    return (GGXXR_S_CharacterData[nUnitId].prgExtraPalettes.empty()) ? 1 : 2;
}

size_t CGame_GGXXR_S::GetNodeCountForCollection(size_t nUnitId, size_t nCollectionId)
{
    if (nCollectionId == 0)
    {
        return GGXXR_S_CharacterData[nUnitId].ppszPaletteList.size();
    }
    else
    {
        return GGXXR_S_CharacterData[nUnitId].prgExtraPalettes.size();
    }
}

size_t CGame_GGXXR_S::GetPaletteCountForUnit(size_t nUnitId)
{
    return GGXXR_S_CharacterData[nUnitId].ppszPaletteList.size() + GGXXR_S_CharacterData[nUnitId].prgExtraPalettes.size();
}

LPCWSTR CGame_GGXXR_S::GetDescriptionForCollection(size_t /*nUnitId */, size_t nCollectionId)
{
    if (nCollectionId == 0)
    {
        return L"Core Palettes";
    }
    else
    {
        return L"Effects";
    }
}

void CGame_GGXXR_S::LoadSpecificPaletteData(size_t nUnitId, size_t nPalId)
{
    if (nPalId < GGXXR_S_CharacterData[nUnitId].ppszPaletteList.size())
    {
        // GGXXR palettes are all 0x100 long
        const int cbPaletteSizeOnDisc = 0x400;

        m_pszCurrentPaletteName = GGXXR_S_CharacterData[nUnitId].ppszPaletteList[nPalId];

        m_nCurrentPaletteROMLocation = GGXXR_S_CharacterData[nUnitId].nInitialLocation + (cbPaletteSizeOnDisc * nPalId) + (0x10 * nPalId);

        m_nCurrentPaletteSizeInColors = cbPaletteSizeOnDisc / m_nSizeOfColorsInBytes;
    }
    else // effects palettes
    {
        size_t nAdjustedPaletteId = nPalId - GGXXR_S_CharacterData[nUnitId].ppszPaletteList.size();

        int cbPaletteSizeOnDisc = GGXXR_S_CharacterData[nUnitId].prgExtraPalettes[nAdjustedPaletteId].nPaletteOffsetEnd - GGXXR_S_CharacterData[nUnitId].prgExtraPalettes[nAdjustedPaletteId].nPaletteOffset;

        m_pszCurrentPaletteName = GGXXR_S_CharacterData[nUnitId].prgExtraPalettes[nAdjustedPaletteId].szPaletteName;
        m_nCurrentPaletteROMLocation = GGXXR_S_CharacterData[nUnitId].prgExtraPalettes[nAdjustedPaletteId].nPaletteOffset;
        m_nCurrentPaletteSizeInColors = cbPaletteSizeOnDisc / m_nSizeOfColorsInBytes;
    }
}

BOOL CGame_GGXXR_S::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
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
    size_t nImgUnitId = INVALID_UNIT_VALUE;
    int nSrcStart = (int)0;
    size_t nSrcAmt = 1;

    if (NodeGet->uPalId < GGXXR_S_CharacterData[NodeGet->uUnitId].ppszPaletteList.size())
    {
        // core palettes
        nSrcStart = 0;
        nSrcAmt = GGXXR_S_CharacterData[NodeGet->uUnitId].ppszPaletteList.size();
        pButtonLabelSet = GGXXR_S_CharacterData[NodeGet->uUnitId].ppszPaletteList;
        nImgUnitId = GGXXR_S_CharacterData[NodeGet->uUnitId].nSpriteIndex;
    }
    else
    {
        // effects palettes
        size_t nPalIdInNode = NodeGet->uPalId - GGXXR_S_CharacterData[NodeGet->uUnitId].ppszPaletteList.size();
        nSrcStart = NodeGet->uPalId;
        nSrcAmt = 1;
        pButtonLabelSet = DEF_NOBUTTONS;
        nImgUnitId = GGXXR_S_CharacterData[NodeGet->uUnitId].prgExtraPalettes[nPalIdInNode].indexImgToUse;
        nTargetImgId = GGXXR_S_CharacterData[NodeGet->uUnitId].prgExtraPalettes[nPalIdInNode].indexOffsetToUse;
    }

    int nNodeIncrement = 1;

    //Get rid of any palettes if there are any
    BasePalGroup.FlushPalAll();

    bool fShouldUseAlternateLoadLogic = false;

    if (!fShouldUseAlternateLoadLogic)
    {
        //Create the default palette
        CreateDefPal(NodeGet, 0);

        // Only internal units get sprites
        ClearSetImgTicket(CreateImgTicket(nImgUnitId, nTargetImgId));

        SetSourcePal(0, NodeGet->uUnitId, nSrcStart, nSrcAmt, nNodeIncrement);
    }

    return TRUE;
}

BOOL CGame_GGXXR_S::LoadFile(CFile* LoadedFile, size_t nUnitNumber)
{
    BOOL fSuccess = TRUE;
    CString strInfo;

    strInfo.Format(L"CGame_GGXXR_S_DIR::LoadFile: Preparing to load data for unit number %u (character %s)\n", nUnitNumber, GGXXR_S_CharacterData[nUnitNumber].pszCharacter);
    OutputDebugString(strInfo);

#ifdef USE_DYNAMIC_LOCATION_LOOKUP
    LONGLONG nPalettePointer = 0;

    LoadedFile->Seek(0, CFile::begin);
    LoadedFile->Read(&nPalettePointer, 0x02);

    UINT32 nPaletteStart = 0;

    LoadedFile->Seek(nPalettePointer + 0x0c, CFile::begin);
    LoadedFile->Read(&nPaletteStart, 0x04);

    GGXXR_S_CharacterData[nUnitNumber].nInitialLocation = nPaletteStart + 0x90;
#endif

    strInfo.Format(L"\tCGame_GGXXR_S_DIR::LoadFile: Loaded palettes starting at location 0x%x\n", GGXXR_S_CharacterData[nUnitNumber].nInitialLocation);
    OutputDebugString(strInfo);

    size_t nPalAmt = GetPaletteCountForUnit(nUnitNumber);

    if (m_pppDataBuffer32[nUnitNumber] == nullptr)
    {
        m_pppDataBuffer32[nUnitNumber] = new UINT32 * [nPalAmt];
        memset(m_pppDataBuffer32[nUnitNumber], 0, sizeof(UINT32*) * nPalAmt);
    }

    // These are already sorted, no need to redirect
    rgUnitRedir[nUnitNumber] = nUnitNumber;

    for (size_t nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
    {
        LoadSpecificPaletteData(nUnitNumber, nPalCtr);

        m_pppDataBuffer32[nUnitNumber][nPalCtr] = new UINT32[m_nCurrentPaletteSizeInColors];

        LoadedFile->Seek(m_nCurrentPaletteROMLocation, CFile::begin);
        LoadedFile->Read(m_pppDataBuffer32[nUnitNumber][nPalCtr], m_nCurrentPaletteSizeInColors * m_nSizeOfColorsInBytes);

#if GGXXR_S_DEBUG
        strInfo.Format(L"\tCGame_GGXXR_S_DIR::LoadFile: Loaded palette '%s' from location 0x%x\n", m_pszCurrentPaletteName, m_nCurrentPaletteROMLocation);
        OutputDebugString(strInfo);
#endif
    }

    rgUnitRedir[nUnitAmt] = INVALID_UNIT_VALUE;

    return fSuccess;
}

BOOL CGame_GGXXR_S::SaveFile(CFile* SaveFile, size_t nUnitId)
{
    UINT32 nTotalPalettesSaved = 0;
    size_t nPalAmt = GetPaletteCountForUnit(nUnitId);

    for (size_t nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
    {
        if (IsPaletteDirty(nUnitId, nPalCtr))
        {
            LoadSpecificPaletteData(nUnitId, nPalCtr);

            SaveFile->Seek(m_nCurrentPaletteROMLocation, CFile::begin);
            if (GameIsUsing16BitColor())
            {
                SaveFile->Write(m_pppDataBuffer[nUnitId][nPalCtr], m_nCurrentPaletteSizeInColors * m_nSizeOfColorsInBytes);
            }
            else if (GameIsUsing32BitColor())
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

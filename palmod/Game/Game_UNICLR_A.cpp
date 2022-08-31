#include "StdAfx.h"
#include "Game_UNICLR_A.h"
#include "UNICLR_S_DEF.h"
#include "..\PalMod.h"

uint32_t CGame_UNICLR_A::uRuleCtr = 0;

CDescTree CGame_UNICLR_A::MainDescTree = nullptr;

#define UNICLR_A_DEBUG DEFAULT_GAME_DEBUG_STATE

CGame_UNICLR_A::CGame_UNICLR_A(uint32_t nConfirmedROMSize /* = -1 */)
{
    createPalOptions = { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX };
    SetAlphaMode(AlphaMode::GameUsesFixedAlpha);
    m_fGameUsesAlphaValue = true;
    SetColorMode(ColMode::COLMODE_RGBA8888);

    InitializeStatics();

    // Don't load extras
    m_pszExtraFilename = nullptr;

    nFileAmt = nUnitAmt = m_nTotalInternalUnits = static_cast<uint32_t>(UNICLRCharacterData.size());

    InitDataBuffer();

    nGameFlag = UNICLR_A;
    nImgGameFlag = IMGDAT_SECTION_FRENCHBREAD;
    m_prgGameImageSet = UNICLR_A_IMGIDS_USED;

    //Set the image out display type
    DisplayType = eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT;

    pButtonLabelSet = DEF_BUTTONLABEL_2_LEFTRIGHT;

    //Create the redirect buffer
    rgUnitRedir = new uint32_t[nUnitAmt + 1];
    memset(rgUnitRedir, 0, sizeof(uint32_t) * nUnitAmt);

    FlushChangeTrackingArray();
    PrepChangeTrackingArray();
}

CGame_UNICLR_A::~CGame_UNICLR_A()
{
    ClearDataBuffer();
    //Get rid of the file changed flag
    FlushChangeTrackingArray();
}

void CGame_UNICLR_A::InitializeStatics()
{
    MainDescTree.SetRootTree(CGame_UNICLR_A::InitDescTree());
}

sFileRule CGame_UNICLR_A::GetRule(uint32_t nUnitId)
{
    sFileRule NewFileRule;

    const uint32_t nAdjustedUnitId = (nUnitId & RULE_COUNTER_DEMASK);
    _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, L"%s", UNICLRCharacterData[nAdjustedUnitId].pszFileName);
    NewFileRule.uUnitId = nUnitId;
    NewFileRule.uVerifyVar = UNICLRCharacterData[nAdjustedUnitId].nExpectedFileSize;

    return NewFileRule;
}

sFileRule CGame_UNICLR_A::GetNextRule()
{
    sFileRule NewFileRule = GetRule(uRuleCtr);

    uRuleCtr++;

    if (uRuleCtr >= UNICLRCharacterData.size())
    {
        uRuleCtr = INVALID_UNIT_VALUE;
    }

    return NewFileRule;
}

sDescTreeNode* CGame_UNICLR_A::InitDescTree()
{
    uint32_t nTotalPaletteCount = 0;
    uint32_t nUnitCt = static_cast<uint32_t>(UNICLRCharacterData.size());

    sDescTreeNode* NewDescTree = new sDescTreeNode;

    //Create the main character tree
    _snwprintf_s(NewDescTree->szDesc, ARRAYSIZE(NewDescTree->szDesc), _TRUNCATE, L"%s", g_GameFriendlyName[UNICLR_A]);
    NewDescTree->ChildNodes = new sDescTreeNode[nUnitCt];
    NewDescTree->uChildAmt = nUnitCt;
    //All units have tree children
    NewDescTree->uChildType = DESC_NODETYPE_TREE;

    CString strMsg;
    strMsg.Format(L"CGame_UNICLR_A_DIR::InitDescTree: Building desc tree for UNICLR_A...\n");
    OutputDebugString(strMsg);

    //Go through each character
    for (uint32_t iUnitCtr = 0; iUnitCtr < nUnitCt; iUnitCtr++)
    {
        sDescTreeNode* UnitNode = nullptr;
        sDescTreeNode* CollectionNode = nullptr;
        sDescNode* ChildNode = nullptr;

        uint32_t nUnitChildCount = GetCollectionCountForUnit(iUnitCtr);

        UnitNode = &((sDescTreeNode*)NewDescTree->ChildNodes)[iUnitCtr];

        //Set each description
        _snwprintf_s(UnitNode->szDesc, ARRAYSIZE(UnitNode->szDesc), _TRUNCATE, L"%s", UNICLRCharacterData[iUnitCtr].pszCharacter);

        UnitNode->ChildNodes = new sDescTreeNode[nUnitChildCount];
        //All children have collection trees
        UnitNode->uChildType = DESC_NODETYPE_TREE;
        UnitNode->uChildAmt = nUnitChildCount;

#if UNICLR_A_DEBUG
        strMsg.Format(L"Unit: \"%s\", %u of %u, %u total children\n", UnitNode->szDesc, iUnitCtr + 1, nUnitCt, UnitNode->uChildAmt);
        OutputDebugString(strMsg);
#endif

        uint32_t nTotalPalettesUsedInUnit = 0;

        //Set data for each child group ("collection")
        for (uint32_t iCollectionCtr = 0; iCollectionCtr < nUnitChildCount; iCollectionCtr++)
        {
            CollectionNode = &((sDescTreeNode*)UnitNode->ChildNodes)[iCollectionCtr];

            //Set each collection data
            _snwprintf_s(CollectionNode->szDesc, ARRAYSIZE(CollectionNode->szDesc), _TRUNCATE, GetDescriptionForCollection(iUnitCtr, iCollectionCtr));
            //Collection children have nodes
            uint32_t nListedChildrenCount = GetNodeCountForCollection(iUnitCtr, iCollectionCtr);
            CollectionNode->uChildType = DESC_NODETYPE_NODE;
            CollectionNode->uChildAmt = nListedChildrenCount;
            CollectionNode->ChildNodes = (sDescTreeNode*)new sDescNode[nListedChildrenCount];

#if UNICLR_A_DEBUG
            strMsg.Format(L"\tCollection: \"%s\", %u of %u, %u children\n", CollectionNode->szDesc, iCollectionCtr + 1, nUnitChildCount, nListedChildrenCount);
            OutputDebugString(strMsg);
#endif

            for (uint32_t nNodeIndex = 0; nNodeIndex < nListedChildrenCount; nNodeIndex++)
            {
                ChildNode = &((sDescNode*)CollectionNode->ChildNodes)[nNodeIndex];

                _snwprintf_s(ChildNode->szDesc, ARRAYSIZE(ChildNode->szDesc), _TRUNCATE, L"%s", UNICLRCharacterData[iUnitCtr].ppszPaletteList[nNodeIndex]);

                ChildNode->uUnitId = iUnitCtr;
                ChildNode->uPalId = nTotalPalettesUsedInUnit++;
                nTotalPaletteCount++;

#if UNICLR_A_DEBUG
                strMsg.Format(L"\t\tPalette: \"%s\", %u of %u\n", ChildNode->szDesc, nNodeIndex + 1, nListedChildrenCount);
                OutputDebugString(strMsg);
#endif
            }
        }
    }

    m_nTotalPaletteCount = nTotalPaletteCount;

    strMsg.Format(L"CGame_UNICLR_A_DIR::InitDescTree: Loaded %u palettes for UNICLR ROM\n", nTotalPaletteCount);
    OutputDebugString(strMsg);

    return NewDescTree;
}

uint32_t CGame_UNICLR_A::GetCollectionCountForUnit(uint32_t nUnitId)
{
    // Just one palette set per character
    return ARRAYSIZE(UNICLRPaletteNodes);
}

uint32_t CGame_UNICLR_A::GetNodeCountForCollection(uint32_t nUnitId, uint32_t /*nCollectionId*/)
{
    return static_cast<uint32_t>(UNICLRCharacterData[nUnitId].ppszPaletteList.size());
}

uint32_t CGame_UNICLR_A::GetPaletteCountForUnit(uint32_t nUnitId)
{
    return static_cast<uint32_t>(UNICLRCharacterData[nUnitId].ppszPaletteList.size()) * ARRAYSIZE(UNICLRPaletteNodes);
}

LPCWSTR CGame_UNICLR_A::GetDescriptionForCollection(uint32_t /*nUnitId */, uint32_t nCollectionId)
{
    return UNICLRPaletteNodes[nCollectionId].pszNodeName;
}

void CGame_UNICLR_A::LoadSpecificPaletteData(uint32_t nUnitId, uint32_t nPalId)
{
    // UNICLR palettes are all 0x400 long
    const int cbPaletteSizeOnDisc = 0x400;

    uint32_t nAdjustedPalId = nPalId % static_cast<uint32_t>(UNICLRPaletteNamesNormal.size());
    uint32_t nPaletteSet = nPalId / static_cast<uint32_t>(UNICLRPaletteNamesNormal.size());

    m_pszCurrentPaletteName = UNICLRCharacterData[nUnitId].ppszPaletteList[nAdjustedPalId];
    m_nCurrentPaletteROMLocation = UNICLRCharacterData[nUnitId].nInitialLocation + (cbPaletteSizeOnDisc * nAdjustedPalId) + (0x0 * nAdjustedPalId);
    m_nCurrentPaletteSizeInColors = cbPaletteSizeOnDisc / m_nSizeOfColorsInBytes;

    if (nPaletteSet)
    {
        m_nCurrentPaletteROMLocation += UNICLRPaletteNodes[nPaletteSet].nAdjustmentFromBaseNode;
    }
}

BOOL CGame_UNICLR_A::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
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
    int nTargetImgId = 0;
    uint32_t nImgUnitId = UNICLRCharacterData[NodeGet->uUnitId].nSpriteIndex;

    // This logic presumes that we are only showing core character palettes.  If we decide to handle
    // anything else, we'd want to validate that the palette in question is in the core lists
    int nSrcStart = (int)(NodeGet->uPalId % UNICLRCharacterData[NodeGet->uUnitId].ppszPaletteList.size());
    uint32_t nSrcAmt = static_cast<uint32_t>(pButtonLabelSet.size());
    uint32_t nNodeIncrement = static_cast<uint32_t>(UNICLRCharacterData[NodeGet->uUnitId].ppszPaletteList.size());

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

BOOL CGame_UNICLR_A::LoadFile(CFile* LoadedFile, uint32_t nUnitNumber)
{
    BOOL fSuccess = TRUE;
    CString strInfo;

    strInfo.Format(L"CGame_UNICLR_A_DIR::LoadFile: Preparing to load data for unit number %u (character %s)\n", nUnitNumber, UNICLRCharacterData[nUnitNumber].pszCharacter);
    OutputDebugString(strInfo);

    strInfo.Format(L"\tCGame_UNICLR_A_DIR::LoadFile: Loaded palettes starting at location 0x%x\n", UNICLRCharacterData[nUnitNumber].nInitialLocation);
    OutputDebugString(strInfo);

    uint32_t nPalAmt = GetPaletteCountForUnit(nUnitNumber);

    if (m_pppDataBuffer32[nUnitNumber] == nullptr)
    {
        m_pppDataBuffer32[nUnitNumber] = new uint32_t * [nPalAmt];
        memset(m_pppDataBuffer32[nUnitNumber], 0, sizeof(uint32_t*) * nPalAmt);
    }

    // These are already sorted, no need to redirect
    rgUnitRedir[nUnitNumber] = nUnitNumber;

    for (uint32_t nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
    {
        LoadSpecificPaletteData(nUnitNumber, nPalCtr);

        m_pppDataBuffer32[nUnitNumber][nPalCtr] = new uint32_t[m_nCurrentPaletteSizeInColors];

        LoadedFile->Seek(m_nCurrentPaletteROMLocation, CFile::begin);
        LoadedFile->Read(m_pppDataBuffer32[nUnitNumber][nPalCtr], m_nCurrentPaletteSizeInColors * m_nSizeOfColorsInBytes);

#if UNICLR_A_DEBUG
        strInfo.Format(L"\tCGame_UNICLR_A_DIR::LoadFile: Loaded palette '%s' from location 0x%x\n", m_pszCurrentPaletteName, m_nCurrentPaletteROMLocation);
        OutputDebugString(strInfo);
#endif
    }

    rgUnitRedir[nUnitAmt] = INVALID_UNIT_VALUE;

    return fSuccess;
}

BOOL CGame_UNICLR_A::SaveFile(CFile* SaveFile, uint32_t nUnitId)
{
    uint32_t nTotalPalettesSaved = 0;
    uint32_t nPalAmt = GetPaletteCountForUnit(nUnitId);

    for (uint32_t nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
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

void CGame_UNICLR_A::PostSetPal(uint32_t nUnitId, uint32_t nPalId)
{
    CString strMessage;
    strMessage.Format(L"CGame_UNICLR_A::PostSetPal : Updating left/right partner for unit %u palette %u.\n", nUnitId, nPalId);
    OutputDebugString(strMessage);

    static_assert(ARRAYSIZE(UNICLRPaletteNodes) == 2, "UNICLR post-processing presumes two paired nodes: update PostSetPal for your change.");

    uint32_t nPartnerId = nPalId;
    const uint32_t nNodeCount = GetNodeCountForCollection(nUnitId, 0);

    // Flip to the left/right partner
    if (nPalId >= nNodeCount)
    {
        nPartnerId -= nNodeCount;
        GetHost()->GetPalModDlg()->SetStatusText(L"Updated: updated Left partner palette as well.");
    }
    else
    {
        nPartnerId += nNodeCount;
        GetHost()->GetPalModDlg()->SetStatusText(L"Updated: updated Right partner palette as well.");
    }

    LoadSpecificPaletteData(nUnitId, nPalId);
    MarkPaletteDirty(nUnitId, nPartnerId);

    for (uint16_t nArrayIndex = 0; nArrayIndex < m_nCurrentPaletteSizeInColors; nArrayIndex++)
    {
        m_pppDataBuffer32[nUnitId][nPartnerId][nArrayIndex] = m_pppDataBuffer32[nUnitId][nPalId][nArrayIndex];
    }

    // Hilda uses flipped positioning: adjust for that here.
    if (wcscmp(UNICLRCharacterData[nUnitId].pszCharacter, L"Hilda") == 0)
    {
        const uint16_t nEye1Position = 26;
        const uint16_t nEye2Position = 42;
        const uint16_t nEyeLength = 3;

        for (uint16_t nArrayIndex = 0; nArrayIndex < nEyeLength; nArrayIndex++)
        {
            m_pppDataBuffer32[nUnitId][nPartnerId][nEye1Position + nArrayIndex] = m_pppDataBuffer32[nUnitId][nPalId][nEye2Position + nArrayIndex];
            m_pppDataBuffer32[nUnitId][nPartnerId][nEye2Position + nArrayIndex] = m_pppDataBuffer32[nUnitId][nPalId][nEye1Position + nArrayIndex];
        }

        const uint16_t nDress1Position = 64;
        const uint16_t nDress2Position = 70;
        const uint16_t nDressLength = 5;

        for (uint16_t nArrayIndex = 0; nArrayIndex < nDressLength; nArrayIndex++)
        {
            m_pppDataBuffer32[nUnitId][nPartnerId][nDress1Position + nArrayIndex] = m_pppDataBuffer32[nUnitId][nPalId][nDress2Position + nArrayIndex];
            m_pppDataBuffer32[nUnitId][nPartnerId][nDress2Position + nArrayIndex] = m_pppDataBuffer32[nUnitId][nPalId][nDress1Position + nArrayIndex];
        }

        const uint16_t nBelt1Position = 80;
        const uint16_t nBelt2Position = 85;
        const uint16_t nBeltLength = 4;

        for (uint16_t nArrayIndex = 0; nArrayIndex < nBeltLength; nArrayIndex++)
        {
            m_pppDataBuffer32[nUnitId][nPartnerId][nBelt1Position + nArrayIndex] = m_pppDataBuffer32[nUnitId][nPalId][nBelt2Position + nArrayIndex];
            m_pppDataBuffer32[nUnitId][nPartnerId][nBelt2Position + nArrayIndex] = m_pppDataBuffer32[nUnitId][nPalId][nBelt1Position + nArrayIndex];
        }
    }
    
    {
        // Seth uses flipped positioning: adjust for that here.
        if (wcscmp(UNICLRCharacterData[nUnitId].pszCharacter, L"Seth") == 0)
        {
            const uint16_t nSetEye1Position = 11;
            const uint16_t nSetEye2Position = 27;
            const uint16_t nSetEyeLength = 3;

            for (uint16_t nArrayIndex = 0; nArrayIndex < nSetEyeLength; nArrayIndex++)
            {
                m_pppDataBuffer32[nUnitId][nPartnerId][nSetEye1Position + nArrayIndex] = m_pppDataBuffer32[nUnitId][nPalId][nSetEye2Position + nArrayIndex];
                m_pppDataBuffer32[nUnitId][nPartnerId][nSetEye2Position + nArrayIndex] = m_pppDataBuffer32[nUnitId][nPalId][nSetEye1Position + nArrayIndex];
            }

            const uint16_t nKnife1Position = 144;
            const uint16_t nKnife2Position = 160;
            const uint16_t nKnifeLength = 10;

            for (uint16_t nArrayIndex = 0; nArrayIndex < nKnifeLength; nArrayIndex++)
            {
                m_pppDataBuffer32[nUnitId][nPartnerId][nKnife1Position + nArrayIndex] = m_pppDataBuffer32[nUnitId][nPalId][nKnife2Position + nArrayIndex];
                m_pppDataBuffer32[nUnitId][nPartnerId][nKnife2Position + nArrayIndex] = m_pppDataBuffer32[nUnitId][nPalId][nKnife1Position + nArrayIndex];
            }
        }
    }
}

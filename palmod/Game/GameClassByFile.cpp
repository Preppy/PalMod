#include "StdAfx.h"
#include "GameClassByFile.h"

#define CGAMECLASSBYFILE_DEBUG DEFAULT_GAME_DEBUG_STATE

uint32_t CGameClassByFile::uRuleCtr = 0;
CDescTree CGameClassByFile::MainDescTree = nullptr;
uint32_t CGameClassByFile::m_nConfirmedROMSize = -1;

std::wstring CGameClassByFile::m_strGameFriendlyName;
const CGameClassByFile::sGCBF_CoreGameData* CGameClassByFile::m_psCurrentGameLoadingData;
SupportedGamesList CGameClassByFile::m_nCurrentGameFlag = SupportedGamesList::NUM_GAMES;

sFileRule CGameClassByFile::GetRule(uint32_t nUnitId, const std::vector<sGameUnitsByFile>& gameLoadingData)
{
    sFileRule NewFileRule;

    const uint32_t nAdjustedUnitId = (nUnitId & RULE_COUNTER_DEMASK);
    _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, L"%s", gameLoadingData.at(nAdjustedUnitId).strFileName.c_str());
    NewFileRule.uUnitId = nUnitId;
    NewFileRule.uVerifyVar = gameLoadingData.at(nAdjustedUnitId).nExpectedFileSize;

    return NewFileRule;
}

sFileRule CGameClassByFile::GetNextRule(const std::vector<sGameUnitsByFile>& gameLoadingData)
{
    sFileRule NewFileRule = GetRule(uRuleCtr, gameLoadingData);

    if (++uRuleCtr >= gameLoadingData.size())
    {
        uRuleCtr = INVALID_UNIT_VALUE;
    }

    return NewFileRule;
}

uint32_t CGameClassByFile::GetCollectionCountForUnit(uint32_t nUnitId)
{
    return m_psCurrentGameLoadingData->srgLoadingData.at(nUnitId).nPaletteSetCount;
}

uint32_t CGameClassByFile::GetNodeCountForCollection(uint32_t nUnitId, uint32_t nCollectionId)
{
    return m_psCurrentGameLoadingData->srgLoadingData.at(nUnitId).prgPaletteSets[nCollectionId].uChildAmt;
}

uint32_t CGameClassByFile::GetPaletteCountForUnit(uint32_t nUnitId)
{
    uint32_t nCollectionCount = 0;

    for (uint32_t nNodeIndex = 0; nNodeIndex < m_psCurrentGameLoadingData->srgLoadingData.at(nUnitId).nPaletteSetCount; nNodeIndex++)
    {
        const sDescTreeNode* pThisNode = m_psCurrentGameLoadingData->srgLoadingData.at(nUnitId).prgPaletteSets;

        nCollectionCount += pThisNode[nNodeIndex].uChildAmt;
    }

    return nCollectionCount;
}

LPCWSTR CGameClassByFile::GetDescriptionForCollection(uint32_t nUnitId, uint32_t nCollectionId)
{
    return m_psCurrentGameLoadingData->srgLoadingData.at(nUnitId).prgPaletteSets[nCollectionId].szDesc;
}

uint32_t CGameClassByFile::GetNodeSizeFromPaletteId(uint32_t nUnitId, uint32_t nPaletteId)
{
    uint32_t nNodeSize = 0;
    uint32_t nTotalCollections = GetCollectionCountForUnit(nUnitId);
    const sGame_PaletteDataset* paletteSetToUse = nullptr;
    uint32_t nDistanceFromZero = nPaletteId;

    for (uint32_t nCollectionIndex = 0; nCollectionIndex < nTotalCollections; nCollectionIndex++)
    {
        const sGame_PaletteDataset* paletteSetToCheck = GetPaletteSet(nUnitId, nCollectionIndex);
        uint32_t nNodeCount = GetNodeCountForCollection(nUnitId, nCollectionIndex);

        if (nDistanceFromZero < nNodeCount)
        {
            nNodeSize = nNodeCount;
            break;
        }

        nDistanceFromZero -= nNodeCount;
    }

    return nNodeSize;
}

const sGame_PaletteDataset* CGameClassByFile::GetPaletteSet(uint32_t nUnitId, uint32_t nCollectionId)
{
    return (const sGame_PaletteDataset*)m_psCurrentGameLoadingData->srgLoadingData.at(nUnitId).prgPaletteSets[nCollectionId].ChildNodes;
}

const sDescTreeNode* CGameClassByFile::GetNodeFromPaletteId(uint32_t nUnitId, uint32_t nPaletteId)
{
    const sDescTreeNode* pCollectionNode = nullptr;
    uint32_t nTotalCollections = GetCollectionCountForUnit(nUnitId);
    const sGame_PaletteDataset* paletteSetToUse = nullptr;
    uint32_t nDistanceFromZero = nPaletteId;

    for (uint32_t nCollectionIndex = 0; nCollectionIndex < nTotalCollections; nCollectionIndex++)
    {
        const sGame_PaletteDataset* paletteSetToCheck = GetPaletteSet(nUnitId, nCollectionIndex);
        const sDescTreeNode* pCollectionNodeToCheck = m_psCurrentGameLoadingData->srgLoadingData.at(nUnitId).prgPaletteSets;

        uint32_t nNodeCount = pCollectionNodeToCheck[nCollectionIndex].uChildAmt;

        if (nDistanceFromZero < nNodeCount)
        {
            // We know it's within this group.  Now: is it basic?
            if (nCollectionIndex < pButtonLabelSet.size())
            {
                pCollectionNode = &(pCollectionNodeToCheck[nCollectionIndex]);
            }
            else
            {
                pCollectionNode = nullptr;
            }

            break;
        }

        nDistanceFromZero -= nNodeCount;
    }

    return pCollectionNode;
}

const sGame_PaletteDataset* CGameClassByFile::GetSpecificPalette(uint32_t nUnitId, uint32_t nPaletteId)
{
    // Don't use this for Extra palettes.
    uint32_t nTotalCollections = GetCollectionCountForUnit(nUnitId);
    const sGame_PaletteDataset* paletteToUse = nullptr;
    uint32_t nDistanceFromZero = nPaletteId;

    for (uint32_t nCollectionIndex = 0; nCollectionIndex < nTotalCollections; nCollectionIndex++)
    {
        const sGame_PaletteDataset* paletteSetToUse = GetPaletteSet(nUnitId, nCollectionIndex);
        uint32_t nNodeCount = GetNodeCountForCollection(nUnitId, nCollectionIndex);

        if (nDistanceFromZero < nNodeCount)
        {
            paletteToUse = &paletteSetToUse[nDistanceFromZero];
            break;
        }

        nDistanceFromZero -= nNodeCount;
    }

    if (!paletteToUse)
    {
        DebugBreak();
    }

    return paletteToUse;
}

void CGameClassByFile::LoadSpecificPaletteData(uint32_t nUnitId, uint32_t nPalId)
{
    const sGame_PaletteDataset* paletteData = GetSpecificPalette(nUnitId, nPalId);

    if (paletteData)  
    {
        uint32_t cbPaletteSizeOnDisc = max(0, (paletteData->nPaletteOffsetEnd - paletteData->nPaletteOffset));

        m_nCurrentPaletteROMLocation = paletteData->nPaletteOffset;
        m_nCurrentPaletteSizeInColors = static_cast<uint16_t>(cbPaletteSizeOnDisc) / m_nSizeOfColorsInBytes;
        m_pszCurrentPaletteName = paletteData->szPaletteName;

        WarnIfPaletteIsOversized(nUnitId, nPalId, m_nCurrentPaletteROMLocation, m_nCurrentPaletteSizeInColors, m_pszCurrentPaletteName);
    }
    else
    {
        DebugBreak();
    }
}

void CGameClassByFile::InitializeGame(uint32_t nConfirmedROMSize, const sGCBF_CoreGameData& gameLoadingData)
{
    //Set game-game specific information before loading the game's known palette locations
    m_strGameFriendlyName = gameLoadingData.strGameFriendlyName;
    m_nCurrentGameFlag = nGameFlag = gameLoadingData.nGameID;
    nImgGameFlag = gameLoadingData.eImgDatSectionID;
    m_prgGameImageSet = gameLoadingData.rgGameImageSet;
    createPalOptions = gameLoadingData.createPalOptions;
    //Set the image out display type
    DisplayType = gameLoadingData.displayStyle;
    SetAlphaMode(gameLoadingData.eAlphaMode);

    if (ColorSystem::IsAlphaModeMutable(gameLoadingData.eAlphaMode))
    {
        m_fGameUsesAlphaValue = true;
    }

    SetColorMode(gameLoadingData.eColMode);

    m_psCurrentGameLoadingData = &gameLoadingData;

    // Load the game's layout for palmod
    sDescTreeNode* NewTree = new sDescTreeNode;

    uint32_t nPaletteCount = InitDescTreeForFileSet(NewTree);

    MainDescTree.SetRootTree(NewTree);

    // Don't load extras
    m_pszExtraFilename = nullptr;

    //We need the proper unit amt before we init the main buffer
    nUnitAmt = nFileAmt = static_cast<uint32_t>(m_psCurrentGameLoadingData->srgLoadingData.size());

    // Stub in the palette buffer that we will LoadFile into
    InitDataBuffer();

    //Create the redirect buffer
    m_rgUnitRedir.resize(nUnitAmt, 0);

    //Create the file changed flag
    PrepChangeTrackingArray();
}

uint32_t CGameClassByFile::InitDescTreeForFileSet(sDescTreeNode* pNewDescTree)
{
    uint32_t nTotalPaletteCount = 0;
    uint32_t nUnitCt = static_cast<uint32_t>(m_psCurrentGameLoadingData->srgLoadingData.size());

    //Create the main character tree
    _snwprintf_s(pNewDescTree->szDesc, ARRAYSIZE(pNewDescTree->szDesc), _TRUNCATE, L"%s", m_psCurrentGameLoadingData->strGameFriendlyName.c_str());
    pNewDescTree->ChildNodes = new sDescTreeNode[nUnitCt];
    pNewDescTree->uChildAmt = nUnitCt;
    //All units have tree children
    pNewDescTree->uChildType = DESC_NODETYPE_TREE;

    CString strMsg;
    OutputDebugString(L"CGameClassByFile::InitDescTree: Building desc tree...\n");

    //Go through each character
    for (uint32_t iUnitCtr = 0; iUnitCtr < nUnitCt; iUnitCtr++)
    {
        uint32_t nUnitChildCount = GetCollectionCountForUnit(iUnitCtr);

        sDescTreeNode* UnitNode = &((sDescTreeNode*)pNewDescTree->ChildNodes)[iUnitCtr];

        //Set each description
        _snwprintf_s(UnitNode->szDesc, ARRAYSIZE(UnitNode->szDesc), _TRUNCATE, L"%s", m_psCurrentGameLoadingData->srgLoadingData[iUnitCtr].strUnitName.c_str());

        UnitNode->ChildNodes = new sDescTreeNode[nUnitChildCount];
        //All children have collection trees
        UnitNode->uChildType = DESC_NODETYPE_TREE;
        UnitNode->uChildAmt = nUnitChildCount;

#if CGAMECLASSBYFILE_DEBUG
        strMsg.Format(L"Unit: \"%s\", %u of %u, %u total children\n", UnitNode->szDesc, iUnitCtr + 1, nUnitCt, UnitNode->uChildAmt);
        OutputDebugString(strMsg);
#endif

        uint32_t nTotalPalettesUsedInUnit = 0;

        //Set data for each child group ("collection")
        for (uint32_t iCollectionCtr = 0; iCollectionCtr < nUnitChildCount; iCollectionCtr++)
        {
            sDescTreeNode* CollectionNode = &((sDescTreeNode*)UnitNode->ChildNodes)[iCollectionCtr];

            //Set each collection data
            _snwprintf_s(CollectionNode->szDesc, ARRAYSIZE(CollectionNode->szDesc), _TRUNCATE, GetDescriptionForCollection(iUnitCtr, iCollectionCtr));
            //Collection children have nodes
            uint32_t nListedChildrenCount = GetNodeCountForCollection(iUnitCtr, iCollectionCtr);
            CollectionNode->uChildType = DESC_NODETYPE_NODE;
            CollectionNode->uChildAmt = nListedChildrenCount;
            CollectionNode->ChildNodes = (sDescTreeNode*)new sDescNode[nListedChildrenCount];

#if CGAMECLASSBYFILE_DEBUG
            strMsg.Format(L"\tCollection: \"%s\", %u of %u, %u children\n", CollectionNode->szDesc, iCollectionCtr + 1, nUnitChildCount, nListedChildrenCount);
            OutputDebugString(strMsg);
#endif

            for (uint32_t nNodeIndex = 0; nNodeIndex < nListedChildrenCount; nNodeIndex++)
            {
                sDescNode* ChildNode = &((sDescNode*)CollectionNode->ChildNodes)[nNodeIndex];

                const sGame_PaletteDataset* pThisPalette = GetSpecificPalette(iUnitCtr, nTotalPalettesUsedInUnit);
                _snwprintf_s(ChildNode->szDesc, ARRAYSIZE(ChildNode->szDesc), _TRUNCATE, L"%s", pThisPalette->szPaletteName);

                ChildNode->uUnitId = iUnitCtr;
                ChildNode->uPalId = nTotalPalettesUsedInUnit++;
                nTotalPaletteCount++;

#if CGAMECLASSBYFILE_DEBUG
                strMsg.Format(L"\t\tPalette: \"%s\", %u of %u\n", ChildNode->szDesc, nNodeIndex + 1, nListedChildrenCount);
                OutputDebugString(strMsg);
#endif
            }
        }
    }

    strMsg.Format(L"\tComplete: Loaded %u palettes for ROM\n", nTotalPaletteCount);
    OutputDebugString(strMsg);

    return nTotalPaletteCount;
}

BOOL CGameClassByFile::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
{
    //Reset palette sources
    ClearSrcPal();

    if (Node01 == -1)
    {
        return FALSE;
    }

    sDescNode* NodeGet = GetMainTree()->GetDescNode(Node01, Node02, Node03, Node04);

    if (!NodeGet)
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

    const sGame_PaletteDataset* paletteDataSet = GetSpecificPalette(NodeGet->uUnitId, NodeGet->uPalId);

    if (paletteDataSet)
    {
        nImgUnitId = paletteDataSet->indexImgToUse;
        nTargetImgId = paletteDataSet->indexOffsetToUse;

        const sDescTreeNode* pCurrentNode = GetNodeFromPaletteId(NodeGet->uUnitId, NodeGet->uPalId);

        if (pCurrentNode)
        {
            bool fIsCorePalette = false;

            for (uint32_t nOptionsToTest = 0; nOptionsToTest < pButtonLabelSet.size(); nOptionsToTest++)
            {
                if (wcscmp(pCurrentNode->szDesc, pButtonLabelSet[nOptionsToTest]) == 0)
                {
                    fIsCorePalette = true;
                    break;
                }
            }

            if (fIsCorePalette)
            {
                nSrcAmt = static_cast<uint32_t>(pButtonLabelSet.size());
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
            if (DisableMultiSpriteExport(paletteDataSet->pPalettePairingInfo))
            {
                nSrcAmt = 1;
            }

            if (paletteDataSet->pPalettePairingInfo->nPalettesToJoin == -1)
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
            else if ((paletteDataSet->pPalettePairingInfo->nPalettesToJoin > 1) &&
                     (paletteDataSet->pPalettePairingInfo->nPalettesToJoin <= MAXIMUM_PALETTE_PAIRS_ALLOWED))
            {
                std::vector<const sGame_PaletteDataset*> vsPaletteDataSetToJoin;
                std::vector<int8_t> vnPeerPaletteDistances;
                bool fAllNodesFound = true;

                for (uint32_t nPairIndex = 0; nPairIndex < paletteDataSet->pPalettePairingInfo->nPalettesToJoin; nPairIndex++)
                {
                    switch (nPairIndex)
                    {
                    case 0:
                        vnPeerPaletteDistances.push_back(0);
                        break;
                    case 1:
                        vnPeerPaletteDistances.push_back(paletteDataSet->pPalettePairingInfo->nNodeIncrementToPartner);
                        break;
                    case 2:
                        vnPeerPaletteDistances.push_back(paletteDataSet->pPalettePairingInfo->nOverallNodeIncrementTo2ndPartner);
                        break;
                    case 3:
                        vnPeerPaletteDistances.push_back(paletteDataSet->pPalettePairingInfo->nOverallNodeIncrementTo3rdPartner);
                        break;
                    case 4:
                        vnPeerPaletteDistances.push_back(paletteDataSet->pPalettePairingInfo->nOverallNodeIncrementTo4thPartner);
                        break;
                    case 5:
                        vnPeerPaletteDistances.push_back(paletteDataSet->pPalettePairingInfo->nOverallNodeIncrementTo5thPartner);
                        break;
                    case 6:
                        vnPeerPaletteDistances.push_back(paletteDataSet->pPalettePairingInfo->nOverallNodeIncrementTo6thPartner);
                        break;
                    case 7:
                        vnPeerPaletteDistances.push_back(paletteDataSet->pPalettePairingInfo->nOverallNodeIncrementTo7thPartner);
                        break;
                    default:
                        // Anything past this just gets default pairing
                        vnPeerPaletteDistances.push_back(nPairIndex);
                        break;
                    }

                    const sGame_PaletteDataset* paletteDataSetToJoin = GetSpecificPalette(NodeGet->uUnitId, NodeGet->uPalId + vnPeerPaletteDistances[nPairIndex]);

                    if (paletteDataSetToJoin)
                    {
                        vsPaletteDataSetToJoin.push_back(paletteDataSetToJoin);
                    }
                    else
                    {
                        fAllNodesFound = false;
                    }
                }

                std::vector<sDescNode*> vsJoinedNodes;

                for (uint32_t nNodeIndex = 0; nNodeIndex < paletteDataSet->pPalettePairingInfo->nPalettesToJoin; nNodeIndex++)
                {
                    sDescNode* sSearchedNode = nullptr;

                    // We need to readjust the nodes here.
                    uint32_t nNodeSize = GetNodeSizeFromPaletteId(NodeGet->uUnitId, NodeGet->uPalId);
                    uint32_t nAdjustedCollectionIndex = Node02;
                    ptrdiff_t nAdjustedButtonIndex = Node03 + vnPeerPaletteDistances[nNodeIndex];

                    while (nAdjustedButtonIndex >= 0)
                    {
                        sSearchedNode = GetMainTree()->GetDescNode(Node01, nAdjustedCollectionIndex, nAdjustedButtonIndex, -1);

                        if (sSearchedNode)
                        {
                            break;
                        }

                        // This palette isn't in this node: walk to the next available node for this unit.
                        nAdjustedButtonIndex -= nNodeSize;
                        nAdjustedCollectionIndex++;
                    }

                    if (sSearchedNode)
                    {
                        vsJoinedNodes.push_back(sSearchedNode);
                    }
                    else
                    {
                        fAllNodesFound = false;
                    }
                }

                if (fAllNodesFound)
                {
                    fShouldUseAlternateLoadLogic = true;

                    std::vector<sImgTicket*> vsImagePairs;
                    sImgTicket* pPreviousImage = nullptr;

                    for (int nNodeIndex = ((int)paletteDataSet->pPalettePairingInfo->nPalettesToJoin) - 1; nNodeIndex >= 0; nNodeIndex--)
                    {
                        sImgTicket* pThisImage = CreateImgTicket(vsPaletteDataSetToJoin[nNodeIndex]->indexImgToUse, vsPaletteDataSetToJoin[nNodeIndex]->indexOffsetToUse, pPreviousImage);

                        vsImagePairs.push_back(pThisImage);

                        pPreviousImage = pThisImage;
                    }

                    ClearSetImgTicket(vsImagePairs[(paletteDataSet->pPalettePairingInfo->nPalettesToJoin - 1)]);

                    for (int nPairIndex = 0; nPairIndex < (int)paletteDataSet->pPalettePairingInfo->nPalettesToJoin; nPairIndex++)
                    {
                        //Set each palette
                        CreateDefPal(vsJoinedNodes[nPairIndex], nPairIndex);

                        SetSourcePal(nPairIndex, NodeGet->uUnitId, nSrcStart + vnPeerPaletteDistances[nPairIndex], nSrcAmt, nNodeIncrement);
                    }
                }
                else
                {
                    OutputDebugString(L"ERROR: Invalid palette pairing requested.   You probably want to check the linkage here.\n");
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

BOOL CGameClassByFile::LoadFile(CFile* LoadedFile, uint32_t nUnitNumber)
{
    CString strInfo;
    uint32_t nPalAmt = GetPaletteCountForUnit(nUnitNumber);

    strInfo.Format(L"CGameClassByFile::LoadFile: Preparing to load %u palettes for unit number %u...\n", nPalAmt, nUnitNumber);
    OutputDebugString(strInfo);

    // These are already sorted, no need to redirect
    m_rgUnitRedir.at(nUnitNumber) = nUnitNumber;

    if (GameIsUsing16BitColor())
    {
        if (m_pppDataBuffer[nUnitNumber] == nullptr)
        {
            m_pppDataBuffer[nUnitNumber] = new uint16_t * [nPalAmt];
            memset(m_pppDataBuffer[nUnitNumber], 0, sizeof(uint16_t*) * nPalAmt);
        }

        for (uint32_t nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
        {
            LoadSpecificPaletteData(nUnitNumber, nPalCtr);

            m_pppDataBuffer[nUnitNumber][nPalCtr] = new uint16_t[m_nCurrentPaletteSizeInColors];

            LoadedFile->Seek(m_nCurrentPaletteROMLocation, CFile::begin);
            LoadedFile->Read(m_pppDataBuffer[nUnitNumber][nPalCtr], m_nCurrentPaletteSizeInColors * m_nSizeOfColorsInBytes);

#if CGAMECLASSBYFILE_DEBUG
            strInfo.Format(L"\CGameClassByFile::LoadFile: Loaded palette '%s' from location 0x%x\n", m_pszCurrentPaletteName, m_nCurrentPaletteROMLocation);
            OutputDebugString(strInfo);
#endif
        }
    }
    else if (GameIsUsing32BitColor())
    {
        if (m_pppDataBuffer32[nUnitNumber] == nullptr)
        {
            m_pppDataBuffer32[nUnitNumber] = new uint32_t * [nPalAmt];
            memset(m_pppDataBuffer32[nUnitNumber], 0, sizeof(uint32_t*) * nPalAmt);
        }

        for (uint32_t nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
        {
            LoadSpecificPaletteData(nUnitNumber, nPalCtr);

            m_pppDataBuffer32[nUnitNumber][nPalCtr] = new uint32_t[m_nCurrentPaletteSizeInColors];

            LoadedFile->Seek(m_nCurrentPaletteROMLocation, CFile::begin);
            LoadedFile->Read(m_pppDataBuffer32[nUnitNumber][nPalCtr], m_nCurrentPaletteSizeInColors * m_nSizeOfColorsInBytes);

#if CGAMECLASSBYFILE_DEBUG
            strInfo.Format(L"\CGameClassByFile::LoadFile: Loaded palette '%s' from location 0x%x\n", m_pszCurrentPaletteName, m_nCurrentPaletteROMLocation);
            OutputDebugString(strInfo);
#endif
        }
    }
    else
    {
        DebugBreak(); // E_NOTIMPL
    }

    OutputDebugString(L"\tComplete!\n");

    return TRUE;
}

BOOL CGameClassByFile::SaveFile(CFile* SaveFile, uint32_t nUnitId)
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
    strMsg.Format(L"CGameClassByFile::SaveFile: Saved 0x%x palettes to disk for unit %u\n", nTotalPalettesSaved, nUnitId);
    OutputDebugString(strMsg);

    return TRUE;
}

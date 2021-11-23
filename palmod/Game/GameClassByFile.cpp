#include "StdAfx.h"
#include "GameClassByFile.h"

#define CGAMECLASSBYFILE_DEBUG DEFAULT_GAME_DEBUG_STATE

size_t CGameClassByFile::uRuleCtr = 0;
std::vector<sGameUnitsByFile> CGameClassByFile::_sCurrentGameUnits;
SupportedGamesList CGameClassByFile::_sCurrentGameFlag = SupportedGamesList::NUM_GAMES;

size_t CGameClassByFile::GetCollectionCountForUnit(size_t nUnitId)
{
    return _sCurrentGameUnits[nUnitId].nPaletteSetCount;
}

size_t CGameClassByFile::GetNodeCountForCollection(size_t nUnitId, size_t nCollectionId)
{
    return _sCurrentGameUnits[nUnitId].prgPaletteSets[nCollectionId].uChildAmt;
}

size_t CGameClassByFile::GetPaletteCountForUnit(size_t nUnitId)
{
    size_t nCollectionCount = 0;

    for (size_t nNodeIndex = 0; nNodeIndex < _sCurrentGameUnits[nUnitId].nPaletteSetCount; nNodeIndex++)
    {
        const sDescTreeNode* pThisNode = (const sDescTreeNode*)_sCurrentGameUnits[nUnitId].prgPaletteSets;

        nCollectionCount += pThisNode[nNodeIndex].uChildAmt;
    }

    return nCollectionCount;
}

LPCWSTR CGameClassByFile::GetDescriptionForCollection(size_t nUnitId, size_t nCollectionId)
{
    return _sCurrentGameUnits[nUnitId].prgPaletteSets[nCollectionId].szDesc;
}

size_t CGameClassByFile::GetNodeSizeFromPaletteId(size_t nUnitId, size_t nPaletteId)
{
    size_t nNodeSize = 0;
    size_t nTotalCollections = GetCollectionCountForUnit(nUnitId);
    const sGame_PaletteDataset* paletteSetToUse = nullptr;
    size_t nDistanceFromZero = nPaletteId;

    for (size_t nCollectionIndex = 0; nCollectionIndex < nTotalCollections; nCollectionIndex++)
    {
        const sGame_PaletteDataset* paletteSetToCheck = GetPaletteSet(nUnitId, nCollectionIndex);
        size_t nNodeCount = GetNodeCountForCollection(nUnitId, nCollectionIndex);

        if (nDistanceFromZero < nNodeCount)
        {
            nNodeSize = nNodeCount;
            break;
        }

        nDistanceFromZero -= nNodeCount;
    }

    return nNodeSize;
}

const sGame_PaletteDataset* CGameClassByFile::GetPaletteSet(size_t nUnitId, size_t nCollectionId)
{
    return (const sGame_PaletteDataset*)_sCurrentGameUnits[nUnitId].prgPaletteSets[nCollectionId].ChildNodes;
}

const sDescTreeNode* CGameClassByFile::GetNodeFromPaletteId(size_t nUnitId, size_t nPaletteId)
{
    const sDescTreeNode* pCollectionNode = nullptr;
    size_t nTotalCollections = GetCollectionCountForUnit(nUnitId);
    const sGame_PaletteDataset* paletteSetToUse = nullptr;
    size_t nDistanceFromZero = nPaletteId;

    for (size_t nCollectionIndex = 0; nCollectionIndex < nTotalCollections; nCollectionIndex++)
    {
        const sGame_PaletteDataset* paletteSetToCheck = GetPaletteSet(nUnitId, nCollectionIndex);
        const sDescTreeNode* pCollectionNodeToCheck = (const sDescTreeNode*)(_sCurrentGameUnits[nUnitId].prgPaletteSets);

        size_t nNodeCount = pCollectionNodeToCheck[nCollectionIndex].uChildAmt;

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

const sGame_PaletteDataset* CGameClassByFile::GetSpecificPalette(size_t nUnitId, size_t nPaletteId)
{
    // Don't use this for Extra palettes.
    size_t nTotalCollections = GetCollectionCountForUnit(nUnitId);
    const sGame_PaletteDataset* paletteToUse = nullptr;
    size_t nDistanceFromZero = nPaletteId;

    for (size_t nCollectionIndex = 0; nCollectionIndex < nTotalCollections; nCollectionIndex++)
    {
        const sGame_PaletteDataset* paletteSetToUse = GetPaletteSet(nUnitId, nCollectionIndex);
        size_t nNodeCount = GetNodeCountForCollection(nUnitId, nCollectionIndex);

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

void CGameClassByFile::LoadSpecificPaletteData(size_t nUnitId, size_t nPalId)
{
    const sGame_PaletteDataset* paletteData = GetSpecificPalette(nUnitId, nPalId);

    if (paletteData)  
    {
        size_t cbPaletteSizeOnDisc = max(0, (paletteData->nPaletteOffsetEnd - paletteData->nPaletteOffset));

        m_nCurrentPaletteROMLocation = paletteData->nPaletteOffset;
        m_nCurrentPaletteSizeInColors = (UINT16)cbPaletteSizeOnDisc / m_nSizeOfColorsInBytes;
        m_pszCurrentPaletteName = paletteData->szPaletteName;
    }
    else
    {
        DebugBreak();
    }
}

size_t CGameClassByFile::InitDescTreeForFileSet(sDescTreeNode* pNewDescTree)
{
    size_t nTotalPaletteCount = 0;
    size_t nUnitCt = _sCurrentGameUnits.size();

    //Create the main character tree
    _snwprintf_s(pNewDescTree->szDesc, ARRAYSIZE(pNewDescTree->szDesc), _TRUNCATE, L"%s", g_GameFriendlyName[_sCurrentGameFlag]);
    pNewDescTree->ChildNodes = new sDescTreeNode[nUnitCt];
    pNewDescTree->uChildAmt = nUnitCt;
    //All units have tree children
    pNewDescTree->uChildType = DESC_NODETYPE_TREE;

    CString strMsg;
    OutputDebugString(L"CGameClassByFile::InitDescTree: Building desc tree...\n");

    //Go through each character
    for (size_t iUnitCtr = 0; iUnitCtr < nUnitCt; iUnitCtr++)
    {
        size_t nUnitChildCount = GetCollectionCountForUnit(iUnitCtr);

        sDescTreeNode* UnitNode = &((sDescTreeNode*)pNewDescTree->ChildNodes)[iUnitCtr];

        //Set each description
        _snwprintf_s(UnitNode->szDesc, ARRAYSIZE(UnitNode->szDesc), _TRUNCATE, L"%s", _sCurrentGameUnits[iUnitCtr].strUnitName.c_str());

        UnitNode->ChildNodes = new sDescTreeNode[nUnitChildCount];
        //All children have collection trees
        UnitNode->uChildType = DESC_NODETYPE_TREE;
        UnitNode->uChildAmt = nUnitChildCount;

#if CGAMECLASSBYFILE_DEBUG
        strMsg.Format(L"Unit: \"%s\", %u of %u, %u total children\n", UnitNode->szDesc, iUnitCtr + 1, nUnitCt, UnitNode->uChildAmt);
        OutputDebugString(strMsg);
#endif

        size_t nTotalPalettesUsedInUnit = 0;

        //Set data for each child group ("collection")
        for (size_t iCollectionCtr = 0; iCollectionCtr < nUnitChildCount; iCollectionCtr++)
        {
            sDescTreeNode* CollectionNode = &((sDescTreeNode*)UnitNode->ChildNodes)[iCollectionCtr];

            //Set each collection data
            _snwprintf_s(CollectionNode->szDesc, ARRAYSIZE(CollectionNode->szDesc), _TRUNCATE, GetDescriptionForCollection(iUnitCtr, iCollectionCtr));
            //Collection children have nodes
            size_t nListedChildrenCount = GetNodeCountForCollection(iUnitCtr, iCollectionCtr);
            CollectionNode->uChildType = DESC_NODETYPE_NODE;
            CollectionNode->uChildAmt = nListedChildrenCount;
            CollectionNode->ChildNodes = (sDescTreeNode*)new sDescNode[nListedChildrenCount];

#if CGAMECLASSBYFILE_DEBUG
            strMsg.Format(L"\tCollection: \"%s\", %u of %u, %u children\n", CollectionNode->szDesc, iCollectionCtr + 1, nUnitChildCount, nListedChildrenCount);
            OutputDebugString(strMsg);
#endif

            for (size_t nNodeIndex = 0; nNodeIndex < nListedChildrenCount; nNodeIndex++)
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

    if (NodeGet == nullptr)
    {
        return FALSE;
    }

    // Default values for multisprite image display for Export
    int nSrcStart = (int)NodeGet->uPalId;
    size_t nSrcAmt = 1;
    int nNodeIncrement = 1;

    //Get rid of any palettes if there are any
    BasePalGroup.FlushPalAll();

    // Make sure to reset the image id
    nTargetImgId = 0;
    size_t nImgUnitId = INVALID_UNIT_VALUE;

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

            for (size_t nOptionsToTest = 0; nOptionsToTest < pButtonLabelSet.size(); nOptionsToTest++)
            {
                if (wcscmp(pCurrentNode->szDesc, pButtonLabelSet[nOptionsToTest]) == 0)
                {
                    fIsCorePalette = true;
                    break;
                }
            }

            if (fIsCorePalette)
            {
                nSrcAmt = pButtonLabelSet.size();
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
            if (paletteDataSet->pPalettePairingInfo->nPalettesToJoin == -1)
            {
                const size_t nStageCount = GetNodeSizeFromPaletteId(NodeGet->uUnitId, NodeGet->uPalId);

                fShouldUseAlternateLoadLogic = true;
                sImgTicket* pImgArray = nullptr;

                for (size_t nStageIndex = 0; nStageIndex < nStageCount; nStageIndex++)
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
            else if ((paletteDataSet->pPalettePairingInfo->nPalettesToJoin == 3) ||
                (paletteDataSet->pPalettePairingInfo->nPalettesToJoin == 4) ||
                (paletteDataSet->pPalettePairingInfo->nPalettesToJoin == 5))
            {
                std::vector<const sGame_PaletteDataset*> vsPaletteDataSetToJoin;
                std::vector<int> vnPeerPaletteDistances;
                bool fAllNodesFound = true;

                for (size_t nPairIndex = 0; nPairIndex < paletteDataSet->pPalettePairingInfo->nPalettesToJoin; nPairIndex++)
                {
                    switch (nPairIndex)
                    {
                    default:
                        // Fail
                        fAllNodesFound = false;
                        __fallthrough;
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

                for (size_t nNodeIndex = 0; nNodeIndex < paletteDataSet->pPalettePairingInfo->nPalettesToJoin; nNodeIndex++)
                {
                    sDescNode* sSearchedNode = nullptr;

                    // We need to readjust the nodes here.
                    size_t nNodeSize = GetNodeSizeFromPaletteId(NodeGet->uUnitId, NodeGet->uPalId);
                    size_t nAdjustedCollectionIndex = Node02;
                    INT32 nAdjustedButtonIndex = Node03 + vnPeerPaletteDistances[nNodeIndex];

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
            else // Old two pair style: this still allows for offset shifts which we're mostly not using in current previews
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

    if (!fShouldUseAlternateLoadLogic)
    {
        //Create the default palette
        ClearSetImgTicket(CreateImgTicket(nImgUnitId, nTargetImgId));

        CreateDefPal(NodeGet, 0);

        SetSourcePal(0, NodeGet->uUnitId, nSrcStart, nSrcAmt, nNodeIncrement);
    }

    return TRUE;
}

BOOL CGameClassByFile::LoadFile(CFile* LoadedFile, size_t nUnitNumber)
{
    CString strInfo;
    size_t nPalAmt = GetPaletteCountForUnit(nUnitNumber);

    strInfo.Format(L"CGameClassByFile::LoadFile: Preparing to load %u palettes for unit number %u...\n", nPalAmt, nUnitNumber);
    OutputDebugString(strInfo);

    // These are already sorted, no need to redirect
    rgUnitRedir[nUnitNumber] = nUnitNumber;

    if (GameIsUsing16BitColor())
    {
        if (m_pppDataBuffer[nUnitNumber] == nullptr)
        {
            m_pppDataBuffer[nUnitNumber] = new UINT16 * [nPalAmt];
            memset(m_pppDataBuffer[nUnitNumber], 0, sizeof(UINT16*) * nPalAmt);
        }

        for (size_t nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
        {
            LoadSpecificPaletteData(nUnitNumber, nPalCtr);

            m_pppDataBuffer[nUnitNumber][nPalCtr] = new UINT16[m_nCurrentPaletteSizeInColors];

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
            m_pppDataBuffer32[nUnitNumber] = new UINT32 * [nPalAmt];
            memset(m_pppDataBuffer32[nUnitNumber], 0, sizeof(UINT32*) * nPalAmt);
        }

        for (size_t nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
        {
            LoadSpecificPaletteData(nUnitNumber, nPalCtr);

            m_pppDataBuffer32[nUnitNumber][nPalCtr] = new UINT32[m_nCurrentPaletteSizeInColors];

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

    rgUnitRedir[nUnitAmt] = INVALID_UNIT_VALUE;

    OutputDebugString(L"\tComplete!\n");

    return TRUE;
}

BOOL CGameClassByFile::SaveFile(CFile* SaveFile, size_t nUnitId)
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
    strMsg.Format(L"CGameClassByFile::SaveFile: Saved 0x%x palettes to disk for unit %u\n", nTotalPalettesSaved, nUnitId);
    OutputDebugString(strMsg);

    return TRUE;
}

#include "StdAfx.h"
#include "Game_Garou_A.h"

BOOL CGame_Garou_A::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
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
    uint32_t nSelectedPaletteIndex = 0;

    // Get rid of any palettes if there are any
    m_BasePalGroup.FlushPalAll();

    // reset the buttons
    m_pButtonLabelSet = DEF_BUTTONLABEL_NEOGEO_FIVE;

    // Make sure to reset the image id
    uint16_t nImgUnitId = INVALID_UNIT_VALUE_16;
    uint8_t nTargetImgId = 0;

    bool fWasImageLoadHandled = false;
    bool fUsingSpecialPairing = false;

    // Only load images for internal units, since we don't currently have a methodology for associating
    // external loads to internal sprites.
    if (NodeGet->uUnitId != m_nCurrentExtraUnitId)
    {
        const sGame_PaletteDataset* paletteDataSet = GetSpecificPalette(NodeGet->uUnitId, NodeGet->uPalId);

        if (paletteDataSet)
        {
            nImgUnitId = paletteDataSet->indexImgToUse;
            nTargetImgId = paletteDataSet->indexOffsetToUse;

            const sDescTreeNode* pCurrentNode = GetNodeFromPaletteId(NodeGet->uUnitId, NodeGet->uPalId, false);

            if (pCurrentNode)
            {
                // We need to hook and handle Garou pairing uniquely given the flat portrait nodes and
                // the unsafe pairing within the Rock Howard portrait node
                sDescTreeNode* charUnit = GetMainTree()->GetDescTree(Node01, -1);

                if (wcscmp(charUnit->szDesc, k_garouNameKey_Portraits) == 0)
                {
                    // These nodes are variable sizes, so do a little math to figure it out
                    nSrcAmt = 4;
                    m_pButtonLabelSet = DEF_BUTTONLABEL_NEOGEO;
                    nNodeIncrement = 1;
                    uint32_t nCollectionCount = GetCollectionCountForUnit(NodeGet->uUnitId);
                    nSrcStart = 0;
                    nSelectedPaletteIndex = Node03; // portraits are flat in one unit

                    for (uint32_t nCurrentCollection = 0; nCurrentCollection < nCollectionCount; nCurrentCollection++)
                    {
                        uint32_t nNextChunk = GetNodeCountForCollection(NodeGet->uUnitId, nCurrentCollection);

                        if (NodeGet->uPalId < (nSrcStart + nNextChunk))
                        {
                            // Make an allowance for the paired portraits that are using one shared asset
                            if (nNextChunk != nSrcAmt)
                            {
                                nSrcStart = Node03;
                                nSrcAmt = 1;
                                nSelectedPaletteIndex = 0;
                                m_pButtonLabelSet = DEF_NOBUTTONS;
                            }
                            break;
                        }

                        nSrcStart += nNextChunk;
                    }

                    fUsingSpecialPairing = true;
                }
                else
                {
                    bool fIsCorePalette = false;

                    for (uint32_t nOptionsToTest = 0; nOptionsToTest < m_pButtonLabelSet.size(); nOptionsToTest++)
                    {
                        if (wcscmp(pCurrentNode->szDesc, m_pButtonLabelSet[nOptionsToTest]) == 0)
                        {
                            fIsCorePalette = true;
                            break;
                        }
                    }

                    if (fIsCorePalette)
                    {
                        nSrcAmt = 5;
                        nNodeIncrement = pCurrentNode->uChildAmt;

                        while (nSrcStart >= nNodeIncrement)
                        {
                            // The starting point is the absolute first palette for the sprite in question which is found in P1
                            nSrcStart -= nNodeIncrement;
                            nSelectedPaletteIndex++;
                        }
                    }
                }
            }

            if (paletteDataSet->pPalettePairingInfo)
            {
                if ((paletteDataSet->pPalettePairingInfo->nPalettesToJoin > 1) &&
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
                        fWasImageLoadHandled = true;

                        std::vector<sImgTicket*> vsImagePairs;
                        sImgTicket* pPreviousImage = nullptr;

                        if (InvertPairingDisplay(paletteDataSet->pPalettePairingInfo))
                        {
                            for (uint32_t nNodeIndex = 0; nNodeIndex < paletteDataSet->pPalettePairingInfo->nPalettesToJoin; nNodeIndex++)
                            {
                                sImgTicket* pThisImage = CreateImgTicket(vsPaletteDataSetToJoin[nNodeIndex]->indexImgToUse, vsPaletteDataSetToJoin[nNodeIndex]->indexOffsetToUse, pPreviousImage);

                                vsImagePairs.push_back(pThisImage);

                                pPreviousImage = pThisImage;
                            }

                            ClearSetImgTicket(vsImagePairs[(paletteDataSet->pPalettePairingInfo->nPalettesToJoin - 1)]);

                            for (uint32_t nPairIndex = 0; nPairIndex < paletteDataSet->pPalettePairingInfo->nPalettesToJoin; nPairIndex++)
                            {
                                //Set each palette: these were joined forward, so reverse them now
                                CreateDefPal(vsJoinedNodes[(paletteDataSet->pPalettePairingInfo->nPalettesToJoin - 1) - nPairIndex], nPairIndex);

                                SetSourcePal(nPairIndex, NodeGet->uUnitId, nSrcStart + vnPeerPaletteDistances[(paletteDataSet->pPalettePairingInfo->nPalettesToJoin - 1) - nPairIndex], nSrcAmt, nNodeIncrement, nSelectedPaletteIndex);
                            }
                        }
                        else
                        {
                            for (int32_t nNodeIndex = (paletteDataSet->pPalettePairingInfo->nPalettesToJoin - 1); nNodeIndex >= 0; nNodeIndex--)
                            {
                                sImgTicket* pThisImage = CreateImgTicket(vsPaletteDataSetToJoin[nNodeIndex]->indexImgToUse, vsPaletteDataSetToJoin[nNodeIndex]->indexOffsetToUse, pPreviousImage);

                                vsImagePairs.push_back(pThisImage);

                                pPreviousImage = pThisImage;
                            }

                            ClearSetImgTicket(vsImagePairs[(paletteDataSet->pPalettePairingInfo->nPalettesToJoin - 1)]);

                            for (uint32_t nPairIndex = 0; nPairIndex < paletteDataSet->pPalettePairingInfo->nPalettesToJoin; nPairIndex++)
                            {
                                //Set each palette
                                CreateDefPal(vsJoinedNodes[nPairIndex], nPairIndex);

                                SetSourcePal(nPairIndex, NodeGet->uUnitId, nSrcStart + vnPeerPaletteDistances[nPairIndex], nSrcAmt, nNodeIncrement, nSelectedPaletteIndex);
                            }
                        }
                    }
                    else
                    {
                        OutputDebugString(L"ERROR: Invalid palette pairing requested.   You probably want to check the linkage here.\n");
                    }
                }
            }
        }
    }
    
    if (fWasImageLoadHandled)
    {
        return TRUE;
    }
    else if (fUsingSpecialPairing)
    {
        CreateDefPal(NodeGet, 0);
        ClearSetImgTicket(CreateImgTicket(nImgUnitId, nTargetImgId));
        SetSourcePal(0, NodeGet->uUnitId, nSrcStart, nSrcAmt, nNodeIncrement, nSelectedPaletteIndex);
        return TRUE;
    }
    else
    {
        return CGameClassByDir::UpdatePalImg(Node01, Node02, Node03, Node04);
    }
}

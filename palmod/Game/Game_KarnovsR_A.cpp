#include "StdAfx.h"
#include "Game_KarnovsR_A.h"

BOOL CGame_KarnovsR_A::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
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
                if ((_wcsicmp(pCurrentNode->szDesc, DEF_BUTTONLABEL_2_PK[0]) == 0) || (_wcsicmp(pCurrentNode->szDesc, DEF_BUTTONLABEL_2_PK[1]) == 0))
                {
                    nSrcAmt = 2;
                    nNodeIncrement = pCurrentNode->uChildAmt;

                    while (nSrcStart >= nNodeIncrement)
                    {
                        // The starting point is the absolute first palette for the sprite in question which is found in P1
                        nSrcStart -= nNodeIncrement;
                    }
                }

                if (paletteDataSet->pPalettePairingInfo)
                {
                    if (ArePalettePairsEqual(paletteDataSet->pPalettePairingInfo, &pairHandledInCode))
                    {
                        sDescTreeNode* charUnit = GetMainTree()->GetDescTree(Node01, -1);
                        const sGame_PaletteDataset* paletteDataSetToJoin = nullptr;

                        const int iPorKIndex = (_wcsicmp(pCurrentNode->szDesc, DEF_BUTTONLABEL_2_PK[0]) == 0) ? 0 : 1;
                        int iCollectionIndex = 0;

                        if ((wcscmp(charUnit->szDesc, k_krNameKey_Jean) == 0) ||
                            (wcscmp(charUnit->szDesc, k_krNameKey_Karnov) == 0) ||
                            (wcscmp(charUnit->szDesc, k_krNameKey_Matlok) == 0))
                        {
                            iCollectionIndex = 1;
                        }
                        else if ((wcscmp(charUnit->szDesc, k_krNameKey_Yungmie) == 0) || 
                                 (wcscmp(charUnit->szDesc, k_krNameKey_Zazie) == 0))
                        {
                            iCollectionIndex = 0;
                        }                        

                        int nWeakpointUnit = m_nTotalInternalUnits - 1;
                        sDescTreeNode* unitWeakpoint = GetMainTree()->GetDescTree(nWeakpointUnit, -1);

                        if (wcscmp(unitWeakpoint->szDesc, k_krNameKey_WeakpointUnit) == 0)
                        {
                            fShouldUseAlternateLoadLogic = true;
                            const int8_t nPeerPaletteDistance = 1;

                            ClearSetImgTicket(
                                CreateImgTicket(paletteDataSet->indexImgToUse, paletteDataSet->indexOffsetToUse,
                                    CreateImgTicket(paletteDataSet->indexImgToUse, 0x01) // we use an alternate sprite for this pairing
                                )
                            );

                            //Set each palette
                            std::vector<sDescNode*> JoinedNode = {
                                GetMainTree()->GetDescNode(Node01, Node02, Node03, -1),
                                GetMainTree()->GetDescNode(nWeakpointUnit, iPorKIndex, iCollectionIndex, -1)
                            };

                            //Set each palette
                            CreateDefPal(JoinedNode[0], 0);
                            CreateDefPal(JoinedNode[1], 1);

                            // distance is variable length, so don't expose multisprite export
                            nSrcAmt = 1;
                            nSrcStart = NodeGet->uPalId;

                            SetSourcePal(0, NodeGet->uUnitId, nSrcStart, nSrcAmt, nNodeIncrement);
                            SetSourcePal(1, nWeakpointUnit, (iPorKIndex * 2) + iCollectionIndex, nSrcAmt, nNodeIncrement);
                        }
                    }
                    else
                    {
                        const int8_t nPeerPaletteDistance = paletteDataSet->pPalettePairingInfo->nNodeIncrementToPartner;

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

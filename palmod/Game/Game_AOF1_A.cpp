#include "StdAfx.h"
#include "Game_AOF1_A.h"

uint32_t CGame_AOF1_A::GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet, bool* pfNeedToValidateCRCs)
{
    static sCRC32ValueSet knownROMs[] =
    {
        { L"Art of Fighting 1 (Neo-Geo)", L"044-p1.p1", 0xca9f7a6d, 0 },
        { L"Art of Fighting 1 (Neo-Geo)", L"044-p1.bin", 0xca9f7a6d, 0 },
    };

    if (ppKnownROMSet != nullptr)
    {
        *ppKnownROMSet = knownROMs;
    }

    if (pfNeedToValidateCRCs)
    {
        // Each filename is associated with a single CRC
        *pfNeedToValidateCRCs = false;
    }

    return ARRAYSIZE(knownROMs);
}

BOOL CGame_AOF1_A::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
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
                bool fIsCorePalette = false;

                for (uint32_t nOptionsToTest = 0; nOptionsToTest < pButtonLabelSet.size(); nOptionsToTest++)
                {
                    if (wcscmp(pCurrentNode->szDesc, pButtonLabelSet[nOptionsToTest]) == 0)
                    {
                        fIsCorePalette = true;
                        break;
                    }
                }

                if (fIsCorePalette && (wcscmp(paletteDataSet->szPaletteName, k_aof1NameKey_MrBigPortrait) == 0))
                {
                    // Mr Big portrait isn't paired
                    fIsCorePalette = false;
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
                int8_t nPeerPaletteDistance = paletteDataSet->pPalettePairingInfo->nNodeIncrementToPartner;

                const sGame_PaletteDataset* paletteDataSetToJoin = GetSpecificPalette(NodeGet->uUnitId, NodeGet->uPalId + nPeerPaletteDistance);

                if (paletteDataSetToJoin)
                {
                    sDescTreeNode* charUnit = GetMainTree()->GetDescTree(Node01, -1);

                    fShouldUseAlternateLoadLogic = true;

                    if ((wcsstr(charUnit->szDesc, k_aof1NameKey_King)) && (wcsstr(paletteDataSet->szPaletteName, L"Damaged")))
                    {
                        // King is a slightly ugly three-pair node, stepping back for the core sprite and then forward X to her bra

                        int8_t nPeerNodeDistance = nPeerPaletteDistance;
                        int8_t nPeerPaletteDistance2 = (nPeerPaletteDistance == -2) ? 1 : 2;
                        int8_t nPeerNodeDistance2 = nPeerPaletteDistance2;

                        const sGame_PaletteDataset* paletteDataSetToJoin2 = GetSpecificPalette(NodeGet->uUnitId, NodeGet->uPalId + nPeerPaletteDistance2);

                        ClearSetImgTicket(
                            CreateImgTicket(paletteDataSetToJoin->indexImgToUse, paletteDataSetToJoin->indexOffsetToUse,
                                CreateImgTicket(paletteDataSet->indexImgToUse, paletteDataSet->indexOffsetToUse, 
                                    CreateImgTicket(paletteDataSetToJoin2->indexImgToUse, paletteDataSetToJoin2->indexOffsetToUse)
                                )
                            )
                        );

                        //Set each palette
                        std::vector<sDescNode*> JoinedNode = {
                            GetMainTree()->GetDescNode(Node01, Node02, Node03, -1),
                            GetMainTree()->GetDescNode(Node01, Node02, Node03 + nPeerNodeDistance, -1),
                            GetMainTree()->GetDescNode(Node01, Node02, Node03 + nPeerNodeDistance2, -1)
                        };

                        //Set each palette
                        CreateDefPal(JoinedNode[1], 0);
                        CreateDefPal(JoinedNode[0], 1);
                        CreateDefPal(JoinedNode[2], 2);

                        SetSourcePal(1, NodeGet->uUnitId, nSrcStart, nSrcAmt, nNodeIncrement);
                        SetSourcePal(0, NodeGet->uUnitId, nSrcStart + nPeerPaletteDistance, nSrcAmt, nNodeIncrement);
                        SetSourcePal(2, NodeGet->uUnitId, nSrcStart + nPeerPaletteDistance2, nSrcAmt, nNodeIncrement);
                    }
                    else
                    {
                        if (InvertPairingDisplay(paletteDataSet->pPalettePairingInfo))
                        {
                            ClearSetImgTicket(
                                CreateImgTicket(paletteDataSetToJoin->indexImgToUse, paletteDataSetToJoin->indexOffsetToUse,
                                    CreateImgTicket(paletteDataSet->indexImgToUse, paletteDataSet->indexOffsetToUse)
                                )
                            );
                        }
                        else
                        {
                            ClearSetImgTicket(
                                CreateImgTicket(paletteDataSet->indexImgToUse, paletteDataSet->indexOffsetToUse,
                                    CreateImgTicket(paletteDataSetToJoin->indexImgToUse, paletteDataSetToJoin->indexOffsetToUse)
                                )
                            );
                        }

                        int8_t nNodeDistance = 0;
                        int8_t nPeerNodeDistance = nPeerPaletteDistance;

                        if (wcsstr(charUnit->szDesc, k_aof1NameKey_Jack))
                        {
                            // Jack reaches into a shared node for his bubble gum
                            nSrcAmt = 1;
                            nSrcStart = NodeGet->uPalId;
                            nNodeDistance = (Node02 == 0) ? 2 : 1;
                            nPeerNodeDistance = -Node03;
                        }
                        else if ((wcsstr(charUnit->szDesc, k_aof1NameKey_King)) && (wcsstr(paletteDataSet->szPaletteName, L"Portrait")))
                        {
                            // King's portrait reaches into the shared node for her bra
                            nSrcAmt = 1;
                            nSrcStart = NodeGet->uPalId;
                            nNodeDistance = (Node02 == 0) ? 2 : 1;
                            nPeerNodeDistance = -Node03;
                        }

                        //Set each palette
                        std::vector<sDescNode*> JoinedNode = {
                            GetMainTree()->GetDescNode(Node01, Node02, Node03, -1),
                            GetMainTree()->GetDescNode(Node01, Node02 + nNodeDistance, Node03 + nPeerNodeDistance, -1)
                        };

                        const uint8_t nFirstPalette = (InvertPairingDisplay(paletteDataSet->pPalettePairingInfo)) ? 1 : 0;
                        const uint8_t nSecondPalette = (InvertPairingDisplay(paletteDataSet->pPalettePairingInfo)) ? 0 : 1;

                        //Set each palette
                        CreateDefPal(JoinedNode[nFirstPalette], 0);
                        CreateDefPal(JoinedNode[nSecondPalette], 1);

                        SetSourcePal(nFirstPalette, NodeGet->uUnitId, nSrcStart, nSrcAmt, nNodeIncrement);
                        SetSourcePal(nSecondPalette, NodeGet->uUnitId, nSrcStart + nPeerPaletteDistance, nSrcAmt, nNodeIncrement);
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

#include "StdAfx.h"
#include "Game_MVC2_D.h"
#include "mvc2_a_def.h"

// This file handles the logic for pairing ( unit id :: palette id ) sets to the best preview we have, if any

int CGame_MVC2_D::GetFirstExtraValueFromExtraPaletteId(int nExtraPaletteIdint, int nStartOfRange, int nPalettePositionIncrements, int nRangeLength)
{
    int nExtraAdjustedStart = nStartOfRange + EXTRA_OMNI;
    return nExtraAdjustedStart + ((nExtraPaletteIdint - nExtraAdjustedStart) % nPalettePositionIncrements);
}

sMoveDescription* CGame_MVC2_D::GetMoveDescriptionInfo(size_t nUnitId, size_t nPalId)
{
    sMoveDescription* pDescriptionForPalId = nullptr;

    if (nPalId < EXTRA_OMNI)
    {
        size_t uCorePalId = nPalId % 8;

        for (size_t uPalPos = 0; (uPalPos < 8) && (uPalPos < pCurrentMoveDescriptions[nUnitId].size()); uPalPos++)
        {
            if (pCurrentMoveDescriptions[nUnitId][uPalPos].nCharacterIndex == uCorePalId)
            {
                pDescriptionForPalId = &pCurrentMoveDescriptions[nUnitId][uPalPos];
                break;
            }
        }
    }
    else
    {
        size_t uPalIdPostExtras = nPalId - EXTRA_OMNI;

        // SKip past the core 8 palettes into extras space and see if we have a match
        for (size_t uPalPos = 8; uPalPos < pCurrentMoveDescriptions[nUnitId].size(); uPalPos++)
        {
            if (pCurrentMoveDescriptions[nUnitId][uPalPos].nCharacterIndex == uPalIdPostExtras)
            {
                pDescriptionForPalId = &pCurrentMoveDescriptions[nUnitId][uPalPos];
                break;
            }
        }
    }

    return pDescriptionForPalId;
}

BOOL CGame_MVC2_D::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
{
    //Reset palette sources
    ClearSrcPal();

    if (Node01 == -1)
    {
        return FALSE;
    }

    //Reset the extra amount
    nExtraAmt = _nCurrentTotalColorOptions; // BUGBUG: This is apparently an artifact of an earlier system.  It can be replaced with setting nAmt 
                                            // in calls to CreateExtraPal.

    BOOL bLoadDefPal = TRUE;
    bool fImgIsFromNewImgDatRange = false;

    sDescNode* NodeGet = GetMainTree()->GetDescNode(Node01, Node02, Node03, Node04);

    if (NodeGet == nullptr)
    {
        return FALSE;
    }

    size_t uUnitId = NodeGet->uUnitId;
    size_t uPalId = NodeGet->uPalId;
    bool fUsingDataFromDescriptionSet = false;

    //Change the image id if we need to
    nTargetImgId = -1;
    nImgUnitId = uUnitId;

    //Get rid of any palettes if there are any
    BasePalGroup.FlushPalAll();

    // Allow for built-in overrides
    sMoveDescription* pDescriptionForPalId = GetMoveDescriptionInfo(uUnitId, uPalId);
    if (pDescriptionForPalId)
    {
        if (pDescriptionForPalId->nImageIndex != 0xFF)
        {
            nImgUnitId = (pDescriptionForPalId->nImageUnitOverride != 0xFF) ? pDescriptionForPalId->nImageUnitOverride : nImgUnitId;
            nTargetImgId = pDescriptionForPalId->nImageIndex;
            fUsingDataFromDescriptionSet = true;
        }
    }

    if (pDescriptionForPalId && pDescriptionForPalId->pPairedPaletteInfo)
    {
#ifdef NOTDONEYET
        if (pCurrentPairingInfo->nPalettesToJoin == -1) // We'll allow "full" node joins for the core 8 palettes only
        {
            const size_t nCoreCharacterPaletteCount = 8;

            bLoadDefPal = FALSE;
            sImgTicket* pImgArray = nullptr;

            for (size_t nCorePaletteIndex = 0; nCorePaletteIndex < nCoreCharacterPaletteCount; nCorePaletteIndex++)
            {
                // The palettes get added forward, but the image tickets need to be generated in reverse order
                const sGame_PaletteDataset* paletteDataSetToJoin = _GetSpecificPalette(pGameUnits, rgExtraCount, nNormalUnitCount, nExtraUnitLocation, NodeGet->uUnitId, NodeGet->uPalId + (nCoreCharacterPaletteCount - 1 - nCorePaletteIndex), ppExtraDef);
                if (paletteDataSetToJoin)
                {
                    pImgArray = CreateImgTicket(paletteDataSetToJoin->indexImgToUse, paletteDataSetToJoin->indexOffsetToUse, pImgArray);

                    //Set each palette
                    sDescNode* JoinedNode = GetMainTree()->GetDescNode(Node01, Node02, Node03 + nCorePaletteIndex, -1);
                    CreateDefPal(JoinedNode, nCorePaletteIndex);
                    SetSourcePal(nStageIndex, NodeGet->uUnitId, nSrcStart + nStageIndex, nSrcAmt, nNodeIncrement);
                }
            }

            ClearSetImgTicket(pImgArray);
        }
        else 
#endif
        if ((pDescriptionForPalId->pPairedPaletteInfo->nPalettesToJoin > 2) && (pDescriptionForPalId->pPairedPaletteInfo->nPalettesToJoin < 8))
        {
            std::vector<const sMoveDescription*> vMoveDescriptionSetToJoin;
            std::vector<int> vnPeerPaletteDistances;
            bool fAllNodesFound = true;

            for (size_t nPairIndex = 0; nPairIndex < pDescriptionForPalId->pPairedPaletteInfo->nPalettesToJoin; nPairIndex++)
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
                    vnPeerPaletteDistances.push_back(pDescriptionForPalId->pPairedPaletteInfo->nNodeIncrementToPartner);
                    break;
                case 2:
                    vnPeerPaletteDistances.push_back(pDescriptionForPalId->pPairedPaletteInfo->nOverallNodeIncrementTo2ndPartner);
                    break;
                case 3:
                    vnPeerPaletteDistances.push_back(pDescriptionForPalId->pPairedPaletteInfo->nOverallNodeIncrementTo3rdPartner);
                    break;
                case 4:
                    vnPeerPaletteDistances.push_back(pDescriptionForPalId->pPairedPaletteInfo->nOverallNodeIncrementTo4thPartner);
                    break;
                case 5:
                    vnPeerPaletteDistances.push_back(pDescriptionForPalId->pPairedPaletteInfo->nOverallNodeIncrementTo5thPartner);
                    break;
                case 6:
                    vnPeerPaletteDistances.push_back(pDescriptionForPalId->pPairedPaletteInfo->nOverallNodeIncrementTo6thPartner);
                    break;
                case 7:
                    vnPeerPaletteDistances.push_back(pDescriptionForPalId->pPairedPaletteInfo->nOverallNodeIncrementTo7thPartner);
                    break;
                }

                sMoveDescription* pDescriptionForPartner = GetMoveDescriptionInfo(uUnitId, uPalId + vnPeerPaletteDistances[nPairIndex]);

                if (pDescriptionForPartner)
                {
                    vMoveDescriptionSetToJoin.push_back(pDescriptionForPartner);
                }
                else
                {
                    fAllNodesFound = false;
                }
            }

            std::vector<sDescNode*> vsJoinedNodes;

            for (size_t nNodeIndex = 0; nNodeIndex < pDescriptionForPalId->pPairedPaletteInfo->nPalettesToJoin; nNodeIndex++)
            {
                // Note that this MvC2-specific version doesn't cross "nodes" since the layout is different
                sDescNode* sSearchedNode = GetMainTree()->GetDescNode(Node01, Node02, Node03 + vnPeerPaletteDistances[nNodeIndex], -1);

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
                bLoadDefPal = FALSE;
                fUsingDataFromDescriptionSet = true;

                std::vector<sImgTicket*> vsImagePairs;
                sImgTicket* pPreviousImage = nullptr;

                for (int nNodeIndex = ((int)pDescriptionForPalId->pPairedPaletteInfo->nPalettesToJoin) - 1; nNodeIndex >= 0; nNodeIndex--)
                {
                    size_t nUnitToUse = (vMoveDescriptionSetToJoin[nNodeIndex]->nImageUnitOverride != 0xFF) ? vMoveDescriptionSetToJoin[nNodeIndex]->nImageUnitOverride : nImgUnitId;
                    UINT16 nImageToUse = (vMoveDescriptionSetToJoin[nNodeIndex]->nImageIndex != 0xFF) ? vMoveDescriptionSetToJoin[nNodeIndex]->nImageIndex : vMoveDescriptionSetToJoin[nNodeIndex]->nCharacterIndex;

                    sImgTicket* pThisImage = CreateImgTicket(nUnitToUse, nImageToUse, pPreviousImage);

                    vsImagePairs.push_back(pThisImage);

                    pPreviousImage = pThisImage;
                }

                ClearSetImgTicket(vsImagePairs[(pDescriptionForPalId->pPairedPaletteInfo->nPalettesToJoin - 1)]);

                for (int nPairIndex = 0; nPairIndex < (int)pDescriptionForPalId->pPairedPaletteInfo->nPalettesToJoin; nPairIndex++)
                {
                    //Set each palette
                    int nSrcAmt = (NodeGet->uPalId < EXTRA_OMNI) ? _nCurrentTotalColorOptions : 1;
                    int nSrcStart = (int)NodeGet->uPalId;
                    int nNodeIncrement = (NodeGet->uPalId < EXTRA_OMNI) ? 8 : 1;
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
            INT8 nPeerPaletteDistance = pDescriptionForPalId->pPairedPaletteInfo->nNodeIncrementToPartner;
            sMoveDescription* pDescriptionForPartner = GetMoveDescriptionInfo(uUnitId, uPalId + nPeerPaletteDistance);

            if (pDescriptionForPartner)
            {
                int nXOffs = pDescriptionForPalId->pPairedPaletteInfo->nXOffs;
                int nYOffs = pDescriptionForPalId->pPairedPaletteInfo->nYOffs;

                bLoadDefPal = FALSE;
                fUsingDataFromDescriptionSet = true;

                // Use fall backs if values aren't specified
                size_t nPartnerUnitToUse = (pDescriptionForPartner->nImageUnitOverride != 0xFF) ? pDescriptionForPartner->nImageUnitOverride : nImgUnitId;
                UINT16 nPartnerImageToUse = (pDescriptionForPartner->nImageIndex != 0xFF) ? pDescriptionForPartner->nImageIndex : pDescriptionForPartner->nCharacterIndex;

                ClearSetImgTicket(
                    CreateImgTicket(nImgUnitId, nTargetImgId,
                        CreateImgTicket(nPartnerUnitToUse, nPartnerImageToUse, nullptr, nXOffs, nYOffs)
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

                int nSrcAmt = (NodeGet->uPalId < EXTRA_OMNI) ? _nCurrentTotalColorOptions : 1;
                int nNodeIncrement = (NodeGet->uPalId < EXTRA_OMNI) ? 8 : 1;
                int nSrcStart = (int)NodeGet->uPalId;

                SetSourcePal(0, NodeGet->uUnitId, nSrcStart, nSrcAmt, nNodeIncrement);
                SetSourcePal(1, NodeGet->uUnitId, nSrcStart + nPeerPaletteDistance, nSrcAmt, nNodeIncrement);
            }
        }
    }

    if (!fUsingDataFromDescriptionSet)
    {
        switch (uUnitId)
        {
        case indexCPS2Sprites_Megaman:
        {
            // Megaman has an extra range per button of 0x57 palettes.
            if (CreateExtraPal(uUnitId, uPalId, 0x09, 0x57, 0x26) || // hair
                CreateExtraPal(uUnitId, uPalId, 0x0A, 0x57, 0x0B) || // teleport intro
                CreateExtraPal(uUnitId, uPalId, 0x0B, 0x57, 0x00, 0, 9) || // Megaman intro
                CreateExtraPal(uUnitId, uPalId, 0x2F, 0x57, 0x00, 0, 9) || // Charging buster
                CreateExtraPal(uUnitId, uPalId, 0x41, 0x57, 0x0D) || // teleport intro
                CreateExtraPal(uUnitId, uPalId, 0x42, 0x57, 0x25) || // Dr Light
                CreateExtraPal(uUnitId, uPalId, 0x26, 0x57, 0x24, 0, 9) //|| // Beat Plane
                //CreateExtraPal(uUnitId, uPalId, 0x55, 0x57, 0x29) // HMM Missiles
                )
            {
                fImgIsFromNewImgDatRange = true;
                break;
            }
            else if (CreateExtraPal(uUnitId, uPalId, 0x14, 0x57, 0x01, 0, 9)) // Rush: join down to Beat
            {
                bLoadDefPal = FALSE;

                int nXOffs = 0;
                int nYOffs = 0;
                int nPeerPaletteDistance = 0x09;

                //Create the img ticket
                ClearSetImgTicket(
                    CreateImgTicket(indexCPS2Sprites_Megaman, 0x1,
                        CreateImgTicket(indexCPS2Sprites_Megaman, 0x02, nullptr, nXOffs, nYOffs)
                    )
                );

                //Set each palette
                sDescNode* NodeRushAndBeat[2] = {
                    GetMainTree()->GetDescNode(Node01, Node02, Node03, -1),
                    GetMainTree()->GetDescNode(Node01, Node02, Node03 + nPeerPaletteDistance, -1)
                };

                //Set each palette
                CreateDefPal(NodeRushAndBeat[0], 0);
                CreateDefPal(NodeRushAndBeat[1], 1);

                int nFirstExtraPalette = GetFirstExtraValueFromExtraPaletteId(NodeGet->uPalId, 0x14, 0x57, 0x09);
                SetSourcePal(0, NodeGet->uUnitId, nFirstExtraPalette, _nCurrentTotalColorOptions, 0x57);
                SetSourcePal(1, NodeGet->uUnitId, nFirstExtraPalette + nPeerPaletteDistance, _nCurrentTotalColorOptions, 0x57);

                break;
            } 
            else if (CreateExtraPal(uUnitId, uPalId, 0x1D, 0x57, 0x02, 0, 9)) // Beat: join up to Rush
            {
                bLoadDefPal = FALSE;

                int nXOffs = 0;
                int nYOffs = 0;
                int nPeerPaletteDistance = -0x09;

                //Create the img ticket
                ClearSetImgTicket(
                    CreateImgTicket(indexCPS2Sprites_Megaman, 0x2,
                        CreateImgTicket(indexCPS2Sprites_Megaman, 0x01, nullptr, nXOffs, nYOffs)
                    )
                );

                //Set each palette
                sDescNode* NodeRushAndBeat[2] = {
                    GetMainTree()->GetDescNode(Node01, Node02, Node03, -1),
                    GetMainTree()->GetDescNode(Node01, Node02, Node03 + nPeerPaletteDistance, -1)
                };

                //Set each palette
                CreateDefPal(NodeRushAndBeat[0], 0);
                CreateDefPal(NodeRushAndBeat[1], 1);

                int nFirstExtraPalette = GetFirstExtraValueFromExtraPaletteId(NodeGet->uPalId, 0x1d, 0x57, 0x09);
                SetSourcePal(0, NodeGet->uUnitId, nFirstExtraPalette, _nCurrentTotalColorOptions, 0x57);
                SetSourcePal(1, NodeGet->uUnitId, nFirstExtraPalette + nPeerPaletteDistance, _nCurrentTotalColorOptions, 0x57);

                break;
            }
            else if ((uPalId == 0x1) || // Button Extra 01:  Rush sprite, join with Beat
                     (uPalId == 0x9) ||
                     (uPalId == 0x11) ||
                     (uPalId == 0x19) ||
                     (uPalId == 0x21) ||
                     (uPalId == 0x29))
            {
                bLoadDefPal = FALSE;
                int nPeerPaletteDistance = 0x01;

                //Create the img ticket
                ClearSetImgTicket(
                    CreateImgTicket(indexCPS2Sprites_Megaman, 0x01,
                        CreateImgTicket(indexCPS2Sprites_Megaman, 0x02)
                    )
                );

                //Set each palette
                sDescNode* NodeRushAndBeat[2] = {
                    GetMainTree()->GetDescNode(Node01, Node02, Node03, -1),
                    GetMainTree()->GetDescNode(Node01, Node02, Node03 + nPeerPaletteDistance, -1)
                };

                //Set each palette
                CreateDefPal(NodeRushAndBeat[0], 0);
                CreateDefPal(NodeRushAndBeat[1], 1);

                SetSourcePal(0, NodeGet->uUnitId, GetBasicOffset(uPalId), _nCurrentTotalColorOptions, 0x08);
                SetSourcePal(1, NodeGet->uUnitId, GetBasicOffset(uPalId) + nPeerPaletteDistance, _nCurrentTotalColorOptions, 0x08);
                break;
            }
            else if ((uPalId == 0x2) || // Beat sprite, join with Rush
                     (uPalId == 0xA) ||
                     (uPalId == 0x12) ||
                     (uPalId == 0x1A) ||
                     (uPalId == 0x22) ||
                     (uPalId == 0x2A))
            {
                bLoadDefPal = FALSE;

                int nPeerPaletteDistance = -0x01;

                //Create the img ticket
                ClearSetImgTicket(
                    CreateImgTicket(indexCPS2Sprites_Megaman, 0x02,
                        CreateImgTicket(indexCPS2Sprites_Megaman, 0x01)
                    )
                );

                //Set each palette
                sDescNode* NodeRushAndBeat[2] = {
                    GetMainTree()->GetDescNode(Node01, Node02, Node03, -1),
                    GetMainTree()->GetDescNode(Node01, Node02, Node03 + nPeerPaletteDistance, -1)
                };

                //Set each palette
                CreateDefPal(NodeRushAndBeat[0], 0);
                CreateDefPal(NodeRushAndBeat[1], 1);

                SetSourcePal(0, NodeGet->uUnitId, GetBasicOffset(uPalId), _nCurrentTotalColorOptions, 0x08);
                SetSourcePal(1, NodeGet->uUnitId, GetBasicOffset(uPalId) + nPeerPaletteDistance, _nCurrentTotalColorOptions, 0x08);

                break;
            }
            else if ((uPalId == (0x5E + EXTRA_OMNI)) || // Roll: cross character load
                     (uPalId == (0xB5 + EXTRA_OMNI)) ||
                     (uPalId == (0x10C + EXTRA_OMNI)) ||
                     (uPalId == (0x163 + EXTRA_OMNI)) ||
                     (uPalId == (0x1BA + EXTRA_OMNI)) ||
                     (uPalId == (0x211 + EXTRA_OMNI)))
            {
                bLoadDefPal = FALSE;

                nImgUnitId = indexCPS2Sprites_Roll;
                nTargetImgId = 0;

                ClearSetImgTicket(CreateImgTicket(nImgUnitId, 0));

                CreateDefPal(NodeGet, 0);

                SetSourcePal(0, 0x1C, 0x5E + EXTRA_OMNI, _nCurrentTotalColorOptions, 0x57);
                break;
            }
            else if (((uPalId >= (0x38 + EXTRA_OMNI)) && (uPalId <= (0x3F + EXTRA_OMNI))) || // Rush Drill: joined
                     ((uPalId >= (0x8F + EXTRA_OMNI)) && (uPalId <= (0x96 + EXTRA_OMNI))) ||
                     ((uPalId >= (0xE6 + EXTRA_OMNI)) && (uPalId <= (0xEC + EXTRA_OMNI))) ||
                     ((uPalId >= (0x13D + EXTRA_OMNI)) && (uPalId <= (0x144 + EXTRA_OMNI))) ||
                     ((uPalId >= (0x194 + EXTRA_OMNI)) && (uPalId <= (0x19B + EXTRA_OMNI))) ||
                     ((uPalId >= (0x1EB + EXTRA_OMNI)) && (uPalId <= (0x1F2 + EXTRA_OMNI))))
            {
                bLoadDefPal = FALSE;

                int nXOffs = 0;
                int nYOffs = 0;
                int nPeerPaletteDistance = 0x1E;

                //Create the img ticket
                ClearSetImgTicket(
                    CreateImgTicket(0x1D, 0xB,
                        CreateImgTicket(0x1D, 0x0C, nullptr, nXOffs, nYOffs)
                    )
                );

                //Set each palette
                sDescNode* NodeRushDrill[2] = {
                    GetMainTree()->GetDescNode(Node01, Node02, Node03, -1),
                    GetMainTree()->GetDescNode(Node01, Node02, Node03 + nPeerPaletteDistance, -1)
                };

                //Set each palette
                CreateDefPal(NodeRushDrill[0], 0);
                CreateDefPal(NodeRushDrill[1], 1);

                int nFirstExtraPalette = GetFirstExtraValueFromExtraPaletteId(NodeGet->uPalId, 0x38, 0x57, 0x08);
                SetSourcePal(0, NodeGet->uUnitId, nFirstExtraPalette, _nCurrentTotalColorOptions, 0x57);
                SetSourcePal(1, NodeGet->uUnitId, nFirstExtraPalette + nPeerPaletteDistance, _nCurrentTotalColorOptions, 0x57);

                break;
            }
            else if ((uPalId == (0x40 + EXTRA_OMNI)) || // Rush Drill: all white sprite.  No matching metal.
                     (uPalId == (0x97 + EXTRA_OMNI)) ||
                     (uPalId == (0xED + EXTRA_OMNI)) ||
                     (uPalId == (0x145 + EXTRA_OMNI)) ||
                     (uPalId == (0x19C + EXTRA_OMNI)) ||
                     (uPalId == (0x1F3 + EXTRA_OMNI)))
            {
                bLoadDefPal = FALSE;

                nImgUnitId = 0x1D;
                nTargetImgId = 0x0B; // rush drill

                ClearSetImgTicket(CreateImgTicket(nImgUnitId, nTargetImgId));

                CreateDefPal(NodeGet, 0);

                // Boring white sprite
                SetSourcePal(0, uUnitId, 0x40 + EXTRA_OMNI, _nCurrentTotalColorOptions, 0x57);
                break;
            }
            else if (((uPalId >= (0x56 + EXTRA_OMNI)) && (uPalId <= (0x5D + EXTRA_OMNI))) || // Rush Drill metal bits
                     ((uPalId >= (0xAD + EXTRA_OMNI)) && (uPalId <= (0xB4 + EXTRA_OMNI))) ||
                     ((uPalId >= (0x104 + EXTRA_OMNI)) && (uPalId <= (0x10B + EXTRA_OMNI))) ||
                     ((uPalId >= (0x15B + EXTRA_OMNI)) && (uPalId <= (0x162 + EXTRA_OMNI))) ||
                     ((uPalId >= (0x1B2 + EXTRA_OMNI)) && (uPalId <= (0x1B9 + EXTRA_OMNI))) ||
                     ((uPalId >= (0x209 + EXTRA_OMNI)) && (uPalId <= (0x210 + EXTRA_OMNI))))
            {
// If you load an ACT file when using reversed palette display the ACT is applied to the visually first code-wise second palette
// Since we don't want that, I'm just sticking with forward-only joins for now.
#ifdef REVERSE_PALETTES_SUPPORT_ACT_PASTING
                // BUGBUG: Going from 0x55 to 0x56 (and so forth for all buttons) leaves sprites drawn incorrectly.
                bLoadDefPal = FALSE;

                int nXOffs = 0;
                int nYOffs = 0;
                int nPeerPaletteDistance = -0x1E;

                //Create the img ticket
                ClearSetImgTicket(
                    CreateImgTicket(0x1D, 0xB,
                        CreateImgTicket(0x1D, 0x0C, nullptr, nXOffs, nYOffs)
                    )
                );

                //Set each palette
                sDescNode* NodeRushDrill[2] = {
                    GetMainTree()->GetDescNode(Node01, Node02, Node03 + nPeerPaletteDistance, -1),
                    GetMainTree()->GetDescNode(Node01, Node02, Node03, -1)
                };

                //Set each palette
                CreateDefPal(NodeRushDrill[0], 0);
                CreateDefPal(NodeRushDrill[1], 1);

                int nFirstExtraPalette = GetFirstExtraValueFromExtraPaletteId(NodeGet->uPalId, 0x56, 0x57, 0x08);
                SetSourcePal(0, NodeGet->uUnitId, nFirstExtraPalette + nPeerPaletteDistance, _nCurrentTotalColorOptions, 0x57);
                SetSourcePal(1, NodeGet->uUnitId, nFirstExtraPalette, _nCurrentTotalColorOptions, 0x57);
#else
                bLoadDefPal = FALSE;

                nImgUnitId = 0x1D; // Pull in Roll's sprite here.
                nTargetImgId = 0x0C; // rush drill

                ClearSetImgTicket(CreateImgTicket(nImgUnitId, nTargetImgId));

                CreateDefPal(NodeGet, 0);

                SetSourcePal(0, uUnitId, 0x40, _nCurrentTotalColorOptions, 0x57);
#endif
                break;
            }
            else if (((uPalId >= (0x43 + EXTRA_OMNI)) && (uPalId <= (0x4B + EXTRA_OMNI))) || // Hyper Megaman: Armor: joined
                     ((uPalId >= (0x9A + EXTRA_OMNI)) && (uPalId <= (0xA2 + EXTRA_OMNI))) ||
                     ((uPalId >= (0xF1 + EXTRA_OMNI)) && (uPalId <= (0xF9 + EXTRA_OMNI))) ||
                     ((uPalId >= (0x148 + EXTRA_OMNI)) && (uPalId <= (0x150 + EXTRA_OMNI))) ||
                     ((uPalId >= (0x19F + EXTRA_OMNI)) && (uPalId <= (0x1A7 + EXTRA_OMNI))) ||
                     ((uPalId >= (0x1F6 + EXTRA_OMNI)) && (uPalId <= (0x1FE + EXTRA_OMNI))))
            {
                bLoadDefPal = FALSE;

                const int nPeerPaletteDistance = 9;

                //Create the img ticket
                ClearSetImgTicket(
                    CreateImgTicket(uUnitId, 0x27,
                        CreateImgTicket(uUnitId, 0x28, nullptr, pairHyperMegaman.nXOffs, pairHyperMegaman.nYOffs)
                    )
                );

                //Set each palette
                sDescNode* NodeHMMM[2] = {
                    GetMainTree()->GetDescNode(Node01, Node02, Node03, -1),
                    GetMainTree()->GetDescNode(Node01, Node02, Node03 + nPeerPaletteDistance, -1)
                };

                //Set each palette
                CreateDefPal(NodeHMMM[0], 0);
                CreateDefPal(NodeHMMM[1], 1);

                const int nFirstExtraPalette = GetFirstExtraValueFromExtraPaletteId(NodeGet->uPalId, 0x43, 0x57, 0x09); // HMM has 9 palettes
                SetSourcePal(0, NodeGet->uUnitId, nFirstExtraPalette, _nCurrentTotalColorOptions, 0x57);
                SetSourcePal(1, NodeGet->uUnitId, nFirstExtraPalette + nPeerPaletteDistance, _nCurrentTotalColorOptions, 0x57);

                break;
            }
            else if (((uPalId >= (0x4C + EXTRA_OMNI)) && (uPalId <= (0x54 + EXTRA_OMNI))) || // Hyper Megaman: core: flip the HMM logic.
                     ((uPalId >= (0xA3 + EXTRA_OMNI)) && (uPalId <= (0xAB + EXTRA_OMNI))) ||
                     ((uPalId >= (0xFA + EXTRA_OMNI)) && (uPalId <= (0x102 + EXTRA_OMNI))) ||
                     ((uPalId >= (0x151 + EXTRA_OMNI)) && (uPalId <= (0x159 + EXTRA_OMNI))) ||
                     ((uPalId >= (0x1A8 + EXTRA_OMNI)) && (uPalId <= (0x1B0 + EXTRA_OMNI))) ||
                     ((uPalId >= (0x1FF + EXTRA_OMNI)) && (uPalId <= (0x207 + EXTRA_OMNI))))
            {
#ifdef REVERSE_PALETTES_SUPPORT_ACT_PASTING
                bLoadDefPal = FALSE;

                int nXOffs = -31;
                int nYOffs = -12;
                int nPeerPaletteDistance = -9;

                //Create the img ticket
                ClearSetImgTicket(
                    CreateImgTicket(uUnitId, 0x28,
                        CreateImgTicket(uUnitId, 0x27, nullptr, nXOffs, nYOffs)
                    )
                );

                //Set each palette
                sDescNode* NodeHMMM[2] = {
                    GetMainTree()->GetDescNode(Node01, Node02, Node03, -1),
                    GetMainTree()->GetDescNode(Node01, Node02, Node03 + nPeerPaletteDistance, -1)
                };

                //Set each palette
                CreateDefPal(NodeHMMM[0], 0);
                CreateDefPal(NodeHMMM[1], 1);

                int nFirstExtraPalette = GetFirstExtraValueFromExtraPaletteId(NodeGet->uPalId, 0x4C, 0x57, 0x09); // HMM has 9 palettes
                SetSourcePal(0, NodeGet->uUnitId, nFirstExtraPalette, _nCurrentTotalColorOptions, 0x57);
                SetSourcePal(1, NodeGet->uUnitId, nFirstExtraPalette + nPeerPaletteDistance, _nCurrentTotalColorOptions, 0x57);
#else
                nTargetImgId = 0x28;
                fImgIsFromNewImgDatRange = true;
#endif
                break;
            }
            else if ((uPalId == (0x55 + EXTRA_OMNI)) || // HMM missiles.  The palette display is reverse order which is OK for this one-off joined display.
                     (uPalId == (0xAC + EXTRA_OMNI)) ||
                     (uPalId == (0x103 + EXTRA_OMNI)) ||
                     (uPalId == (0x15A + EXTRA_OMNI)) ||
                     (uPalId == (0x1B1 + EXTRA_OMNI)) ||
                     (uPalId == (0x208 + EXTRA_OMNI)))
            {
                // This is an interesting triple sprite join.  Should be logical enough.  If you want the simple approach, use:
                    //        CreateExtraPal(uUnitId, uPalId, 0x55, 0x57, 0x29)
                // If you want to just show the missiles + core body, use:
#ifdef JUST_THE_BODY_NO_ARMOR_PLS
                bLoadDefPal = FALSE;

                int nXOffs = 0;
                int nYOffs = -10;
                int nPeerPaletteDistance = -7;

                //Create the img ticket
                ClearSetImgTicket(
                    CreateImgTicket(uUnitId, 0x28,
                        CreateImgTicket(uUnitId, 0x29, nullptr, nXOffs, nYOffs)
                    )
                );

                //Set each palette
                sDescNode* NodeHMMM[2] = {
                    GetMainTree()->GetDescNode(Node01, Node02, Node03 + nPeerPaletteDistance, -1),
                    GetMainTree()->GetDescNode(Node01, Node02, Node03, -1)
                };

                //Set each palette
                CreateDefPal(NodeHMMM[0], 0);
                CreateDefPal(NodeHMMM[1], 1);

                int nFirstExtraPalette = GetFirstExtraValueFromExtraPaletteId(NodeGet->uPalId, 0x55, 0x57, 0x1); // HMM missiles have 1 palette
                SetSourcePal(0, NodeGet->uUnitId, nFirstExtraPalette, _nCurrentTotalColorOptions, 0x57);
                SetSourcePal(1, NodeGet->uUnitId, nFirstExtraPalette + nPeerPaletteDistance, _nCurrentTotalColorOptions, 0x57);
#else
                bLoadDefPal = FALSE;

                int nXOffs = 0 + 31;
                int nYOffs = 10 - 12;
                int nDistanceToBody = -7;
                int nDistanceToArmor = -16;

                //Create the img ticket
                ClearSetImgTicket(
                    CreateImgTicket(uUnitId, 0x27,
                        CreateImgTicket(uUnitId, 0x28, 
                            CreateImgTicket(uUnitId, 0x29, nullptr, nXOffs, nYOffs),
                                31, -12)
                    )
                );

                //Set each palette
                sDescNode* NodeHMMM[3] = {
                    GetMainTree()->GetDescNode(Node01, Node02, Node03 + nDistanceToArmor, -1),
                    GetMainTree()->GetDescNode(Node01, Node02, Node03 + nDistanceToBody, -1),
                    GetMainTree()->GetDescNode(Node01, Node02, Node03, -1)
                };

                //Set each palette
                CreateDefPal(NodeHMMM[0], 0);
                CreateDefPal(NodeHMMM[1], 1);
                CreateDefPal(NodeHMMM[2], 2);

                int nFirstExtraPalette = GetFirstExtraValueFromExtraPaletteId(NodeGet->uPalId, 0x55, 0x57, 0x1); // HMM missiles have 1 palette
                SetSourcePal(0, NodeGet->uUnitId, nFirstExtraPalette + nDistanceToArmor, _nCurrentTotalColorOptions, 0x57);
                SetSourcePal(1, NodeGet->uUnitId, nFirstExtraPalette + nDistanceToBody, _nCurrentTotalColorOptions, 0x57);
                SetSourcePal(2, NodeGet->uUnitId, nFirstExtraPalette, _nCurrentTotalColorOptions, 0x57);
#endif

                break;
            }

            break;
        }

        case indexCPS2Sprites_Roll: // Roll
        {
            // Handle the cross-unit Megaman sprites first...
            if (CreateExtraPal(indexCPS2Sprites_Megaman, uPalId, 0x09, 0x57, 0x26) || // hair
                CreateExtraPal(indexCPS2Sprites_Megaman, uPalId, 0x0A, 0x57, 0x0B) || // teleport intro
                CreateExtraPal(indexCPS2Sprites_Megaman, uPalId, 0x26, 0x57, 0x24, 0, 9) || // Beat Plane
                CreateExtraPal(indexCPS2Sprites_Megaman, uPalId, 0x42, 0x57, 0x25) || // Dr Light
                CreateExtraPal(indexCPS2Sprites_Megaman, uPalId, 0x5E, 0x57, 0x00) // Megaman
                //CreateExtraPal(uUnitId, uPalId, 0x55, 0x57, 0x29) // Hyper Roll Missiles: no sprite available
                )
            {
                nImgUnitId = 0x1C;
                fImgIsFromNewImgDatRange = true;
                break;
            }
            else if (CreateExtraPal(uUnitId, uPalId, 0x14, 0x57, 0x01, 0, 9)) // Rush: join down to Beat
            {
                bLoadDefPal = FALSE;

                int nPeerPaletteDistance = 0x09;

                //Create the img ticket
                ClearSetImgTicket(
                    CreateImgTicket(indexCPS2Sprites_Megaman, 0x1,
                        CreateImgTicket(indexCPS2Sprites_Megaman, 0x02)
                    )
                );

                //Set each palette
                sDescNode* NodeRushAndBeat[2] = {
                    GetMainTree()->GetDescNode(Node01, Node02, Node03, -1),
                    GetMainTree()->GetDescNode(Node01, Node02, Node03 + nPeerPaletteDistance, -1)
                };

                //Set each palette
                CreateDefPal(NodeRushAndBeat[0], 0);
                CreateDefPal(NodeRushAndBeat[1], 1);

                int nFirstExtraPalette = GetFirstExtraValueFromExtraPaletteId(NodeGet->uPalId, 0x14, 0x57, 0x09);
                SetSourcePal(0, NodeGet->uUnitId, nFirstExtraPalette, _nCurrentTotalColorOptions, 0x57);
                SetSourcePal(1, NodeGet->uUnitId, nFirstExtraPalette + nPeerPaletteDistance, _nCurrentTotalColorOptions, 0x57);

                break;
            }
            else if (CreateExtraPal(uUnitId, uPalId, 0x1D, 0x57, 0x02, 0, 9)) // Beat: join up to Rush
            {
                bLoadDefPal = FALSE;

                int nPeerPaletteDistance = -0x09;

                //Create the img ticket
                ClearSetImgTicket(
                    CreateImgTicket(indexCPS2Sprites_Megaman, 0x2,
                        CreateImgTicket(indexCPS2Sprites_Megaman, 0x01)
                    )
                );

                //Set each palette
                sDescNode* NodeRushAndBeat[2] = {
                    GetMainTree()->GetDescNode(Node01, Node02, Node03, -1),
                    GetMainTree()->GetDescNode(Node01, Node02, Node03 + nPeerPaletteDistance, -1)
                };

                //Set each palette
                CreateDefPal(NodeRushAndBeat[0], 0);
                CreateDefPal(NodeRushAndBeat[1], 1);

                int nFirstExtraPalette = GetFirstExtraValueFromExtraPaletteId(NodeGet->uPalId, 0x1d, 0x57, 0x09);
                SetSourcePal(0, NodeGet->uUnitId, nFirstExtraPalette, _nCurrentTotalColorOptions, 0x57);
                SetSourcePal(1, NodeGet->uUnitId, nFirstExtraPalette + nPeerPaletteDistance, _nCurrentTotalColorOptions, 0x57);

                break;
            }
            else if (CreateExtraPal(uUnitId, uPalId, 0x0B, 0x57, 0x00, 0, 9) || // Roll intro
                     CreateExtraPal(uUnitId, uPalId, 0x2F, 0x57, 0x00, 0, 9) || // Roll Charging buster
                     CreateExtraPal(uUnitId, uPalId, 0x4C, 0x57, 0x00, 0, 9)) //  Hyper Roll ?
            {
                break;
            }        
            else if ((uPalId == 0x1) || // Button Extra 01: Reuse Megaman's Rush sprite, join with Beat
                     (uPalId == 0x9) ||
                     (uPalId == 0x11) ||
                     (uPalId == 0x19) ||
                     (uPalId == 0x21) ||
                     (uPalId == 0x29))
            {
                bLoadDefPal = FALSE;
                int nPeerPaletteDistance = 0x01;

                //Create the img ticket
                ClearSetImgTicket(
                    CreateImgTicket(indexCPS2Sprites_Megaman, 0x01,
                        CreateImgTicket(indexCPS2Sprites_Megaman, 0x02)
                    )
                );

                //Set each palette
                sDescNode* NodeRushAndBeat[2] = {
                    GetMainTree()->GetDescNode(Node01, Node02, Node03, -1),
                    GetMainTree()->GetDescNode(Node01, Node02, Node03 + nPeerPaletteDistance, -1)
                };

                //Set each palette
                CreateDefPal(NodeRushAndBeat[0], 0);
                CreateDefPal(NodeRushAndBeat[1], 1);

                SetSourcePal(0, NodeGet->uUnitId, GetBasicOffset(uPalId), _nCurrentTotalColorOptions, 0x08);
                SetSourcePal(1, NodeGet->uUnitId, GetBasicOffset(uPalId) + nPeerPaletteDistance, _nCurrentTotalColorOptions, 0x08);
                break;
            }
            else if ((uPalId == 0x2) || // Pull in Megaman's Beat sprite, join with Rush
                     (uPalId == 0xA) ||
                     (uPalId == 0x12) ||
                     (uPalId == 0x1A) ||
                     (uPalId == 0x22) ||
                     (uPalId == 0x2A))
            {
                bLoadDefPal = FALSE;

                int nPeerPaletteDistance = -0x01;

                //Create the img ticket
                ClearSetImgTicket(
                    CreateImgTicket(indexCPS2Sprites_Megaman, 0x02,
                        CreateImgTicket(indexCPS2Sprites_Megaman, 0x01)
                    )
                );

                //Set each palette
                sDescNode* NodeRushAndBeat[2] = {
                    GetMainTree()->GetDescNode(Node01, Node02, Node03, -1),
                    GetMainTree()->GetDescNode(Node01, Node02, Node03 + nPeerPaletteDistance, -1)
                };

                //Set each palette
                CreateDefPal(NodeRushAndBeat[0], 0);
                CreateDefPal(NodeRushAndBeat[1], 1);

                SetSourcePal(0, NodeGet->uUnitId, GetBasicOffset(uPalId), _nCurrentTotalColorOptions, 0x08);
                SetSourcePal(1, NodeGet->uUnitId, GetBasicOffset(uPalId) + nPeerPaletteDistance, _nCurrentTotalColorOptions, 0x08);

                break;
            }
            else if ((uPalId == 0x4) || (uPalId == 0x7)) // Pull in Megaman's effects previews
            {
                bLoadDefPal = FALSE;

                nImgUnitId = indexCPS2Sprites_Megaman;
                nTargetImgId = uPalId;

                ClearSetImgTicket(CreateImgTicket(nImgUnitId, nTargetImgId));

                CreateDefPal(NodeGet, 0);

                SetSourcePal(0, uUnitId, GetBasicOffset(uPalId), _nCurrentTotalColorOptions, 8);
            }
            else if (((uPalId >= (0x38 + EXTRA_OMNI)) && (uPalId <= (0x3F + EXTRA_OMNI))) || // Rush Drill
                     ((uPalId >= (0x8F + EXTRA_OMNI)) && (uPalId <= (0x96 + EXTRA_OMNI))) ||
                     ((uPalId >= (0xE6 + EXTRA_OMNI)) && (uPalId <= (0xEC + EXTRA_OMNI))) ||
                     ((uPalId >= (0x13D + EXTRA_OMNI)) && (uPalId <= (0x144 + EXTRA_OMNI))) ||
                     ((uPalId >= (0x194 + EXTRA_OMNI)) && (uPalId <= (0x19B + EXTRA_OMNI))) ||
                     ((uPalId >= (0x1EB + EXTRA_OMNI)) && (uPalId <= (0x1F2 + EXTRA_OMNI))))
            {
                bLoadDefPal = FALSE;

                int nXOffs = 0;
                int nYOffs = 0;
                int nPeerPaletteDistance = 0x1E;

                //Create the img ticket
                ClearSetImgTicket(
                    CreateImgTicket(uUnitId, 0xB,
                        CreateImgTicket(uUnitId, 0x0C, nullptr, nXOffs, nYOffs)
                    )
                );

                //Set each palette
                sDescNode* NodeRushDrill[2] = {
                    GetMainTree()->GetDescNode(Node01, Node02, Node03, -1),
                    GetMainTree()->GetDescNode(Node01, Node02, Node03 + nPeerPaletteDistance, -1)
                };

                //Set each palette
                CreateDefPal(NodeRushDrill[0], 0);
                CreateDefPal(NodeRushDrill[1], 1);

                int nFirstExtraPalette = GetFirstExtraValueFromExtraPaletteId(NodeGet->uPalId, 0x38, 0x57, 0x08);
                SetSourcePal(0, NodeGet->uUnitId, nFirstExtraPalette, _nCurrentTotalColorOptions, 0x57);
                SetSourcePal(1, NodeGet->uUnitId, nFirstExtraPalette + nPeerPaletteDistance, _nCurrentTotalColorOptions, 0x57);

                break;
            }
            else if (((uPalId == (0x40 + EXTRA_OMNI))) || // Rush Drill: all white sprite.  No matching metal.
                     ((uPalId == (0x97 + EXTRA_OMNI))) ||
                     ((uPalId == (0xED + EXTRA_OMNI))) ||
                     ((uPalId == (0x145 + EXTRA_OMNI))) ||
                     ((uPalId == (0x19C + EXTRA_OMNI))) ||
                     ((uPalId == (0x1F3 + EXTRA_OMNI))))
            {
                bLoadDefPal = FALSE;

                nTargetImgId = 0x0B; // rush drill

                ClearSetImgTicket(CreateImgTicket(nImgUnitId, nTargetImgId));

                CreateDefPal(NodeGet, 0);

                SetSourcePal(0, uUnitId, 0x40, _nCurrentTotalColorOptions, 0x57);
                break;
            }
            else if (((uPalId >= (0x56 + EXTRA_OMNI)) && (uPalId <= (0x5D + EXTRA_OMNI))) || // Rush Drill metal bits
                     ((uPalId >= (0xAD + EXTRA_OMNI)) && (uPalId <= (0xB4 + EXTRA_OMNI))) ||
                     ((uPalId >= (0x104 + EXTRA_OMNI)) && (uPalId <= (0x10B + EXTRA_OMNI))) ||
                     ((uPalId >= (0x15B + EXTRA_OMNI)) && (uPalId <= (0x162 + EXTRA_OMNI))) ||
                     ((uPalId >= (0x1B2 + EXTRA_OMNI)) && (uPalId <= (0x1B9 + EXTRA_OMNI))) ||
                     ((uPalId >= (0x209 + EXTRA_OMNI)) && (uPalId <= (0x210 + EXTRA_OMNI))))
            {
#ifdef REVERSE_PALETTES_SUPPORT_ACT_PASTING
                bLoadDefPal = FALSE;

                int nXOffs = 0;
                int nYOffs = 0;
                int nPeerPaletteDistance = -0x1E;

                //Create the img ticket
                ClearSetImgTicket(
                    CreateImgTicket(uUnitId, 0xB,
                        CreateImgTicket(uUnitId, 0x0C, nullptr, nXOffs, nYOffs)
                    )
                );

                //Set each palette
                sDescNode* NodeRushDrill[2] = {
                    GetMainTree()->GetDescNode(Node01, Node02, Node03 + nPeerPaletteDistance, -1),
                    GetMainTree()->GetDescNode(Node01, Node02, Node03, -1)
                };

                //Set each palette
                CreateDefPal(NodeRushDrill[0], 0);
                CreateDefPal(NodeRushDrill[1], 1);

                int nFirstExtraPalette = GetFirstExtraValueFromExtraPaletteId(NodeGet->uPalId, 0x56, 0x57, 0x08);
                SetSourcePal(0, NodeGet->uUnitId, nFirstExtraPalette + nPeerPaletteDistance, _nCurrentTotalColorOptions, 0x57);
                SetSourcePal(1, NodeGet->uUnitId, nFirstExtraPalette, _nCurrentTotalColorOptions, 0x57);
#else
                nTargetImgId = 0x0C;
                fImgIsFromNewImgDatRange = true;
#endif
                break;
            }

            break;
        }

        case MVC2_D_TEAMVIEW_LOCATION: // Team View: generated.
        {
            bLoadDefPal = FALSE;

            UINT16 nJoinedUnit1 = indexMVC2AMagneto;
            UINT16 nJoinedUnit2 = indexMVC2AStorm;
            UINT16 nJoinedUnit3 = indexMVC2APsylocke;
            bool fTeamFound = false;
            size_t nSrcAmt = 1;
            int nNodeIncrement = 1;

            UINT16 nTeamViewNode = (UINT16)floor(NodeGet->uPalId / (UINT16)pCurrentButtonLabelSet.size());
            const sDescTreeNode* pCurrentNode = &MVC2_A_TEAMVIEW_COLLECTION[nTeamViewNode];

            for (UINT16 nTeamIndex = 0; nTeamIndex < ARRAYSIZE(mvc2TeamList); nTeamIndex++)
            {
                if (_wcsicmp(mvc2TeamList[nTeamIndex].pszTeamName, pCurrentNode->szDesc) == 0)
                {
                    nJoinedUnit1 = mvc2TeamList[nTeamIndex].nCharacterOne;
                    nJoinedUnit2 = mvc2TeamList[nTeamIndex].nCharacterTwo;
                    nJoinedUnit3 = mvc2TeamList[nTeamIndex].nCharacterThree;
                    fTeamFound = true;
                    break;
                }
            }

            if (!fTeamFound)
            {
                OutputDebugString(L"WARNING: MVC2 Team lookup failed. Please fix.  Will use MSP for now.\n");
            }

            // Fudge some visual offsets here so fatter sprites don't collide.
            int nXOffsetForSecond = 100;
            int nYOffsetForSecond = 0;
            int nXOffsetForThird = nXOffsetForSecond + 80;
            int nYOffsetForThird = 0;

            if (nJoinedUnit2 == indexMVC2ASentinel)
            {
                nXOffsetForSecond += 40;
                nXOffsetForThird += 40;
            }
            else if (nJoinedUnit2 == indexMVC2AStrider)
            {
                nXOffsetForSecond += 280;
                nXOffsetForThird += 80;
            }
            else if (nJoinedUnit2 == indexMVC2ADrDoom)
            {
                nXOffsetForSecond += 80;
                nXOffsetForThird += 80;
            }
            else if (nJoinedUnit2 == indexMVC2AColossus)
            {
                nXOffsetForThird += 80;
            }

            if (nJoinedUnit3 == indexMVC2ASentinel)
            {
                nXOffsetForThird += 40;
            }
            else if (nJoinedUnit3 == indexMVC2ACaptainCommando)
            {
                nXOffsetForThird += 50;
            }
            else if (nJoinedUnit3 == indexMVC2AAkuma)
            {
                nXOffsetForThird += 20;
            }

            size_t nNodeIndex = ((NodeGet->uPalId) % pCurrentButtonLabelSet.size());
            size_t nPaletteIndex = nNodeIndex * 8;  // this is 8 since we're dealing with base mvc2 character palettes

            ClearSetImgTicket(
                CreateImgTicket(nJoinedUnit1, k_nSpecialTeamSpriteImageIndex,
                    CreateImgTicket(nJoinedUnit2, k_nSpecialTeamSpriteImageIndex,
                        CreateImgTicket(nJoinedUnit3, k_nSpecialTeamSpriteImageIndex, nullptr, nXOffsetForThird, nYOffsetForThird),
                        nXOffsetForSecond, nYOffsetForSecond)
                )
            );

            //Set each palette
            sDescNode* JoinedNode[3] = {
               GetMainTree()->GetDescNode(nJoinedUnit1, nNodeIndex, 0, -1),
               GetMainTree()->GetDescNode(nJoinedUnit2, nNodeIndex, 0, -1),
               GetMainTree()->GetDescNode(nJoinedUnit3, nNodeIndex, 0, -1)
            };

            //Set each palette
            CreateDefPal(JoinedNode[0], 0);
            CreateDefPal(JoinedNode[1], 1);
            CreateDefPal(JoinedNode[2], 2);

            nSrcAmt = _nCurrentTotalColorOptions;
            nNodeIncrement = 8; // this is 8 since we're dealing with base mvc2 character palettes
            SetSourcePal(0, nJoinedUnit1, 0, nSrcAmt, nNodeIncrement);
            SetSourcePal(1, nJoinedUnit2, 0, nSrcAmt, nNodeIncrement);
            SetSourcePal(2, nJoinedUnit3, 0, nSrcAmt, nNodeIncrement);
    
            break;
        }
        }
    }

    if (bLoadDefPal)
    {
        int nBasicOffset = GetBasicOffset(uPalId);

        // This flag is used to de-extra-ize sprite values.  But for imgdat2020 sprites we actually want a higher range.
        // So here we allow either choice of ranges, with the explicit need to ask for the new range.
        const int nBitFlagToUse = fImgIsFromNewImgDatRange ? 0xFF : 0x0F;

        // Old extra targetimgids will be 0xFF0x, so allow for that.
        if ((nTargetImgId != -1) && ((0xFF & nTargetImgId) > nBitFlagToUse))
        {
            OutputDebugString(L"WARNING: The desired nTargetImgId is out of range and is being modified\n");
        }

        ClearSetImgTicket(CreateImgTicket(nImgUnitId, (nTargetImgId != -1) ? (nTargetImgId & nBitFlagToUse) : nBasicOffset));

        CreateDefPal(NodeGet, 0);

        if (nBasicOffset != -1)
        {
            SetSourcePal(0, uUnitId, nBasicOffset, _nCurrentTotalColorOptions, 8);
        }
        else
        {
            // For Extras we handle above, CreateExtraPal handles the call to SetSourcePal
            // For anybody that wants multisprite export, they need to define their node increment and corrected starting point above.
            if (fUsingDataFromDescriptionSet)
            {
                SetSourcePal(0, uUnitId, uPalId, 1, 1);
            }
        }
    }

    return TRUE;
}

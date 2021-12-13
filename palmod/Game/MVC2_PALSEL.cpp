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

            if (nTargetImgId > 8)
            {
                fImgIsFromNewImgDatRange = true;
            }
        }
    }

    if (pDescriptionForPalId && pDescriptionForPalId->pPairedPaletteInfo)
    {
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
        default:
            // Only TeamView requires special logic: everything else is defined in the MoveDescription arrays
            break;
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
            std::vector<sDescNode*> JoinedNode = {
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

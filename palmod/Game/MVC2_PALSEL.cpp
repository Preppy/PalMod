#include "StdAfx.h"
#include "Game_MVC2_D.h"
#include "mvc2_a_def.h"
#include "..\PalMod.h"

// This file handles the logic for pairing ( unit id :: palette id ) sets to the best preview we have, if any

void CGame_MVC2_D::FindMultispriteExportValuesForExtrasPalette(sMoveDescription* pMoveDescription, uint32_t uUnitId, uint32_t uPalId, uint32_t& nStart, uint32_t& nColorOptions, uint32_t& nIncrementToNext)
{
    for (uint32_t nButtonCount = 0; nButtonCount < m_pCurrentButtonLabelSet.size(); nButtonCount++)
    {
        if (wcsncmp(pMoveDescription->szMoveName, m_pCurrentButtonLabelSet[nButtonCount], wcslen(m_pCurrentButtonLabelSet[nButtonCount])) == 0)
        {
            // Tentative match...
            LPCWSTR pszSubstring = pMoveDescription->szMoveName + wcslen(m_pCurrentButtonLabelSet[nButtonCount]);

            if ((pszSubstring[0] == ' ') && (pszSubstring[1] == '-') && (pszSubstring[2] == ' '))
            {
                // Actual match: check for peers
                pszSubstring = &(pszSubstring[3]);

                const int32_t nStride = (nButtonCount > (m_pCurrentButtonLabelSet.size() / 2)) ? -1 : 1;

                CString strCheckString;
                strCheckString.Format(L"%s - %s", m_pCurrentButtonLabelSet[nButtonCount + nStride], pszSubstring);

                const int32_t nMaximumKnownPaletteId = m_pCurrentMoveDescriptions[uUnitId][m_pCurrentMoveDescriptions[uUnitId].size() - 1].nCharacterIndex;
                const int32_t nAdjustedPalId = uPalId - EXTRA_OMNI;

                for (int32_t nStepsTaken = nStride; ((nStepsTaken + nAdjustedPalId) > 0) && ((nStepsTaken + nAdjustedPalId) < nMaximumKnownPaletteId); nStepsTaken += nStride)
                {
                    sMoveDescription* pDescriptionToCheck = GetMoveDescriptionInfo(uUnitId, uPalId + nStepsTaken);

                    if (!pDescriptionToCheck)
                    {
                        // Shuma for example doesn't have descriptions for unused palettes, so continue over those gaps
                        continue;
                    }

                    if (wcscmp(pDescriptionToCheck->szMoveName, strCheckString) == 0)
                    {
                        nStart = uPalId + (nButtonCount * (-nStride) * nStepsTaken);
                        nColorOptions = static_cast<uint32_t>(m_pCurrentButtonLabelSet.size());
                        nIncrementToNext = abs(nStepsTaken);
                        break;
                    }
                }
                break;
            }
        }
    }
}

sMoveDescription* CGame_MVC2_D::GetMoveDescriptionInfo(uint32_t nUnitId, uint32_t nPalId)
{
    sMoveDescription* pDescriptionForPalId = nullptr;

    if (nUnitId < m_pCurrentMoveDescriptions.size()) // TeamView is a valid UnitId but uses its own description storage
    {
        if (nPalId < EXTRA_OMNI)
        {
            uint32_t uCorePalId = nPalId % 8;

            for (uint32_t uPalPos = 0; (uPalPos < 8) && (uPalPos < m_pCurrentMoveDescriptions[nUnitId].size()); uPalPos++)
            {
                if (m_pCurrentMoveDescriptions[nUnitId][uPalPos].nCharacterIndex == uCorePalId)
                {
                    pDescriptionForPalId = &m_pCurrentMoveDescriptions[nUnitId][uPalPos];
                    break;
                }
            }
        }
        else
        {
            uint32_t uPalIdPostExtras = nPalId - EXTRA_OMNI;

            // Skip past the core 8 palettes into extras space and see if we have a match
            for (uint32_t uPalPos = 8; uPalPos < m_pCurrentMoveDescriptions[nUnitId].size(); uPalPos++)
            {
                if (m_pCurrentMoveDescriptions[nUnitId][uPalPos].nCharacterIndex == uPalIdPostExtras)
                {
                    pDescriptionForPalId = &m_pCurrentMoveDescriptions[nUnitId][uPalPos];
                    break;
                }
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

    bool fUsingAlternateLoadLogic = false;
    bool fImgIsFromNewImgDatRange = false;

    sDescNode* NodeGet = GetMainTree()->GetDescNode(Node01, Node02, Node03, Node04);

    if (NodeGet == nullptr)
    {
        return FALSE;
    }

    uint32_t uUnitId = NodeGet->uUnitId;
    uint32_t uPalId = NodeGet->uPalId;
    bool fUsingDataFromDescriptionSet = false;

    //Change the image id if we need to
    nImgUnitId = static_cast<uint16_t>(uUnitId);
    // This must be 16bit for compatability with old extras code
    uint16_t nTargetImgId = INVALID_UNIT_VALUE_16;

    //Get rid of any palettes if there are any
    m_BasePalGroup.FlushPalAll();

    // Allow for built-in overrides
    sMoveDescription* pDescriptionForPalId = GetMoveDescriptionInfo(uUnitId, uPalId);
    if (pDescriptionForPalId)
    {
        if (pDescriptionForPalId->nImageIndex != USE_DEFAULT_PREVIEW)
        {
            nImgUnitId = (pDescriptionForPalId->nImageUnitOverride != USE_DEFAULT_PREVIEW) ? pDescriptionForPalId->nImageUnitOverride : nImgUnitId;
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
        if ((pDescriptionForPalId->pPairedPaletteInfo->nPalettesToJoin > 1) && (pDescriptionForPalId->pPairedPaletteInfo->nPalettesToJoin < 9))
        {
            std::vector<const sMoveDescription*> vMoveDescriptionSetToJoin;
            std::vector<int8_t> vnPeerPaletteDistances;
            bool fAllNodesFound = true;

            for (uint32_t nPairIndex = 0; nPairIndex < pDescriptionForPalId->pPairedPaletteInfo->nPalettesToJoin; nPairIndex++)
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

            for (uint32_t nNodeIndex = 0; nNodeIndex < pDescriptionForPalId->pPairedPaletteInfo->nPalettesToJoin; nNodeIndex++)
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
                fUsingAlternateLoadLogic = true;
                fUsingDataFromDescriptionSet = true;

                std::vector<sImgTicket*> vsImagePairs;
                sImgTicket* pPreviousImage = nullptr;

                for (int nNodeIndex = static_cast<int>(pDescriptionForPalId->pPairedPaletteInfo->nPalettesToJoin) - 1; nNodeIndex >= 0; nNodeIndex--)
                {
                    const uint16_t nImgUnitToUse = (vMoveDescriptionSetToJoin[nNodeIndex]->nImageUnitOverride != USE_DEFAULT_PREVIEW) ? vMoveDescriptionSetToJoin[nNodeIndex]->nImageUnitOverride : nImgUnitId;
                    const uint8_t nImageToUse = (vMoveDescriptionSetToJoin[nNodeIndex]->nImageIndex != USE_DEFAULT_PREVIEW) ? vMoveDescriptionSetToJoin[nNodeIndex]->nImageIndex : vMoveDescriptionSetToJoin[nNodeIndex]->nCharacterIndex;

                    sImgTicket* pThisImage = CreateImgTicket(nImgUnitToUse, nImageToUse, pPreviousImage);

                    vsImagePairs.push_back(pThisImage);

                    pPreviousImage = pThisImage;
                }

                ClearSetImgTicket(vsImagePairs[(pDescriptionForPalId->pPairedPaletteInfo->nPalettesToJoin - 1)]);

                // Use core vs Extra defaults, and then use lookup to find potential linkage for Extras
                uint32_t nColorOptions = (NodeGet->uPalId < EXTRA_OMNI) ? _nCurrentTotalColorOptions : 1;
                uint32_t nSrcStart = GetBasicOffset(NodeGet->uPalId);
                uint32_t nNodeIncrement = (NodeGet->uPalId < EXTRA_OMNI) ? 8 : 1;

                if (NodeGet->uPalId > EXTRA_OMNI)
                {
                    FindMultispriteExportValuesForExtrasPalette(pDescriptionForPalId, uUnitId, uPalId, nSrcStart, nColorOptions, nNodeIncrement);
                }

                for (uint32_t nPairIndex = 0; nPairIndex < pDescriptionForPalId->pPairedPaletteInfo->nPalettesToJoin; nPairIndex++)
                {
                    //Set each palette
                    CreateDefPal(vsJoinedNodes[nPairIndex], nPairIndex);

                    SetSourcePal(nPairIndex, NodeGet->uUnitId, nSrcStart + vnPeerPaletteDistances[nPairIndex], nColorOptions, nNodeIncrement);
                }
            }
            else
            {
                OutputDebugString(L"ERROR: Invalid palette pairing requested.   You probably want to check the linkage here.\n");
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
                const uint16_t nTeamViewNode = static_cast<uint16_t>(floor(NodeGet->uPalId / static_cast<uint16_t>(m_pCurrentButtonLabelSet.size())));

                const sDescTreeNode* pCurrentNode = &MVC2_A_TEAMVIEW_COLLECTION[nTeamViewNode];

                const uint32_t nSrcAmt = _nCurrentTotalColorOptions;
                const uint32_t nNodeIncrement = 8; // 8 palettes per main character color set

                // The code above is unique to mvc2-dc.
                // The code that below in this section is now identical to that in game_mvc2_a.cpp
                // This is used for only the DC version - that version is used for Steam and etc
                fUsingAlternateLoadLogic = true;

                const uint16_t nNodeIndex = (NodeGet->uPalId % static_cast<uint16_t>(m_pCurrentButtonLabelSet.size()));
                bool fTeamFound = false;

                const MVC2_TEAM_GROUPING* pGroupingToUse = &mvc2TeamList[0];

                for (uint16_t nTeamIndex = 0; nTeamIndex < ARRAYSIZE(mvc2TeamList); nTeamIndex++)
                {
                    if (_wcsicmp(mvc2TeamList[nTeamIndex].pszTeamName, pCurrentNode->szDesc) == 0)
                    {
                        pGroupingToUse = &mvc2TeamList[nTeamIndex];
                        fTeamFound = true;
                        break;
                    }
                }

                if (!fTeamFound)
                {
                    OutputDebugString(L"WARNING: MVC2 Team lookup failed. Please fix.  Will use MSP for now.\r\n");
                }

                // Height is always 186, so we can't use "true" image height to adjust positions: ignore Y for now.  But adjust X to avoid overlap.
                std::vector<sImageDisplayOffsets> rgImageOffsets;

                uint16_t nCurrentPosition = 0;
                sImageDisplayOffsets sTotalOffset;
                for (auto& character : pGroupingToUse->characterReferences)
                {
                    rgImageOffsets.push_back(sTotalOffset);
                    nCurrentPosition++;

                    if (MvC2CharacterIsTwoPartCorePreview(character))
                    {
                        rgImageOffsets.push_back(sTotalOffset);
                        nCurrentPosition++;
                    }

                    // Get the image dimensions so that we can collate them into one contiguous strip
                    sImgDef* pImgDef = GetHost()->GetImgFile()->GetImageDef(character, k_nSpecialTeamSpriteImageIndex);
                    sTotalOffset.x += pImgDef->uImgWidth;

                    // You can only currently hit this in Everybody view.
                    if (sTotalOffset.x > 900)
                    {
                        sTotalOffset.x = 0;
                        // We want to walk top down, but this going to lay us out into negative space of course.
                        // We will thus adjust the offsets later for the total calculated offset, centering us on ~0 again.
                        sTotalOffset.y -= 150;
                    }
                }

                if (sTotalOffset.y != 0)
                {
                    // Center the presentation
                    int nTotalDistance = abs(sTotalOffset.y);
                    for (auto& curOffset : rgImageOffsets)
                    {
                        curOffset.y += nTotalDistance;
                    } 
                }

                // Load the ticket in full reverse order
                sImgTicket* pImgTicket = nullptr;

                size_t iGroupingIndex = pGroupingToUse->characterReferences.size() - 1;
                for (int iXOffsetsIndex = static_cast<int>(rgImageOffsets.size() - 1); iXOffsetsIndex >= 0; iXOffsetsIndex--)
                {
                    if (MvC2CharacterIsTwoPartCorePreview(pGroupingToUse->characterReferences.at(iGroupingIndex)))
                    {
                        pImgTicket = CreateImgTicket(pGroupingToUse->characterReferences.at(iGroupingIndex), k_nSpecialTeamSpriteImagePairIndex, pImgTicket, rgImageOffsets.at(iXOffsetsIndex).x, rgImageOffsets.at(iXOffsetsIndex).y);
                        iXOffsetsIndex--;
                    }
                    pImgTicket = CreateImgTicket(pGroupingToUse->characterReferences.at(iGroupingIndex), k_nSpecialTeamSpriteImageIndex, pImgTicket, rgImageOffsets.at(iXOffsetsIndex).x, rgImageOffsets.at(iXOffsetsIndex).y);
                    iGroupingIndex--;
                }

                ClearSetImgTicket(pImgTicket);

                std::vector<sDescNode*> JoinedNode;

                uint32_t iSourcePalPos = 0;
                for (size_t iGroupIndex = 0; iGroupIndex < pGroupingToUse->characterReferences.size(); iGroupIndex++)
                {
                    // Set descriptors
                    JoinedNode.push_back(GetMainTree()->GetDescNode(pGroupingToUse->characterReferences.at(iGroupIndex), nNodeIndex, 0, -1));
                    // Set each palette
                    SetSourcePal(iSourcePalPos++, pGroupingToUse->characterReferences.at(iGroupIndex), 0, nSrcAmt, nNodeIncrement);
                    if (MvC2CharacterIsTwoPartCorePreview(pGroupingToUse->characterReferences.at(iGroupIndex)))
                    {
                        JoinedNode.push_back(GetMainTree()->GetDescNode(pGroupingToUse->characterReferences.at(iGroupIndex), nNodeIndex, 1, -1));
                        SetSourcePal(iSourcePalPos++, pGroupingToUse->characterReferences.at(iGroupIndex), 1, nSrcAmt, nNodeIncrement);
                    }
                }

                // Assign each palette now
                for (uint32_t iNodePos = 0; iNodePos < static_cast<uint32_t>(JoinedNode.size()); iNodePos++)
                {
                    CreateDefPal(JoinedNode[iNodePos], iNodePos);
                }

                break;
            }
        }
    }

    if (!fUsingAlternateLoadLogic)
    {
        const uint32_t nBasicOffset = GetBasicOffset(uPalId);

        // This flag is used to de-extra-ize sprite values.  But for imgdat2020 sprites we actually want a higher range.
        // So here we allow either choice of ranges, with the explicit need to ask for the new range.
        const int nBitFlagToUse = fImgIsFromNewImgDatRange ? 0xFF : 0x0F;

        // Old extra targetimgids will be 0xFF0x, so allow for that.
        if ((nTargetImgId != INVALID_UNIT_VALUE_16) && ((0xFF & nTargetImgId) > nBitFlagToUse))
        {
            OutputDebugString(L"WARNING: The desired nTargetImgId is out of range and is being modified\n");
        }

        ClearSetImgTicket(CreateImgTicket(nImgUnitId, static_cast<uint8_t>((nTargetImgId != INVALID_UNIT_VALUE_16) ? (nTargetImgId & nBitFlagToUse) : nBasicOffset)));

        CreateDefPal(NodeGet, 0);

        if (nBasicOffset != -1)
        {
            SetSourcePal(0, uUnitId, nBasicOffset, _nCurrentTotalColorOptions, 8);
        }
        else if (fUsingDataFromDescriptionSet)
        {
            // For Extras we handle above, CreateExtraPal handles the call to SetSourcePal
            // For anybody that wants multisprite export, they need to define their node increment and corrected starting point above.
            uint32_t nStart = uPalId;
            uint32_t nColorOptions = 1;
            uint32_t nIncrementToNext = 1;

            FindMultispriteExportValuesForExtrasPalette(pDescriptionForPalId, uUnitId, uPalId, nStart, nColorOptions, nIncrementToNext);

            SetSourcePal(0, uUnitId, nStart, nColorOptions, nIncrementToNext);
        }
    }

    return TRUE;
}


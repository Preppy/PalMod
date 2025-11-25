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

            // SKip past the core 8 palettes into extras space and see if we have a match
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
    int nTargetImgId = -1;
    nImgUnitId = uUnitId;

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
                    const uint32_t nUnitToUse = (vMoveDescriptionSetToJoin[nNodeIndex]->nImageUnitOverride != USE_DEFAULT_PREVIEW) ? vMoveDescriptionSetToJoin[nNodeIndex]->nImageUnitOverride : nImgUnitId;
                    const uint16_t nImageToUse = (vMoveDescriptionSetToJoin[nNodeIndex]->nImageIndex != USE_DEFAULT_PREVIEW) ? vMoveDescriptionSetToJoin[nNodeIndex]->nImageIndex : vMoveDescriptionSetToJoin[nNodeIndex]->nCharacterIndex;

                    sImgTicket* pThisImage = CreateImgTicket(nUnitToUse, nImageToUse, pPreviousImage);

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
                const uint16_t nNodeIndex = (NodeGet->uPalId % static_cast<uint16_t>(m_pCurrentButtonLabelSet.size()));

                // This code path is analogous but very much not identical to that in game_mvc2_a.cpp
                // This is used for only the DC version - that version is used for Steam and etc
                fUsingAlternateLoadLogic = true;

                uint16_t nJoinedUnit1 = indexMVC2AMagneto;
                uint16_t nJoinedUnit2 = indexMVC2AStorm;
                uint16_t nJoinedUnit3 = indexMVC2APsylocke;
                bool fTeamFound = false;

                uint16_t nTeamIndex = 0;

                for (; nTeamIndex < ARRAYSIZE(mvc2TeamList); nTeamIndex++)
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
                    OutputDebugString(L"WARNING: MVC2 Team lookup failed. Please fix.  Will use MSP for now.\r\n");
                }

                // Get the image dimensions so that we can collate them into one contiguous strip
                std::vector<sImgDef*> pImgDefSet;
                uint16_t nPosition2 = 1;
                const bool fFirstRequiresSecondPart = MvC2CharacterIsTwoPartCorePreview(nJoinedUnit1);
                const bool fSecondRequiresSecondPart = MvC2CharacterIsTwoPartCorePreview(nJoinedUnit2);
                const bool fThirdRequiresSecondPart = MvC2CharacterIsTwoPartCorePreview(nJoinedUnit3);

                pImgDefSet.push_back(GetHost()->GetImgFile()->GetImageDef(nJoinedUnit1, k_nSpecialTeamSpriteImageIndex));
                if (fFirstRequiresSecondPart)
                {
                    pImgDefSet.push_back(GetHost()->GetImgFile()->GetImageDef(nJoinedUnit1, k_nSpecialTeamSpriteImagePairIndex));
                    nPosition2++;
                }

                pImgDefSet.push_back(GetHost()->GetImgFile()->GetImageDef(nJoinedUnit2, k_nSpecialTeamSpriteImageIndex));
                if (fSecondRequiresSecondPart)
                {
                    pImgDefSet.push_back(GetHost()->GetImgFile()->GetImageDef(nJoinedUnit2, k_nSpecialTeamSpriteImagePairIndex));
                }

                pImgDefSet.push_back(GetHost()->GetImgFile()->GetImageDef(nJoinedUnit3, k_nSpecialTeamSpriteImageIndex));
                if (fThirdRequiresSecondPart)
                {
                    pImgDefSet.push_back(GetHost()->GetImgFile()->GetImageDef(nJoinedUnit3, k_nSpecialTeamSpriteImagePairIndex));
                }

                // Height is always 186, so we can't use image height to adjust positions: ignore Y for now.
                const int nXOffsetForFirst = 0;
                const int nXOffsetForSecond = pImgDefSet[0]->uImgWidth;
                const int nXOffsetForThird = pImgDefSet[0]->uImgWidth + pImgDefSet[nPosition2]->uImgWidth;

                // Load the ticket in full reverse order
                sImgTicket* pImgTicket = nullptr;

                if (fThirdRequiresSecondPart)
                {
                    pImgTicket = CreateImgTicket(nJoinedUnit3, k_nSpecialTeamSpriteImagePairIndex, pImgTicket, nXOffsetForThird);
                }
                pImgTicket = CreateImgTicket(nJoinedUnit3, k_nSpecialTeamSpriteImageIndex, pImgTicket, nXOffsetForThird);

                if (fSecondRequiresSecondPart)
                {
                    pImgTicket = CreateImgTicket(nJoinedUnit2, k_nSpecialTeamSpriteImagePairIndex, pImgTicket, nXOffsetForSecond);
                }
                pImgTicket = CreateImgTicket(nJoinedUnit2, k_nSpecialTeamSpriteImageIndex, pImgTicket, nXOffsetForSecond);

                if (fFirstRequiresSecondPart)
                {
                    pImgTicket = CreateImgTicket(nJoinedUnit1, k_nSpecialTeamSpriteImagePairIndex, pImgTicket, nXOffsetForFirst);
                }
                pImgTicket = CreateImgTicket(nJoinedUnit1, k_nSpecialTeamSpriteImageIndex, pImgTicket, nXOffsetForFirst);

                ClearSetImgTicket(pImgTicket);

                //Set each palette
                std::vector<sDescNode*> JoinedNode;
                
                JoinedNode.push_back(GetMainTree()->GetDescNode(nJoinedUnit1, nNodeIndex, 0, -1));
                if (fFirstRequiresSecondPart)
                {
                    JoinedNode.push_back(GetMainTree()->GetDescNode(nJoinedUnit1, nNodeIndex, 1, -1));
                }
                JoinedNode.push_back(GetMainTree()->GetDescNode(nJoinedUnit2, nNodeIndex, 0, -1));
                if (fSecondRequiresSecondPart)
                {
                    JoinedNode.push_back(GetMainTree()->GetDescNode(nJoinedUnit2, nNodeIndex, 1, -1));
                }
                JoinedNode.push_back(GetMainTree()->GetDescNode(nJoinedUnit3, nNodeIndex, 0, -1));
                if (fThirdRequiresSecondPart)
                {
                    JoinedNode.push_back(GetMainTree()->GetDescNode(nJoinedUnit3, nNodeIndex, 1, -1));
                }

                //Set each palette
                for (uint32_t iNodePos = 0; iNodePos < static_cast<uint32_t>(JoinedNode.size()); iNodePos++)
                {
                    CreateDefPal(JoinedNode[iNodePos], iNodePos);
                }

                const uint32_t nSrcAmt = _nCurrentTotalColorOptions;
                const uint32_t nNodeIncrement = 8; // 8 palettes per main character color set

                uint32_t iSourcePalPos = 0;
                SetSourcePal(iSourcePalPos++, nJoinedUnit1, 0, nSrcAmt, nNodeIncrement);
                if (fFirstRequiresSecondPart)
                {
                    SetSourcePal(iSourcePalPos++, nJoinedUnit1, 1, nSrcAmt, nNodeIncrement);
                }

                SetSourcePal(iSourcePalPos++, nJoinedUnit2, 0, nSrcAmt, nNodeIncrement);
                if (fSecondRequiresSecondPart)
                {
                    SetSourcePal(iSourcePalPos++, nJoinedUnit2, 1, nSrcAmt, nNodeIncrement);
                }

                SetSourcePal(iSourcePalPos++, nJoinedUnit3, 0, nSrcAmt, nNodeIncrement);
                if (fThirdRequiresSecondPart)
                {
                    SetSourcePal(iSourcePalPos++, nJoinedUnit3, 1, nSrcAmt, nNodeIncrement);
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


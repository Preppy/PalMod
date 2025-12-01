#include "StdAfx.h"
#include "Game_KarnovsR_A.h"

CGame_KarnovsR_A::KarnovLoadingKey CGame_KarnovsR_A::m_eVersionToLoad = KarnovLoadingKey::Arcade;

void CGame_KarnovsR_A::SetSpecialRuleForFileName(std::wstring strFileName)
{
    const std::map<std::wstring, KarnovLoadingKey> m_rgFileNameToVersion =
    {
        // these should be all lower case
        { L"066-p1.p1", KarnovLoadingKey::Arcade },
        { L"066-p1.bin", KarnovLoadingKey::Arcade },
        { L"066-p1kre.p1", KarnovLoadingKey::Revolution },
    };

    CString strFileNameLowerCase = strFileName.c_str();
    strFileNameLowerCase.MakeLower();

    auto result = m_rgFileNameToVersion.find(strFileNameLowerCase.GetString());

    if (result != m_rgFileNameToVersion.end())
    {
        m_eVersionToLoad = result->second;
    }
    else
    {
        m_eVersionToLoad = KarnovLoadingKey::Arcade;
    }

    return;
}

CGame_KarnovsR_A::CGame_KarnovsR_A(uint32_t nConfirmedROMSize)
{
    InitializeGame(nConfirmedROMSize, (m_eVersionToLoad == KarnovLoadingKey::Arcade) ? m_sCoreGameData_Arcade : m_sCoreGameData_Revolution);
}

sFileRule CGame_KarnovsR_A::GetRule(uint32_t nRuleId)
{
    return CGameClassByDir::GetRule(nRuleId, (m_eVersionToLoad == KarnovLoadingKey::Arcade) ? m_sFileLoadingData_Arcade : m_sFileLoadingData_Revolution);
}

BOOL CGame_KarnovsR_A::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
{
    if (m_eVersionToLoad == KarnovLoadingKey::Revolution)
    {
        return CGameClassByDir::UpdatePalImg(Node01, Node02, Node03, Node04);
    }

    // We use custom handling here for the cross-collection weakpoints

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
    m_BasePalGroup.FlushPalAll();

    // Make sure to reset the image id
    uint16_t nImgUnitId = INVALID_UNIT_VALUE_16;
    uint8_t nTargetImgId = 0;

    bool fWasImageLoadHandled = false;

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
                            fWasImageLoadHandled = true;
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
                            fWasImageLoadHandled = true;

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

    if (fWasImageLoadHandled)
    {
        return TRUE;
    }
    else
    {
        return CGameClassByDir::UpdatePalImg(Node01, Node02, Node03, Node04);
    }
}

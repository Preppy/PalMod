#include "StdAfx.h"
#include "Game_AOF3_A.h"

CGame_AOF3_A::AOF3LoadingKey CGame_AOF3_A::m_eVersionToLoad = AOF3LoadingKey::P1;

void CGame_AOF3_A::SetSpecialRuleForFileName(std::wstring strFileName)
{
    const std::map<std::wstring, AOF3LoadingKey> m_rgFileNameToVersion =
    {
        // these should be all lower case
        { L"096-p1.p1", AOF3LoadingKey::P1 },
        { L"096-p1k.p1", AOF3LoadingKey::P1 },
        { L"096-p2.sp2", AOF3LoadingKey::P2 },
        { L"096-p1.bin", AOF3LoadingKey::P1 },
        { L"096-p2.bin", AOF3LoadingKey::P2 },
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
        m_eVersionToLoad = AOF3LoadingKey::P1;
    }

    return;
}

CGame_AOF3_A::CGame_AOF3_A(uint32_t nConfirmedROMSize)
{
    InitializeGame(nConfirmedROMSize, (m_eVersionToLoad == AOF3LoadingKey::P1) ? m_sCoreGameData_P1 : m_sCoreGameData_P2);
}

sFileRule CGame_AOF3_A::GetRule(uint32_t nRuleId)
{
    return CGameClassByDir::GetRule(nRuleId, (m_eVersionToLoad == AOF3LoadingKey::P1) ? m_sFileLoadingData_P1 : m_sFileLoadingData_P2);
}

BOOL CGame_AOF3_A::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
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
    m_BasePalGroup.FlushPalAll();

    // Make sure to reset the image id
    uint16_t nImgUnitId = INVALID_UNIT_VALUE_16;
    uint8_t nTargetImgId = 0;

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
                    nSrcAmt = static_cast<uint32_t>(m_pButtonLabelSet.size());
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
                    else
                    {
                        fShouldUseAlternateLoadLogic = true;

                        ClearSetImgTicket(
                            CreateImgTicket(paletteDataSet->indexImgToUse, paletteDataSet->indexOffsetToUse,
                                CreateImgTicket(paletteDataSetToJoin->indexImgToUse, paletteDataSetToJoin->indexOffsetToUse)
                            )
                        );

                        sDescTreeNode* charUnit = GetMainTree()->GetDescTree(Node01, -1);
                        int8_t nNodeDistance = 0;
                        int8_t nPeerNodeDistance = nPeerPaletteDistance;

                        if ((nPeerPaletteDistance > 2) && (wcsstr(charUnit->szDesc, L"Sinclair")))
                        {
                            // Sinclair reaches into the Shared node for Sword Portrait
                            nSrcAmt = 1;
                            nSrcStart = NodeGet->uPalId;
                            nNodeDistance = (Node02 == 0) ? 3 : 2;
                            nPeerNodeDistance = -Node03;
                        }

                        //Set each palette
                        std::vector<sDescNode*> JoinedNode = {
                            GetMainTree()->GetDescNode(Node01, Node02, Node03, -1),
                            GetMainTree()->GetDescNode(Node01, Node02 + nNodeDistance, Node03 + nPeerNodeDistance, -1)
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

    if (!fShouldUseAlternateLoadLogic)
    {
        //Create the default palette
        ClearSetImgTicket(CreateImgTicket(nImgUnitId, nTargetImgId));

        CreateDefPal(NodeGet, 0);

        SetSourcePal(0, NodeGet->uUnitId, nSrcStart, nSrcAmt, nNodeIncrement);
    }

    return TRUE;
}

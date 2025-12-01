#include "StdAfx.h"
#include "Game_MSHVSF_A.h"

CGame_MSHVSF_A::MSHVSFLoadingKey CGame_MSHVSF_A::m_eVersionToLoad = MSHVSFLoadingKey::ROM06;

void CGame_MSHVSF_A::SetSpecialRuleForFileName(std::wstring strFileName)
{
    const std::map<std::wstring, MSHVSFLoadingKey> m_rgFileNameToVersion =
    {
        // these must be all lower case
        { L"mvs.06a", MSHVSFLoadingKey::ROM06 },
        { L"mvs.07b", MSHVSFLoadingKey::ROM07 },
        { L"mshvsfj.21d3d8a7", MSHVSFLoadingKey::Steam_J },
        { L"mshvsfu.21d3d8a7", MSHVSFLoadingKey::Steam_U },
        { L"f000.bin", MSHVSFLoadingKey::Steam_U },
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
        m_eVersionToLoad = MSHVSFLoadingKey::ROM06;
    }

    return;
}

CGame_MSHVSF_A::CGame_MSHVSF_A(uint32_t nConfirmedROMSize)
{
    switch (m_eVersionToLoad)
    {
        case MSHVSFLoadingKey::ROM06:
        default:
            InitializeGame(nConfirmedROMSize, m_sCoreGameData_ROM06);
            break;
        case MSHVSFLoadingKey::ROM07:
            InitializeGame(nConfirmedROMSize, m_sCoreGameData_ROM07);
            break;
        case MSHVSFLoadingKey::Steam_J:
        case MSHVSFLoadingKey::Steam_U:
            InitializeGame(nConfirmedROMSize, m_sCoreGameData_Steam);
            break;
    }
}

sFileRule CGame_MSHVSF_A::GetRule(uint32_t nRuleId)
{
    switch (m_eVersionToLoad)
    {
        case MSHVSFLoadingKey::ROM06:
        default:
            return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData_ROM06);
        case MSHVSFLoadingKey::ROM07:
            return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData_ROM07);
        case MSHVSFLoadingKey::Steam_J:
        case MSHVSFLoadingKey::Steam_U:
            return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData_Steam);
    }
}

// We use special handling for the Captain America part 2 palette
void CGame_MSHVSF_A::LoadSpecificPaletteData(uint32_t nUnitId, uint32_t nPalId)
{
    CGameClassByDir::LoadSpecificPaletteData(nUnitId, nPalId);
    if (nUnitId != m_nCurrentExtraUnitId)
    {
        if (m_nGameFlag == MSHVSF_S)
        {
            // For Steam, we can handle the split ROMs as one unit.  Adjust the 07 units for the offset.
            if ((nUnitId == 27) || (nUnitId == 29))
            {
                m_nCurrentPaletteROMLocation += 0x80000;
            }
        }
        else
        {
            if ((m_nCurrentPaletteROMLocation == 0) && (m_eVersionToLoad == MSHVSFLoadingKey::ROM07))
            {
                // This is a very particular override for the split-rom Captain America Part 2 sprite
                m_createPalOptions.nTransparencyColorPosition = 6;
            }
            else
            {
                m_createPalOptions.nTransparencyColorPosition = 0;
            }
        }
    }
}

// We use special handling here for Blackheart and Mephisto
BOOL CGame_MSHVSF_A::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
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
    int32_t nSrcStart = NodeGet->uPalId;
    uint32_t nSrcAmt = 1;
    int8_t nNodeIncrement = 1;

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

            if (pCurrentNode) // For Basic nodes, we can allow multisprite view in the Export dialog
            {
                if ((wcsstr(pCurrentNode->szDesc, m_pButtonLabelSet.at(0)) != nullptr) || (wcsstr(pCurrentNode->szDesc, m_pButtonLabelSet.at(1)) != nullptr))
                {
                    // We show 2 sprites (Punch/Kick) for export for all normal VS sprites
                    nSrcAmt = static_cast<uint32_t>(m_pButtonLabelSet.size());
                    nNodeIncrement = pCurrentNode->uChildAmt;

                    if (wcscmp(m_rgCurrentGameUnits.at(NodeGet->uUnitId).szDesc, k_pszBlackheartUnit) == 0)
                    {
                        constexpr int32_t nBlackheartNodeSize = ARRAYSIZE(MSHVSF_A_BLACKHEART_PALETTES_P1COLOR_PUNCH);
                        constexpr int32_t nMephistoNodeSize = ARRAYSIZE(MSHVSF_A_MEPHISTO_PALETTES_P1COLOR_PUNCH);
                        // Blackheart and Mephisto displays
                        if ((nSrcStart >= nNodeIncrement) && (nSrcStart < (nNodeIncrement * nBlackheartNodeSize)))
                        {
                            // Blackheart
                            nSrcStart -= nNodeIncrement;
                        }
                        else // Mephisto
                        {
                            if (static_cast<uint32_t>(nSrcStart) > (nSrcAmt * nBlackheartNodeSize))
                            {
                                nSrcStart -= nMephistoNodeSize;
                            }
                        }
                    }
                    else
                    {
                        while (nSrcStart >= nNodeIncrement)
                        {
                            // The starting point is the absolute first palette for the sprite in question which is found in P1
                            nSrcStart -= nNodeIncrement;
                        }
                    }
                }

                if (paletteDataSet->pPalettePairingInfo)
                {
                    if (ArePalettePairsEqual(paletteDataSet->pPalettePairingInfo, &pairFullyLinkedNode))
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
                        int8_t nPeerPaletteDistance = paletteDataSet->pPalettePairingInfo->nNodeIncrementToPartner;

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

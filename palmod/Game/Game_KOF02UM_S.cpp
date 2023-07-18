#include "StdAfx.h"
#include "Game_KOF02UM_S.h"

CGame_KOF02UM_S::KOF02UMLoadingKey CGame_KOF02UM_S::m_eVersionToLoad = KOF02UMLoadingKey::Main;

void CGame_KOF02UM_S::SetSpecialRuleForFileName(std::wstring strFileName)
{
    const std::map<std::wstring, KOF02UMLoadingKey> m_rgFileNameToVersion =
    {
        // these should be all lower case
        { L"pal_a.bin", KOF02UMLoadingKey::Main },
        { L"bar.bin", KOF02UMLoadingKey::Bar },
        { L"clear.bin", KOF02UMLoadingKey::Clear },
        { L"max2bg.bin", KOF02UMLoadingKey::Max2 },
        { L"psel.bin-n", KOF02UMLoadingKey::PSel },
        { L"rank.bin", KOF02UMLoadingKey::Rank },
        { L"conte.bin", KOF02UMLoadingKey::Conte },
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
        m_eVersionToLoad = KOF02UMLoadingKey::Main;
    }

    return;
}

CGame_KOF02UM_S::CGame_KOF02UM_S(uint32_t nConfirmedROMSize)
{
    switch (m_eVersionToLoad)
    {
        case KOF02UMLoadingKey::Main:
        default:
            InitializeGame(nConfirmedROMSize, m_sCoreGameData_Main);
            break;
        case KOF02UMLoadingKey::Bar:
            InitializeGame(nConfirmedROMSize, m_sCoreGameData_Bar);
            break;
        case KOF02UMLoadingKey::Clear:
            InitializeGame(nConfirmedROMSize, m_sCoreGameData_Clear);
            break;
        case KOF02UMLoadingKey::Max2:
            InitializeGame(nConfirmedROMSize, m_sCoreGameData_Max2BG);
            break;
        case KOF02UMLoadingKey::PSel:
            InitializeGame(nConfirmedROMSize, m_sCoreGameData_PSel);
            break;
        case KOF02UMLoadingKey::Rank:
            InitializeGame(nConfirmedROMSize, m_sCoreGameData_Rank);
            break;
        case KOF02UMLoadingKey::Conte:
            InitializeGame(nConfirmedROMSize, m_sCoreGameData_Conte);
            break;
    }
}

sFileRule CGame_KOF02UM_S::GetRule(uint32_t nRuleId)
{
    switch (m_eVersionToLoad)
    {
        case KOF02UMLoadingKey::Main:
        default:
            return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData_Main);
        case KOF02UMLoadingKey::Bar:
            return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData_Bar);
        case KOF02UMLoadingKey::Clear:
            return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData_Clear);
        case KOF02UMLoadingKey::Max2:
            return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData_Max2BG);
        case KOF02UMLoadingKey::PSel:
            return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData_PSel);
        case KOF02UMLoadingKey::Rank:
            return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData_Rank);
        case KOF02UMLoadingKey::Conte:
            return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData_Conte);
    }
}

BOOL CGame_KOF02UM_S::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
{
    // We use custom code here to handle crosscollection multisprite export of core palettes and intracollection export of portraits

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
                if ((_wcsicmp(pCurrentNode->szDesc, L"A") == 0) || (_wcsicmp(pCurrentNode->szDesc, L"B") == 0) ||
                    (_wcsicmp(pCurrentNode->szDesc, L"C") == 0) || (_wcsicmp(pCurrentNode->szDesc, L"D") == 0))
                {
                    nSrcAmt = 4;
                    nNodeIncrement = pCurrentNode->uChildAmt;

                    while (nSrcStart >= nNodeIncrement)
                    {
                        // The starting point is the absolute first palette for the sprite in question which is found in P1/A
                        nSrcStart -= nNodeIncrement;
                    }
                }
                else if (_wcsicmp(pCurrentNode->szDesc, L"Portraits") == 0) // Portraits is last
                {
                    nSrcAmt = 4;
                    nSrcStart = GetPaletteCountForUnit(NodeGet->uUnitId) - pCurrentNode->uChildAmt;
                    nNodeIncrement = 1;
                }
            }

            if (paletteDataSet->pPalettePairingInfo)
            {
                if (paletteDataSet->pPalettePairingInfo->nPalettesToJoin == 3)
                {
                    const int8_t nPeerPaletteDistance1 = paletteDataSet->pPalettePairingInfo->nNodeIncrementToPartner;
                    const int8_t nPeerPaletteDistance2 = paletteDataSet->pPalettePairingInfo->nOverallNodeIncrementTo2ndPartner;
                    const sGame_PaletteDataset* paletteDataSetToJoin1 = GetSpecificPalette(NodeGet->uUnitId, NodeGet->uPalId + nPeerPaletteDistance1);
                    const sGame_PaletteDataset* paletteDataSetToJoin2 = GetSpecificPalette(NodeGet->uUnitId, NodeGet->uPalId + nPeerPaletteDistance2);
                    fShouldUseAlternateLoadLogic = true;

                    ClearSetImgTicket(
                        CreateImgTicket(paletteDataSet->indexImgToUse, paletteDataSet->indexOffsetToUse,
                            CreateImgTicket(paletteDataSetToJoin1->indexImgToUse, paletteDataSetToJoin1->indexOffsetToUse,
                                CreateImgTicket(paletteDataSetToJoin2->indexImgToUse, paletteDataSetToJoin2->indexOffsetToUse)
                            ))
                    );

                    //Set each palette
                    std::vector<sDescNode*> JoinedNode = {
                        GetMainTree()->GetDescNode(Node01, Node02, Node03, -1),
                        GetMainTree()->GetDescNode(Node01, Node02, Node03 + nPeerPaletteDistance1, -1),
                        GetMainTree()->GetDescNode(Node01, Node02, Node03 + nPeerPaletteDistance2, -1)
                    };

                    //Set each palette
                    CreateDefPal(JoinedNode[0], 0);
                    CreateDefPal(JoinedNode[1], 1);
                    CreateDefPal(JoinedNode[2], 2);

                    SetSourcePal(0, NodeGet->uUnitId, nSrcStart, nSrcAmt, nNodeIncrement);
                    SetSourcePal(1, NodeGet->uUnitId, nSrcStart + nPeerPaletteDistance1, nSrcAmt, nNodeIncrement);
                    SetSourcePal(2, NodeGet->uUnitId, nSrcStart + nPeerPaletteDistance2, nSrcAmt, nNodeIncrement);
                }
                else if (paletteDataSet->pPalettePairingInfo->nPalettesToJoin == 4)
                {
                    const int8_t nPeerPaletteDistance1 = paletteDataSet->pPalettePairingInfo->nNodeIncrementToPartner;
                    const int8_t nPeerPaletteDistance2 = paletteDataSet->pPalettePairingInfo->nOverallNodeIncrementTo2ndPartner;
                    const int8_t nPeerPaletteDistance3 = paletteDataSet->pPalettePairingInfo->nOverallNodeIncrementTo3rdPartner;
                    const sGame_PaletteDataset* paletteDataSetToJoin1 = GetSpecificPalette(NodeGet->uUnitId, NodeGet->uPalId + nPeerPaletteDistance1);
                    const sGame_PaletteDataset* paletteDataSetToJoin2 = GetSpecificPalette(NodeGet->uUnitId, NodeGet->uPalId + nPeerPaletteDistance2);
                    const sGame_PaletteDataset* paletteDataSetToJoin3 = GetSpecificPalette(NodeGet->uUnitId, NodeGet->uPalId + nPeerPaletteDistance3);
                    fShouldUseAlternateLoadLogic = true;

                    ClearSetImgTicket(
                        CreateImgTicket(paletteDataSet->indexImgToUse, paletteDataSet->indexOffsetToUse,
                            CreateImgTicket(paletteDataSetToJoin1->indexImgToUse, paletteDataSetToJoin1->indexOffsetToUse,
                                CreateImgTicket(paletteDataSetToJoin2->indexImgToUse, paletteDataSetToJoin2->indexOffsetToUse,
                                    CreateImgTicket(paletteDataSetToJoin3->indexImgToUse, paletteDataSetToJoin3->indexOffsetToUse)
                                )))
                    );

                    //Set each palette
                    std::vector<sDescNode*> JoinedNode = {
                        GetMainTree()->GetDescNode(Node01, Node02, Node03, -1),
                        GetMainTree()->GetDescNode(Node01, Node02, Node03 + nPeerPaletteDistance1, -1),
                        GetMainTree()->GetDescNode(Node01, Node02, Node03 + nPeerPaletteDistance2, -1),
                        GetMainTree()->GetDescNode(Node01, Node02, Node03 + nPeerPaletteDistance3, -1)
                    };

                    //Set each palette
                    CreateDefPal(JoinedNode[0], 0);
                    CreateDefPal(JoinedNode[1], 1);
                    CreateDefPal(JoinedNode[2], 2);
                    CreateDefPal(JoinedNode[3], 3);

                    SetSourcePal(0, NodeGet->uUnitId, nSrcStart, nSrcAmt, nNodeIncrement);
                    SetSourcePal(1, NodeGet->uUnitId, nSrcStart + nPeerPaletteDistance1, nSrcAmt, nNodeIncrement);
                    SetSourcePal(2, NodeGet->uUnitId, nSrcStart + nPeerPaletteDistance2, nSrcAmt, nNodeIncrement);
                    SetSourcePal(3, NodeGet->uUnitId, nSrcStart + nPeerPaletteDistance3, nSrcAmt, nNodeIncrement);
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

    if (!fShouldUseAlternateLoadLogic)
    {
        //Create the default palette
        ClearSetImgTicket(CreateImgTicket(nImgUnitId, nTargetImgId));

        CreateDefPal(NodeGet, 0);

        SetSourcePal(0, NodeGet->uUnitId, nSrcStart, nSrcAmt, nNodeIncrement);
    }

    return TRUE;
}

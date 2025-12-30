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
        { L"psel.bin-n", KOF02UMLoadingKey::PSelENU },
        { L"psels.bin-n", KOF02UMLoadingKey::PSelSPN },
        { L"rank.bin", KOF02UMLoadingKey::RankENU },
        { L"ranks.bin", KOF02UMLoadingKey::RankSPN },
        { L"conte.bin", KOF02UMLoadingKey::ContENU },
        { L"cont.bin-n", KOF02UMLoadingKey::ContJPN },
        { L"contb.bin", KOF02UMLoadingKey::ContPBR },
        { L"conts.bin", KOF02UMLoadingKey::ContSPN },
        { L"osel.bin-n", KOF02UMLoadingKey::OrderSelect },
        { L"osels.bin-n", KOF02UMLoadingKey::OrderSelectSPN },
        { L"vic0_00.bin-n", KOF02UMLoadingKey::Victory_ArcadeMode_Team },
        { L"vic1_00.bin-n", KOF02UMLoadingKey::Victory_ArcadeMode_Loss },
        { L"vic3_00.bin-n", KOF02UMLoadingKey::Victory_ArcadeMode_Single },
        { L"vic2_00.bin-n", KOF02UMLoadingKey::Victory_VSMode_Team },
        { L"vic4_00.bin-n", KOF02UMLoadingKey::Victory_VSMode_Single },
        { L"messe_r.dat", KOF02UMLoadingKey::WinQuotes_ENU_Win },
        { L"messe.dat", KOF02UMLoadingKey::WinQuotes_ENU_Loss },
        { L"mess_r.dat-n", KOF02UMLoadingKey::WinQuotes_JPN_Win },
        { L"mess.dat-n", KOF02UMLoadingKey::WinQuotes_JPN_Loss },
        { L"messb_r.dat", KOF02UMLoadingKey::WinQuotes_BRS_Win },
        { L"messb.dat", KOF02UMLoadingKey::WinQuotes_BRS_Loss },
        { L"messs_r.dat", KOF02UMLoadingKey::WinQuotes_SPN_Win },
        { L"messs.dat", KOF02UMLoadingKey::WinQuotes_SPN_Loss },

        { L"mess.dat", KOF02UMLoadingKey::WinQuotes_UNK1_Loss },
        { L"mess_c.dat", KOF02UMLoadingKey::WinQuotes_UNK2_Loss },
        { L"mess_c_r.dat", KOF02UMLoadingKey::WinQuotes_UNK2_Win },
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
        case KOF02UMLoadingKey::PSelENU:
            InitializeGame(nConfirmedROMSize, m_sCoreGameData_PSelENU);
            break;
        case KOF02UMLoadingKey::PSelSPN:
            InitializeGame(nConfirmedROMSize, m_sCoreGameData_PSelSPN);
            break;
        case KOF02UMLoadingKey::RankENU:
            InitializeGame(nConfirmedROMSize, m_sCoreGameData_RankENU);
            break;
        case KOF02UMLoadingKey::RankSPN:
            InitializeGame(nConfirmedROMSize, m_sCoreGameData_RankSPN);
            break;
        case KOF02UMLoadingKey::ContENU:
            InitializeGame(nConfirmedROMSize, m_sCoreGameData_ContENU);
            break;
        case KOF02UMLoadingKey::ContJPN:
            InitializeGame(nConfirmedROMSize, m_sCoreGameData_ContJPN);
            break;
        case KOF02UMLoadingKey::ContPBR:
            InitializeGame(nConfirmedROMSize, m_sCoreGameData_ContPBR);
            break;
        case KOF02UMLoadingKey::ContSPN:
            InitializeGame(nConfirmedROMSize, m_sCoreGameData_ContSPN);
            break;
        case KOF02UMLoadingKey::OrderSelect:
            InitializeGame(nConfirmedROMSize, m_sCoreGameData_OrderSelect);
            break;
        case KOF02UMLoadingKey::Victory_ArcadeMode_Team:
            InitializeGame(nConfirmedROMSize, m_sCoreGameData_Victory_ArcadeMode_Team);
            break;
        case KOF02UMLoadingKey::Victory_ArcadeMode_Loss:
            InitializeGame(nConfirmedROMSize, m_sCoreGameData_Victory_ArcadeMode_Loss);
            break;
        case KOF02UMLoadingKey::Victory_ArcadeMode_Single:
            InitializeGame(nConfirmedROMSize, m_sCoreGameData_Victory_ArcadeMode_Single);
            break;
        case KOF02UMLoadingKey::Victory_VSMode_Team:
            InitializeGame(nConfirmedROMSize, m_sCoreGameData_Victory_VSMode_Team);
            break;
        case KOF02UMLoadingKey::Victory_VSMode_Single:
            InitializeGame(nConfirmedROMSize, m_sCoreGameData_Victory_VSMode_Single);
            break;
        case KOF02UMLoadingKey::WinQuotes_ENU_Win:
            InitializeGame(nConfirmedROMSize, m_sCoreGameData_WinQuotes_ENU_Win);
            break;
        case KOF02UMLoadingKey::WinQuotes_ENU_Loss:
            InitializeGame(nConfirmedROMSize, m_sCoreGameData_WinQuotes_ENU_Loss);
            break;
        case KOF02UMLoadingKey::WinQuotes_JPN_Win:
            InitializeGame(nConfirmedROMSize, m_sCoreGameData_WinQuotes_JPN_Win);
            break;
        case KOF02UMLoadingKey::WinQuotes_JPN_Loss:
            InitializeGame(nConfirmedROMSize, m_sCoreGameData_WinQuotes_JPN_Loss);
            break;
        case KOF02UMLoadingKey::WinQuotes_BRS_Win:
            InitializeGame(nConfirmedROMSize, m_sCoreGameData_WinQuotes_BRS_Win);
            break;
        case KOF02UMLoadingKey::WinQuotes_BRS_Loss:
            InitializeGame(nConfirmedROMSize, m_sCoreGameData_WinQuotes_BRS_Loss);
            break;
        case KOF02UMLoadingKey::WinQuotes_SPN_Win:
            InitializeGame(nConfirmedROMSize, m_sCoreGameData_WinQuotes_SPN_Win);
            break;
        case KOF02UMLoadingKey::WinQuotes_SPN_Loss:
            InitializeGame(nConfirmedROMSize, m_sCoreGameData_WinQuotes_SPN_Loss);
            break;
        case KOF02UMLoadingKey::WinQuotes_UNK1_Loss:
            InitializeGame(nConfirmedROMSize, m_sCoreGameData_WinQuotes_UNK1_Loss);
            break;
        case KOF02UMLoadingKey::WinQuotes_UNK2_Win:
            InitializeGame(nConfirmedROMSize, m_sCoreGameData_WinQuotes_UNK2_Win);
            break;
        case KOF02UMLoadingKey::WinQuotes_UNK2_Loss:
            InitializeGame(nConfirmedROMSize, m_sCoreGameData_WinQuotes_UNK2_Loss);
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
        case KOF02UMLoadingKey::PSelENU:
            return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData_PSelENU);
        case KOF02UMLoadingKey::PSelSPN:
            return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData_PSelSPN);
        case KOF02UMLoadingKey::RankENU:
            return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData_RankENU);
        case KOF02UMLoadingKey::RankSPN:
            return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData_RankSPN);
        case KOF02UMLoadingKey::ContENU:
            return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData_ContENU);
        case KOF02UMLoadingKey::ContJPN:
            return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData_ContJPN);
        case KOF02UMLoadingKey::ContPBR:
            return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData_ContPBR);
        case KOF02UMLoadingKey::ContSPN:
            return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData_ContSPN);
        case KOF02UMLoadingKey::OrderSelect:
            return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData_OrderSelect);
        case KOF02UMLoadingKey::OrderSelectSPN:
            return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData_OrderSelectSPN);
        case KOF02UMLoadingKey::Victory_ArcadeMode_Team:
            return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData_Victory_ArcadeMode_Team);
        case KOF02UMLoadingKey::Victory_ArcadeMode_Loss:
            return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData_Victory_ArcadeMode_Loss);
        case KOF02UMLoadingKey::Victory_ArcadeMode_Single:
            return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData_Victory_ArcadeMode_Single);
        case KOF02UMLoadingKey::Victory_VSMode_Team:
            return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData_Victory_VSMode_Team);
        case KOF02UMLoadingKey::Victory_VSMode_Single:
            return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData_Victory_VSMode_Single);
        case KOF02UMLoadingKey::WinQuotes_ENU_Win:
            return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData_WinQuotes_ENU_Win);
        case KOF02UMLoadingKey::WinQuotes_ENU_Loss:
            return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData_WinQuotes_ENU_Loss);
        case KOF02UMLoadingKey::WinQuotes_JPN_Win:
            return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData_WinQuotes_JPN_Win);
        case KOF02UMLoadingKey::WinQuotes_JPN_Loss:
            return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData_WinQuotes_JPN_Loss);
        case KOF02UMLoadingKey::WinQuotes_BRS_Win:
            return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData_WinQuotes_BRS_Win);
        case KOF02UMLoadingKey::WinQuotes_BRS_Loss:
            return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData_WinQuotes_BRS_Loss);
        case KOF02UMLoadingKey::WinQuotes_SPN_Win:
            return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData_WinQuotes_SPN_Win);
        case KOF02UMLoadingKey::WinQuotes_SPN_Loss:
            return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData_WinQuotes_SPN_Loss);
        case KOF02UMLoadingKey::WinQuotes_UNK1_Loss:
            return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData_WinQuotes_UNK1_Loss);
        case KOF02UMLoadingKey::WinQuotes_UNK2_Win:
            return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData_WinQuotes_UNK2_Win);
        case KOF02UMLoadingKey::WinQuotes_UNK2_Loss:
            return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData_WinQuotes_UNK2_Loss);
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
                    fWasImageLoadHandled = true;

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
                    fWasImageLoadHandled = true;

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

    if (fWasImageLoadHandled)
    {
        return TRUE;
    }
    else
    {
        return CGameClassByDir::UpdatePalImg(Node01, Node02, Node03, Node04);
    }
}

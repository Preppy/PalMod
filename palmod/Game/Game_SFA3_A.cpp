#include "StdAfx.h"
#include "Game_SFA3_A.h"

struct sSFA3_A_PortraitData
{
    LPCWSTR pszCharacterName = nullptr;
    LPCWSTR pszCodeName = nullptr;
    uint32_t nROMOffset = 0;
    LPCWSTR pszImageSet = L"indexCPS2Sprites_SFA3Assets"; // SFA3_Unique
    uint32_t nImageSetIndex = 0;
};

sSFA3_A_PortraitData SFA3_A_PortraitDataArray[] =
{
    { L"Ryu", L"RYU", 0x4ce14, L"indexCPS2Sprites_SFA3Assets", 0xB4 }, // Ryu
    { L"Ken", L"KEN", 0x4d114, L"indexCPS2Sprites_SFA3Assets", 0xAF }, // Ken
    { L"Akuma", L"AKUMA", 0x4d414, L"indexCPS2Sprites_SFA3Assets", 0xA1 }, // Akuma
    { L"Charlie", L"CHARLIE", 0x4d714, L"indexCPS2Sprites_SFA3Assets", 0xA5 }, // Charlie
    { L"Chun-Li", L"CHUNLI", 0x4da14, L"indexCPS2Sprites_SFA3Assets", 0xA6 }, // Chun (NOTE: Chun has a special non-X-ISM portrait, A7)
    { L"Adon", L"ADON", 0x4dd14, L"indexCPS2Sprites_SFA3Assets", 0xA0 }, // Adon
    { L"Sodom", L"SODOM", 0x4e014, L"indexCPS2Sprites_SFA3Assets", 0xB7 }, // Sodom
    { L"Guy", L"GUY", 0x4e314, L"indexCPS2Sprites_SFA3Assets", 0xAD }, // Guy
    { L"Birdie", L"BIRDIE", 0x4e614, L"indexCPS2Sprites_SFA3Assets", 0xA2 }, // Birdie
    { L"Rose", L"ROSE", 0x4e914, L"indexCPS2Sprites_SFA3Assets", 0xB3 }, // Rose
    { L"M.Bison", L"MBISON", 0x4ec14, L"indexCPS2Sprites_SFA3Assets", 0xB0 }, // Dict
    { L"Sagat", L"SAGAT", 0x4ef14, L"indexCPS2Sprites_SFA3Assets", 0xB5 }, // Sagat
    { L"Dan", L"DAN", 0x4f214, L"indexCPS2Sprites_SFA3Assets", 0xA9 }, // Dan
    { L"Sakura", L"SAKURA", 0x4f514, L"indexCPS2Sprites_SFA3Assets", 0xB6 }, // Sakura
    { L"Rolento", L"ROLENTO", 0x4f814, L"indexCPS2Sprites_SFA3Assets", 0xB2 }, // Rolento
    { L"Dhalsim", L"DHALSIM", 0x4fb14, L"indexCPS2Sprites_SFA3Assets", 0xAA }, // Dhalsim
    { L"Zangief", L"ZANGIEF", 0x4fe14, L"indexCPS2Sprites_SFA3Assets", 0xB9 }, // Zangief
    { L"Gen", L"GEN", 0x50114, L"indexCPS2Sprites_SFA3Assets", 0xAC }, // Gen
    { L"Cammy", L"CAMMY", 0x50a14, L"indexCPS2Sprites_SFA3Assets", 0xA4 }, // Cammy
    { L"E.Honda", L"EHONDA", 0x50d14, L"indexCPS2Sprites_SFA3Assets", 0xAB }, // E.Honda
    { L"Blanka", L"BLANKA", 0x51014, L"indexCPS2Sprites_SFA3Assets", 0xA3 }, // Blanka
    { L"R.Mika", L"RMIKA", 0x51314, L"indexCPS2Sprites_SFA3Assets", 0xB1 }, // R.Mika
    { L"Cody", L"CODY", 0x51614, L"indexCPS2Sprites_SFA3Assets", 0xA8 }, // Cody
    { L"Vega", L"VEGA", 0x51914, L"indexCPS2Sprites_SFA3Assets", 0xB8 }, // Vega
    { L"Karin", L"KARIN", 0x51c14, L"indexCPS2Sprites_SFA3Assets", 0xAE }, // Karin
};

void CGame_SFA3_A::DumpHeaderPalettes()
{
    CString strOutput;

    for (uint16_t nIndex = 0; nIndex < ARRAYSIZE(SFA3_A_PortraitDataArray); nIndex++)
    {
        const uint16_t nPortraitsPerCharacter = 6;
        strOutput.Format(L"const sGame_PaletteDataset SFA3_A_%s_PORTRAIT_PALETTES[] = \r\n{\r\n", SFA3_A_PortraitDataArray[nIndex].pszCodeName);
        OutputDebugString(strOutput);
        for (uint16_t nColorIndex = 0; nColorIndex < nPortraitsPerCharacter; nColorIndex++)
        {
            constexpr uint32_t PORTRAIT_OFFSET = 0x80;
            CString strColorName;

            switch (nColorIndex)
            {
            case 0:
                strColorName = L"X-Ism Punch";
                break;
            case 1:
                strColorName = L"X-Ism Kick";
                break;
            case 2:
                strColorName = L"A-Ism Punch";
                break;
            case 3:
                strColorName = L"A-Ism Kick";
                break;
            case 4:
                strColorName = L"V-Ism Punch";
                break;
            case 5:
                strColorName = L"V-Ism Kick";
                break;
            }

            strOutput.Format(L"    { \"%s\", 0x%x, 0x%x, %s, 0x%02x },\r\n", strColorName.GetString(), SFA3_A_PortraitDataArray[nIndex].nROMOffset + (PORTRAIT_OFFSET * nColorIndex), SFA3_A_PortraitDataArray[nIndex].nROMOffset + (PORTRAIT_OFFSET * (nColorIndex + 1)), SFA3_A_PortraitDataArray[nIndex].pszImageSet, SFA3_A_PortraitDataArray[nIndex].nImageSetIndex);
            OutputDebugString(strOutput);
        }

        OutputDebugString(L"};\r\n\r\n");
    }

    for (uint16_t nIndex = 0; nIndex < ARRAYSIZE(SFA3_A_PortraitDataArray); nIndex++)
    {
        const uint16_t nPortraitsPerCharacter = 6;
        strOutput.Format(L"    { \"Select Portraits\", DESC_NODETYPE_TREE, (void*)SFA3_A_%s_PORTRAIT_PALETTES, ARRAYSIZE(SFA3_A_%s_PORTRAIT_PALETTES) },\r\n", SFA3_A_PortraitDataArray[nIndex].pszCodeName, SFA3_A_PortraitDataArray[nIndex].pszCodeName);
        OutputDebugString(strOutput);
    }
}

BOOL CGame_SFA3_A::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
{
    // We use custom logic here for some runtime pairing

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
    if (m_nExtraUnit != NodeGet->uUnitId)
    {
        const sGame_PaletteDataset* paletteDataSet = GetSpecificPalette(NodeGet->uUnitId, NodeGet->uPalId);
        const sDescTreeNode* pCurrentNode = GetNodeFromPaletteId(NodeGet->uUnitId, NodeGet->uPalId, false);

        if (pCurrentNode) // For Basic nodes, we can allow multisprite view in the Export dialog
        {
            if ((wcsstr(pCurrentNode->szDesc, L"Select Portraits") != nullptr) ||
                (wcsstr(pCurrentNode->szDesc, L"Win Portraits") != nullptr))
            {
                // Hm.  These start at an abstract position within the node.  Let's derive that.
                int nProspectiveStart = NodeGet->uPalId;

                if (wcsstr(paletteDataSet->szPaletteName, L"Kick") != nullptr)
                {
                    // Ordering is punch/kick: correct this across all pairs.
                    nProspectiveStart = (nProspectiveStart > 0) ? nProspectiveStart - 1 : nProspectiveStart;
                }
                
                if (wcsstr(paletteDataSet->szPaletteName, L"V-Ism") != nullptr)
                {
                    nProspectiveStart = (nProspectiveStart > 4) ? nProspectiveStart - 4 : nProspectiveStart;
                }
                else if (wcsstr(paletteDataSet->szPaletteName, L"A-Ism") != nullptr)
                {
                    nProspectiveStart = (nProspectiveStart > 2) ? nProspectiveStart - 2 : nProspectiveStart;
                }

                const sGame_PaletteDataset* prospectivePalette = GetSpecificPalette(NodeGet->uUnitId, nProspectiveStart);

                if (_wcsicmp(prospectivePalette->szPaletteName, L"X-Ism Punch") == 0)
                {
                    sDescTreeNode* charUnit = GetMainTree()->GetDescTree(Node01, -1);

                    if ((wcscmp(charUnit->szDesc, k_sfa3NameKey_ChunLi) != 0) &&  // different portraits for X vs non-X
                        (wcscmp(charUnit->szDesc, k_sfa3NameKey_Sodom) != 0))     // different win portraits for X vs non-X
                    {
                        // OK, we've arrived where we expected to
                        nSrcAmt = 6;
                        nSrcStart = nProspectiveStart;
                        nNodeIncrement = 1;
                    }
                }
                else
                {
                    OutputDebugString(L"CGame_SFA3_A::UpdatePalImg: Possible error: we couldn't map a portrait correctly for multisprite export.\n");
                }
            }
            else if ((_wcsicmp(pCurrentNode->szDesc, L"X-Ism Punch") == 0) ||
                     (_wcsicmp(pCurrentNode->szDesc, L"X-Ism Kick") == 0) ||
                     (_wcsicmp(pCurrentNode->szDesc, L"A-Ism Punch") == 0) ||
                     (_wcsicmp(pCurrentNode->szDesc, L"A-Ism Kick") == 0) ||
                     (_wcsicmp(pCurrentNode->szDesc, L"V-Ism Punch") == 0) ||
                     (_wcsicmp(pCurrentNode->szDesc, L"V-Ism Kick") == 0))
            {
                sDescTreeNode* charUnit = GetMainTree()->GetDescTree(Node01, -1);

                if (wcscmp(charUnit->szDesc, k_sfa3NameKey_Sodom) != 0)  // Sodom has a different X-ism sprite
                {
                    nSrcAmt = 6;
                    nNodeIncrement = GetNodeSizeFromPaletteId(NodeGet->uUnitId, NodeGet->uPalId);

                    while (nSrcStart >= nNodeIncrement)
                    {
                        // The starting point is the absolute first palette for the sprite in question which is found in X-Ism 1
                        nSrcStart -= nNodeIncrement;
                    }
                }
            }
            else
            {
                // Status effects and etc have no peer palettes
                nSrcAmt = 1;
            }
        }

        if (paletteDataSet)
        {
            nImgUnitId = paletteDataSet->indexImgToUse;
            nTargetImgId = paletteDataSet->indexOffsetToUse;

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
                else  if ((paletteDataSet->pPalettePairingInfo->nPalettesToJoin > 1) &&
                    (paletteDataSet->pPalettePairingInfo->nPalettesToJoin <= MAXIMUM_PALETTE_PAIRS_ALLOWED))
                {
                    std::vector<const sGame_PaletteDataset*> vsPaletteDataSetToJoin;
                    std::vector<int8_t> vnPeerPaletteDistances;
                    bool fAllNodesFound = true;

                    for (uint32_t nPairIndex = 0; nPairIndex < paletteDataSet->pPalettePairingInfo->nPalettesToJoin; nPairIndex++)
                    {
                        switch (nPairIndex)
                        {
                        case 0:
                            vnPeerPaletteDistances.push_back(0);
                            break;
                        case 1:
                            vnPeerPaletteDistances.push_back(paletteDataSet->pPalettePairingInfo->nNodeIncrementToPartner);
                            break;
                        case 2:
                            vnPeerPaletteDistances.push_back(paletteDataSet->pPalettePairingInfo->nOverallNodeIncrementTo2ndPartner);
                            break;
                        case 3:
                            vnPeerPaletteDistances.push_back(paletteDataSet->pPalettePairingInfo->nOverallNodeIncrementTo3rdPartner);
                            break;
                        case 4:
                            vnPeerPaletteDistances.push_back(paletteDataSet->pPalettePairingInfo->nOverallNodeIncrementTo4thPartner);
                            break;
                        case 5:
                            vnPeerPaletteDistances.push_back(paletteDataSet->pPalettePairingInfo->nOverallNodeIncrementTo5thPartner);
                            break;
                        case 6:
                            vnPeerPaletteDistances.push_back(paletteDataSet->pPalettePairingInfo->nOverallNodeIncrementTo6thPartner);
                            break;
                        case 7:
                            vnPeerPaletteDistances.push_back(paletteDataSet->pPalettePairingInfo->nOverallNodeIncrementTo7thPartner);
                            break;
                        default:
                            // Anything past this just gets default pairing
                            vnPeerPaletteDistances.push_back(nPairIndex);
                            break;
                        }

                        const sGame_PaletteDataset* paletteDataSetToJoin = GetSpecificPalette(NodeGet->uUnitId, NodeGet->uPalId + vnPeerPaletteDistances[nPairIndex]);

                        if (paletteDataSetToJoin)
                        {
                            vsPaletteDataSetToJoin.push_back(paletteDataSetToJoin);
                        }
                        else
                        {
                            fAllNodesFound = false;
                        }
                    }

                    std::vector<sDescNode*> vsJoinedNodes;

                    for (uint32_t nNodeIndex = 0; nNodeIndex < paletteDataSet->pPalettePairingInfo->nPalettesToJoin; nNodeIndex++)
                    {
                        sDescNode* sSearchedNode = nullptr;

                        // We need to readjust the nodes here.
                        uint32_t nNodeSize = GetNodeSizeFromPaletteId(NodeGet->uUnitId, NodeGet->uPalId);
                        uint32_t nAdjustedCollectionIndex = Node02;
                        ptrdiff_t nAdjustedButtonIndex = Node03 + vnPeerPaletteDistances[nNodeIndex];

                        while (nAdjustedButtonIndex >= 0)
                        {
                            sSearchedNode = GetMainTree()->GetDescNode(Node01, nAdjustedCollectionIndex, nAdjustedButtonIndex, -1);

                            if (sSearchedNode)
                            {
                                break;
                            }

                            // This palette isn't in this node: walk to the next available node for this unit.
                            nAdjustedButtonIndex -= nNodeSize;
                            nAdjustedCollectionIndex++;
                        }

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
                        fShouldUseAlternateLoadLogic = true;

                        std::vector<sImgTicket*> vsImagePairs;
                        sImgTicket* pPreviousImage = nullptr;

                        if (InvertPairingDisplay(paletteDataSet->pPalettePairingInfo))
                        {
                            for (uint32_t nNodeIndex = 0; nNodeIndex < paletteDataSet->pPalettePairingInfo->nPalettesToJoin; nNodeIndex++)
                            {
                                sImgTicket* pThisImage = CreateImgTicket(vsPaletteDataSetToJoin[nNodeIndex]->indexImgToUse, vsPaletteDataSetToJoin[nNodeIndex]->indexOffsetToUse, pPreviousImage);

                                vsImagePairs.push_back(pThisImage);

                                pPreviousImage = pThisImage;
                            }

                            ClearSetImgTicket(vsImagePairs[(paletteDataSet->pPalettePairingInfo->nPalettesToJoin - 1)]);

                            for (uint32_t nPairIndex = 0; nPairIndex < paletteDataSet->pPalettePairingInfo->nPalettesToJoin; nPairIndex++)
                            {
                                //Set each palette: these were joined forward, so reverse them now
                                CreateDefPal(vsJoinedNodes[(paletteDataSet->pPalettePairingInfo->nPalettesToJoin - 1) - nPairIndex], nPairIndex);

                                SetSourcePal(nPairIndex, NodeGet->uUnitId, nSrcStart + vnPeerPaletteDistances[(paletteDataSet->pPalettePairingInfo->nPalettesToJoin - 1) - nPairIndex], nSrcAmt, nNodeIncrement);
                            }
                        }
                        else
                        {
                            for (int32_t nNodeIndex = (paletteDataSet->pPalettePairingInfo->nPalettesToJoin - 1); nNodeIndex >= 0; nNodeIndex--)
                            {
                                sImgTicket* pThisImage = CreateImgTicket(vsPaletteDataSetToJoin[nNodeIndex]->indexImgToUse, vsPaletteDataSetToJoin[nNodeIndex]->indexOffsetToUse, pPreviousImage);

                                vsImagePairs.push_back(pThisImage);

                                pPreviousImage = pThisImage;
                            }

                            ClearSetImgTicket(vsImagePairs[(paletteDataSet->pPalettePairingInfo->nPalettesToJoin - 1)]);

                            for (uint32_t nPairIndex = 0; nPairIndex < paletteDataSet->pPalettePairingInfo->nPalettesToJoin; nPairIndex++)
                            {
                                //Set each palette
                                CreateDefPal(vsJoinedNodes[nPairIndex], nPairIndex);

                                SetSourcePal(nPairIndex, NodeGet->uUnitId, nSrcStart + vnPeerPaletteDistances[nPairIndex], nSrcAmt, nNodeIncrement);
                            }
                        }
                    }
                    else
                    {
                        OutputDebugString(L"ERROR: Invalid palette pairing requested.   You probably want to check the linkage here.\n");
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

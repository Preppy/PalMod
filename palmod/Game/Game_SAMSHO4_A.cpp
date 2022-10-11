#include "StdAfx.h"
#include "Game_SAMSHO4_A.h"

void CGame_SAMSHO4_A::DumpAllPalettes()
{
    // I wanted to quickly generate the special palettes we didn't have listed yet.
    CString strInfo;

    for (uint32_t nUnit = 0; nUnit < ARRAYSIZE(SAMSHO4_A_UNITS); nUnit++)
    {
        for (uint32_t nNode = 0; nNode < SAMSHO4_A_UNITS[nUnit].uChildAmt; nNode++)
        {
            sDescTreeNode* pThisNode = (sDescTreeNode *)SAMSHO4_A_UNITS[nUnit].ChildNodes;
            sGame_PaletteDataset* pThisCharacter = (sGame_PaletteDataset *)pThisNode[nNode].ChildNodes;

            struct sSpecialInfo
            {
                LPCWSTR szSpecialName = nullptr;
                int nOffsetFromBase = 0;
            };

            const sSpecialInfo sSamShoIVInfo[] =
            {
                { L"Burning", 0xc0 },
                { L"Shocked", 0x100 },
                { L"Frozen/Wet", 0x140 },
                { L"Ki", 0x180 },
                { L"Issen Trail", 0x200 },
                //{ L"SON?", 0x240 },  SON is SamShoV/SP only.  Unclear what these/the other extras are
            };

            LPCWSTR ppszImgIdText[] =
            {
                L"indexSamSho5Sprites_Amakusa",
                L"indexSamSho5Sprites_Basara",                            // 1
                L"indexSamSho5Sprites_Charlotte",                         // 2
                L"indexSamSho5Sprites_Enja",                              // 3
                L"indexSamSho5Sprites_Gaira",                             // 4
                L"indexSamSho5Sprites_Galford",                           // 5
                L"indexSamSho5Sprites_Gaoh",                              // 6
                L"indexSamSho5Sprites_Genjuro",                           // 7
                L"indexSamSho5Sprites_Hanzo",                             // 8
                L"indexSamSho5Sprites_Haohmaru",                          // 9
                L"indexSamSho5Sprites_Jubei",                             // a
                L"indexSamSho5Sprites_Kazuki",                            // b
                L"indexSamSho5Sprites_Kusaregedo",                        // c
                L"indexSamSho5Sprites_Kyoshiro",                          // d
                L"indexSamSho5Sprites_Mina",                              // e
                L"indexSamSho5Sprites_Mizuki",                            // f
                L"indexSamSho5Sprites_Nakoruru",                          // 10
                L"indexSamSho5Sprites_Rasetsumaru",                        // 11
                L"indexSamSho5Sprites_Rera",                              // 12
                L"indexSamSho5Sprites_Rimururu",                          // 13
                L"indexSamSho5Sprites_Shizumaru",                         // 14
                L"indexSamSho5Sprites_Sogetsu",                           // 15
                L"indexSamSho5Sprites_Suija",                             // 16
                L"indexSamSho5Sprites_TamTam",                            // 17
                L"indexSamSho5Sprites_Ukyo",                              // 18
                L"indexSamSho5Sprites_Yoshitora",                         // 19
                L"indexSamSho5Sprites_Yunfei",                            // 1a
                L"indexSamSho5Sprites_Zankuro",                           // 1b
            };

            for (uint32_t nSpecial = 0; nSpecial < ARRAYSIZE(sSamShoIVInfo); nSpecial++)
            {
                    strInfo.Format(L"    { L\"%s (%s)\", 0x%x, 0x%x, %s, 0x%02x },\r\n",
                        pThisCharacter[0].szPaletteName,
                        sSamShoIVInfo[nSpecial].szSpecialName,
                        pThisCharacter[0].nPaletteOffset + sSamShoIVInfo[nSpecial].nOffsetFromBase,
                        pThisCharacter[0].nPaletteOffsetEnd + sSamShoIVInfo[nSpecial].nOffsetFromBase,
                        (pThisCharacter[0].indexImgToUse < ARRAYSIZE(ppszImgIdText)) ? ppszImgIdText[pThisCharacter[0].indexImgToUse] : L"-1",
                        pThisCharacter[0].indexOffsetToUse
                    );
                    OutputDebugString(strInfo);
            }
        }
    }
}

BOOL CGame_SAMSHO4_A::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
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
    BasePalGroup.FlushPalAll();

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
                // This code handles the fact that we use variable length pairing depending upon what we're dealing with
                if ((_wcsicmp(pCurrentNode->szDesc, L"Slash 1") == 0) || (_wcsicmp(pCurrentNode->szDesc, L"Slash 2") == 0) ||
                    (_wcsicmp(pCurrentNode->szDesc, L"Bust 1") == 0) || (_wcsicmp(pCurrentNode->szDesc, L"Bust 2") == 0))
                {
                    sDescTreeNode* charUnit = GetMainTree()->GetDescTree(Node01, -1);

                    if ((wcscmp(charUnit->szDesc, L"Galford") == 0) ||
                        (wcscmp(charUnit->szDesc, L"Kyoshiro") == 0))
                    {
                        // These two have different trees between S and B
                        nSrcAmt = 2;
                        nNodeIncrement = pCurrentNode->uChildAmt;

                        if (((nSrcStart >= nNodeIncrement) && (nSrcStart < (nNodeIncrement * 2))) ||
                            ((nSrcStart >= (nNodeIncrement * 3)) && (nSrcStart < (nNodeIncrement * 4))))
                        {
                            nSrcStart -= nNodeIncrement;
                        }
                    }
                    else
                    {
                        nSrcAmt = 4;
                        nNodeIncrement = pCurrentNode->uChildAmt;

                        while (nSrcStart >= nNodeIncrement)
                        {
                            // The starting point is the absolute first palette for the sprite in question which is found in Slash 1
                            nSrcStart -= nNodeIncrement;
                        }
                    }
                }
            }

            if (paletteDataSet->pPalettePairingInfo)
            {
                if (paletteDataSet->pPalettePairingInfo == &pairFullyLinkedNode)
                {
                    const uint32_t nStageCount = _GetNodeSizeFromPaletteId(&m_rgCurrentGameUnits[0], &m_rgCurrentExtraCounts[0], m_rgCurrentGameUnits.size(), m_nCurrentExtraUnitId, NodeGet->uUnitId, NodeGet->uPalId, m_prgCurrentExtrasLoaded);

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

    if (!fShouldUseAlternateLoadLogic)
    {
        //Create the default palette
        ClearSetImgTicket(CreateImgTicket(nImgUnitId, nTargetImgId));

        CreateDefPal(NodeGet, 0);

        SetSourcePal(0, NodeGet->uUnitId, nSrcStart, nSrcAmt, nNodeIncrement);
    }

    return TRUE;
}

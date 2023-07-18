#include "StdAfx.h"
#include "Game_SFA1_A.h"

struct sSFA1_A_PortraitData
{
    LPCWSTR pszCharacterName = nullptr;
    LPCWSTR pszCodeName = nullptr;
    uint32_t nROMOffset = 0;
    LPCWSTR pszImageSet = L"indexCPS2Sprites_SFA1Assets"; // SFA1_Unique
    uint32_t nImageSetIndex = 0;
};

sSFA1_A_PortraitData SFA1_A_PortraitDataArray[] =
{
    { L"Ryu", L"RYU", 0x4ce14, L"indexCPS2Sprites_SFA1Assets", 0xB4 }, // Ryu
    { L"Ken", L"KEN", 0x4d114, L"indexCPS2Sprites_SFA1Assets", 0xAF }, // Ken
    { L"Akuma", L"AKUMA", 0x4d414, L"indexCPS2Sprites_SFA1Assets", 0xA1 }, // Akuma
    { L"Charlie", L"CHARLIE", 0x4d714, L"indexCPS2Sprites_SFA1Assets", 0xA5 }, // Charlie
    { L"Chun-Li", L"CHUNLI", 0x4da14, L"indexCPS2Sprites_SFA1Assets", 0xA6 }, // Chun (NOTE: Chun has a special non-X-ISM portrait, A7)
    { L"Adon", L"ADON", 0x4dd14, L"indexCPS2Sprites_SFA1Assets", 0xA0 }, // Adon
    { L"Sodom", L"SODOM", 0x4e014, L"indexCPS2Sprites_SFA1Assets", 0xB7 }, // Sodom
    { L"Guy", L"GUY", 0x4e314, L"indexCPS2Sprites_SFA1Assets", 0xAD }, // Guy
    { L"Birdie", L"BIRDIE", 0x4e614, L"indexCPS2Sprites_SFA1Assets", 0xA2 }, // Birdie
    { L"Rose", L"ROSE", 0x4e914, L"indexCPS2Sprites_SFA1Assets", 0xB3 }, // Rose
    { L"M.Bison", L"MBISON", 0x4ec14, L"indexCPS2Sprites_SFA1Assets", 0xB0 }, // Dict
    { L"Sagat", L"SAGAT", 0x4ef14, L"indexCPS2Sprites_SFA1Assets", 0xB5 }, // Sagat
    { L"Dan", L"DAN", 0x4f214, L"indexCPS2Sprites_SFA1Assets", 0xA9 }, // Dan
    { L"Sakura", L"SAKURA", 0x4f514, L"indexCPS2Sprites_SFA1Assets", 0xB6 }, // Sakura
    { L"Rolento", L"ROLENTO", 0x4f814, L"indexCPS2Sprites_SFA1Assets", 0xB2 }, // Rolento
    { L"Dhalsim", L"DHALSIM", 0x4fb14, L"indexCPS2Sprites_SFA1Assets", 0xAA }, // Dhalsim
    { L"Zangief", L"ZANGIEF", 0x4fe14, L"indexCPS2Sprites_SFA1Assets", 0xB9 }, // Zangief
    { L"Gen", L"GEN", 0x50114, L"indexCPS2Sprites_SFA1Assets", 0xAC }, // Gen
    { L"Cammy", L"CAMMY", 0x50a14, L"indexCPS2Sprites_SFA1Assets", 0xA4 }, // Cammy
    { L"E.Honda", L"EHONDA", 0x50d14, L"indexCPS2Sprites_SFA1Assets", 0xAB }, // E.Honda
    { L"Blanka", L"BLANKA", 0x51014, L"indexCPS2Sprites_SFA1Assets", 0xA3 }, // Blanka
    { L"R.Mika", L"RMIKA", 0x51314, L"indexCPS2Sprites_SFA1Assets", 0xB1 }, // R.Mika
    { L"Cody", L"CODY", 0x51614, L"indexCPS2Sprites_SFA1Assets", 0xA8 }, // Cody
    { L"Vega", L"VEGA", 0x51914, L"indexCPS2Sprites_SFA1Assets", 0xB8 }, // Vega
    { L"Karin", L"KARIN", 0x51c14, L"indexCPS2Sprites_SFA1Assets", 0xAE }, // Karin
};

void CGame_SFA1_A::DumpHeaderPalettes()
{
    CString strOutput;

    for (uint16_t nIndex = 0; nIndex < ARRAYSIZE(SFA1_A_PortraitDataArray); nIndex++)
    {
        const uint16_t nPortraitsPerCharacter = 6;
        strOutput.Format(L"const sGame_PaletteDataset SFA1_A_%s_PORTRAIT_PALETTES[] = \r\n{\r\n", SFA1_A_PortraitDataArray[nIndex].pszCodeName);
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

            strOutput.Format(L"    { \"%s\", 0x%x, 0x%x, %s, 0x%02x },\r\n", strColorName.GetString(), SFA1_A_PortraitDataArray[nIndex].nROMOffset + (PORTRAIT_OFFSET * nColorIndex), SFA1_A_PortraitDataArray[nIndex].nROMOffset + (PORTRAIT_OFFSET * (nColorIndex + 1)), SFA1_A_PortraitDataArray[nIndex].pszImageSet, SFA1_A_PortraitDataArray[nIndex].nImageSetIndex);
            OutputDebugString(strOutput);
        }

        OutputDebugString(L"};\r\n\r\n");
    }

    for (uint16_t nIndex = 0; nIndex < ARRAYSIZE(SFA1_A_PortraitDataArray); nIndex++)
    {
        const uint16_t nPortraitsPerCharacter = 6;
        strOutput.Format(L"    { \"Select Portraits\", DESC_NODETYPE_TREE, (void*)SFA1_A_%s_PORTRAIT_PALETTES, ARRAYSIZE(SFA1_A_%s_PORTRAIT_PALETTES) },\r\n", SFA1_A_PortraitDataArray[nIndex].pszCodeName, SFA1_A_PortraitDataArray[nIndex].pszCodeName);
        OutputDebugString(strOutput);
    }
}

BOOL CGame_SFA1_A::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
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
    int nTargetImgId = 0;
    uint32_t nImgUnitId = INVALID_UNIT_VALUE;

    bool fShouldUseAlternateLoadLogic = false;

    // Only load images for internal units, since we don't currently have a methodology for associating
    // external loads to internal sprites.
    if (m_nExtraUnit != NodeGet->uUnitId)
    {
        const sGame_PaletteDataset* paletteDataSet = GetSpecificPalette(NodeGet->uUnitId, NodeGet->uPalId);
        const sDescTreeNode* pCurrentNode = GetNodeFromPaletteId(NodeGet->uUnitId, NodeGet->uPalId, true);

        if (pCurrentNode) // For Basic nodes, we can allow multisprite view in the Export dialog
        {
            if (_wcsicmp(pCurrentNode->szDesc, L"Select Portraits") == 0)
            {
                nSrcAmt = 2;

                if (wcsstr(paletteDataSet->szPaletteName, L"Kick"))
                {
                    // Go back to Punch
                    nSrcStart--;
                }

                nNodeIncrement = 1;
            }
            else if ((_wcsicmp(pCurrentNode->szDesc, L"Punch") == 0) ||
                     (_wcsicmp(pCurrentNode->szDesc, L"Kick") == 0))
            {
                nSrcAmt = 2;
                nNodeIncrement = GetNodeSizeFromPaletteId(NodeGet->uUnitId, NodeGet->uPalId);

                while (nSrcStart >= nNodeIncrement)
                {
                    // The starting point is the absolute first palette for the sprite in question which is found in Punch
                    nSrcStart -= nNodeIncrement;
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
                else
                {
                    int8_t nDeltaToSecondElement = paletteDataSet->pPalettePairingInfo->nNodeIncrementToPartner;
                    uint16_t nPeerPaletteIdInNode = Node03 + nDeltaToSecondElement;

                    fShouldUseAlternateLoadLogic = true;

                    uint32_t nPeerPaletteIdInUnit = NodeGet->uPalId + nDeltaToSecondElement;

                    if (fShouldUseAlternateLoadLogic)
                    {
                        const sGame_PaletteDataset* paletteDataSetToJoin = GetSpecificPalette(NodeGet->uUnitId, nPeerPaletteIdInUnit);

                        if (paletteDataSetToJoin)
                        {
                            ClearSetImgTicket(
                                CreateImgTicket(paletteDataSet->indexImgToUse, paletteDataSet->indexOffsetToUse,
                                    CreateImgTicket(paletteDataSetToJoin->indexImgToUse, paletteDataSetToJoin->indexOffsetToUse)
                                )
                            );

                            //Set each palette
                            std::vector<sDescNode*> JoinedNode = {
                                GetMainTree()->GetDescNode(NodeGet->uUnitId, Node02, Node03, -1),
                                GetMainTree()->GetDescNode(NodeGet->uUnitId, Node02, nPeerPaletteIdInNode, -1)
                            };

                            //Set each palette
                            CreateDefPal(JoinedNode[0], 0);
                            CreateDefPal(JoinedNode[1], 1);

                            SetSourcePal(0, NodeGet->uUnitId, nSrcStart, nSrcAmt, nNodeIncrement);
                            SetSourcePal(1, NodeGet->uUnitId, nSrcStart + nDeltaToSecondElement, nSrcAmt, nNodeIncrement);
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

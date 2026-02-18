#include "StdAfx.h"
#include "Game_SAMSHO3_A.h"

void CGame_SAMSHO3_A::DumpPaletteHeaders()
{
    CString strOutput;
    const uint32_t SAMSHO_PALETTE_LENGTH = 0x40;

    struct sSamSho3CharacterInfo
    {
        std::wstring strCharacter;
        std::wstring strImageId;
        std::wstring strPetName;
        std::wstring strPetNameBImageOverride;
        bool shouldShowSpriteForExtra2;
    };

    const std::vector<sSamSho3CharacterInfo> rgCharacters = {
        { L"Haohmaru",  L"indexSamSho3Sprites_Haohmaru",    L"",            L"",        1 },
        { L"Nakoruru",  L"indexSamSho5Sprites_Nakoruru",    L"Mamahaha",    L"Shikuru", 1 },
        { L"Rimururu",  L"indexSamSho5Sprites_Rimururu",    L"",            L"",        0 },
        { L"Hanzo",     L"indexSamSho3Sprites_Hanzo",       L"",            L"",        0 },
        { L"Galford",   L"indexSamSho5Sprites_Galford",     L"Poppy",       L"",        0 },
        { L"Kyoshiro",  L"indexSamSho5Sprites_Kyoshiro",    L"Toad",        L"",        0 },
        { L"Ukyo",      L"indexSamSho3Sprites_Ukyo",        L"",            L"",        0 },
        { L"Genjuro",   L"indexSamSho3Sprites_Genjuro",     L"",            L"",        0 },
        { L"Basara",    L"indexSamSho3Sprites_Basara",      L"",            L"",        1 },
        { L"Shizumaru", L"indexSamSho5Sprites_Shizumaru",   L"",            L"",        0 },
        { L"Gaira",     L"indexSamSho5Sprites_Gaira",       L"",            L"",        0 },
        { L"Amakusa",   L"indexSamSho5Sprites_Amakusa",     L"",            L"",        0 },
        // Unused
        { L"",          L"",                                L"",            L"",        0 },
        { L"Zankuro",   L"indexSamSho5Sprites_Zankuro",     L"",            L"",        0 },
    };

    const uint32_t k_nBasePalette = 0x01000;
    uint32_t nCurrentPalettePosition = k_nBasePalette;

    for (uint16_t nCharIndex = 0; nCharIndex < rgCharacters.size(); nCharIndex++)
    {
        wchar_t szCodeDesc[MAX_DESCRIPTION_LENGTH];
        StruprRemoveNonASCII(szCodeDesc, ARRAYSIZE(szCodeDesc), rgCharacters[nCharIndex].strCharacter.c_str());

        // Character effects
        for (uint16_t nStatusIndex = 0; nStatusIndex < 64; nStatusIndex++)
        {
            if (rgCharacters[nCharIndex].strCharacter.length())
            {

                CString strPaletteName;
                CString strImageString;

                if ((nStatusIndex % 16) == 0)
                {
                    switch (nStatusIndex)
                    {
                    case 0:
                        strOutput.Format(L"const sGame_PaletteDataset SAMSHO3_A_%s_PALETTES_S1[] = \r\n{\r\n", szCodeDesc);
                        break;
                    case 16:
                        strOutput.Format(L"const sGame_PaletteDataset SAMSHO3_A_%s_PALETTES_S2[] = \r\n{\r\n", szCodeDesc);
                        break;
                    case 32:
                        strOutput.Format(L"const sGame_PaletteDataset SAMSHO3_A_%s_PALETTES_B1[] = \r\n{\r\n", szCodeDesc);
                        break;
                    case 48:
                        strOutput.Format(L"const sGame_PaletteDataset SAMSHO3_A_%s_PALETTES_B2[] = \r\n{\r\n", szCodeDesc);
                        break;
                    }

                    OutputDebugString(strOutput);
                }

                uint32_t nAdjustedIndex = nStatusIndex % 16;

                strImageString.Format(L", %s", rgCharacters[nCharIndex].strImageId.c_str());

                uint32_t nPaletteStart = nCurrentPalettePosition;
                uint32_t nPaletteEnd = nCurrentPalettePosition + SAMSHO_PALETTE_LENGTH;

                switch (nAdjustedIndex)
                {
                case 0:
                    strPaletteName = L"Main";

                    // Pair for all pets except if they have a unique "B" pet
                    if (rgCharacters[nCharIndex].strPetName.length())
                    {
                        if (!rgCharacters[nCharIndex].strPetNameBImageOverride.length() || (nStatusIndex < 32))
                        {
                            strImageString += ", 0, &pairNext10";
                        }
                        else
                        {
                            strImageString += ", 0";
                        }
                    }
                    break;
                case 1:
                    strPaletteName = L"Rage Flash";

                    // Pair for all pets except if they have a unique "B" pet
                    if (rgCharacters[nCharIndex].strPetName.length())
                    {
                        if (!rgCharacters[nCharIndex].strPetNameBImageOverride.length() || (nStatusIndex < 32))
                        {
                            strImageString += ", 0, &pairNext10";
                        }
                        else
                        {
                            strImageString += ", 0";
                        }
                    }
                    break;
                case 2: // Extra palette 2
                    if (!rgCharacters[nCharIndex].shouldShowSpriteForExtra2)
                    {
                        strImageString = L"";
                    }
                    __fallthrough;
                case 3:
                    strPaletteName.Format(L"Extra Palette %u", nAdjustedIndex);
                    break;
                case 4:
                    strPaletteName = L"Shocked";
                    break;
                case 5:
                    strPaletteName = L"Frozen";
                    break;
                case 6:
                    strPaletteName = L"Burning";
                    break;
                case 8:
                    strPaletteName = L"Daylight";
                    break;
                case 9:
                    strPaletteName = L"Moonlight";
                    break;
                case 10:
                case 11:
                case 12:
                    strPaletteName.Format(L"Extra Palette %u", nAdjustedIndex);

                    if (rgCharacters[nCharIndex].strPetName.length())
                    {
                        strPaletteName += L": ";
                        if ((nStatusIndex >= 32) && rgCharacters[nCharIndex].strPetNameBImageOverride.length())
                        {
                            // This is Nakoruru B which is a little odd.
                            strPaletteName += rgCharacters[nCharIndex].strPetNameBImageOverride.c_str();
                            strImageString = L", indexSamSho5Sprites_Rera";
                            nPaletteStart += 0x20;
                        }
                        else
                        {
                            strPaletteName += rgCharacters[nCharIndex].strPetName.c_str();
                        }
                        strImageString += ", 1";
                    }
                    else
                    {
                        strImageString = L"";
                    }
                    break;
                case 13:
                    // Slashes are three sets of 16 colors each
                    strPaletteName = L"Slashes (1/3)";
                    strImageString = L"";
                    nPaletteEnd -= 0x20;

                    strOutput.Format(L"    { L\"%s\", 0x%x, 0x%x%s },\r\n", strPaletteName.GetString(),
                        nPaletteStart, nPaletteEnd,
                        strImageString.GetString());
                    OutputDebugString(strOutput);

                    nPaletteStart += 0x20;
                    nPaletteEnd += 0x20;
                    strPaletteName = L"Slashes (2/3)";

                    break;
                case 14:
                    strPaletteName = L"Slashes (3/3)";
                    strImageString = L"";
                    nPaletteEnd -= 0x20;
                    break;
                case 15:
                    // Portrait is the last "half" of slash 3
                    strPaletteName = L"Portrait";
                    strImageString = L"";
                    nPaletteStart -= 0x20;
                    nPaletteEnd -= 0x20;
                    break;
                default:
                    strPaletteName.Format(L"Extra Palette %u", nAdjustedIndex);
                    strImageString = L"";
                    break;
                }

                strOutput.Format(L"    { L\"%s\", 0x%x, 0x%x%s },\r\n", strPaletteName.GetString(),
                    nPaletteStart, nPaletteEnd,
                    strImageString.GetString());
                OutputDebugString(strOutput);

                if (nAdjustedIndex == 15)
                {
                    strOutput.Format(L"};\r\n\r\n");
                    OutputDebugString(strOutput);
                }
            }

            nCurrentPalettePosition += SAMSHO_PALETTE_LENGTH;
        }
    }

    for (uint16_t nCharIndex = 0; nCharIndex < rgCharacters.size(); nCharIndex++)
    {
        if (!rgCharacters[nCharIndex].strCharacter.length())
        {
            continue;
        }

        wchar_t szCodeDesc[MAX_DESCRIPTION_LENGTH];
        StruprRemoveNonASCII(szCodeDesc, ARRAYSIZE(szCodeDesc), rgCharacters[nCharIndex].strCharacter.c_str());

        strOutput.Format(L"const sDescTreeNode SAMSHO3_A_%s_COLLECTION[] = \r\n{\r\n", szCodeDesc);
        OutputDebugString(strOutput);
        strOutput.Format(L"    { L\"Slash 1\", DESC_NODETYPE_TREE, (void*)SAMSHO3_A_%s_PALETTES_S1, ARRAYSIZE(SAMSHO3_A_%s_PALETTES_S1) },\r\n", szCodeDesc, szCodeDesc);
        OutputDebugString(strOutput);
        strOutput.Format(L"    { L\"Slash 2\", DESC_NODETYPE_TREE, (void*)SAMSHO3_A_%s_PALETTES_S2, ARRAYSIZE(SAMSHO3_A_%s_PALETTES_S2) },\r\n", szCodeDesc, szCodeDesc);
        OutputDebugString(strOutput);
        strOutput.Format(L"    { L\"Bust 1\", DESC_NODETYPE_TREE, (void*)SAMSHO3_A_%s_PALETTES_B1, ARRAYSIZE(SAMSHO3_A_%s_PALETTES_B1) },\r\n", szCodeDesc, szCodeDesc);
        OutputDebugString(strOutput);
        strOutput.Format(L"    { L\"Bust 2\", DESC_NODETYPE_TREE, (void*)SAMSHO3_A_%s_PALETTES_B2, ARRAYSIZE(SAMSHO3_A_%s_PALETTES_B2) },\r\n", szCodeDesc, szCodeDesc);
        OutputDebugString(strOutput);
        strOutput.Format(L"};\r\n\r\n");
        OutputDebugString(strOutput);
    }

    strOutput.Format(L"const sDescTreeNode SAMSHO3_A_UNITS[] = \r\n{\r\n");
    OutputDebugString(strOutput);

    for (uint16_t nCharIndex = 0; nCharIndex < rgCharacters.size(); nCharIndex++)
    {
        if (!rgCharacters[nCharIndex].strCharacter.length())
        {
            continue;
        }

        wchar_t szCodeDesc[MAX_DESCRIPTION_LENGTH];
        StruprRemoveNonASCII(szCodeDesc, ARRAYSIZE(szCodeDesc), rgCharacters[nCharIndex].strCharacter.c_str());

        strOutput.Format(L"    { L\"%s\", DESC_NODETYPE_TREE, (void*)SAMSHO3_A_%s_COLLECTION, ARRAYSIZE(SAMSHO3_A_%s_COLLECTION) },\r\n", rgCharacters[nCharIndex].strCharacter.c_str(), szCodeDesc, szCodeDesc);
        OutputDebugString(strOutput);
    }

    strOutput.Format(L"};\r\n\r\n");
    OutputDebugString(strOutput);
}

BOOL CGame_SAMSHO3_A::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
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
    uint32_t nSelectedPaletteIndex = 0;

    //Get rid of any palettes if there are any
    m_BasePalGroup.FlushPalAll();

    // Make sure to reset the image id
    uint16_t nImgUnitId = INVALID_UNIT_VALUE_16;
    uint8_t nTargetImgId = 0;

    // reset the buttons
    m_pButtonLabelSet = DEF_BUTTONLABEL_SAMSHO3;

    bool fWasImageLoadHandled = false;
    bool fUsingSpecialPairing = false;

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
                if ((paletteDataSet->indexImgToUse == indexSamSho3Sprites_Basara) ||
                    (paletteDataSet->indexImgToUse == indexSamSho3Sprites_Gaira) ||
                    (paletteDataSet->indexImgToUse == indexSamSho3Sprites_Nakoruru))
                {
                    if ((_wcsicmp(pCurrentNode->szDesc, L"Slash 1") == 0) || (_wcsicmp(pCurrentNode->szDesc, L"Slash 2") == 0) ||
                        (_wcsicmp(pCurrentNode->szDesc, L"Bust 1") == 0) || (_wcsicmp(pCurrentNode->szDesc, L"Bust 2") == 0))
                    {
                        nSrcAmt = 2;
                        nNodeIncrement = pCurrentNode->uChildAmt;
                        fUsingSpecialPairing = true;

                        if (((nSrcStart >= nNodeIncrement) && (nSrcStart < (nNodeIncrement * 2))) ||
                            ((nSrcStart >= (nNodeIncrement * 3)) && (nSrcStart < (nNodeIncrement * 4))))
                        {
                            nSrcStart -= nNodeIncrement;
                            nSelectedPaletteIndex++;
                        }

                        if (NodeGet->uPalId < (nNodeIncrement * 2))
                        {
                            m_pButtonLabelSet = DEF_BUTTONLABEL_SAMSHO3_2_SLASH;
                        }
                        else
                        {
                            m_pButtonLabelSet = DEF_BUTTONLABEL_SAMSHO3_2_BUST;
                        }
                    }
                }
                else if ((_wcsicmp(pCurrentNode->szDesc, L"Slash 1") == 0) || (_wcsicmp(pCurrentNode->szDesc, L"Slash 2") == 0) ||
                         (_wcsicmp(pCurrentNode->szDesc, L"Bust 1") == 0) || (_wcsicmp(pCurrentNode->szDesc, L"Bust 2") == 0))
                {
                    nSrcAmt = 4;
                    nNodeIncrement = pCurrentNode->uChildAmt;
                    fUsingSpecialPairing = true;

                    while (nSrcStart >= nNodeIncrement)
                    {
                        // The starting point is the absolute first palette for the sprite in question which is found in P1/A
                        nSrcStart -= nNodeIncrement;
                        nSelectedPaletteIndex++;
                    }
                }
            }

            if (paletteDataSet->pPalettePairingInfo)
            {
                if (ArePalettePairsEqual(paletteDataSet->pPalettePairingInfo, &pairFullyLinkedNode))
                {
                    const uint32_t nStageCount = GetNodeSizeFromPaletteId(NodeGet->uUnitId, NodeGet->uPalId);

                    fWasImageLoadHandled = true;
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
                            SetSourcePal(nStageIndex, NodeGet->uUnitId, nSrcStart + nStageIndex, nSrcAmt, nNodeIncrement, nSelectedPaletteIndex);
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

                        SetSourcePal(0, NodeGet->uUnitId, nSrcStart, nSrcAmt, nNodeIncrement, nSelectedPaletteIndex);
                        SetSourcePal(1, NodeGet->uUnitId, nSrcStart + nPeerPaletteDistance, nSrcAmt, nNodeIncrement, nSelectedPaletteIndex);
                    }
                }
            }
        }
    }

    if (fWasImageLoadHandled)
    {
        return TRUE;
    }
    else if (fUsingSpecialPairing)
    {
        CreateDefPal(NodeGet, 0);
        ClearSetImgTicket(CreateImgTicket(nImgUnitId, nTargetImgId));
        SetSourcePal(0, NodeGet->uUnitId, nSrcStart, nSrcAmt, nNodeIncrement, nSelectedPaletteIndex);
        return TRUE;
    }
    else
    {
        return CGameClassByDir::UpdatePalImg(Node01, Node02, Node03, Node04);
    }
}

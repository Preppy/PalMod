#include "StdAfx.h"
#include "Game_SFIII3_A.h"

SFIII3LoadingKey CGame_SFIII3_A::m_eVersionToLoad = SFIII3LoadingKey::ROM51;

void CGame_SFIII3_A::SetSpecialRuleForFileName(std::wstring strFileName)
{
    const std::map<std::wstring, SFIII3LoadingKey> m_rgFileNameToVersion =
    {
        // these must be all lower case
        { L"10", SFIII3LoadingKey::ROM10 },
        { L"51", SFIII3LoadingKey::ROM51 },
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
        m_eVersionToLoad = SFIII3LoadingKey::ROM51;
    }

    return;
}

CGame_SFIII3_A::CGame_SFIII3_A(uint32_t nConfirmedROMSize, bool fShouldLoadNormalData /*= true */)
{
    if (fShouldLoadNormalData)
    {
        switch (m_eVersionToLoad)
        {
        case SFIII3LoadingKey::ROM10:
            InitializeGame(nConfirmedROMSize, m_sCoreGameData_ROM10);
            break;
        case SFIII3LoadingKey::ROM51:
        default:
            InitializeGame(nConfirmedROMSize, m_sCoreGameData_ROM51);
            break;
        }
    }
}

sFileRule CGame_SFIII3_A::GetRule(uint32_t nRuleId)
{
    switch (m_eVersionToLoad)
    {
    case SFIII3LoadingKey::ROM10:
        return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData_ROM10);
    case SFIII3LoadingKey::ROM51:
    default:
        return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData_ROM51);
    }
}

uint16_t rotate_left(uint16_t value, int n)
{
    int aux = value >> (16 - n);
    return ((value << n) | aux) % 0x10000;
}

uint16_t rotxor(uint16_t val, uint16_t xorval)
{
    uint16_t res = val + rotate_left(val, 2);

    res = rotate_left(res, 4) ^ (res & (val ^ xorval));

    return res;
}

uint32_t cps3_mask(uint32_t address, uint32_t key1, uint32_t key2)
{
    address ^= key1;

    uint16_t val = (address & 0xffff) ^ 0xffff;

    val = rotxor(val, key2 & 0xffff);

    val ^= (address >> 16) ^ 0xffff;

    val = rotxor(val, key2 >> 16);

    val ^= (address & 0xffff) ^ (key2 & 0xffff);

    return val | (val << 16);
}

BOOL CGame_SFIII3_A::LoadFile(CFile* LoadedFile, uint32_t nUnitId)
{
    for (uint32_t nUnitCtr = 0; nUnitCtr < nUnitAmt; nUnitCtr++)
    {
        uint32_t nPalAmt = GetPaletteCountForUnit(nUnitCtr);

        m_pppDataBuffer[nUnitCtr] = new uint16_t * [nPalAmt];

        // Layout is presorted
        m_rgUnitRedir.at(nUnitCtr) = nUnitCtr;

        for (uint32_t nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
        {
            LoadSpecificPaletteData(nUnitCtr, nPalCtr);

            m_pppDataBuffer[nUnitCtr][nPalCtr] = new uint16_t[m_nCurrentPaletteSizeInColors];

            if (IsROMEncrypted())
            {
                uint32_t fourByteBlocks = m_nCurrentPaletteSizeInColors >> 1;
                const uint8_t cbStride = 4;

                LoadedFile->Seek(m_nCurrentPaletteROMLocation, CFile::begin);
                uint32_t nNewData = 0;

                for (uint16_t nBlockCount = 0; nBlockCount < fourByteBlocks; nBlockCount++)
                {
                    // this rom is encrypted
                    LoadedFile->Read(&nNewData, cbStride);
                    nNewData = _byteswap_ulong(nNewData);
                    nNewData ^= (cps3_mask(0x6000000 + m_nCurrentPaletteROMLocation + (nBlockCount * cbStride), 0xA55432B4, 0x0C129981));
                    nNewData = _byteswap_ulong(nNewData);
                    *(m_pppDataBuffer[nUnitCtr][nPalCtr] + (2 * nBlockCount) + 1) = (nNewData & 0xFFFF0000) >> 16;
                    *(m_pppDataBuffer[nUnitCtr][nPalCtr] + (2 * nBlockCount)) = nNewData & 0x0000FFFF;

#ifdef Default_Gill_Palette
                    00 00 7F BC 7F 59 7F 16 7A B3 72 71 66 2E 55 CC 51 AB 49 8A 45 48 3D 27 65 B0 5D 8E 55 8D 55 8D
                        4B 0E 67 BF 4A FF 3A 3E 2D DD 31 BB 31 7A 2D 37 29 13 24 F1 24 AF 14 4B 45 56 3D 34 35 12 35 12
                        00 00 03 DE 03 5E 0A 9E 0A 1E 09 9A 01 14 00 90 00 00 00 00 7B DE 7B DE 73 9C 63 18 5A D6 4A 52
                        39 CE 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00
#endif
                }
            }
            else
            {
                LoadedFile->Seek(m_nCurrentPaletteROMLocation, CFile::begin);
                LoadedFile->Read(m_pppDataBuffer[nUnitCtr][nPalCtr], m_nCurrentPaletteSizeInColors * 2);
            }
        }
    }

    CheckForErrorsInTables();

    return TRUE;
}

BOOL CGame_SFIII3_A::SaveFile(CFile* SaveFile, uint32_t nUnitId)
{
    uint32_t nTotalPalettesSaved = 0;

    for (uint32_t nUnitCtr = 0; nUnitCtr < nUnitAmt; nUnitCtr++)
    {
        uint32_t nPalAmt = GetPaletteCountForUnit(nUnitCtr);

        for (uint32_t nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
        {
            if (IsPaletteDirty(nUnitCtr, nPalCtr))
            {
                LoadSpecificPaletteData(nUnitCtr, nPalCtr);

                if (IsROMEncrypted())
                {
                    uint32_t fourByteBlocks = m_nCurrentPaletteSizeInColors >> 1;
                    const uint8_t cbStride = 4;

                    SaveFile->Seek(m_nCurrentPaletteROMLocation, CFile::begin);
                    uint32_t nDataToWrite = 0;

                    for (uint16_t nBlockCount = 0; nBlockCount < fourByteBlocks; nBlockCount++)
                    {
                        nDataToWrite = *(m_pppDataBuffer[nUnitCtr][nPalCtr] + (2 * nBlockCount));
                        nDataToWrite |= (*(m_pppDataBuffer[nUnitCtr][nPalCtr] + (2 * nBlockCount) + 1) << 16);
                        nDataToWrite = _byteswap_ulong(nDataToWrite);
                        nDataToWrite ^= (cps3_mask(0x6000000 + m_nCurrentPaletteROMLocation + (nBlockCount * cbStride), 0xA55432B4, 0x0C129981));
                        nDataToWrite = _byteswap_ulong(nDataToWrite);

                        SaveFile->Write(&nDataToWrite, cbStride);
                    }
                }
                else
                {
                    SaveFile->Seek(m_nCurrentPaletteROMLocation, CFile::begin);
                    SaveFile->Write(m_pppDataBuffer[nUnitCtr][nPalCtr], m_nCurrentPaletteSizeInColors * 2);
                }
                nTotalPalettesSaved++;
            }
        }
    }

    CString strMsg;
    strMsg.Format(L"CGameClass::SaveFile: Saved 0x%x palettes to disk for %u units\n", nTotalPalettesSaved, nUnitAmt);
    OutputDebugString(strMsg);

    return TRUE;
}

BOOL CGame_SFIII3_A::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
{
    //Reset palette sources
    ClearSrcPal();

    if (Node01 == -1)
    {
        return FALSE;
    }

    sDescNode* NodeGet = GetMainTree()->GetDescNode(Node01, Node02, Node03, Node04);

    if (NodeGet == NULL)
    {
        return FALSE;
    }

    //Change the image id if we need to
    int nTargetImgId = 0;
    uint32_t nImgUnitId = NodeGet->uUnitId;

    uint32_t nSrcStart = NodeGet->uPalId;
    uint32_t nSrcAmt = 1;
    uint32_t nNodeIncrement = 1;

    //Get rid of any palettes if there are any
    BasePalGroup.FlushPalAll();

    bool fShouldUseAlternateLoadLogic = false;

    //Select the image
    if (m_nExtraUnit != NodeGet->uUnitId)
    {
        const sGame_PaletteDataset* paletteDataSet = GetSpecificPalette(NodeGet->uUnitId, NodeGet->uPalId);
        const sDescTreeNode* pCurrentNode = GetNodeFromPaletteId(NodeGet->uUnitId, NodeGet->uPalId, true);

        if (pCurrentNode) // For Basic nodes, we can allow multisprite view in the Export dialog
        {
            bool fIsCorePalette = false;

            for (uint32_t nOptionsToTest = 0; nOptionsToTest < pButtonLabelSet.size(); nOptionsToTest++)
            {
                if (wcscmp(pCurrentNode->szDesc, pButtonLabelSet[nOptionsToTest]) == 0)
                {
                    fIsCorePalette = true;
                    break;
                }
            }

            if (fIsCorePalette)
            {
                sDescTreeNode* charUnit = GetMainTree()->GetDescTree(Node01, -1);

                if (wcscmp(charUnit->szDesc, k_sf3NameKey_Gill) == 0)
                {
                    // Gill doesn't have an EX palette in 4rd
                    nSrcAmt = 6;
                }
                else
                {
                    nSrcAmt = static_cast<uint32_t>(pButtonLabelSet.size());
                }

                nNodeIncrement = GetNodeSizeFromPaletteId(NodeGet->uUnitId, NodeGet->uPalId);

                while (nSrcStart >= nNodeIncrement)
                {
                    // The starting point is the absolute first palette for the sprite in question which is found in LP
                    nSrcStart -= nNodeIncrement;
                }
            }
            else // Extras or Extra Range
            {
                // Status effects and etc have no peer palettes
                nSrcAmt = 1;
            }
        }

        if (paletteDataSet)
        {
            nImgUnitId = paletteDataSet->indexImgToUse;
            nTargetImgId = paletteDataSet->indexOffsetToUse;

            sDescTreeNode* charUnit = GetMainTree()->GetDescTree(Node01, -1);

            // These characters only have two nodes in this game
            if (((wcscmp(charUnit->szDesc, k_sf3NameKey_ShinGouki) == 0) ||
                 (wcscmp(charUnit->szDesc, k_sf3NameKey_UltraSean) == 0)) &&
                (nSrcAmt > 1))
            {
                nSrcAmt = 2;
                nNodeIncrement = GetNodeSizeFromPaletteId(NodeGet->uUnitId, NodeGet->uPalId);

                while (nSrcStart >= nNodeIncrement)
                {
                    nSrcStart -= nNodeIncrement;
                }
            }

            if (paletteDataSet->pPalettePairingInfo)
            {
                if (wcscmp(charUnit->szDesc, k_sf3NameKey_Oro) == 0)
                {
                    fShouldUseAlternateLoadLogic = true;

                    LoadSpecificPaletteData(NodeGet->uUnitId, NodeGet->uPalId);

                    BasePalGroup.AddPal(CreatePal(NodeGet->uUnitId, NodeGet->uPalId), m_nCurrentPaletteSizeInColors, NodeGet->uUnitId, NodeGet->uPalId);

                    BasePalGroup.AddSep(0, L"Concrete", 0, 16);
                    BasePalGroup.AddSep(0, L"Turtle", 16, 16);
                    BasePalGroup.AddSep(0, L"Dinosaur / Stone", 32, 16);
                    BasePalGroup.AddSep(0, L"Rocket", 48, 16);
                    BasePalGroup.AddSep(0, L"Brick", 64, 16);

                    ClearSetImgTicket(CreateImgTicket(nImgUnitId, nTargetImgId));

                    SetSourcePal(0, NodeGet->uUnitId, NodeGet->uPalId, 1, 1);
                }
                else if (ArePalettePairsEqual(paletteDataSet->pPalettePairingInfo, &pairFullyLinkedNode))
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
                else if (paletteDataSet->pPalettePairingInfo->nPalettesToJoin == 3)
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
                else
                {
                    int nDeltaToSecondElement = paletteDataSet->pPalettePairingInfo->nNodeIncrementToPartner;

                    const sGame_PaletteDataset* paletteDataSetToJoin = GetSpecificPalette(NodeGet->uUnitId, NodeGet->uPalId + nDeltaToSecondElement);
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
                            GetMainTree()->GetDescNode(Node01, Node02, Node03 + nDeltaToSecondElement, -1)
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
    else // Extra region
    {
        stExtraDef* pCurrDef = &m_prgCurrentExtrasLoaded[GetExtraLoc(NodeGet->uUnitId) + NodeGet->uPalId];

        if (pCurrDef->indexImgToUse != INVALID_UNIT_VALUE)
        {
            nImgUnitId = pCurrDef->indexImgToUse;
            nTargetImgId = pCurrDef->indexOffsetToUse;
        }
        else
        {
            fShouldUseAlternateLoadLogic = true;

            CreateDefPal(NodeGet, 0);

            // Only internal units get sprites
            ClearSetImgTicket(nullptr);

            SetSourcePal(0, NodeGet->uUnitId, nSrcStart, nSrcAmt, 1);
        }
    }

    if (!fShouldUseAlternateLoadLogic)
    {
        //Create the default palette
        CreateDefPal(NodeGet, 0);

        // Only internal units get sprites
        ClearSetImgTicket(CreateImgTicket(nImgUnitId, nTargetImgId));

        SetSourcePal(0, NodeGet->uUnitId, nSrcStart, nSrcAmt, nNodeIncrement);
    }

    return TRUE;
}

void CGame_SFIII3_A::PostSetPal(uint32_t nUnitId, uint32_t nPalId)
{
    if (m_nExtraUnit != nUnitId)
    {
        CString strMessage;
        strMessage.Format(L"CGame_SFIII3_A::PostSetPal : Checking additional change requirements for unit %u palette %u.\n", nUnitId, nPalId);
        OutputDebugString(strMessage);

        const sGame_PaletteDataset* pThisPalette = GetSpecificPalette(nUnitId, nPalId);
        if (pThisPalette->pExtraProcessing && pThisPalette->pExtraProcessing->pProcessingSteps.size())
        {
            OutputDebugString(L"\tThis palette is linked to additional palettes: updating those as well now.\n");
            ProcessAdditionalPaletteChangesRequired(nUnitId, nPalId, pThisPalette->pExtraProcessing->pProcessingSteps);
        }
        else
        {
            OutputDebugString(L"\tNo further processing needed.\n");
        }
    }
}

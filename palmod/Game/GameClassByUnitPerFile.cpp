#include "StdAfx.h"
#include "GameClassByUnitPerFile.h"
#include "GameDef.h"
#include "..\ExtraFile.h"
#include "..\PalMod.h"
#include "..\regproc.h"

#define GCPUPF_A_DEBUG DEFAULT_GAME_DEBUG_STATE

uint32_t CGameClassPerUnitPerFile::uRuleCtr = 0;
CDescTree CGameClassPerUnitPerFile::MainDescTree = nullptr;
uint32_t CGameClassPerUnitPerFile::m_nConfirmedROMSize = -1;

std::wstring CGameClassPerUnitPerFile::m_strGameFriendlyName;
SupportedGamesList CGameClassPerUnitPerFile::m_snCurrentGameFlag = SupportedGamesList::NUM_GAMES;

const CGameClassPerUnitPerFile::sGCPUPF_CoreGameData* CGameClassPerUnitPerFile::m_psCurrentGameLoadingData = nullptr;

void CGameClassPerUnitPerFile::InitializeStatics()
{
    MainDescTree.SetRootTree(CGameClassPerUnitPerFile::InitDescTree());
}

sFileRule CGameClassPerUnitPerFile::GetRule(uint32_t nUnitId, const std::vector<sGCBUPF_BasicFileData>& gameLoadingData)
{
    sFileRule NewFileRule;

    const uint32_t nAdjustedUnitId = (nUnitId & RULE_COUNTER_DEMASK);
    _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, L"%s", gameLoadingData.at(nAdjustedUnitId).strFileName.c_str());
    NewFileRule.uUnitId = nUnitId;
    NewFileRule.uVerifyVar = gameLoadingData.at(nAdjustedUnitId).nExpectedFileSize;

    return NewFileRule;
}

sFileRule CGameClassPerUnitPerFile::GetNextRule(const std::vector<sGCBUPF_BasicFileData>& gameLoadingData)
{
    sFileRule NewFileRule = GetRule(uRuleCtr, gameLoadingData);

    if (++uRuleCtr >= gameLoadingData.size())
    {
        uRuleCtr = INVALID_UNIT_VALUE;
    }

    return NewFileRule;
}

void CGameClassPerUnitPerFile::InitializeGame(uint32_t nConfirmedROMSize, const sGCPUPF_CoreGameData& gameLoadingData)
{
    //Set game-game specific information before loading the game's known palette locations
    m_strGameFriendlyName = gameLoadingData.strGameFriendlyName;
    m_snCurrentGameFlag = nGameFlag = gameLoadingData.nGameID;
    nImgGameFlag = gameLoadingData.eImgDatSectionID;
    m_prgGameImageSet = gameLoadingData.rgGameImageSet;
    createPalOptions = gameLoadingData.createPalOptions;
    //Set the image out display type
    DisplayType = gameLoadingData.displayStyle;
    SetAlphaMode(gameLoadingData.eAlphaMode);

    if (gameLoadingData.eAlphaMode == AlphaMode::GameUsesVariableAlpha)
    {
        m_fGameUsesAlphaValue = true;
    }

    SetColorMode(gameLoadingData.eColMode);

    m_psCurrentGameLoadingData = &gameLoadingData;

    // Load the game's layout for palmod
    InitializeStatics();

    // Don't load extras
    m_pszExtraFilename = nullptr;

    //We need the proper unit amt before we init the main buffer
    nUnitAmt = nFileAmt = static_cast<uint32_t>(m_psCurrentGameLoadingData->srgLoadingData.size());

    // Stub in the palette buffer that we will LoadFile into
    InitDataBuffer();

    //Create the redirect buffer
    rgUnitRedir = new uint32_t[nUnitAmt + 1];
    memset(rgUnitRedir, 0, sizeof(uint32_t) * nUnitAmt);

    //Create the file changed flag
    PrepChangeTrackingArray();
}

sDescTreeNode* CGameClassPerUnitPerFile::InitDescTree()
{
    uint32_t nTotalPaletteCount = 0;
    sDescTreeNode* NewDescTree = new sDescTreeNode;

    //Create the main character tree
    _snwprintf_s(NewDescTree->szDesc, ARRAYSIZE(NewDescTree->szDesc), _TRUNCATE, L"%s", m_strGameFriendlyName.c_str());
    NewDescTree->ChildNodes = new sDescTreeNode[m_psCurrentGameLoadingData->srgLoadingData.size()];
    NewDescTree->uChildAmt = m_psCurrentGameLoadingData->srgLoadingData.size();
    //All units have tree children
    NewDescTree->uChildType = DESC_NODETYPE_TREE;

    CString strMsg;
    OutputDebugString(L"CGameClassPerUnitPerFile_DIR::InitDescTree: Building desc tree...\n");

    //Go through each character
    for (uint32_t iUnitCtr = 0; iUnitCtr < m_psCurrentGameLoadingData->srgLoadingData.size(); iUnitCtr++)
    {
        sDescTreeNode* UnitNode = nullptr;
        sDescTreeNode* CollectionNode = nullptr;
        sDescNode* ChildNode = nullptr;

        uint32_t nUnitChildCount = GetCollectionCountForUnit(iUnitCtr);

        UnitNode = &((sDescTreeNode*)NewDescTree->ChildNodes)[iUnitCtr];

        //Set each description
        _snwprintf_s(UnitNode->szDesc, ARRAYSIZE(UnitNode->szDesc), _TRUNCATE, L"%s", m_psCurrentGameLoadingData->srgLoadingData.at(iUnitCtr).strCharacter.c_str());

        UnitNode->ChildNodes = new sDescTreeNode[nUnitChildCount];
        //All children have collection trees
        UnitNode->uChildType = DESC_NODETYPE_TREE;
        UnitNode->uChildAmt = nUnitChildCount;

#if GCPUPF_A_DEBUG
        strMsg.Format(L"Unit: \"%s\", %u of %u, %u total children\n", UnitNode->szDesc, iUnitCtr + 1, m_psCurrentGameLoadingData->srgLoadingData.size(), UnitNode->uChildAmt);
        OutputDebugString(strMsg);
#endif

        uint32_t nTotalPalettesUsedInUnit = 0;

        //Set data for each child group ("collection")
        for (uint32_t iCollectionCtr = 0; iCollectionCtr < nUnitChildCount; iCollectionCtr++)
        {
            CollectionNode = &((sDescTreeNode*)UnitNode->ChildNodes)[iCollectionCtr];

            //Set each collection data
            _snwprintf_s(CollectionNode->szDesc, ARRAYSIZE(CollectionNode->szDesc), _TRUNCATE, GetDescriptionForCollection(iUnitCtr, iCollectionCtr));
            //Collection children have nodes
            uint32_t nListedChildrenCount = GetNodeCountForCollection(iUnitCtr, iCollectionCtr);
            CollectionNode->uChildType = DESC_NODETYPE_NODE;
            CollectionNode->uChildAmt = nListedChildrenCount;
            CollectionNode->ChildNodes = (sDescTreeNode*)new sDescNode[nListedChildrenCount];

#if GCPUPF_A_DEBUG
            strMsg.Format(L"\tCollection: \"%s\", %u of %u, %u children\n", CollectionNode->szDesc, iCollectionCtr + 1, nUnitChildCount, nListedChildrenCount);
            OutputDebugString(strMsg);
#endif

            for (uint32_t nNodeIndex = 0; nNodeIndex < nListedChildrenCount; nNodeIndex++)
            {
                ChildNode = &((sDescNode*)CollectionNode->ChildNodes)[nNodeIndex];

                if (ShouldUseBasePaletteSet(iUnitCtr, nTotalPalettesUsedInUnit))
                {
                    _snwprintf_s(ChildNode->szDesc, ARRAYSIZE(ChildNode->szDesc), _TRUNCATE, L"%s", GetBasicPaletteNameForPalette(iUnitCtr, nNodeIndex));
                }
                else
                {
                    _snwprintf_s(ChildNode->szDesc, ARRAYSIZE(ChildNode->szDesc), _TRUNCATE, L"%s", m_psCurrentGameLoadingData->srgLoadingData.at(iUnitCtr).prgExtraPalettes.at(nNodeIndex).szPaletteName);
                }

                ChildNode->uUnitId = iUnitCtr;
                ChildNode->uPalId = nTotalPalettesUsedInUnit++;
                nTotalPaletteCount++;

#if GCPUPF_A_DEBUG
                strMsg.Format(L"\t\tPalette: \"%s\", %u of %u\n", ChildNode->szDesc, nNodeIndex + 1, nListedChildrenCount);
                OutputDebugString(strMsg);
#endif
            }
        }
    }

    m_nTotalPaletteCount = nTotalPaletteCount;

    strMsg.Format(L"CGameClassPerUnitPerFile_DIR::InitDescTree: Loaded %u palettes.\r\n", nTotalPaletteCount);
    OutputDebugString(strMsg);

    return NewDescTree;
}

std::vector<LPCWSTR> CGameClassPerUnitPerFile::GetBasicPaletteLabelsForUnit(uint32_t nUnitId)
{
    if (m_psCurrentGameLoadingData->ePaletteLayout != PaletteArrangementStyle::EachBasicNodeContainsAFullButtonLabelSet)
    {
        return m_psCurrentGameLoadingData->srgLoadingData.at(nUnitId).sNodeData.rgpszNodeNames;
    }
    else
    {
        return m_psCurrentGameLoadingData->srgLoadingData.at(nUnitId).sNodeData.rgpszButtonLabels;
    }
}

LPCWSTR CGameClassPerUnitPerFile::GetBasicPaletteNameForPalette(uint32_t nUnitId, uint32_t nPaletteId)
{
    if (m_psCurrentGameLoadingData->srgLoadingData.at(nUnitId).prgBasicPalettes.size())
    {
        return m_psCurrentGameLoadingData->srgLoadingData.at(nUnitId).prgBasicPalettes.at(nPaletteId).pszPaletteName;
    }
    else
    {
        return m_psCurrentGameLoadingData->srgLoadingData.at(nUnitId).sNodeData.rgpszButtonLabels.at(nPaletteId);
    }
}

size_t CGameClassPerUnitPerFile::GetBasicPaletteListSizeForUnit(uint32_t nUnitId)
{
    if (m_psCurrentGameLoadingData->srgLoadingData.at(nUnitId).prgBasicPalettes.size())
    {
        return m_psCurrentGameLoadingData->srgLoadingData.at(nUnitId).prgBasicPalettes.size();
    }
    else
    {
        return m_psCurrentGameLoadingData->srgLoadingData.at(nUnitId).sNodeData.rgpszButtonLabels.size();
    }
}

size_t CGameClassPerUnitPerFile::GetBasicPaletteCountForUnit(uint32_t nUnitId)
{
    return m_psCurrentGameLoadingData->srgLoadingData.at(nUnitId).sNodeData.rgpszNodeNames.size() * GetBasicPaletteListSizeForUnit(nUnitId);
}

bool CGameClassPerUnitPerFile::ShouldUseBasePaletteSet(uint32_t nUnitId, uint32_t nPaletteId)
{
    return (nPaletteId < GetBasicPaletteCountForUnit(nUnitId));
}

uint32_t CGameClassPerUnitPerFile::GetNodeCountForCollection(uint32_t nUnitId, uint32_t nCollectionId)
{
    uint32_t nAdjustedPaletteId = 0;

    if (nCollectionId != 0)
    {
        for (size_t iCollectionPos = 0; iCollectionPos < nCollectionId; iCollectionPos++)
        {
            nAdjustedPaletteId += GetBasicPaletteListSizeForUnit(nUnitId);
        }
    }

    if (ShouldUseBasePaletteSet(nUnitId, nAdjustedPaletteId))
    {
        return static_cast<uint32_t>(GetBasicPaletteListSizeForUnit(nUnitId));
    }
    else
    {
        return static_cast<uint32_t>(m_psCurrentGameLoadingData->srgLoadingData.at(nUnitId).prgExtraPalettes.size());
    }
}

uint32_t CGameClassPerUnitPerFile::GetPaletteCountForUnit(uint32_t nUnitId)
{
    size_t nTotalPaletteCount = m_psCurrentGameLoadingData->srgLoadingData.at(nUnitId).sNodeData.rgpszNodeNames.size() * GetBasicPaletteListSizeForUnit(nUnitId);
    nTotalPaletteCount += m_psCurrentGameLoadingData->srgLoadingData.at(nUnitId).prgExtraPalettes.size();

    return static_cast<uint32_t>(nTotalPaletteCount);
}

uint32_t CGameClassPerUnitPerFile::GetCollectionCountForUnit(uint32_t nUnitId)
{
    uint32_t nCollectionCount = 0;

    if (m_psCurrentGameLoadingData->srgLoadingData.at(nUnitId).sNodeData.rgpszButtonLabels.size() ||
        m_psCurrentGameLoadingData->srgLoadingData.at(nUnitId).prgBasicPalettes.size())
    {
        nCollectionCount = m_psCurrentGameLoadingData->srgLoadingData.at(nUnitId).sNodeData.rgpszNodeNames.size();
    }

    if (m_psCurrentGameLoadingData->srgLoadingData.at(nUnitId).prgExtraPalettes.size())
    {
        nCollectionCount++;
    }

    return nCollectionCount;
}

LPCWSTR CGameClassPerUnitPerFile::GetDescriptionForCollection(uint32_t nUnitId, uint32_t nCollectionId)
{
    if (nCollectionId < m_psCurrentGameLoadingData->srgLoadingData.at(nUnitId).sNodeData.rgpszNodeNames.size())
    {
        return m_psCurrentGameLoadingData->srgLoadingData.at(nUnitId).sNodeData.rgpszNodeNames.at(nCollectionId);
    }
    else
    {
        return L"Extras";
    }
}

void CGameClassPerUnitPerFile::LoadSpecificPaletteData(uint32_t nUnitId, uint32_t nPalId)
{
    // NOTE: we presume all palettes are 0x400 long for now
    const int cbPaletteSizeOnDisc = 0x400;
    // Sort option styles:
    //  Left, Right
    //     1, 2, 3, 4, 5, 6, 7, 8, 9
    //  Pal1, Pal2, Pal3, Pal4, Pal5
    //     Main, ex1, ex2, ex3

    if (m_psCurrentGameLoadingData->ePaletteLayout == PaletteArrangementStyle::EachBasicNodeContainsAFullButtonLabelSet)
    {
        const uint32_t nAdjustedPalId = nPalId % static_cast<uint32_t>(GetBasicPaletteListSizeForUnit(nUnitId));
        const uint32_t nPaletteSet = nPalId / static_cast<uint32_t>(GetBasicPaletteListSizeForUnit(nUnitId));

        m_pszCurrentPaletteName = GetBasicPaletteNameForPalette(nUnitId, nAdjustedPalId);
        m_nCurrentPaletteROMLocation = m_psCurrentGameLoadingData->srgLoadingData.at(nUnitId).nInitialLocation + (cbPaletteSizeOnDisc * nAdjustedPalId);
        m_nCurrentPaletteSizeInColors = cbPaletteSizeOnDisc / m_nSizeOfColorsInBytes;

        if (nPaletteSet)
        {
            // Walk forward one palette offset per set/node
            m_nCurrentPaletteROMLocation += (nPaletteSet * m_psCurrentGameLoadingData->srgLoadingData.at(nUnitId).sNodeData.nAdditionalBufferBetweenEachNode);
        }

        // Use the optional per-palette increment reflecting a buffer between palettes
        if (m_psCurrentGameLoadingData->srgLoadingData.at(nUnitId).prgBasicPalettes.size())
        {
            m_nCurrentPaletteROMLocation += m_psCurrentGameLoadingData->srgLoadingData.at(nUnitId).prgBasicPalettes.at(nAdjustedPalId).nPaletteShiftFromBase;
        }
    }
    else // PaletteArrangementStyle::OneButtonLabelEntryPerEachNode
    {
        if (ShouldUseBasePaletteSet(nUnitId, nPalId))
        {
            const uint32_t nPalIdInPaletteList = nPalId % GetBasicPaletteListSizeForUnit(nUnitId);
            const uint32_t nCollectionId = static_cast<uint32_t>(floor(static_cast<double>(nPalId) / static_cast<double>(GetBasicPaletteListSizeForUnit(nUnitId))));

            m_pszCurrentPaletteName = GetBasicPaletteNameForPalette(nUnitId, nPalIdInPaletteList);

            m_nCurrentPaletteROMLocation = m_psCurrentGameLoadingData->srgLoadingData.at(nUnitId).nInitialLocation;
            m_nCurrentPaletteROMLocation += nCollectionId * m_psCurrentGameLoadingData->srgLoadingData.at(nUnitId).sNodeData.nAdditionalBufferBetweenEachNode;
            // Use the optional per-palette increment reflecting a buffer between palettes
            if (m_nCurrentPaletteROMLocation += m_psCurrentGameLoadingData->srgLoadingData.at(nUnitId).prgBasicPalettes.size())
            {
                m_nCurrentPaletteROMLocation += m_psCurrentGameLoadingData->srgLoadingData.at(nUnitId).prgBasicPalettes.at(nPalIdInPaletteList).nPaletteShiftFromBase;
            }
            m_nCurrentPaletteSizeInColors = cbPaletteSizeOnDisc / m_nSizeOfColorsInBytes;
        }
        else // effects palettes
        {
            const size_t nAdjustedPaletteId = nPalId - GetBasicPaletteCountForUnit(nUnitId);

            const int cbPaletteSizeOnDisc = m_psCurrentGameLoadingData->srgLoadingData.at(nUnitId).prgExtraPalettes.at(nAdjustedPaletteId).nPaletteOffsetEnd - m_psCurrentGameLoadingData->srgLoadingData.at(nUnitId).prgExtraPalettes[nAdjustedPaletteId].nPaletteOffset;

            m_pszCurrentPaletteName = m_psCurrentGameLoadingData->srgLoadingData.at(nUnitId).prgExtraPalettes.at(nAdjustedPaletteId).szPaletteName;
            m_nCurrentPaletteROMLocation = m_psCurrentGameLoadingData->srgLoadingData.at(nUnitId).prgExtraPalettes.at(nAdjustedPaletteId).nPaletteOffset;
            m_nCurrentPaletteSizeInColors = cbPaletteSizeOnDisc / m_nSizeOfColorsInBytes;
        }
    }

    WarnIfPaletteIsOversized(nUnitId, nPalId, m_nCurrentPaletteROMLocation, m_nCurrentPaletteSizeInColors, m_pszCurrentPaletteName);
}

BOOL CGameClassPerUnitPerFile::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
{
    //Reset palette sources
    ClearSrcPal();

    if (Node01 == -1)
    {
        return FALSE;
    }

    sDescNode* NodeGet = GetMainTree()->GetDescNode(Node01, Node02, Node03, Node04);

    if (!NodeGet)
    {
        return FALSE;
    }

    //Get rid of any palettes if there are any
    BasePalGroup.FlushPalAll();

    //Change the image id if we need to
    uint32_t nImgUnitId = INVALID_UNIT_VALUE;
    uint32_t nTargetImgId = 0;
    uint32_t nSrcStart = 0;
    uint32_t nSrcAmt = 1;
    uint32_t nNodeIncrement = 1;

    bool fShouldUseAlternateLoadLogic = false;

    if (ShouldUseBasePaletteSet(NodeGet->uUnitId, NodeGet->uPalId))
    {
        pButtonLabelSet = GetBasicPaletteLabelsForUnit(NodeGet->uUnitId);

        if (m_psCurrentGameLoadingData->ePaletteLayout == PaletteArrangementStyle::EachBasicNodeContainsAFullButtonLabelSet)
        {
            // The following logic locks us in as having each node contain one full palette set.  Any additional nodes
            // will also contain a full palette set.  If the palette set is instead spread one palette per node, this logic
            // will need to be updated.
            const int nPaletteSetOfInterest = static_cast<int>(floor(static_cast<double>(NodeGet->uPalId) / static_cast<double>(GetBasicPaletteListSizeForUnit(NodeGet->uUnitId))));
            nSrcStart = nPaletteSetOfInterest * GetBasicPaletteListSizeForUnit(NodeGet->uUnitId);
            nImgUnitId = m_psCurrentGameLoadingData->srgLoadingData.at(NodeGet->uUnitId).nImageUnitIndex;
            nTargetImgId = m_psCurrentGameLoadingData->srgLoadingData.at(NodeGet->uUnitId).nImagePreviewIndex;

            nSrcAmt = static_cast<uint32_t>(pButtonLabelSet.size());

            nNodeIncrement = 1;
        }
        else
        {
            // For basic nodes, use the built-in data
            nSrcStart = NodeGet->uPalId % GetBasicPaletteListSizeForUnit(NodeGet->uUnitId);
            nSrcAmt = static_cast<uint32_t>(m_psCurrentGameLoadingData->srgLoadingData.at(NodeGet->uUnitId).sNodeData.rgpszNodeNames.size());
            nNodeIncrement = static_cast<uint32_t>(GetBasicPaletteListSizeForUnit(NodeGet->uUnitId));

            // Use the specific (relative) palette data's specification of the preview to use if provided, otherwise
            // fall back to the basic palette info's specification
            if (m_psCurrentGameLoadingData->srgLoadingData.at(NodeGet->uUnitId).prgBasicPalettes.size() &&
                (m_psCurrentGameLoadingData->srgLoadingData.at(NodeGet->uUnitId).prgBasicPalettes.at(nSrcStart).indexImageUnit != INVALID_UNIT_VALUE))
            {
                nImgUnitId = m_psCurrentGameLoadingData->srgLoadingData.at(NodeGet->uUnitId).prgBasicPalettes.at(nSrcStart).indexImageUnit;
                nTargetImgId = m_psCurrentGameLoadingData->srgLoadingData.at(NodeGet->uUnitId).prgBasicPalettes.at(nSrcStart).indexImageSprite;
            }
            else
            {
                nImgUnitId = m_psCurrentGameLoadingData->srgLoadingData.at(NodeGet->uUnitId).nImageUnitIndex;
                nTargetImgId = m_psCurrentGameLoadingData->srgLoadingData.at(NodeGet->uUnitId).nImagePreviewIndex;
            }
        }
    }
    else
    {
        // For extras, use the built-in data
        const size_t nCountBasicPalettes = GetBasicPaletteCountForUnit(NodeGet->uUnitId);
        const uint32_t nPalIdInNode = NodeGet->uPalId - static_cast<uint32_t>(nCountBasicPalettes);
        nSrcStart = NodeGet->uPalId;
        nSrcAmt = 1;
        pButtonLabelSet = DEF_NOBUTTONS;
        const sGame_PaletteDataset* paletteDataSet = &m_psCurrentGameLoadingData->srgLoadingData.at(NodeGet->uUnitId).prgExtraPalettes.at(nPalIdInNode);
        nImgUnitId = paletteDataSet->indexImgToUse;
        nTargetImgId = paletteDataSet->indexOffsetToUse;

        if (paletteDataSet->pPalettePairingInfo)
        {
            if ((paletteDataSet->pPalettePairingInfo->nPalettesToJoin > 1) &&
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

                    const sGame_PaletteDataset* paletteDataSetToJoin = &m_psCurrentGameLoadingData->srgLoadingData.at(NodeGet->uUnitId).prgExtraPalettes.at(nPalIdInNode + vnPeerPaletteDistances.at(nPairIndex));

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
                    sDescNode* sSearchedNode = GetMainTree()->GetDescNode(Node01, Node02, nPalIdInNode + vnPeerPaletteDistances.at(nNodeIndex), -1);

                    if (sSearchedNode)
                    {
                        vsJoinedNodes.push_back(sSearchedNode);
                    }
                    else
                    {
                        fAllNodesFound = false;
                        break;
                    }
                }

                if (fAllNodesFound)
                {
                    fShouldUseAlternateLoadLogic = true;

                    std::vector<sImgTicket*> vsImagePairs;
                    sImgTicket* pPreviousImage = nullptr;

                    for (int32_t nNodeIndex = (paletteDataSet->pPalettePairingInfo->nPalettesToJoin - 1); nNodeIndex >= 0; nNodeIndex--)
                    {
                        sImgTicket* pThisImage = CreateImgTicket(vsPaletteDataSetToJoin.at(nNodeIndex)->indexImgToUse, vsPaletteDataSetToJoin.at(nNodeIndex)->indexOffsetToUse, pPreviousImage);

                        vsImagePairs.push_back(pThisImage);

                        pPreviousImage = pThisImage;
                    }

                    ClearSetImgTicket(vsImagePairs[(paletteDataSet->pPalettePairingInfo->nPalettesToJoin - 1)]);

                    for (uint32_t nPairIndex = 0; nPairIndex < paletteDataSet->pPalettePairingInfo->nPalettesToJoin; nPairIndex++)
                    {
                        //Set each palette
                        CreateDefPal(vsJoinedNodes[nPairIndex], nPairIndex);

                        SetSourcePal(nPairIndex, NodeGet->uUnitId, nSrcStart + vnPeerPaletteDistances.at(nPairIndex), nSrcAmt, nNodeIncrement);
                    }
                }
                else
                {
                    OutputDebugString(L"ERROR: Invalid palette pairing requested.   You probably want to check the linkage here.\n");
                }
            }
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

LPCWSTR CGameClassPerUnitPerFile::GetGameName()
{
    if (m_pCRC32SpecificData)
    {
        return m_pCRC32SpecificData->szFriendlyName;
    }
    else
    {
        return m_strGameFriendlyName.c_str();
    }
}

BOOL CGameClassPerUnitPerFile::LoadFile(CFile* LoadedFile, uint32_t nUnitNumber)
{
    BOOL fSuccess = TRUE;
    CString strInfo;

    strInfo.Format(L"CGameClassPerUnitPerFile_DIR::LoadFile: Preparing to load data for unit number %u (character %s)\n", nUnitNumber, m_psCurrentGameLoadingData->srgLoadingData.at(nUnitNumber).strCharacter.c_str());
    OutputDebugString(strInfo);

    strInfo.Format(L"\tCGameClassPerUnitPerFile_DIR::LoadFile: Loaded palettes starting at location 0x%x\n", m_psCurrentGameLoadingData->srgLoadingData.at(nUnitNumber).nInitialLocation);
    OutputDebugString(strInfo);

    const uint32_t nPalAmt = GetPaletteCountForUnit(nUnitNumber);

    if (m_pppDataBuffer32[nUnitNumber] == nullptr)
    {
        m_pppDataBuffer32[nUnitNumber] = new uint32_t * [nPalAmt];
        memset(m_pppDataBuffer32[nUnitNumber], 0, sizeof(uint32_t*) * nPalAmt);
    }

    // These are already sorted, no need to redirect
    rgUnitRedir[nUnitNumber] = nUnitNumber;

    for (uint32_t nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
    {
        LoadSpecificPaletteData(nUnitNumber, nPalCtr);

        m_pppDataBuffer32[nUnitNumber][nPalCtr] = new uint32_t[m_nCurrentPaletteSizeInColors];

        LoadedFile->Seek(m_nCurrentPaletteROMLocation, CFile::begin);
        LoadedFile->Read(m_pppDataBuffer32[nUnitNumber][nPalCtr], m_nCurrentPaletteSizeInColors * m_nSizeOfColorsInBytes);

#if GCPUPF_A_DEBUG
        strInfo.Format(L"\tCGameClassPerUnitPerFile_DIR::LoadFile: Loaded palette '%s' from location 0x%x\n", m_pszCurrentPaletteName, m_nCurrentPaletteROMLocation);
        OutputDebugString(strInfo);
#endif
    }

    rgUnitRedir[nUnitAmt] = INVALID_UNIT_VALUE;

    return fSuccess;
}

BOOL CGameClassPerUnitPerFile::SaveFile(CFile* SaveFile, uint32_t nUnitId)
{
    uint32_t nTotalPalettesSaved = 0;
    const uint32_t nPalAmt = GetPaletteCountForUnit(nUnitId);

    for (uint32_t nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
    {
        if (IsPaletteDirty(nUnitId, nPalCtr))
        {
            LoadSpecificPaletteData(nUnitId, nPalCtr);

            SaveFile->Seek(m_nCurrentPaletteROMLocation, CFile::begin);
            if (GameIsUsing16BitColor())
            {
                SaveFile->Write(m_pppDataBuffer[nUnitId][nPalCtr], m_nCurrentPaletteSizeInColors * m_nSizeOfColorsInBytes);
            }
            else if (GameIsUsing32BitColor())
            {
                SaveFile->Write(m_pppDataBuffer32[nUnitId][nPalCtr], m_nCurrentPaletteSizeInColors * m_nSizeOfColorsInBytes);
            }

            nTotalPalettesSaved++;
        }
    }

    CString strMsg;
    strMsg.Format(L"CGameClass::SaveFile: Saved 0x%x palettes to disk for unit %u\n", nTotalPalettesSaved, nUnitId);
    OutputDebugString(strMsg);

    return TRUE;
}

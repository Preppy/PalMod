#include "StdAfx.h"
#include "Game_BlazBlueCF_S.h"
#include "BlazBlueCF_S_DEF.h"
#include "..\PalMod.h"

uint32_t CGame_BlazBlueCF_S::uRuleCtr = 0;

CDescTree CGame_BlazBlueCF_S::MainDescTree = nullptr;

#define BlazBlueCF_S_DEBUG DEFAULT_GAME_DEBUG_STATE

CGame_BlazBlueCF_S::CGame_BlazBlueCF_S(uint32_t nConfirmedROMSize /* = -1 */)
{
    createPalOptions = { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX, 0 };
    SetAlphaMode(AlphaMode::GameUsesVariableAlpha);
    m_fGameUsesAlphaValue = true;
    SetColorMode(ColMode::COLMODE_BGRA8888);

    InitializeStatics();

    // Don't load extras
    m_pszExtraFilename = nullptr;

    nFileAmt = nUnitAmt = m_nTotalInternalUnits = static_cast<uint32_t>(BlazBlueCF_S_CharacterData.size());

    InitDataBuffer();

    nGameFlag = BlazBlueCF_S;
    nImgGameFlag = IMGDAT_SECTION_ARCSYS;
    m_prgGameImageSet = BlazBlueCF_S_IMGIDS_USED;

    //Set the image out display type
    DisplayType = eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT;

    // The label set is variable, so set correctly each time we load that specific unit
    pButtonLabelSet = DEF_NOBUTTONS;

    //Create the redirect buffer
    rgUnitRedir = new uint32_t[nUnitAmt + 1];
    memset(rgUnitRedir, 0, sizeof(uint32_t) * nUnitAmt);

    FlushChangeTrackingArray();
    PrepChangeTrackingArray();
}

CGame_BlazBlueCF_S::~CGame_BlazBlueCF_S()
{
    ClearDataBuffer();
    //Get rid of the file changed flag
    FlushChangeTrackingArray();
}

void CGame_BlazBlueCF_S::InitializeStatics()
{
    MainDescTree.SetRootTree(CGame_BlazBlueCF_S::InitDescTree());
}

sFileRule CGame_BlazBlueCF_S::GetRule(uint32_t nUnitId)
{
    sFileRule NewFileRule;

    const uint32_t nAdjustedUnitId = (nUnitId & RULE_COUNTER_DEMASK);
    _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, L"%s", BlazBlueCF_S_CharacterData[nAdjustedUnitId].pszFileName);
    NewFileRule.uUnitId = nUnitId;
    NewFileRule.uVerifyVar = BlazBlueCF_S_CharacterData[nAdjustedUnitId].nExpectedFileSize;

    return NewFileRule;
}

sFileRule CGame_BlazBlueCF_S::GetNextRule()
{
    sFileRule NewFileRule = GetRule(uRuleCtr);

    uRuleCtr++;

    if (uRuleCtr >= BlazBlueCF_S_CharacterData.size())
    {
        uRuleCtr = INVALID_UNIT_VALUE;
    }

    return NewFileRule;
}

sDescTreeNode* CGame_BlazBlueCF_S::InitDescTree()
{
    uint32_t nTotalPaletteCount = 0;
    uint32_t nUnitCt = static_cast<uint32_t>(BlazBlueCF_S_CharacterData.size());

    sDescTreeNode* NewDescTree = new sDescTreeNode;

    //Create the main character tree
    _snwprintf_s(NewDescTree->szDesc, ARRAYSIZE(NewDescTree->szDesc), _TRUNCATE, L"%s", g_GameFriendlyName[BlazBlueCF_S]);
    NewDescTree->ChildNodes = new sDescTreeNode[nUnitCt];
    NewDescTree->uChildAmt = nUnitCt;
    //All units have tree children
    NewDescTree->uChildType = DESC_NODETYPE_TREE;

    CString strMsg;
    OutputDebugString(L"CGame_BlazBlueCF_S_DIR::InitDescTree: Building desc tree for BlazBlueCF_S...\n");

    //Go through each character (Units)
    for (uint32_t iUnitCtr = 0; iUnitCtr < nUnitCt; iUnitCtr++)
    {
        sDescTreeNode* UnitNode = nullptr;
        sDescTreeNode* CollectionNode = nullptr;
        sDescNode* ChildNode = nullptr;


        UnitNode = &((sDescTreeNode*)NewDescTree->ChildNodes)[iUnitCtr];

        //Set each description
        _snwprintf_s(UnitNode->szDesc, ARRAYSIZE(UnitNode->szDesc), _TRUNCATE, L"%s", BlazBlueCF_S_CharacterData[iUnitCtr].pszCharacter);
        //All children have collection trees
        uint32_t nUnitChildCount = GetCollectionCountForUnit(iUnitCtr);
        UnitNode->uChildType = DESC_NODETYPE_TREE;
        UnitNode->uChildAmt = nUnitChildCount;
        UnitNode->ChildNodes = new sDescTreeNode[nUnitChildCount];

#if BlazBlueCF_S_DEBUG
        strMsg.Format(L"Unit: \"%s\", %u of %u, %u total children\n", UnitNode->szDesc, iUnitCtr + 1, nUnitCt, UnitNode->uChildAmt);
        OutputDebugString(strMsg);
#endif

        uint32_t nTotalPalettesUsedInUnit = 0;

        //Set data for each child group (Collections)
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

#if BlazBlueCF_S_DEBUG
            strMsg.Format(L"\tCollection: \"%s\", %u of %u, %u children\n", CollectionNode->szDesc, iCollectionCtr + 1, nUnitChildCount, nListedChildrenCount);
            OutputDebugString(strMsg);
#endif

            //Set data for each child group (Palettes)
            for (uint32_t nNodeIndex = 0; nNodeIndex < nListedChildrenCount; nNodeIndex++)
            {
                ChildNode = &((sDescNode*)CollectionNode->ChildNodes)[nNodeIndex];

                if (ShouldUseBasePaletteSet(iUnitCtr, iCollectionCtr))
                {
                    _snwprintf_s(ChildNode->szDesc, ARRAYSIZE(ChildNode->szDesc), _TRUNCATE, L"%s", BlazBlueCF_S_CharacterData[iUnitCtr].ppszPaletteList[nNodeIndex]);
                }
                else
                {
                    _snwprintf_s(ChildNode->szDesc, ARRAYSIZE(ChildNode->szDesc), _TRUNCATE, L"%s", BlazBlueCF_S_CharacterData[iUnitCtr].prgExtraPalettes[nNodeIndex].szPaletteName);
                }

                ChildNode->uUnitId = iUnitCtr;
                ChildNode->uPalId = nTotalPalettesUsedInUnit++;
                nTotalPaletteCount++;

#if BlazBlueCF_S_DEBUG
                strMsg.Format(L"\t\tPalette: \"%s\", %u of %u\n", ChildNode->szDesc, nNodeIndex + 1, nListedChildrenCount);
                OutputDebugString(strMsg);
#endif
            }
        }
    }

    m_nTotalPaletteCount = nTotalPaletteCount;

    strMsg.Format(L"CGame_BlazBlueCF_S_DIR::InitDescTree: Loaded %u palettes for BBCF ROM\n", nTotalPaletteCount);
    OutputDebugString(strMsg);

    return NewDescTree;
}

uint32_t CGame_BlazBlueCF_S::GetCollectionCountForUnit(uint32_t nUnitId)
{
    return static_cast<uint32_t>(BlazBlueCF_S_CharacterData[nUnitId].ppszCollectionList.size());
}

bool CGame_BlazBlueCF_S::ShouldUseBasePaletteSet(uint32_t nUnitId, uint32_t nCollectionId)
{
    return (nCollectionId < GetBasicPaletteCountForUnit(nUnitId));
}

uint32_t CGame_BlazBlueCF_S::GetNodeCountForCollection(uint32_t nUnitId, uint32_t nCollectionId)
{
    if (ShouldUseBasePaletteSet(nUnitId, nCollectionId))
    {
        return static_cast<uint32_t>(BlazBlueCF_S_CharacterData[nUnitId].ppszPaletteList.size());
    }
    else
    {
        return static_cast<uint32_t>(BlazBlueCF_S_CharacterData[nUnitId].prgExtraPalettes.size());
    }
}

uint32_t CGame_BlazBlueCF_S::GetPaletteCountForUnit(uint32_t nUnitId)
{
    size_t nTotalPaletteCount = GetBasicPaletteCountForUnit(nUnitId);
    nTotalPaletteCount += BlazBlueCF_S_CharacterData[nUnitId].prgExtraPalettes.size();

    return static_cast<uint32_t>(nTotalPaletteCount);
}

LPCWSTR CGame_BlazBlueCF_S::GetDescriptionForCollection(uint32_t nUnitId, uint32_t nCollectionId)
{
    if (!BlazBlueCF_S_CharacterData[nUnitId].ppszCollectionList.empty())
    {
        return L"%s", BlazBlueCF_S_CharacterData[nUnitId].ppszCollectionList[nCollectionId];
    }
    else
    {
        return L"Extras";
    }
}

size_t CGame_BlazBlueCF_S::GetBasicPaletteCountForUnit(uint32_t nUnitId)
{
    return BlazBlueCF_S_CharacterData[nUnitId].ppszCollectionList.size() * BlazBlueCF_S_CharacterData[nUnitId].ppszPaletteList.size();
}

void CGame_BlazBlueCF_S::LoadSpecificPaletteData(uint32_t nUnitId, uint32_t nPalId)
{
    if (nPalId < GetBasicPaletteCountForUnit(nUnitId))
    {
        // BBCF palettes are all 0x100 colors long
        const int cbPaletteSizeOnDisc = 0x400;

        const uint32_t nPalIdInPaleteList = nPalId % BlazBlueCF_S_CharacterData[nUnitId].ppszPaletteList.size();

        m_pszCurrentPaletteName = BlazBlueCF_S_CharacterData[nUnitId].ppszPaletteList[nPalIdInPaleteList];
        m_nCurrentPaletteROMLocation = BlazBlueCF_S_CharacterData[nUnitId].nInitialLocation + (cbPaletteSizeOnDisc * nPalId) + (0x20 * nPalId);
        m_nCurrentPaletteSizeInColors = cbPaletteSizeOnDisc / m_nSizeOfColorsInBytes;

    }
    else // effects palettes
    {
        size_t nAdjustedPaletteId = nPalId - GetBasicPaletteCountForUnit(nUnitId);

        const int cbPaletteSizeOnDisc = BlazBlueCF_S_CharacterData[nUnitId].prgExtraPalettes[nAdjustedPaletteId].nPaletteOffsetEnd - BlazBlueCF_S_CharacterData[nUnitId].prgExtraPalettes[nAdjustedPaletteId].nPaletteOffset;

        m_pszCurrentPaletteName = BlazBlueCF_S_CharacterData[nUnitId].prgExtraPalettes[nAdjustedPaletteId].szPaletteName;
        m_nCurrentPaletteROMLocation = BlazBlueCF_S_CharacterData[nUnitId].prgExtraPalettes[nAdjustedPaletteId].nPaletteOffset;
        m_nCurrentPaletteSizeInColors = cbPaletteSizeOnDisc / m_nSizeOfColorsInBytes;
    }

    createPalOptions.nTransparencyColorPosition = 0;

    // We dont need to move the transparency tile for now, itll be useful later for particles, uncomment and setup a better check for when i get around to those
    /*
    if (BlazBlueCF_S_CharacterData[nUnitId].ppszCollectionList.empty())
    {
        createPalOptions.nTransparencyColorPosition = 257;

    }
    else
    {
        createPalOptions.nTransparencyColorPosition = 0;
    }
    */
}

BOOL CGame_BlazBlueCF_S::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
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

    //Change the image id if we need to
    int nTargetImgId = 0;
    uint32_t nImgUnitId = INVALID_UNIT_VALUE;
    uint32_t nSrcStart = 0;
    uint32_t nSrcAmt = 1;
    uint32_t nNodeIncrement = 1;

    //Get rid of any palettes if there are any
    BasePalGroup.FlushPalAll();

    bool fShouldUseAlternateLoadLogic = false;

    const size_t nCountBasicPalettes = GetBasicPaletteCountForUnit(NodeGet->uUnitId);

    if (NodeGet->uPalId < nCountBasicPalettes)
    {
        // core palettes
        nSrcStart = NodeGet->uPalId % BlazBlueCF_S_CharacterData[NodeGet->uUnitId].ppszPaletteList.size();
        nSrcAmt = static_cast<uint32_t>(BlazBlueCF_S_CharacterData[NodeGet->uUnitId].ppszCollectionList.size());
        nNodeIncrement = static_cast<uint32_t>(BlazBlueCF_S_CharacterData[NodeGet->uUnitId].ppszPaletteList.size());
        pButtonLabelSet = BlazBlueCF_S_CharacterData[NodeGet->uUnitId].ppszCollectionList;

        nImgUnitId = BlazBlueCF_S_CharacterData[NodeGet->uUnitId].nSpriteUnitIndex;
        nTargetImgId = nSrcStart;
    }
    else
    {
        // effects palettes
        uint32_t nPalIdInNode = NodeGet->uPalId - static_cast<uint32_t>(nCountBasicPalettes);
        nSrcStart = NodeGet->uPalId;
        nSrcAmt = 1;
        pButtonLabelSet = DEF_NOBUTTONS;
        const sGame_PaletteDataset* paletteDataSet = &BlazBlueCF_S_CharacterData[NodeGet->uUnitId].prgExtraPalettes[nPalIdInNode];
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

                    const sGame_PaletteDataset* paletteDataSetToJoin = &BlazBlueCF_S_CharacterData[NodeGet->uUnitId].prgExtraPalettes[nPalIdInNode + vnPeerPaletteDistances[nPairIndex]];

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
                    sDescNode* sSearchedNode = GetMainTree()->GetDescNode(Node01, Node02, nPalIdInNode + vnPeerPaletteDistances[nNodeIndex], -1);

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

BOOL CGame_BlazBlueCF_S::LoadFile(CFile* LoadedFile, uint32_t nUnitNumber)
{
    BOOL fSuccess = TRUE;
    CString strInfo;

    strInfo.Format(L"CGame_BlazBlueCF_S_DIR::LoadFile: Preparing to load data for unit number %u (character %s)\n", nUnitNumber, BlazBlueCF_S_CharacterData[nUnitNumber].pszCharacter);
    OutputDebugString(strInfo);

#ifdef USE_DYNAMIC_LOCATION_LOOKUP
    LONGLONG nPalettePointer = 0;

    LoadedFile->Seek(0, CFile::begin);
    LoadedFile->Read(&nPalettePointer, 0x02);

    uint32_t nPaletteStart = 0;

    LoadedFile->Seek(nPalettePointer + 0x0c, CFile::begin);
    LoadedFile->Read(&nPaletteStart, 0x04);

    BlazBlueCF_S_CharacterData[nUnitNumber].nInitialLocation = nPaletteStart + 0x90;
#endif

    rgUnitRedir[nUnitAmt] = INVALID_UNIT_VALUE;
    strInfo.Format(L"\tCGame_BlazBlueCF_S_DIR::LoadFile: Loaded palettes starting at location 0x%x\n", BlazBlueCF_S_CharacterData[nUnitNumber].nInitialLocation);
    OutputDebugString(strInfo);

    uint32_t nPalAmt = GetPaletteCountForUnit(nUnitNumber);

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

#if BlazBlueCF_S_DEBUG
        strInfo.Format(L"\tCGame_BlazBlueCF_S_DIR::LoadFile: Loaded palette '%s' from location 0x%x\n", m_pszCurrentPaletteName, m_nCurrentPaletteROMLocation);
        OutputDebugString(strInfo);
#endif
    }

    rgUnitRedir[nUnitAmt] = INVALID_UNIT_VALUE;

    return fSuccess;
}

BOOL CGame_BlazBlueCF_S::SaveFile(CFile* SaveFile, uint32_t nUnitId)
{
    uint32_t nTotalPalettesSaved = 0;
    uint32_t nPalAmt = GetPaletteCountForUnit(nUnitId);

    for (uint32_t nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
    {
        if (IsPaletteDirty(nUnitId, nPalCtr))
        {
            LoadSpecificPaletteData(nUnitId, nPalCtr);

            SaveFile->Seek(m_nCurrentPaletteROMLocation, CFile::begin);
            SaveFile->Write(m_pppDataBuffer32[nUnitId][nPalCtr], m_nCurrentPaletteSizeInColors * m_nSizeOfColorsInBytes);

            nTotalPalettesSaved++;
        }
    }

    CString strMsg;
    strMsg.Format(L"CGameClass::SaveFile: Saved 0x%x palettes to disk for unit %u\n", nTotalPalettesSaved, nUnitId);
    OutputDebugString(strMsg);

    return TRUE;
}

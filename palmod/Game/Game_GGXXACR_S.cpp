#include "StdAfx.h"
#include "Game_GGXXACR_S.h"
#include "GGXXACR_S_DEF.h"
#include "..\PalMod.h"

UINT16 CGame_GGXXACR_S::uRuleCtr = 0;

CDescTree CGame_GGXXACR_S::MainDescTree = nullptr;

#define GGXXACR_S_DEBUG DEFAULT_GAME_DEBUG_STATE

CGame_GGXXACR_S::CGame_GGXXACR_S(UINT32 nConfirmedROMSize /* = -1 */)
{
    createPalOptions = { NO_SPECIAL_OPTIONS, WRITE_MAX, 0 };
    SetAlphaMode(AlphaMode::GameUsesVariableAlpha);
    m_fGameUsesAlphaValue = true;
    SetColorMode(ColMode::COLMODE_ARGB7888);

    InitializeStatics();

    // Don't load extras
    m_pszExtraFilename = nullptr;

    nFileAmt = nUnitAmt = m_nTotalInternalUnits = ARRAYSIZE(GGXXACR_S_CharacterData);

    InitDataBuffer();

    nGameFlag = GGXXACR_S;
    nImgGameFlag = IMGDAT_SECTION_GUILTYGEAR;
    m_prgGameImageSet = GGXX_ACR_IMGIDS_USED;
    nImgUnitAmt = ARRAYSIZE(GGXX_ACR_IMGIDS_USED);

    //Set the image out display type
    DisplayType = eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT;

    // The label set is variable, so set correctly each time we load that specific unit
    pButtonLabelSet = DEF_NOBUTTONS;
    m_nNumberOfColorOptions = ARRAYSIZE(DEF_NOBUTTONS);

    //Create the redirect buffer
    rgUnitRedir = new UINT16[nUnitAmt + 1];
    memset(rgUnitRedir, 0, sizeof(UINT16) * nUnitAmt);

    FlushChangeTrackingArray();
    PrepChangeTrackingArray();
}

CGame_GGXXACR_S::~CGame_GGXXACR_S()
{
    ClearDataBuffer();
    //Get rid of the file changed flag
    FlushChangeTrackingArray();
}

void CGame_GGXXACR_S::InitializeStatics()
{
    MainDescTree.SetRootTree(CGame_GGXXACR_S::InitDescTree());
}

sFileRule CGame_GGXXACR_S::GetRule(UINT16 nUnitId)
{
    sFileRule NewFileRule;

    const UINT16 nAdjustedUnitId = (nUnitId & 0x00FF);
    _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, L"%s", GGXXACR_S_CharacterData[nAdjustedUnitId].pszFileName);
    NewFileRule.uUnitId = nUnitId;
    NewFileRule.uVerifyVar = GGXXACR_S_CharacterData[nAdjustedUnitId].nExpectedFileSize;

    return NewFileRule;
}

sFileRule CGame_GGXXACR_S::GetNextRule()
{
    sFileRule NewFileRule = GetRule(uRuleCtr);

    uRuleCtr++;

    if (uRuleCtr >= ARRAYSIZE(GGXXACR_S_CharacterData))
    {
        uRuleCtr = INVALID_UNIT_VALUE;
    }

    return NewFileRule;
}

sDescTreeNode* CGame_GGXXACR_S::InitDescTree()
{
    UINT32 nTotalPaletteCount = 0;
    UINT16 nUnitCt = ARRAYSIZE(GGXXACR_S_CharacterData);

    sDescTreeNode* NewDescTree = new sDescTreeNode;

    //Create the main character tree
    _snwprintf_s(NewDescTree->szDesc, ARRAYSIZE(NewDescTree->szDesc), _TRUNCATE, L"%s", g_GameFriendlyName[GGXXACR_S]);
    NewDescTree->ChildNodes = new sDescTreeNode[nUnitCt];
    NewDescTree->uChildAmt = nUnitCt;
    //All units have tree children
    NewDescTree->uChildType = DESC_NODETYPE_TREE;

    CString strMsg;
    OutputDebugString(L"CGame_GGXXACR_S_DIR::InitDescTree: Building desc tree for GGXXACR_S...\n");

    //Go through each character
    for (UINT16 iUnitCtr = 0; iUnitCtr < nUnitCt; iUnitCtr++)
    {
        sDescTreeNode* UnitNode = nullptr;
        sDescTreeNode* CollectionNode = nullptr;
        sDescNode* ChildNode = nullptr;

        UINT16 nUnitChildCount = GetCollectionCountForUnit(iUnitCtr);

        UnitNode = &((sDescTreeNode*)NewDescTree->ChildNodes)[iUnitCtr];

        //Set each description
        _snwprintf_s(UnitNode->szDesc, ARRAYSIZE(UnitNode->szDesc), _TRUNCATE, L"%s", GGXXACR_S_CharacterData[iUnitCtr].pszCharacter);

        UnitNode->ChildNodes = new sDescTreeNode[nUnitChildCount];
        //All children have collection trees
        UnitNode->uChildType = DESC_NODETYPE_TREE;
        UnitNode->uChildAmt = nUnitChildCount;

#if GGXXACR_S_DEBUG
        strMsg.Format(L"Unit: \"%s\", %u of %u, %u total children\n", UnitNode->szDesc, iUnitCtr + 1, nUnitCt, UnitNode->uChildAmt);
        OutputDebugString(strMsg);
#endif

        UINT16 nTotalPalettesUsedInUnit = 0;

        //Set data for each child group ("collection")
        for (UINT16 iCollectionCtr = 0; iCollectionCtr < nUnitChildCount; iCollectionCtr++)
        {
            CollectionNode = &((sDescTreeNode*)UnitNode->ChildNodes)[iCollectionCtr];

            //Set each collection data
            _snwprintf_s(CollectionNode->szDesc, ARRAYSIZE(CollectionNode->szDesc), _TRUNCATE, GetDescriptionForCollection(iUnitCtr, iCollectionCtr));
            //Collection children have nodes
            UINT16 nListedChildrenCount = GetNodeCountForCollection(iUnitCtr, iCollectionCtr);
            CollectionNode->uChildType = DESC_NODETYPE_NODE;
            CollectionNode->uChildAmt = nListedChildrenCount;
            CollectionNode->ChildNodes = (sDescTreeNode*)new sDescNode[nListedChildrenCount];

#if GGXXACR_S_DEBUG
            strMsg.Format(L"\tCollection: \"%s\", %u of %u, %u children\n", CollectionNode->szDesc, iCollectionCtr + 1, nUnitChildCount, nListedChildrenCount);
            OutputDebugString(strMsg);
#endif

            for (UINT16 nNodeIndex = 0; nNodeIndex < nListedChildrenCount; nNodeIndex++)
            {
                ChildNode = &((sDescNode*)CollectionNode->ChildNodes)[nNodeIndex];

                if (ShouldUseBasePaletteSet(iUnitCtr, iCollectionCtr))
                {
                    _snwprintf_s(ChildNode->szDesc, ARRAYSIZE(ChildNode->szDesc), _TRUNCATE, L"%s", GGXXACR_S_CharacterData[iUnitCtr].ppszPaletteList[nNodeIndex]);
                }
                else
                {
                    _snwprintf_s(ChildNode->szDesc, ARRAYSIZE(ChildNode->szDesc), _TRUNCATE, L"%s", GGXXACR_S_CharacterData[iUnitCtr].prgExtraPalettes[nNodeIndex].szPaletteName);
                }

                ChildNode->uUnitId = iUnitCtr;
                ChildNode->uPalId = nTotalPalettesUsedInUnit++;
                nTotalPaletteCount++;

#if GGXXACR_S_DEBUG
                strMsg.Format(L"\t\tPalette: \"%s\", %u of %u\n", ChildNode->szDesc, nNodeIndex + 1, nListedChildrenCount);
                OutputDebugString(strMsg);
#endif
            }
        }
    }

    m_nTotalPaletteCount = nTotalPaletteCount;

    strMsg.Format(L"CGame_GGXXACR_S_DIR::InitDescTree: Loaded %u palettes for GGXXACR ROM\n", nTotalPaletteCount);
    OutputDebugString(strMsg);

    return NewDescTree;
}

UINT16 CGame_GGXXACR_S::GetCollectionCountForUnit(UINT16 nUnitId)
{
    // One core set per character, plus optional extras
    UINT16 nCollectionCount = 0;

    if (GGXXACR_S_CharacterData[nUnitId].ppszPaletteList != nullptr)
    {
        nCollectionCount++;
    }

    if (GGXXACR_S_CharacterData[nUnitId].prgExtraPalettes != nullptr)
    {
        nCollectionCount++;
    }

    return nCollectionCount;
}

bool CGame_GGXXACR_S::ShouldUseBasePaletteSet(UINT16 nUnitId, UINT16 nCollectionId)
{
    if ((nCollectionId == 0) && (GGXXACR_S_CharacterData[nUnitId].nPaletteListSize != 0))
    {
        return true;
    }
    else
    {
        return false;
    }
}

UINT16 CGame_GGXXACR_S::GetNodeCountForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    if (ShouldUseBasePaletteSet(nUnitId, nCollectionId))
    {
        return GGXXACR_S_CharacterData[nUnitId].nPaletteListSize;
    }
    else
    {
        return GGXXACR_S_CharacterData[nUnitId].nCountExtras;
    }
}

UINT16 CGame_GGXXACR_S::GetPaletteCountForUnit(UINT16 nUnitId)
{
    return GGXXACR_S_CharacterData[nUnitId].nPaletteListSize + GGXXACR_S_CharacterData[nUnitId].nCountExtras;
}

LPCWSTR CGame_GGXXACR_S::GetDescriptionForCollection(UINT16 nUnitId , UINT16 nCollectionId )
{
    if (ShouldUseBasePaletteSet(nUnitId, nCollectionId))
    {
        return L"Core Palettes";
    }
    else
    {
        if (GGXXACR_S_CharacterData[nUnitId].nPaletteListSize == 0)
        {
            return L"Palettes";
        }
        else
        {
            return L"Extras";
        }
    }
}
void CGame_GGXXACR_S::LoadSpecificPaletteData(UINT16 nUnitId, UINT16 nPalId)
{
    if (nPalId < GGXXACR_S_CharacterData[nUnitId].nPaletteListSize)
    {
        // GGXXACR palettes are all 0x100 long
        const int cbPaletteSizeOnDisc = 0x400;

        m_pszCurrentPaletteName = GGXXACR_S_CharacterData[nUnitId].ppszPaletteList[nPalId];
        m_nCurrentPaletteROMLocation = GGXXACR_S_CharacterData[nUnitId].nInitialLocation + (cbPaletteSizeOnDisc * nPalId) + (0x10 * nPalId);
        m_nCurrentPaletteSizeInColors = cbPaletteSizeOnDisc / m_nSizeOfColorsInBytes;
    }
    else // effects palettes
    {
        UINT16 nAdjustedPaletteId = nPalId - GGXXACR_S_CharacterData[nUnitId].nPaletteListSize;

        int cbPaletteSizeOnDisc = GGXXACR_S_CharacterData[nUnitId].prgExtraPalettes[nAdjustedPaletteId].nPaletteOffsetEnd - GGXXACR_S_CharacterData[nUnitId].prgExtraPalettes[nAdjustedPaletteId].nPaletteOffset;

        m_pszCurrentPaletteName = GGXXACR_S_CharacterData[nUnitId].prgExtraPalettes[nAdjustedPaletteId].szPaletteName;
        m_nCurrentPaletteROMLocation = GGXXACR_S_CharacterData[nUnitId].prgExtraPalettes[nAdjustedPaletteId].nPaletteOffset;
        m_nCurrentPaletteSizeInColors = cbPaletteSizeOnDisc / m_nSizeOfColorsInBytes;
    }

    // The portrait palettes don't actually use a transparency color: we'll use this check to handle this for now.
    if (GGXXACR_S_CharacterData[nUnitId].nPaletteListSize == 0)
    {
        createPalOptions.nTransparencyColorPosition = 257; 

    }
    else
    {
        createPalOptions.nTransparencyColorPosition = 0;
    }
}

BOOL CGame_GGXXACR_S::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
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
    nTargetImgId = 0;
    UINT16 nImgUnitId = INVALID_UNIT_VALUE;
    UINT16 nSrcStart = 0;
    UINT16 nSrcAmt = 1;
    UINT16 nNodeIncrement = 1;

    //Get rid of any palettes if there are any
    BasePalGroup.FlushPalAll();

    bool fShouldUseAlternateLoadLogic = false;

    if (NodeGet->uPalId < GGXXACR_S_CharacterData[NodeGet->uUnitId].nPaletteListSize)
    {
        // core palettes
        nSrcStart = 0;
        nSrcAmt = GGXXACR_S_CharacterData[NodeGet->uUnitId].nPaletteListSize;

        if (ARRAYSIZE(GGXXACRPaletteNamesShort) == GGXXACR_S_CharacterData[NodeGet->uUnitId].nPaletteListSize)
        {
            
            pButtonLabelSet = GGXXACRPaletteNamesShort;
        }
        else
        {
            pButtonLabelSet = GGXXACR_S_CharacterData[NodeGet->uUnitId].ppszPaletteList;
        }
        m_nNumberOfColorOptions = GGXXACR_S_CharacterData[NodeGet->uUnitId].nPaletteListSize;
        nImgUnitId = GGXXACR_S_CharacterData[NodeGet->uUnitId].nSpriteIndex;
    }
    else
    {
        // effects palettes
        UINT16 nPalIdInNode = NodeGet->uPalId - GGXXACR_S_CharacterData[NodeGet->uUnitId].nPaletteListSize;
        nSrcStart = NodeGet->uPalId;
        nSrcAmt = 1;
        pButtonLabelSet = DEF_NOBUTTONS;
        m_nNumberOfColorOptions = ARRAYSIZE(DEF_NOBUTTONS);
        const sGame_PaletteDataset* paletteDataSet = &GGXXACR_S_CharacterData[NodeGet->uUnitId].prgExtraPalettes[nPalIdInNode];
        nImgUnitId = paletteDataSet->indexImgToUse;
        nTargetImgId = paletteDataSet->indexOffsetToUse;

        if (paletteDataSet->pPalettePairingInfo)
        {
            if (paletteDataSet->pPalettePairingInfo->nPalettesToJoin == 3)
            {
                const INT8 nPeerPaletteDistance1 = paletteDataSet->pPalettePairingInfo->nNodeIncrementToPartner;
                const INT8 nPeerPaletteDistance2 = paletteDataSet->pPalettePairingInfo->nOverallNodeIncrementTo2ndPartner;
                const sGame_PaletteDataset* paletteDataSetToJoin1 = &GGXXACR_S_CharacterData[NodeGet->uUnitId].prgExtraPalettes[nPalIdInNode + nPeerPaletteDistance1];
                const sGame_PaletteDataset* paletteDataSetToJoin2 = &GGXXACR_S_CharacterData[NodeGet->uUnitId].prgExtraPalettes[nPalIdInNode + nPeerPaletteDistance2];
                fShouldUseAlternateLoadLogic = true;

                ClearSetImgTicket(
                    CreateImgTicket(paletteDataSet->indexImgToUse, paletteDataSet->indexOffsetToUse,
                        CreateImgTicket(paletteDataSetToJoin1->indexImgToUse, paletteDataSetToJoin1->indexOffsetToUse,
                            CreateImgTicket(paletteDataSetToJoin2->indexImgToUse, paletteDataSetToJoin2->indexOffsetToUse)
                        ))
                );

                //Set each palette
                sDescNode* JoinedNode[] = {
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
                int nXOffs = paletteDataSet->pPalettePairingInfo->nXOffs;
                int nYOffs = paletteDataSet->pPalettePairingInfo->nYOffs;
                INT8 nPeerPaletteDistance = paletteDataSet->pPalettePairingInfo->nNodeIncrementToPartner;

                const sGame_PaletteDataset* paletteDataSetToJoin = &GGXXACR_S_CharacterData[NodeGet->uUnitId].prgExtraPalettes[nPalIdInNode + nPeerPaletteDistance];

                if (paletteDataSetToJoin)
                {
                    fShouldUseAlternateLoadLogic = true;

                    ClearSetImgTicket(
                        CreateImgTicket(paletteDataSet->indexImgToUse, paletteDataSet->indexOffsetToUse,
                            CreateImgTicket(paletteDataSetToJoin->indexImgToUse, paletteDataSetToJoin->indexOffsetToUse, nullptr, nXOffs, nYOffs)
                        )
                    );

                    //Set each palette
                    sDescNode* JoinedNode[2] = {
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

BOOL CGame_GGXXACR_S::LoadFile(CFile* LoadedFile, UINT16 nUnitNumber)
{
    BOOL fSuccess = TRUE;
    CString strInfo;

    strInfo.Format(L"CGame_GGXXACR_S_DIR::LoadFile: Preparing to load data for unit number %u (character %s)\n", nUnitNumber, GGXXACR_S_CharacterData[nUnitNumber].pszCharacter);
    OutputDebugString(strInfo);

#ifdef USE_DYNAMIC_LOCATION_LOOKUP
    LONGLONG nPalettePointer = 0;

    LoadedFile->Seek(0, CFile::begin);
    LoadedFile->Read(&nPalettePointer, 0x02);
        
    UINT32 nPaletteStart = 0;

    LoadedFile->Seek(nPalettePointer + 0x0c, CFile::begin);
    LoadedFile->Read(&nPaletteStart, 0x04);

    GGXXACR_S_CharacterData[nUnitNumber].nInitialLocation = nPaletteStart + 0x90;
#endif

    strInfo.Format(L"\tCGame_GGXXACR_S_DIR::LoadFile: Loaded palettes starting at location 0x%x\n", GGXXACR_S_CharacterData[nUnitNumber].nInitialLocation);
    OutputDebugString(strInfo);

    UINT16 nPalAmt = GetPaletteCountForUnit(nUnitNumber);

    if (m_pppDataBuffer32[nUnitNumber] == nullptr)
    {
        m_pppDataBuffer32[nUnitNumber] = new UINT32 * [nPalAmt];
        memset(m_pppDataBuffer32[nUnitNumber], 0, sizeof(UINT32*) * nPalAmt);
    }

    // These are already sorted, no need to redirect
    rgUnitRedir[nUnitNumber] = nUnitNumber;

    for (UINT16 nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
    {
        LoadSpecificPaletteData(nUnitNumber, nPalCtr);

        m_pppDataBuffer32[nUnitNumber][nPalCtr] = new UINT32[m_nCurrentPaletteSizeInColors];

        LoadedFile->Seek(m_nCurrentPaletteROMLocation, CFile::begin);
        LoadedFile->Read(m_pppDataBuffer32[nUnitNumber][nPalCtr], m_nCurrentPaletteSizeInColors * m_nSizeOfColorsInBytes);

#if GGXXACR_S_DEBUG
        strInfo.Format(L"\tCGame_GGXXACR_S_DIR::LoadFile: Loaded palette '%s' from location 0x%x\n", m_pszCurrentPaletteName, m_nCurrentPaletteROMLocation);
        OutputDebugString(strInfo);
#endif
    }

    rgUnitRedir[nUnitAmt] = INVALID_UNIT_VALUE;

    return fSuccess;
}

BOOL CGame_GGXXACR_S::SaveFile(CFile* SaveFile, UINT16 nUnitId)
{
    UINT32 nTotalPalettesSaved = 0;
    UINT16 nPalAmt = GetPaletteCountForUnit(nUnitId);

    for (UINT16 nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
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

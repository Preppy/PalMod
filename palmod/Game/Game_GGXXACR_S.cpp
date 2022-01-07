#include "StdAfx.h"
#include "Game_GGXXACR_S.h"
#include "GGXXACR_S_DEF.h"
#include "..\PalMod.h"
#include <string>
#include <array>

size_t CGame_GGXXACR_S::uRuleCtr = 0;

CDescTree CGame_GGXXACR_S::MainDescTree = nullptr;

#define GGXXACR_S_DEBUG DEFAULT_GAME_DEBUG_STATE

CGame_GGXXACR_S::CGame_GGXXACR_S(UINT32 nConfirmedROMSize /* = -1 */)
{
    createPalOptions = { NO_SPECIAL_OPTIONS, WRITE_MAX, 0 };
    SetAlphaMode(AlphaMode::GameUsesVariableAlpha);
    m_fGameUsesAlphaValue = true;
    SetColorMode(ColMode::COLMODE_RGBA8887);

    InitializeStatics();

    // Don't load extras
    m_pszExtraFilename = nullptr;

    nFileAmt = nUnitAmt = m_nTotalInternalUnits = ARRAYSIZE(GGXXACR_S_CharacterData);

    InitDataBuffer();

    nGameFlag = GGXXACR_S;
    nImgGameFlag = IMGDAT_SECTION_GUILTYGEAR;
    m_prgGameImageSet = GGXX_ACR_IMGIDS_USED;

    //Set the image out display type
    DisplayType = eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT;

    // The label set is variable, so set correctly each time we load that specific unit
    pButtonLabelSet = DEF_NOBUTTONS;

    //Create the redirect buffer
    rgUnitRedir = new size_t[nUnitAmt + 1];
    memset(rgUnitRedir, 0, sizeof(size_t) * nUnitAmt);

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

sFileRule CGame_GGXXACR_S::GetRule(size_t nUnitId)
{
    sFileRule NewFileRule;

    const size_t nAdjustedUnitId = (nUnitId & RULE_COUNTER_DEMASK);
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
    size_t nTotalPaletteCount = 0;
    size_t nUnitCt = ARRAYSIZE(GGXXACR_S_CharacterData);

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
    for (size_t iUnitCtr = 0; iUnitCtr < nUnitCt; iUnitCtr++)
    {
        sDescTreeNode* UnitNode = nullptr;
        sDescTreeNode* CollectionNode = nullptr;
        sDescNode* ChildNode = nullptr;

        size_t nUnitChildCount = GetCollectionCountForUnit(iUnitCtr);

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

        size_t nTotalPalettesUsedInUnit = 0;

        //Set data for each child group ("collection")
        for (size_t iCollectionCtr = 0; iCollectionCtr < nUnitChildCount; iCollectionCtr++)
        {
            CollectionNode = &((sDescTreeNode*)UnitNode->ChildNodes)[iCollectionCtr];

            //Set each collection data
            _snwprintf_s(CollectionNode->szDesc, ARRAYSIZE(CollectionNode->szDesc), _TRUNCATE, GetDescriptionForCollection(iUnitCtr, iCollectionCtr));
            //Collection children have nodes
            size_t nListedChildrenCount = GetNodeCountForCollection(iUnitCtr, iCollectionCtr);
            CollectionNode->uChildType = DESC_NODETYPE_NODE;
            CollectionNode->uChildAmt = nListedChildrenCount;
            CollectionNode->ChildNodes = (sDescTreeNode*)new sDescNode[nListedChildrenCount];

#if GGXXACR_S_DEBUG
            strMsg.Format(L"\tCollection: \"%s\", %u of %u, %u children\n", CollectionNode->szDesc, iCollectionCtr + 1, nUnitChildCount, nListedChildrenCount);
            OutputDebugString(strMsg);
#endif

            for (size_t nNodeIndex = 0; nNodeIndex < nListedChildrenCount; nNodeIndex++)
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

size_t CGame_GGXXACR_S::GetCollectionCountForUnit(size_t nUnitId)
{
    // One core set per character, plus optional extras
    size_t nCollectionCount = 0;

    if (!GGXXACR_S_CharacterData[nUnitId].ppszPaletteList.empty())
    {
        nCollectionCount++;
    }

    if (!GGXXACR_S_CharacterData[nUnitId].prgExtraPalettes.empty())
    {
        nCollectionCount++;
    }

    return nCollectionCount;
}

bool CGame_GGXXACR_S::ShouldUseBasePaletteSet(size_t nUnitId, size_t nCollectionId)
{
    if ((nCollectionId == 0) && (!GGXXACR_S_CharacterData[nUnitId].ppszPaletteList.empty()))
    {
        return true;
    }
    else
    {
        return false;
    }
}

size_t CGame_GGXXACR_S::GetNodeCountForCollection(size_t nUnitId, size_t nCollectionId)
{
    if (ShouldUseBasePaletteSet(nUnitId, nCollectionId))
    {
        return GGXXACR_S_CharacterData[nUnitId].ppszPaletteList.size();
    }
    else
    {
        return GGXXACR_S_CharacterData[nUnitId].prgExtraPalettes.size();
    }
}

size_t CGame_GGXXACR_S::GetPaletteCountForUnit(size_t nUnitId)
{
    return GGXXACR_S_CharacterData[nUnitId].ppszPaletteList.size() + GGXXACR_S_CharacterData[nUnitId].prgExtraPalettes.size();
}

LPCWSTR CGame_GGXXACR_S::GetDescriptionForCollection(size_t nUnitId , size_t nCollectionId )
{
    if (ShouldUseBasePaletteSet(nUnitId, nCollectionId))
    {
        return L"Core Palettes";
    }
    else
    {
        if (GGXXACR_S_CharacterData[nUnitId].ppszPaletteList.empty())
        {
            return L"Palettes";
        }
        else
        {
            return L"Extras";
        }
    }
}
void CGame_GGXXACR_S::LoadSpecificPaletteData(size_t nUnitId, size_t nPalId)
{
    if (nPalId < GGXXACR_S_CharacterData[nUnitId].ppszPaletteList.size())
    {
        // GGXXACR palettes are all 0x100 long
        const int cbPaletteSizeOnDisc = 0x400;

        m_pszCurrentPaletteName = GGXXACR_S_CharacterData[nUnitId].ppszPaletteList[nPalId];
        m_nCurrentPaletteROMLocation = GGXXACR_S_CharacterData[nUnitId].nInitialLocation + (cbPaletteSizeOnDisc * nPalId) + (0x10 * nPalId);
        m_nCurrentPaletteSizeInColors = cbPaletteSizeOnDisc / m_nSizeOfColorsInBytes;
    }
    else // effects palettes
    {
        size_t nAdjustedPaletteId = nPalId - GGXXACR_S_CharacterData[nUnitId].ppszPaletteList.size();

        int cbPaletteSizeOnDisc = GGXXACR_S_CharacterData[nUnitId].prgExtraPalettes[nAdjustedPaletteId].nPaletteOffsetEnd - GGXXACR_S_CharacterData[nUnitId].prgExtraPalettes[nAdjustedPaletteId].nPaletteOffset;

        m_pszCurrentPaletteName = GGXXACR_S_CharacterData[nUnitId].prgExtraPalettes[nAdjustedPaletteId].szPaletteName;
        m_nCurrentPaletteROMLocation = GGXXACR_S_CharacterData[nUnitId].prgExtraPalettes[nAdjustedPaletteId].nPaletteOffset;
        m_nCurrentPaletteSizeInColors = cbPaletteSizeOnDisc / m_nSizeOfColorsInBytes;
    }

    // The portrait palettes don't actually use a transparency color: we'll use this check to handle this for now.
    if (GGXXACR_S_CharacterData[nUnitId].ppszPaletteList.empty())
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
    int nTargetImgId = 0;
    size_t nImgUnitId = INVALID_UNIT_VALUE;
    int nSrcStart = (int)0;
    size_t nSrcAmt = 1;
    int nNodeIncrement = 1;

    //Get rid of any palettes if there are any
    BasePalGroup.FlushPalAll();

    bool fShouldUseAlternateLoadLogic = false;

    if (NodeGet->uPalId < GGXXACR_S_CharacterData[NodeGet->uUnitId].ppszPaletteList.size())
    {
        // core palettes
        nSrcStart = 0;
        nSrcAmt = GGXXACR_S_CharacterData[NodeGet->uUnitId].ppszPaletteList.size();

        if (GGXXACRPaletteNamesShort.size() == GGXXACR_S_CharacterData[NodeGet->uUnitId].ppszPaletteList.size())
        {
            
            pButtonLabelSet = GGXXACRPaletteNamesShort;
        }
        else
        {
            pButtonLabelSet = GGXXACR_S_CharacterData[NodeGet->uUnitId].ppszPaletteList;
        }
        nImgUnitId = GGXXACR_S_CharacterData[NodeGet->uUnitId].nSpriteIndex;
    }
    else
    {
        // effects palettes
        size_t nPalIdInNode = NodeGet->uPalId - GGXXACR_S_CharacterData[NodeGet->uUnitId].ppszPaletteList.size();
        nSrcStart = NodeGet->uPalId;
        nSrcAmt = 1;
        pButtonLabelSet = DEF_NOBUTTONS;
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
                INT8 nPeerPaletteDistance = paletteDataSet->pPalettePairingInfo->nNodeIncrementToPartner;

                const sGame_PaletteDataset* paletteDataSetToJoin = &GGXXACR_S_CharacterData[NodeGet->uUnitId].prgExtraPalettes[nPalIdInNode + nPeerPaletteDistance];

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

bool CGame_GGXXACR_S::IsGGXXACRFileEncrypted(CFile* LoadedFile)
{
    bool fIsEncrypted = false;
    // check the first four bytes
    const size_t nUINT16sToRead = 2;
    std::array<uint16_t, nUINT16sToRead> prgFileStart = { 0, 0 };
    std::map<std::wstring, uint64_t> decryptedFileBytes =
    {
        { L"ab.bin", 0x20000000 },
        { L"ak.bin", 0x20000000 },
        { L"an.bin", 0x20000000 },
        { L"ax.bin", 0x20000000 },
        { L"bk.bin", 0x20000000 },
        { L"ch.bin", 0x20000000 },
        { L"dz.bin", 0x20000000 },
        { L"eab.bin", 0x20000000 },
        { L"ean.bin", 0x20000000 },
        { L"eax.bin", 0x20000000 },
        { L"ebk.bin", 0x20000000 },
        { L"ech.bin", 0x20000000 },
        { L"edz.bin", 0x20000000 },
        { L"efa.bin", 0x20000000 },
        { L"efr.bin", 0x20000000 },
        { L"ein.bin", 0x20000000 },
        { L"ejm.bin", 0x30000000 },
        { L"ejy.bin", 0x20000000 },
        { L"eky.bin", 0x10000000 },
        { L"eml.bin", 0x20000000 },
        { L"emy.bin", 0x30000000 },
        { L"epo.bin", 0x20000000 },
        { L"erk.bin", 0x20000000 },
        { L"esl.bin", 0x20000000 },
        { L"esy.bin", 0x20000000 },
        { L"ets.bin", 0x20000000 },
        { L"eve.bin", 0x30000000 },
        { L"eyy.bin", 0x20000000 },
        { L"ezp.bin", 0x20000000 },
        { L"ezt.bin", 0x20000000 },
        { L"fa.bin", 0x20000000 },
        { L"fr.bin", 0x20000000 },
        { L"in.bin", 0x20000000 },
        { L"jm.bin", 0x30000000 },
        { L"js.bin", 0x20000000 },
        { L"jy.bin", 0x20000000 },
        { L"kr.bin", 0x10000000 },
        { L"ky.bin", 0x10000000 },
        { L"ml.bin", 0x20000000 },
        { L"my.bin", 0x30000000 },
        { L"po.bin", 0x20000000 },
        { L"rk.bin", 0x20000000 },
        { L"sl.bin", 0x20000000 },
        { L"sy.bin", 0x20000000 },
        { L"ts.bin", 0x20000000 },
        { L"ve.bin", 0x30000000 },
        { L"yy.bin", 0x20000000 },
        { L"zp.bin", 0x20000000 },
        { L"zt.bin", 0x20000000 }
    };

    LoadedFile->Seek(0, CFile::begin);
    LoadedFile->Read((void*)&prgFileStart[0], nUINT16sToRead * sizeof(uint16_t));

    CString strByteWatch;
    OutputDebugString(L"\tByte sniff for this file: ");
    for (UINT16 nIndex = 0; nIndex < nUINT16sToRead; nIndex++)
    {
        strByteWatch.Format(L"0x%04x, ", prgFileStart[nIndex]);
        OutputDebugString(strByteWatch);
    }

    auto thisFile = decryptedFileBytes.find(LoadedFile->GetFileName().GetString());

    if (thisFile != decryptedFileBytes.end())
    {
        fIsEncrypted = ((((thisFile->second & 0xFF000000) >> 24) != prgFileStart[0]) ||
                          (((thisFile->second & 0xFF0000) >> 16) != prgFileStart[1]));
    }

    OutputDebugString(fIsEncrypted ? L": confirmed ENCRYPTED\n" : L": confirmed decrypted\n");
    return fIsEncrypted;
}

BOOL CGame_GGXXACR_S::LoadFile(CFile* LoadedFile, size_t nUnitNumber)
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

    if (!m_fIsFileSetEncrypted)
    {
        if (IsGGXXACRFileEncrypted(LoadedFile))
        {
            // They aren't using a decrypted file set...
            // Fail the load: warn one time
            m_fIsFileSetEncrypted = true;

            CString strWarning;
            if (strWarning.LoadString(IDS_GGXXACR_ENCRYPTED))
            {
                MessageBox(g_appHWnd, strWarning, GetHost()->GetAppName(), MB_ICONSTOP);
            }
        }
    }
    
    if (m_fIsFileSetEncrypted)
    {
        fSuccess = FALSE;
        OutputDebugString(L"\tThis fileset is encrypted: skipping.\r\n");
    }
    else
    {
        strInfo.Format(L"\tCGame_GGXXACR_S_DIR::LoadFile: Loaded palettes starting at location 0x%x\n", GGXXACR_S_CharacterData[nUnitNumber].nInitialLocation);
        OutputDebugString(strInfo);

        size_t nPalAmt = GetPaletteCountForUnit(nUnitNumber);

        if (m_pppDataBuffer32[nUnitNumber] == nullptr)
        {
            m_pppDataBuffer32[nUnitNumber] = new UINT32 * [nPalAmt];
            memset(m_pppDataBuffer32[nUnitNumber], 0, sizeof(UINT32*) * nPalAmt);
        }

        // These are already sorted, no need to redirect
        rgUnitRedir[nUnitNumber] = nUnitNumber;

        for (size_t nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
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
    }

    rgUnitRedir[nUnitAmt] = INVALID_UNIT_VALUE;

    return fSuccess;
}

BOOL CGame_GGXXACR_S::SaveFile(CFile* SaveFile, size_t nUnitId)
{
    UINT32 nTotalPalettesSaved = 0;
    size_t nPalAmt = GetPaletteCountForUnit(nUnitId);

    for (size_t nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
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

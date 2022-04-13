#include "StdAfx.h"
#include "Game_SFIII1_A.h"
#include "GameDef.h"
#include "..\ExtraFile.h"
#include "..\PalMod.h"
#include "..\regproc.h"

#define SFIII1_A_DEBUG DEFAULT_GAME_DEBUG_STATE

stExtraDef* CGame_SFIII1_A::SFIII1_A_50_EXTRA_CUSTOM = NULL;

uint32_t CGame_SFIII1_A::rgExtraCountAll_50[SFIII1_A_50_NUMUNIT + 1] = { (uint32_t)-1 };
uint32_t CGame_SFIII1_A::rgExtraCountVisibleOnly_50[SFIII1_A_50_NUMUNIT + 1] = { (uint32_t)-1 };
uint32_t CGame_SFIII1_A::rgExtraLoc_50[SFIII1_A_50_NUMUNIT + 1] = { (uint32_t)-1 };

CDescTree CGame_SFIII1_A::MainDescTree_50 = nullptr;
UINT32 CGame_SFIII1_A::m_nExpectedGameROMSize = 0x400000; // 4,194,304 bytes
UINT32 CGame_SFIII1_A::m_nConfirmedROMSize = -1;

uint32_t CGame_SFIII1_A::m_nSelectedRom = 50;
UINT32 CGame_SFIII1_A::m_nTotalPaletteCountForSFIII1_50 = 0;

void CGame_SFIII1_A::InitializeStatics()
{
    safe_delete_array(CGame_SFIII1_A::SFIII1_A_50_EXTRA_CUSTOM);

    memset(rgExtraCountAll_50, -1, sizeof(rgExtraCountAll_50));
    memset(rgExtraCountVisibleOnly_50, -1, sizeof(rgExtraCountVisibleOnly_50));
    memset(rgExtraLoc_50, -1, sizeof(rgExtraLoc_50));

    MainDescTree_50.SetRootTree(CGame_SFIII1_A::InitDescTree(50));
}

CGame_SFIII1_A::CGame_SFIII1_A(UINT32 nConfirmedROMSize, int nSF3ROMToLoad)
{
    createPalOptions = { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX };
    SetAlphaMode(AlphaMode::GameUsesFixedAlpha);
    SetColorMode(ColMode::COLMODE_RGB555_LE);

    // We need this set before we initialize so that corrupt Extras truncate correctly.
    // Otherwise the new user inadvertently corrupts their ROM.
    m_nConfirmedROMSize = nConfirmedROMSize;

    InitializeStatics();

    m_nSelectedRom = nSF3ROMToLoad;
    m_pszExtraFilename = EXTRA_FILENAME_SFIII1_50;

    //We need the proper unit amt before we init the main buffer
    m_nTotalInternalUnits = SFIII1_A_50_NUMUNIT;
    m_nExtraUnit = SFIII1_A_50_EXTRALOC;

    nUnitAmt = m_nTotalInternalUnits + (GetExtraCt(m_nExtraUnit) ? 1 : 0);

    m_nSafeCountForThisRom = GetExtraCt(m_nExtraUnit) + 221;
    m_nTotalPaletteCount = m_nTotalPaletteCountForSFIII1_50;
    m_nLowestKnownPaletteRomLocation = 0x3c4200;

    CString strInfo;
    strInfo.Format(L"CGame_SFIII1_A::CGame_SFIII1_A: Loaded SFIII1_A with %u Extras\n", GetExtraCt(m_nExtraUnit));
    OutputDebugString(strInfo);

    InitDataBuffer();

    //Set game information
    nGameFlag = SFIII1_A;
    nImgGameFlag = IMGDAT_SECTION_SF3;
    m_prgGameImageSet = SFIII1_A_IMGIDS_USED;

    nFileAmt = 1;

    //Set the image out display type
    DisplayType = eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT;
    pButtonLabelSet = DEF_BUTTONLABEL6;

    //Create the redirect buffer
    rgUnitRedir = new uint32_t[nUnitAmt + 1];
    memset(rgUnitRedir, NULL, sizeof(uint32_t) * nUnitAmt);

    //Create the file changed flag
    PrepChangeTrackingArray();
}

CGame_SFIII1_A::~CGame_SFIII1_A(void)
{
    safe_delete_array(CGame_SFIII1_A::SFIII1_A_50_EXTRA_CUSTOM);
    //Get rid of the file changed flag
    ClearDataBuffer();
    FlushChangeTrackingArray();
}

uint32_t CGame_SFIII1_A::GetExtraCt(uint32_t nUnitId, BOOL fCountVisibleOnly)
{
    return _GetExtraCount(fCountVisibleOnly ? rgExtraCountVisibleOnly_50 : rgExtraCountAll_50, SFIII1_A_50_NUMUNIT, nUnitId, SFIII1_A_50_EXTRA_CUSTOM);
}

uint32_t CGame_SFIII1_A::GetExtraLoc(uint32_t nUnitId)
{
    return _GetExtraLocation(rgExtraLoc_50, SFIII1_A_50_NUMUNIT, nUnitId, SFIII1_A_50_EXTRA_CUSTOM);
}

const sDescTreeNode* CGame_SFIII1_A::GetCurrentUnitSet()
{
    return SFIII1_A_50_UNITS;
}

uint32_t CGame_SFIII1_A::GetCurrentExtraLoc()
{
    return SFIII1_A_50_EXTRALOC;
}

CDescTree* CGame_SFIII1_A::GetMainTree()
{
    return &CGame_SFIII1_A::MainDescTree_50;
}

stExtraDef* CGame_SFIII1_A::GetCurrentExtraDef(int nDefCtr)
{
    return (stExtraDef*)&SFIII1_A_50_EXTRA_CUSTOM[nDefCtr];
}

sDescTreeNode* CGame_SFIII1_A::InitDescTree(int nROMPaletteSetToUse)
{
    m_nSelectedRom = nROMPaletteSetToUse;

    uint32_t nExtraUnitLocation = SFIII1_A_50_EXTRALOC;
    //Load extra file if we're using it
    LoadExtraFileForGame(EXTRA_FILENAME_SFIII1_50, &SFIII1_A_50_EXTRA_CUSTOM, nExtraUnitLocation, m_nConfirmedROMSize);
    bool fHaveExtras = (GetExtraCt(nExtraUnitLocation) > 0);
    UINT16 nUnitCt = SFIII1_A_50_NUMUNIT + (fHaveExtras ? 1 : 0);

    sDescTreeNode* NewDescTree = new sDescTreeNode;

    //Create the main character tree
    _snwprintf_s(NewDescTree->szDesc, ARRAYSIZE(NewDescTree->szDesc), _TRUNCATE, L"%s", g_GameFriendlyName[SFIII1_A]);
    NewDescTree->ChildNodes = new sDescTreeNode[nUnitCt];
    NewDescTree->uChildAmt = nUnitCt;
    //All units have tree children
    NewDescTree->uChildType = DESC_NODETYPE_TREE;

    m_nTotalPaletteCountForSFIII1_50 = _InitDescTree(NewDescTree,
        SFIII1_A_50_UNITS,
        SFIII1_A_50_EXTRALOC,
        SFIII1_A_50_NUMUNIT,
        rgExtraCountAll_50,
        rgExtraLoc_50,
        SFIII1_A_50_EXTRA_CUSTOM
    );

    return NewDescTree;
}

sFileRule CGame_SFIII1_A::GetRule(uint32_t nUnitId)
{
    sFileRule NewFileRule;

    _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, L"50");

    NewFileRule.uUnitId = 0;
    NewFileRule.uVerifyVar = m_nExpectedGameROMSize;

    return NewFileRule;
}

uint32_t CGame_SFIII1_A::GetCollectionCountForUnit(uint32_t nUnitId)
{
    if (nUnitId == GetCurrentExtraLoc())
    {
        return GetExtraCt(nUnitId);
    }
    else
    {
        return GetCurrentUnitSet()[nUnitId].uChildAmt;
    }
}

uint32_t CGame_SFIII1_A::GetNodeCountForCollection(uint32_t nUnitId, uint32_t nCollectionId)
{
    if (nUnitId == GetCurrentExtraLoc())
    {
        return GetExtraCt(nUnitId);
    }
    else
    {
        const sDescTreeNode* pCollectionNode = (const sDescTreeNode*)(GetCurrentUnitSet()[nUnitId].ChildNodes);
        return pCollectionNode[nCollectionId].uChildAmt;
    }
}

LPCWSTR CGame_SFIII1_A::GetDescriptionForCollection(uint32_t nUnitId, uint32_t nCollectionId)
{
    if (nUnitId == GetCurrentExtraLoc())
    {
        return L"Extra Palettes";
    }
    else
    {
        const sDescTreeNode* pCollection = (const sDescTreeNode*)GetCurrentUnitSet()[nUnitId].ChildNodes;
        return pCollection[nCollectionId].szDesc;
    }
}

uint32_t CGame_SFIII1_A::GetPaletteCountForUnit(uint32_t nUnitId)
{
    if (nUnitId == GetCurrentExtraLoc())
    {
        return GetExtraCt(nUnitId);
    }
    else
    {
        uint32_t nCompleteCount = 0;
        uint32_t nCollectionCount = GetCurrentUnitSet()[nUnitId].uChildAmt;
        const sDescTreeNode* pCurrentCollection = (const sDescTreeNode*)(GetCurrentUnitSet()[nUnitId].ChildNodes);

        for (uint32_t nCollectionIndex = 0; nCollectionIndex < nCollectionCount; nCollectionIndex++)
        {
            nCompleteCount += pCurrentCollection[nCollectionIndex].uChildAmt;
        }

#if SFIII1_A_DEBUG_EXTRA
        CString strMsg;
        strMsg.Format(L"CGame_SFIII1_A::GetPaletteCountForUnit: %u palettes for unit %u which has %u collections.\n", nCompleteCount, nUnitId, nCollectionCount);
        OutputDebugString(strMsg);
#endif

        return nCompleteCount;
    }
}

const sGame_PaletteDataset* CGame_SFIII1_A::GetPaletteSet(uint32_t nUnitId, uint32_t nCollectionId)
{
    // Don't use this for Extra palettes.
    const sDescTreeNode* pCurrentSet = (const sDescTreeNode*)GetCurrentUnitSet()[nUnitId].ChildNodes;
    return ((sGame_PaletteDataset*)(pCurrentSet[nCollectionId].ChildNodes));
}

const sGame_PaletteDataset* CGame_SFIII1_A::GetSpecificPalette(uint32_t nUnitId, uint32_t nPaletteId)
{
    // Don't use this for Extra palettes.
    uint32_t nTotalCollections = GetCollectionCountForUnit(nUnitId);
    const sGame_PaletteDataset* paletteToUse = nullptr;
    uint32_t nDistanceFromZero = nPaletteId;

    for (uint32_t nCollectionIndex = 0; nCollectionIndex < nTotalCollections; nCollectionIndex++)
    {
        const sGame_PaletteDataset* paletteSetToUse = GetPaletteSet(nUnitId, nCollectionIndex);
        uint32_t nNodeCount = GetNodeCountForCollection(nUnitId, nCollectionIndex);

        if (nDistanceFromZero < nNodeCount)
        {
            paletteToUse = &paletteSetToUse[nDistanceFromZero];
            break;
        }

        nDistanceFromZero -= nNodeCount;
    }

    return paletteToUse;
}

uint32_t CGame_SFIII1_A::GetNodeSizeFromPaletteId(uint32_t nUnitId, uint32_t nPaletteId)
{
    // Don't use this for Extra palettes.
    uint32_t nNodeSize = 0;
    uint32_t nTotalCollections = GetCollectionCountForUnit(nUnitId);
    const sGame_PaletteDataset* paletteSetToUse = nullptr;
    uint32_t nDistanceFromZero = nPaletteId;

    for (uint32_t nCollectionIndex = 0; nCollectionIndex < nTotalCollections; nCollectionIndex++)
    {
        const sGame_PaletteDataset* paletteSetToCheck = GetPaletteSet(nUnitId, nCollectionIndex);
        uint32_t nNodeCount = GetNodeCountForCollection(nUnitId, nCollectionIndex);

        if (nDistanceFromZero < nNodeCount)
        {
            nNodeSize = nNodeCount;
            break;
        }

        nDistanceFromZero -= nNodeCount;
    }

    return nNodeSize;
}

const sDescTreeNode* CGame_SFIII1_A::GetNodeFromPaletteId(uint32_t nUnitId, uint32_t nPaletteId, bool fReturnBasicNodesOnly)
{
    // Don't use this for Extra palettes.
    const sDescTreeNode* pCollectionNode = nullptr;
    uint32_t nTotalCollections = GetCollectionCountForUnit(nUnitId);
    const sGame_PaletteDataset* paletteSetToUse = nullptr;
    uint32_t nDistanceFromZero = nPaletteId;

    for (uint32_t nCollectionIndex = 0; nCollectionIndex < nTotalCollections; nCollectionIndex++)
    {
        const sGame_PaletteDataset* paletteSetToCheck = GetPaletteSet(nUnitId, nCollectionIndex);
        uint32_t nNodeCount;

        if (nUnitId == GetCurrentExtraLoc())
        {
            nNodeCount = GetExtraCt(nUnitId);

            if (nDistanceFromZero < nNodeCount)
            {
                pCollectionNode = nullptr;
                break;
            }
        }
        else
        {
            const sDescTreeNode* pCollectionNodeToCheck = (const sDescTreeNode*)(GetCurrentUnitSet()[nUnitId].ChildNodes);

            nNodeCount = pCollectionNodeToCheck[nCollectionIndex].uChildAmt;

            if (nDistanceFromZero < nNodeCount)
            {
                // We know it's within this group.  Now: is it basic?
                if (!fReturnBasicNodesOnly || (nCollectionIndex < pButtonLabelSet.size()))
                {
                    pCollectionNode = &(pCollectionNodeToCheck[nCollectionIndex]);
                }
                else
                {
                    pCollectionNode = nullptr;
                }

                break;
            }
        }

        nDistanceFromZero -= nNodeCount;
    }

    return pCollectionNode;
}

void CGame_SFIII1_A::InitDataBuffer()
{
    m_nBufferSelectedRom = m_nSelectedRom;
    m_pppDataBuffer = new UINT16 * *[nUnitAmt];
    memset(m_pppDataBuffer, NULL, sizeof(UINT16**) * nUnitAmt);
}

void CGame_SFIII1_A::ClearDataBuffer()
{
    int nCurrentROMMode = m_nSelectedRom;

    m_nSelectedRom = m_nBufferSelectedRom;

    if (m_pppDataBuffer)
    {
        for (uint32_t nUnitCtr = 0; nUnitCtr < nUnitAmt; nUnitCtr++)
        {
            if (m_pppDataBuffer[nUnitCtr])
            {
                uint32_t nPalAmt = GetPaletteCountForUnit(nUnitCtr);

                for (uint32_t nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
                {
                    safe_delete_array(m_pppDataBuffer[nUnitCtr][nPalCtr]);
                }

                safe_delete_array(m_pppDataBuffer[nUnitCtr]);
            }
        }

        safe_delete_array(m_pppDataBuffer);
    }

    m_nSelectedRom = nCurrentROMMode;
}

void CGame_SFIII1_A::LoadSpecificPaletteData(uint32_t nUnitId, uint32_t nPalId)
{
    if (nUnitId != GetCurrentExtraLoc())
    {
        int cbPaletteSizeOnDisc = 0;
        const sGame_PaletteDataset* paletteData = GetSpecificPalette(nUnitId, nPalId);

        cbPaletteSizeOnDisc = (int)max(0, (paletteData->nPaletteOffsetEnd - paletteData->nPaletteOffset));

        m_nCurrentPaletteROMLocation = paletteData->nPaletteOffset;

        m_nCurrentPaletteSizeInColors = cbPaletteSizeOnDisc / m_nSizeOfColorsInBytes;
        m_pszCurrentPaletteName = paletteData->szPaletteName;
    }
    else // SFIII1_A_EXTRALOC
    {
        // This is where we handle all the palettes added in via Extra.
        stExtraDef* pCurrDef = GetCurrentExtraDef(GetExtraLoc(nUnitId) + nPalId);

        m_nCurrentPaletteROMLocation = pCurrDef->uOffset;
        m_nCurrentPaletteSizeInColors = (pCurrDef->cbPaletteSize / m_nSizeOfColorsInBytes);
        m_pszCurrentPaletteName = pCurrDef->szDesc;
    }
}

BOOL CGame_SFIII1_A::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
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
            if ((_wcsicmp(pCurrentNode->szDesc, DEF_BUTTONLABEL6[0]) == 0) ||
                (_wcsicmp(pCurrentNode->szDesc, DEF_BUTTONLABEL6[1]) == 0) ||
                (_wcsicmp(pCurrentNode->szDesc, DEF_BUTTONLABEL6[2]) == 0) ||
                (_wcsicmp(pCurrentNode->szDesc, DEF_BUTTONLABEL6[3]) == 0) ||
                (_wcsicmp(pCurrentNode->szDesc, DEF_BUTTONLABEL6[4]) == 0) ||
                (_wcsicmp(pCurrentNode->szDesc, DEF_BUTTONLABEL6[5]) == 0))
            {
                nSrcAmt = static_cast<uint32_t>(pButtonLabelSet.size());
                nNodeIncrement = GetNodeSizeFromPaletteId(NodeGet->uUnitId, NodeGet->uPalId);

                while (nSrcStart >= nNodeIncrement)
                {
                    // The starting point is the absolute first palette for the sprite in question which is found in X-Ism 1
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

            if (paletteDataSet->pPalettePairingInfo)
            {
                if (NodeGet->uUnitId == index3SSprites_Alex)
                {
                    uint32_t nNodeCount = GetCollectionCountForUnit(NodeGet->uUnitId);
                    uint32_t nNextToLastPalette = GetPaletteCountForUnit(NodeGet->uUnitId) - 1;

                    const sGame_PaletteDataset* paletteDataSetToJoin = GetSpecificPalette(NodeGet->uUnitId, nNextToLastPalette);

                    if (paletteDataSetToJoin && (paletteDataSetToJoin->indexOffsetToUse == 0x02))
                    {
                        fShouldUseAlternateLoadLogic = true;
                        nSrcAmt = static_cast<uint32_t>(pButtonLabelSet.size());

                        ClearSetImgTicket(
                            CreateImgTicket(paletteDataSet->indexImgToUse, paletteDataSet->indexOffsetToUse,
                                CreateImgTicket(paletteDataSetToJoin->indexImgToUse, paletteDataSetToJoin->indexOffsetToUse)
                            )
                        );

                        //Set each palette
                        std::vector<sDescNode*> JoinedNode = {
                            GetMainTree()->GetDescNode(Node01, Node02, Node03, -1),
                            GetMainTree()->GetDescNode(Node01, nNodeCount - 1, 0, -1)  // The cross-chop is palette 0 in the final node
                        };

                        //Set each palette
                        CreateDefPal(JoinedNode[0], 0);
                        CreateDefPal(JoinedNode[1], 1);

                        SetSourcePal(0, NodeGet->uUnitId, nSrcStart, nSrcAmt, nNodeIncrement);
                        // This second join is of a shared palette, so our node increment is zero
                        SetSourcePal(1, NodeGet->uUnitId, nNextToLastPalette, nSrcAmt, 0);
                    }
                }
                else if (paletteDataSet->pPalettePairingInfo == &pairFullyLinkedNode)
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
        stExtraDef* pCurrDef = GetCurrentExtraDef(GetExtraLoc(NodeGet->uUnitId) + NodeGet->uPalId);

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

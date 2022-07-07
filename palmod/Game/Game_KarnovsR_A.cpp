#include "StdAfx.h"
#include "GameDef.h"
#include "Game_KarnovsR_A.h"
#include "..\RegProc.h"

stExtraDef* CGame_KarnovsR_A::KarnovsR_A_EXTRA_CUSTOM = nullptr;

CDescTree CGame_KarnovsR_A::MainDescTree = nullptr;

uint32_t CGame_KarnovsR_A::rgExtraCountAll[KarnovsR_A_NUMUNIT + 1];
uint32_t CGame_KarnovsR_A::rgExtraLoc[KarnovsR_A_NUMUNIT + 1];

uint32_t CGame_KarnovsR_A::m_nTotalPaletteCountForKarnovsR = 0;
const uint32_t CGame_KarnovsR_A::m_nExpectedGameROMSize = 0x100000;  // 4194304 bytes
uint32_t CGame_KarnovsR_A::m_nConfirmedROMSize = -1;

void CGame_KarnovsR_A::InitializeStatics()
{
    safe_delete_array(CGame_KarnovsR_A::KarnovsR_A_EXTRA_CUSTOM);

    memset(rgExtraCountAll, -1, sizeof(rgExtraCountAll));
    memset(rgExtraLoc, -1, sizeof(rgExtraLoc));

    MainDescTree.SetRootTree(CGame_KarnovsR_A::InitDescTree());
}

CGame_KarnovsR_A::CGame_KarnovsR_A(uint32_t nConfirmedROMSize)
{
    OutputDebugString(L"CGame_KarnovsR_A::CGame_KarnovsR_A: Loading ROM...\n");

    createPalOptions = { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX };
    SetAlphaMode(AlphaMode::GameDoesNotUseAlpha);
    SetColorMode(ColMode::COLMODE_RGB666_NEOGEO);

    // We need this set before we initialize so that corrupt Extras truncate correctly.
    // Otherwise the new user inadvertently corrupts their ROM.
    m_nConfirmedROMSize = nConfirmedROMSize;
    InitializeStatics();

    m_nTotalInternalUnits = KarnovsR_A_NUMUNIT;
    m_nExtraUnit = KarnovsR_A_EXTRALOC;

    m_nSafeCountForThisRom = GetExtraCt(m_nExtraUnit) + 71;
    m_pszExtraFilename = EXTRA_FILENAME_KarnovsR_A;
    m_nTotalPaletteCount = m_nTotalPaletteCountForKarnovsR;
    // This magic number is used to warn users if their Extra file is trying to write somewhere potentially unusual
    m_nLowestKnownPaletteRomLocation = 0x65420;

    nUnitAmt = m_nTotalInternalUnits + (GetExtraCt(m_nExtraUnit) ? 1 : 0);

    InitDataBuffer();

    //Set game information
    nGameFlag = KarnovsR_A;
    nImgGameFlag = IMGDAT_SECTION_KARNOVSR;
    m_prgGameImageSet = KARNOVSR_A_IMGIDS_USED;

    nFileAmt = 1;

    //Set the image out display type
    DisplayType = eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT;
    // Button labels are used for the Export Image dialog
    pButtonLabelSet = DEF_BUTTONLABEL_2_PK;

    //Create the redirect buffer
    rgUnitRedir = new uint32_t[nUnitAmt + 1];
    memset(rgUnitRedir, NULL, sizeof(uint32_t) * nUnitAmt);

    //Create the file changed flag
    PrepChangeTrackingArray();
}

CGame_KarnovsR_A::~CGame_KarnovsR_A(void)
{
    safe_delete_array(CGame_KarnovsR_A::KarnovsR_A_EXTRA_CUSTOM);
    ClearDataBuffer();
    //Get rid of the file changed flag
    FlushChangeTrackingArray();
}

CDescTree* CGame_KarnovsR_A::GetMainTree()
{
    return &CGame_KarnovsR_A::MainDescTree;
}

uint32_t CGame_KarnovsR_A::GetExtraCt(uint32_t nUnitId, BOOL fCountVisibleOnly)
{
    return _GetExtraCount(rgExtraCountAll, KarnovsR_A_NUMUNIT, nUnitId, KarnovsR_A_EXTRA_CUSTOM);
}

uint32_t CGame_KarnovsR_A::GetExtraLoc(uint32_t nUnitId)
{
    return _GetExtraLocation(rgExtraLoc, KarnovsR_A_NUMUNIT, nUnitId, KarnovsR_A_EXTRA_CUSTOM);
}

sDescTreeNode* CGame_KarnovsR_A::InitDescTree()
{
    //Load extra file if we're using it
    LoadExtraFileForGame(EXTRA_FILENAME_KarnovsR_A, &KarnovsR_A_EXTRA_CUSTOM, KarnovsR_A_EXTRALOC, m_nConfirmedROMSize);

    uint16_t nUnitCt = KarnovsR_A_NUMUNIT + (GetExtraCt(KarnovsR_A_EXTRALOC) ? 1 : 0);
    
    sDescTreeNode* NewDescTree = new sDescTreeNode;

    //Create the main character tree
    _snwprintf_s(NewDescTree->szDesc, ARRAYSIZE(NewDescTree->szDesc), _TRUNCATE, L"%s", g_GameFriendlyName[KarnovsR_A]);
    NewDescTree->ChildNodes = new sDescTreeNode[nUnitCt];
    NewDescTree->uChildAmt = nUnitCt;
    //All units have tree children
    NewDescTree->uChildType = DESC_NODETYPE_TREE;

    m_nTotalPaletteCountForKarnovsR = _InitDescTree(NewDescTree,
        KarnovsR_A_UNITS,
        KarnovsR_A_EXTRALOC,
        KarnovsR_A_NUMUNIT,
        rgExtraCountAll,
        rgExtraLoc,
        KarnovsR_A_EXTRA_CUSTOM
    );

    return NewDescTree;
}

sFileRule CGame_KarnovsR_A::GetRule(uint32_t nUnitId)
{
    sFileRule NewFileRule;

    // This value is only used for directory-based games
    _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, L"066-p1.p1");

    NewFileRule.uUnitId = 0;
    NewFileRule.uVerifyVar = m_nExpectedGameROMSize;

    return NewFileRule;
}

uint32_t CGame_KarnovsR_A::GetCollectionCountForUnit(uint32_t nUnitId)
{
    return _GetCollectionCountForUnit(KarnovsR_A_UNITS, rgExtraCountAll, KarnovsR_A_NUMUNIT, KarnovsR_A_EXTRALOC, nUnitId, KarnovsR_A_EXTRA_CUSTOM);
}

uint32_t CGame_KarnovsR_A::GetNodeCountForCollection(uint32_t nUnitId, uint32_t nCollectionId)
{
    return _GetNodeCountForCollection(KarnovsR_A_UNITS, rgExtraCountAll, KarnovsR_A_NUMUNIT, KarnovsR_A_EXTRALOC, nUnitId, nCollectionId, KarnovsR_A_EXTRA_CUSTOM);
}

LPCWSTR CGame_KarnovsR_A::GetDescriptionForCollection(uint32_t nUnitId, uint32_t nCollectionId)
{
    return _GetDescriptionForCollection(KarnovsR_A_UNITS, KarnovsR_A_EXTRALOC, nUnitId, nCollectionId);
}

uint32_t CGame_KarnovsR_A::GetPaletteCountForUnit(uint32_t nUnitId)
{
    return _GetPaletteCountForUnit(KarnovsR_A_UNITS, rgExtraCountAll, KarnovsR_A_NUMUNIT, KarnovsR_A_EXTRALOC, nUnitId, KarnovsR_A_EXTRA_CUSTOM);
}

const sGame_PaletteDataset* CGame_KarnovsR_A::GetPaletteSet(uint32_t nUnitId, uint32_t nCollectionId)
{
    return _GetPaletteSet(KarnovsR_A_UNITS, nUnitId, nCollectionId);
}

const sDescTreeNode* CGame_KarnovsR_A::GetNodeFromPaletteId(uint32_t nUnitId, uint32_t nPaletteId, bool fReturnBasicNodesOnly)
{
    return _GetNodeFromPaletteId(KarnovsR_A_UNITS, rgExtraCountAll, KarnovsR_A_NUMUNIT, KarnovsR_A_EXTRALOC, nUnitId, nPaletteId, KarnovsR_A_EXTRA_CUSTOM, fReturnBasicNodesOnly);
}

const sGame_PaletteDataset* CGame_KarnovsR_A::GetSpecificPalette(uint32_t nUnitId, uint32_t nPaletteId)
{
    return _GetSpecificPalette(KarnovsR_A_UNITS, rgExtraCountAll, KarnovsR_A_NUMUNIT, KarnovsR_A_EXTRALOC, nUnitId, nPaletteId, KarnovsR_A_EXTRA_CUSTOM);
}

void CGame_KarnovsR_A::LoadSpecificPaletteData(uint32_t nUnitId, uint32_t nPalId)
{
     if (nUnitId != m_nExtraUnit)
    {
        int cbPaletteSizeOnDisc = 0;
        const sGame_PaletteDataset* paletteData = GetSpecificPalette(nUnitId, nPalId);

        if (paletteData)
        {
            cbPaletteSizeOnDisc = (int)max(0, (paletteData->nPaletteOffsetEnd - paletteData->nPaletteOffset));

            m_nCurrentPaletteROMLocation = paletteData->nPaletteOffset;
            m_nCurrentPaletteSizeInColors = cbPaletteSizeOnDisc / m_nSizeOfColorsInBytes;
            m_pszCurrentPaletteName = paletteData->szPaletteName;
        }
        else
        {
            // A bogus palette was requested: this is unrecoverable.
            DebugBreak();
        }
    }
    else // m_nExtraUnit
    {
        // This is where we handle all the palettes added in via Extra.
        stExtraDef* pCurrDef = GetExtraDefForKarnovsR(GetExtraLoc(nUnitId) + nPalId);

        m_nCurrentPaletteROMLocation = pCurrDef->uOffset;
        m_nCurrentPaletteSizeInColors = (pCurrDef->cbPaletteSize / m_nSizeOfColorsInBytes);
        m_pszCurrentPaletteName = pCurrDef->szDesc;
    }
}

BOOL CGame_KarnovsR_A::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
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
    if (NodeGet->uUnitId != KarnovsR_A_EXTRALOC)
    {
        const sGame_PaletteDataset* paletteDataSet = GetSpecificPalette(NodeGet->uUnitId, NodeGet->uPalId);

        if (paletteDataSet)
        {
            nImgUnitId = paletteDataSet->indexImgToUse;
            nTargetImgId = paletteDataSet->indexOffsetToUse;

            const sDescTreeNode* pCurrentNode = GetNodeFromPaletteId(NodeGet->uUnitId, NodeGet->uPalId, false);

            if (pCurrentNode)
            {
                if ((_wcsicmp(pCurrentNode->szDesc, DEF_BUTTONLABEL_2_PK[0]) == 0) || (_wcsicmp(pCurrentNode->szDesc, DEF_BUTTONLABEL_2_PK[1]) == 0))
                {
                    nSrcAmt = 2;
                    nNodeIncrement = pCurrentNode->uChildAmt;

                    while (nSrcStart >= nNodeIncrement)
                    {
                        // The starting point is the absolute first palette for the sprite in question which is found in P1
                        nSrcStart -= nNodeIncrement;
                    }
                }

                if (paletteDataSet->pPalettePairingInfo)
                {
                    if (paletteDataSet->pPalettePairingInfo == &pairHandledInCode)
                    {
                        sDescTreeNode* charUnit = GetMainTree()->GetDescTree(Node01, -1);
                        const sGame_PaletteDataset* paletteDataSetToJoin = nullptr;

                        const int iPorKIndex = (_wcsicmp(pCurrentNode->szDesc, DEF_BUTTONLABEL_2_PK[0]) == 0) ? 0 : 1;
                        int iCollectionIndex = 0;

                        if ((wcscmp(charUnit->szDesc, k_krNameKey_Jean) == 0) ||
                            (wcscmp(charUnit->szDesc, k_krNameKey_Karnov) == 0) ||
                            (wcscmp(charUnit->szDesc, k_krNameKey_Matlok) == 0))
                        {
                            iCollectionIndex = 1;
                        }
                        else if ((wcscmp(charUnit->szDesc, k_krNameKey_Yungmie) == 0) || 
                                 (wcscmp(charUnit->szDesc, k_krNameKey_Zazie) == 0))
                        {
                            iCollectionIndex = 0;
                        }                        

                        int nWeakpointUnit = m_nTotalInternalUnits - 1;
                        sDescTreeNode* unitWeakpoint = GetMainTree()->GetDescTree(nWeakpointUnit, -1);

                        if (wcscmp(unitWeakpoint->szDesc, k_krNameKey_WeakpointUnit) == 0)
                        {
                            fShouldUseAlternateLoadLogic = true;
                            const int8_t nPeerPaletteDistance = 1;

                            ClearSetImgTicket(
                                CreateImgTicket(paletteDataSet->indexImgToUse, paletteDataSet->indexOffsetToUse,
                                    CreateImgTicket(paletteDataSet->indexImgToUse, 0x01) // we use an alternate sprite for this pairing
                                )
                            );

                            //Set each palette
                            std::vector<sDescNode*> JoinedNode = {
                                GetMainTree()->GetDescNode(Node01, Node02, Node03, -1),
                                GetMainTree()->GetDescNode(nWeakpointUnit, iPorKIndex, iCollectionIndex, -1)
                            };

                            //Set each palette
                            CreateDefPal(JoinedNode[0], 0);
                            CreateDefPal(JoinedNode[1], 1);

                            // distance is variable length, so don't expose multisprite export
                            nSrcAmt = 1;
                            nSrcStart = NodeGet->uPalId;

                            SetSourcePal(0, NodeGet->uUnitId, nSrcStart, nSrcAmt, nNodeIncrement);
                            SetSourcePal(1, nWeakpointUnit, (iPorKIndex * 2) + iCollectionIndex, nSrcAmt, nNodeIncrement);
                        }
                    }
                    else
                    {
                        const int8_t nPeerPaletteDistance = paletteDataSet->pPalettePairingInfo->nNodeIncrementToPartner;

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
